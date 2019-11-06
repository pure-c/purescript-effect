#ifndef Effect_H
#define Effect_H

#include <purescript.h>

PURS_FFI_EXPORT(Effect_pureE);
PURS_FFI_EXPORT(Effect_bindE);
PURS_FFI_EXPORT(Effect_untilE);
PURS_FFI_EXPORT(Effect_whileE);
PURS_FFI_EXPORT(Effect_forE);
PURS_FFI_EXPORT(Effect_foreachE);

#define EFFECT_FUNC(NAME, BODY) \
	PURS_FFI_FUNC_1(NAME, _, BODY)

#define EFFECT_FUNC_1(NAME, A1, BODY)\
	PURS_FFI_FUNC_2(NAME, A1, _, BODY)

#define EFFECT_FUNC_2(NAME, A1, A2, BODY)\
	PURS_FFI_FUNC_3(NAME, A1, A2, _, BODY)

#endif // Effect_H
