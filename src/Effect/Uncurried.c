#include <purescript.h>

const ANY * _effect_fun_1 (const void * ctx, const ANY * a, va_list _) {
	const ANY * fn = (const ANY *) ctx;
	return purs_any_app(
		purs_any_app(fn, a), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn1, fn, {
	return purs_any_cont_new(fn, _effect_fun_1);
});

const ANY * _effect_fun_2 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn2, fn, {
	return purs_any_cont_new(fn, _effect_fun_2);
});

const ANY * _effect_fun_3 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn3, fn, {
	return purs_any_cont_new(fn, _effect_fun_3);
});

const ANY * _effect_fun_4 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn4, fn, {
	return purs_any_cont_new(fn, _effect_fun_4);
});

const ANY * _effect_fun_5 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn5, fn, {
	return purs_any_cont_new(fn, _effect_fun_5);
});

const ANY * _effect_fun_6 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn6, fn, {
	return purs_any_cont_new(fn, _effect_fun_6);
});

const ANY * _effect_fun_7 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), g), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn7, fn, {
	return purs_any_cont_new(fn, _effect_fun_7);
});

const ANY * _effect_fun_8 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	const ANY * h = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), g), h), NULL);
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn8, fn, {
	return purs_any_cont_new(fn, _effect_fun_8);
});

const ANY * _effect_fun_9 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	const ANY * h = va_arg(args, const ANY *);
	const ANY * i = va_arg(args, const ANY *);
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
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn9, fn, {
	return purs_any_cont_new(fn, _effect_fun_9);
});

const ANY * _effect_fun_10 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	const ANY * h = va_arg(args, const ANY *);
	const ANY * i = va_arg(args, const ANY *);
	const ANY * j = va_arg(args, const ANY *);
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
}

PURS_FFI_FUNC_1(Effect_Uncurried_mkEffectFn10, fn, {
	return purs_any_cont_new(fn, _effect_fun_10);
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
