#include <purescript.h>
#include "Effect.h"

int Effect_error_tag = 0;

PURS_FFI_FUNC_2(Effect_pureE, a, _, {
	return a;
})

int Effect_is_error (const purs_any_t * x) {
	if (x != NULL && (*purs_any_get_tag_maybe(x)) == PURS_ANY_TAG_FOREIGN) {
		const purs_foreign_t * k = purs_any_get_foreign(x);
		if (k->tag == &Effect_error_tag) {
			return 1;
		}
	}
	return 0;
}

PURS_FFI_FUNC_3(Effect_bindE, _a, _f, _, {
	const purs_any_t * a = purs_any_unthunk(_a);
	const purs_any_t * f = purs_any_unthunk(_f);
	const purs_any_t * r1 = purs_any_app(a, NULL);

	/* handle potential exception (experimental feature) */
	if (Effect_is_error(r1)) {
		return r1;
	} else {
		const purs_any_t * k = purs_any_app(f, r1);
		return purs_any_app(k, NULL);
	}
})
