#include <purescript.h>

/*
PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn1, fn, {
	return PURS_LAMBDA(x, {
		return purs_any_app(purs_any_app(fn, x), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn2, fn, {
	return PURS_LAMBDA_UNCURRIED_2(a, b, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), NULL);
	});
});


PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn3, fn, {
	return PURS_LAMBDA_UNCURRIED_3(a, b, c, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn4, fn, {
	return PURS_LAMBDA_UNCURRIED_4(a, b, c, d, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), NULL);
	});
});


PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn5, fn, {
	return PURS_LAMBDA_UNCURRIED_5(a, b, c, d, e, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), e), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn6, fn, {
	return PURS_LAMBDA_UNCURRIED_6(a, b, c, d, e, f, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), e), f), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn7, fn, {
	return PURS_LAMBDA_UNCURRIED_7(a, b, c, d, e, f, g, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), e), f), g), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn8, fn, {
	return PURS_LAMBDA_UNCURRIED_8(a, b, c, d, e, f, g, h, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), e), f), g), h), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn9, fn, {
	return PURS_LAMBDA_UNCURRIED_9(a, b, c, d, e, f, g, h, i, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), e), f), g), h), i), NULL);
	});
});

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn10, fn, {
	return PURS_LAMBDA_UNCURRIED_10(a, b, c, d, e, f, g, h, i, j, {
		return purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(
			purs_any_app(fn, a), b), c), d), e), f), g), h), i), j), NULL);
	});
});

PURS_FFI_FUNC_3(Effect_Uncurried_runEffectFn1, fn, a, _, {
	return purs_any_app(fn, a);
});

PURS_FFI_FUNC_4(Effect_Uncurried_runEffectFn2, fn, a, b, _, {
	return purs_any_app(fn, a, b);
});

PURS_FFI_FUNC_5(Effect_Uncurried_runEffectFn3, fn, a, b, c, _, {
	return purs_any_app(fn, a, b, c);
});

PURS_FFI_FUNC_6(Effect_Uncurried_runEffectFn4, fn, a, b, c, d, _, {
	return purs_any_app(fn, a, b, c, d);
});

PURS_FFI_FUNC_7(Effect_Uncurried_runEffectFn5, fn, a, b, c, d, e, _, {
	return purs_any_app(fn, a, b, c, d, e);
});

PURS_FFI_FUNC_8(Effect_Uncurried_runEffectFn6, fn, a, b, c, d, e, f, _, {
	return purs_any_app(fn, a, b, c, d, e, f);
});

PURS_FFI_FUNC_9(Effect_Uncurried_runEffectFn7, fn, a, b, c, d, e, f, g, _, {
	return purs_any_app(fn, a, b, c, d, e, f, g);
});

PURS_FFI_FUNC_10(Effect_Uncurried_runEffectFn8, fn, a, b, c, d, e, f, g, h, _, {
	return purs_any_app(fn, a, b, c, d, e, f, g, h);
});

PURS_FFI_FUNC_11(Effect_Uncurried_runEffectFn9, fn, a, b, c, d, e, f, g, h, i, _, {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i);
});

PURS_FFI_FUNC_12(Effect_Uncurried_runEffectFn10, fn, a, b, c, d, e, f, g, h, i, j, _, {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i, j);
});
*/
