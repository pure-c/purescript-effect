#include <purescript.h>

PURS_FFI_FUNC_1(Effect_Unsafe_unsafePerformEffect, f, {
	return purs_any_app(f, NULL);
});
