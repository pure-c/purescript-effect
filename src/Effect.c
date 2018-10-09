#include <purescript.h>
#include "Effect.h"

int Effect_error_tag = 0;

PURS_FFI_FUNC_2(Effect_pureE, a, _, {
	return a;
});

int Effect_is_error (const purs_any_t * x) {
	if (x != NULL && purs_any_get_tag(x) == PURS_ANY_TAG_FOREIGN) {
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
});

PURS_FFI_FUNC_2(Effect_untilE, f, _, {
	while (purs_any_not(purs_any_app(f, NULL)));
	return NULL;
});

PURS_FFI_FUNC_3(Effect_whileE, f, a, _, {
	while (purs_any_app(f, NULL)) {
		purs_any_app(a, NULL);
	}
	return NULL;
});

PURS_FFI_FUNC_4(Effect_forE, _lo, _hi, f, _, {
	int lo = purs_any_get_int(_lo);
	int hi = purs_any_get_int(_hi);
	for (int i = lo; i < hi; i++) {
		purs_any_app(purs_any_app(f, purs_any_int_new(i)), NULL);
	}
	return NULL;
});

PURS_FFI_FUNC_3(Effect_foreachE, _as, f, _, {
	const purs_vec_t * as = purs_any_get_array(_as);
	int i = 0;
	const purs_any_t * tmp;
	purs_vec_foreach(as, tmp, i) {
		purs_any_app(purs_any_app(f, tmp), NULL);
	}
	return NULL;
});
