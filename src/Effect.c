#include <purescript.h>
#include "Effect.h"

PURS_FFI_FUNC_2(Effect_pureE, _a, _) {
	PURS_ANY_RETAIN(_a);
	return _a;
}

PURS_FFI_FUNC_3(Effect_bindE, _a, _f, _) {
	purs_any_t ret;
	purs_any_t a, f, r1, k;
	int a_has_changed, f_has_changed = 0;

	a = purs_any_unthunk(_a, &a_has_changed);
	f = purs_any_unthunk(_f, &f_has_changed);
	r1 = purs_any_app(a, purs_any_null);  /* force the first effect thunk */
	k = purs_any_app(f, r1);
	ret = purs_any_app(k, purs_any_null); /* force the next effect thunk */

	if (a_has_changed) PURS_ANY_RELEASE(a);
	if (f_has_changed) PURS_ANY_RELEASE(f);

	PURS_ANY_RELEASE(r1);
	PURS_ANY_RELEASE(k);

	return ret;
}

PURS_FFI_FUNC_2(Effect_untilE, _f, _) {
	while (1) {
		purs_any_t tmp = purs_any_app(_f, purs_any_null);
		if (purs_any_eq(tmp, purs_any_true)) {
			PURS_ANY_RELEASE(tmp);
			break;
		}
		PURS_ANY_RELEASE(tmp);
	}
	return purs_any_null;
}


PURS_FFI_FUNC_3(Effect_whileE, _f, _a, _) {
	while (1) {
		purs_any_t tmp = purs_any_app(_f, purs_any_null);
		if (purs_any_eq(tmp, purs_any_false)) {
			PURS_ANY_RELEASE(tmp);
			break;
		}
		PURS_ANY_RELEASE(tmp);
		PURS_ANY_RELEASE(purs_any_app(_a, purs_any_null));
	}
	return purs_any_null;
}

PURS_FFI_FUNC_4(Effect_forE, _lo, _hi, _f, _) {
	purs_int_t lo = purs_any_force_int(_lo);
	purs_int_t hi = purs_any_force_int(_hi);
	for (int i = lo; i < hi; i++) {
		purs_any_t tmp1, tmp2;
		tmp1 = purs_any_app(_f, purs_any_int(i));
		tmp2 = purs_any_app(tmp1, purs_any_null);
		PURS_ANY_RELEASE(tmp2);
		PURS_ANY_RELEASE(tmp1);
	}
	return purs_any_null;
}

PURS_FFI_FUNC_3(Effect_foreachE, _as, f, _) {
	int i;
	purs_any_t a, tmp1, tmp2;
	const purs_vec_t *as;
	as = purs_any_force_array(_as);
	purs_vec_foreach(as, a, i) {
		tmp1 = purs_any_app(f, a);
		tmp2 = purs_any_app(tmp1, purs_any_null);
		PURS_ANY_RELEASE(tmp2);
		PURS_ANY_RELEASE(tmp1);
	}
	PURS_RC_RELEASE(as);
	return purs_any_null;
}
