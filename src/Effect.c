#include "runtime/purescript.h"

static int _magic = 0x1;

PURS_FFI_FUNC_1(Effect_error, msg, {
	return PURS_ANY_FOREIGN_NEW(&_magic, NULL);
})

PURS_FFI_FUNC_2(Effect_pureE, a, _, {
	return a;
})

PURS_FFI_FUNC_3(Effect_bindE, _a, _f, _, {
	const purs_any_t * a = purs_any_unthunk(_a);
	const purs_any_t * f = purs_any_unthunk(_f);
	const purs_any_t * r1 = purs_any_app(a, NULL);

	/* handle potential exception (experimental feature) */
	if (r1 != NULL && (*purs_any_get_tag_maybe(r1)) == PURS_ANY_TAG_FOREIGN) {
		const purs_foreign_t * r1f = purs_any_get_foreign(r1);
		if (r1f->tag == &_magic) {
			return r1;
		}
	}

	const purs_any_t * k = purs_any_app(f, r1);

	return purs_any_app(k, NULL);
})
