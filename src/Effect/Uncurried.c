#include <purescript.h>

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
