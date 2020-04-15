---
title: Funzioni dello spazio dei nomi Concurrency::fast_math
ms.date: 11/04/2016
f1_keywords:
- amp_math/Concurrency::fast_math::acos
- amp_math/Concurrency::fast_math::asin
- amp_math/Concurrency::fast_math::asinf
- amp_math/Concurrency::fast_math::atan2
- amp_math/Concurrency::fast_math::atan2f
- amp_math/Concurrency::fast_math::ceil
- amp_math/Concurrency::fast_math::ceilf
- amp_math/Concurrency::fast_math::cosf
- amp_math/Concurrency::fast_math::cosh
- amp_math/Concurrency::fast_math::exp
- amp_math/Concurrency::fast_math::exp2
- amp_math/Concurrency::fast_math::expf
- amp_math/Concurrency::fast_math::fabs
- amp_math/Concurrency::fast_math::floor
- amp_math/Concurrency::fast_math::floorf
- amp_math/Concurrency::fast_math::fmaxf
- amp_math/Concurrency::fast_math::fmin
- amp_math/Concurrency::fast_math::fmod
- amp_math/Concurrency::fast_math::fmodf
- amp_math/Concurrency::fast_math::frexpf
- amp_math/Concurrency::fast_math::isfinite
- amp_math/Concurrency::fast_math::isnan
- amp_math/Concurrency::fast_math::ldexp
- amp_math/Concurrency::fast_math::log
- amp_math/Concurrency::fast_math::log10
- amp_math/Concurrency::fast_math::log2
- amp_math/Concurrency::fast_math::log2f
- amp_math/Concurrency::fast_math::modf
- amp_math/Concurrency::fast_math::modff
- amp_math/Concurrency::fast_math::powf
- amp_math/Concurrency::fast_math::round
- amp_math/Concurrency::fast_math::rsqrt
- amp_math/Concurrency::fast_math::rsqrtf
- amp_math/Concurrency::fast_math::signbitf
- amp_math/Concurrency::fast_math::sin
- amp_math/Concurrency::fast_math::sincosf
- amp_math/Concurrency::fast_math::sinf
- amp_math/Concurrency::fast_math::sinhf
- amp_math/Concurrency::fast_math::sqrt
- amp_math/Concurrency::fast_math::tan
- amp_math/Concurrency::fast_math::tanf
- amp_math/Concurrency::fast_math::tanhf
- amp_math/Concurrency::fast_math::trunc
ms.assetid: f5763d62-795b-4de6-a7a5-c7115f158708
ms.openlocfilehash: cd0882b072cfe26cd83e63024ae6837dc962ebf9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376406"
---
# <a name="concurrencyfast_math-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency::fast_math

||||
|-|-|-|
|[Acos](#acos)|[acosf](#acosf)|[Asin](#asin)|
|[asinf](#asinf)|[Atan](#atan)|[atan2](#atan2)|
|[atan2f](#atan2f)|[atanf](#atanf)|[Ceil](#ceil)|
|[ceilf](#ceilf)|[Perché](#cos)|[cosf](#cosf)|
|[cosh](#cosh)|[coshf](#coshf)|[Exp](#exp)|
|[exp2](#exp2)|[exp2f](#exp2f)|[expf](#expf)|
|[fabs](#fabs)|[fabsf](#fabsf)|[Pavimento](#floor)|
|[floorf](#floorf)|[fmax](#fmax)|[fmaxf](#fmaxf)|
|[fmin](#fmin)|[fminf](#fminf)|[fmod](#fmod)|
|[fmodf](#fmodf)|[frexp](#frexp)|[frexpf](#frexpf)|
|[isfinite](#isfinite)|[isinf](#isinf)|[isan](#isnan)|
|[ldexp](#ldexp)|[ldexpf](#ldexpf)|[Registro](#log)|
|[log10 (informazioni in due)](#log10)|[log10f](#log10f)|[log2 (informazioni in due)](#log2)|
|[log2f](#log2f)|[logf](#logf)|[modf](#modf)|
|[modff](#modff)|[pow](#pow)|[powf](#powf)|
|[Rotondo](#round)|[roundf](#roundf)|[rsqrt (rsqrt)](#rsqrt)|
|[rsqrtf (informazioni in base al sistema in tra](#rsqrtf)|[signbit](#signbit)|[signbitf](#signbitf)|
|[Peccato](#sin)|[Sincos](#sincos)|[sincosmo](#sincosf)|
|[sinf](#sinf)|[sinh](#sinh)|[sinhf](#sinhf)|
|[Sqrt](#sqrt)|[sqrtf](#sqrtf)|[Tan](#tan)|
|[tanf](#tanf)|[tanh](#tanh)|[tanhf](#tanhf)|
|[trunc](#trunc)|[truncf](#truncf)|

## <a name="acos"></a><a name="acos"></a>Acos

Calcola l'arcocoseno dell'argomento

```cpp
inline float acos(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arccosino dell'argomento

## <a name="acosf"></a><a name="acosf"></a>acosf

Calcola l'arcocoseno dell'argomento

```cpp
inline float acosf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arccosino dell'argomento

## <a name="asin"></a><a name="asin"></a>Asin

Calcola l'arcoseno dell'argomento

```cpp
inline float asin(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore dell'arcoseno dell'argomento

## <a name="asinf"></a><a name="asinf"></a>asinf

Calcola l'arcoseno dell'argomento

```cpp
inline float asinf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore dell'arcoseno dell'argomento

## <a name="atan"></a><a name="atan"></a>Atan

Calcola l'arcotangente dell'argomento.

```cpp
inline float atan(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcotangente dell'argomento

## <a name="atan2"></a><a name="atan2"></a>atan2

Calcola l'arcotangente di _Y/_X

```cpp
inline float atan2(
    float _Y,
    float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Y*<br/>
Valore a virgola mobile

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore dell'arcotangente di _Y/_X

## <a name="atan2f"></a><a name="atan2f"></a>atan2f

Calcola l'arcotangente di _Y/_X

```cpp
inline float atan2f(
    float _Y,
    float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Y*<br/>
Valore a virgola mobile

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore dell'arcotangente di _Y/_X

## <a name="atanf"></a><a name="atanf"></a>atanf

Calcola l'arcotangente dell'argomento.

```cpp
inline float atanf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcotangente dell'argomento

## <a name="ceil"></a><a name="ceil"></a>Ceil

Calcola il limite massimo dell'argomento

```cpp
inline float ceil(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il limite massimo dell'argomento

## <a name="ceilf"></a><a name="ceilf"></a>ceilf

Calcola il limite massimo dell'argomento

```cpp
inline float ceilf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il limite massimo dell'argomento

## <a name="cosf"></a><a name="cosf"></a>cosf

Calcola il coseno dell'argomento.

```cpp
inline float cosf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno dell'argomento

## <a name="coshf"></a><a name="coshf"></a>coshf

Calcola il valore del coseno iperbolico dell'argomento

```cpp
inline float coshf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno iperbolico dell'argomento

## <a name="cos"></a><a name="cos"></a>Perché

Calcola il coseno dell'argomento.

```cpp
inline float cos(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno dell'argomento

## <a name="cosh"></a><a name="cosh"></a>Cosh

Calcola il valore del coseno iperbolico dell'argomento

```cpp
inline float cosh(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno iperbolico dell'argomento

## <a name="exp"></a><a name="exp"></a>Exp

Calcola l'esponenziale in base e dell'argomento

```cpp
inline float exp(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento

## <a name="exp2"></a><a name="exp2"></a>exp2

Calcola l'esponenziale in base 2 dell'argomento

```cpp
inline float exp2(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 2 dell'argomento.

## <a name="exp2f"></a><a name="exp2f"></a>exp2f

Calcola l'esponenziale in base 2 dell'argomento

```cpp
inline float exp2f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 2 dell'argomento.

## <a name="expf"></a><a name="expf"></a>expf

Calcola l'esponenziale in base e dell'argomento

```cpp
inline float expf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento

## <a name="fabs"></a><a name="fabs"></a>Fab

Restituisce il valore assoluto dell'argomento

```cpp
inline float fabs(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore assoluto dell'argomento

## <a name="fabsf"></a><a name="fabsf"></a>fabsf

Restituisce il valore assoluto dell'argomento

```cpp
inline float fabsf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore assoluto dell'argomento

## <a name="floor"></a><a name="floor"></a>Pavimento

Calcola il piano dell'argomento

```cpp
inline float floor(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il piano dell'argomento

## <a name="floorf"></a><a name="floorf"></a>floorf

Calcola il piano dell'argomento

```cpp
inline float floorf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il piano dell'argomento

## <a name="fmax"></a><a name="fmax"></a>Fmax

Determinare il valore numerico massimo degli argomenti

```cpp
inline float max(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

*_Y*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="fmaxf"></a><a name="fmaxf"></a>fmaxf (inquestoeil

Determinare il valore numerico massimo degli argomenti

```cpp
inline float fmaxf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="fmin"></a><a name="fmin"></a>fmin

Determinare il valore numerico minimo degli argomenti

```cpp
inline float min(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

*_Y*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="fminf"></a><a name="fminf"></a>fminf

Determinare il valore numerico minimo degli argomenti

```cpp
inline float fminf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="fmod"></a><a name="fmod"></a>Fmod

Calcola il resto a virgola mobile di _X/_Y

```cpp
inline float fmod(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il resto a virgola mobile di _X/_Y

## <a name="fmodf"></a><a name="fmodf"></a>fmodf

Calcola il resto a virgola mobile di _X/_Y.

```cpp
inline float fmodf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il resto a virgola mobile di _X/_Y

## <a name="frexp"></a><a name="frexp"></a>frexp

Ottiene la mantissa e l'esponente di _X

```cpp
inline float frexp(
    float _X,
    _Out_ int* _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Exp*<br/>
Restituisce l'esponente intero di _X in valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la _X mantissa

## <a name="frexpf"></a><a name="frexpf"></a>frexpf

Ottiene la mantissa e l'esponente di _X

```cpp
inline float frexpf(
    float _X,
    _Out_ int* _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Exp*<br/>
Restituisce l'esponente intero di _X in valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la _X mantissa

## <a name="isfinite"></a><a name="isfinite"></a>isfinite

Determina se l'argomento ha un valore finito

```cpp
inline int isfinite(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore finito

## <a name="isinf"></a><a name="isinf"></a>isinf

Determina se l'argomento è un infinito

```cpp
inline int isinf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore infinito

## <a name="isnan"></a><a name="isnan"></a>isan

Determina se l'argomento è un NaN

```cpp
inline int isnan(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore NaN

## <a name="ldexp"></a><a name="ldexp"></a>ldexp

Calcola un numero reale dalla mantissa e dall'esponente

```cpp
inline float ldexp(
    float _X,
    int _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, mentissa

*_Exp*<br/>
Esponente intero

### <a name="return-value"></a>Valore restituito

Restituisce \* _X 2-_Exp

## <a name="ldexpf"></a><a name="ldexpf"></a>ldexpf

Calcola un numero reale dalla mantissa e dall'esponente

```cpp
inline float ldexpf(
    float _X,
    int _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, mentissa

*_Exp*<br/>
Esponente intero

### <a name="return-value"></a>Valore restituito

Restituisce \* _X 2-_Exp

## <a name="log"></a><a name="log"></a>Registro

Calcola il logaritmo in base e dell'argomento

```cpp
inline float log(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e dell'argomento

## <a name="log10"></a><a name="log10"></a>log10 (informazioni in due)

Calcola il logaritmo in base 10 dell'argomento

```cpp
inline float log10(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="log10f"></a><a name="log10f"></a>log10f (informazioni in netto

Calcola il logaritmo in base 10 dell'argomento

```cpp
inline float log10f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="log2"></a><a name="log2"></a>log2 (informazioni in due)

Calcola il logaritmo in base 2 dell'argomento

```cpp
inline float log2(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 2 dell'argomento

## <a name="log2f"></a><a name="log2f"></a>log2f (registro di sistema)

Calcola il logaritmo in base 2 dell'argomento

```cpp
inline float log2f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="logf"></a><a name="logf"></a>logf (registro)

Calcola il logaritmo in base e dell'argomento

```cpp
inline float logf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e dell'argomento

## <a name="modf"></a><a name="modf"></a>modf

Divide _X in parti frazionarie e intere.

```cpp
inline float modf(
    float _X,
    float* _Ip) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Ip*<br/>
Riceve parte intera del valore

### <a name="return-value"></a>Valore restituito

Restituisce la parte frazionaria con segno di _X

## <a name="modff"></a><a name="modff"></a>modff

Divide _X in parti frazionarie e intere.

```cpp
inline float modff(
    float _X,
    float* _Ip) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Ip*<br/>
Riceve parte intera del valore

### <a name="return-value"></a>Valore restituito

Restituisce la parte frazionaria con segno di _X

## <a name="pow"></a><a name="pow"></a>Pow

Calcola _X elevato alla potenza di _Y

```cpp
inline float pow(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, base

*_Y*<br/>
Valore a virgola mobile, esponente

### <a name="return-value"></a>Valore restituito

Restituisce il valore di _X elevato alla potenza di _Y

## <a name="powf"></a><a name="powf"></a>powf (file powf)

Calcola _X elevato alla potenza di _Y

```cpp
inline float powf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, base

*_Y*<br/>
Valore a virgola mobile, esponente

### <a name="return-value"></a>Valore restituito

## <a name="round"></a><a name="round"></a>Rotondo

Arrotonda _X all'intero più vicino

```cpp
inline float round(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'intero più vicino di _X

## <a name="roundf"></a><a name="roundf"></a>roundf

Arrotonda _X all'intero più vicino

```cpp
inline float roundf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'intero più vicino di _X

## <a name="rsqrt"></a><a name="rsqrt"></a>rsqrt (rsqrt)

Restituisce il reciproco della radice quadrata dell'argomento

```cpp
inline float rsqrt(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice quadrata dell'argomento

## <a name="rsqrtf"></a><a name="rsqrtf"></a>rsqrtf (informazioni in base al sistema in tra

Restituisce il reciproco della radice quadrata dell'argomento

```cpp
inline float rsqrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice quadrata dell'argomento

## <a name="signbit"></a><a name="signbit"></a>signbit

Determina se il segno di _X è negativo

```cpp
inline int signbit(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se il segno di _X è negativo

## <a name="signbitf"></a><a name="signbitf"></a>signbitf

Determina se il segno di _X è negativo

```cpp
inline int signbitf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se il segno di _X è negativo

## <a name="sin"></a><a name="sin"></a>Peccato

Calcola il valore sine dell'argomento

```cpp
inline float sin(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore sine dell'argomento

## <a name="sinf"></a><a name="sinf"></a>sinf

Calcola il valore sine dell'argomento

```cpp
inline float sinf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore sine dell'argomento

## <a name="sincos"></a><a name="sincos"></a>Sincos

Calcola il valore sine e coseno di _X

```cpp
inline void sincos(
    float _X,
    float* _S,
    float* _C) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_S*<br/>
Restituisce il valore sine di _X

*_C*<br/>
Restituisce il valore coseno di _X

## <a name="sincosf"></a><a name="sincosf"></a>sincosmo

Calcola il valore sine e coseno di _X

```cpp
inline void sincosf(
    float _X,
    float* _S,
    float* _C) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_S*<br/>
Restituisce il valore sine di _X

*_C*<br/>
Restituisce il valore coseno di _X

## <a name="sinh"></a><a name="sinh"></a>Sinh

Calcola il valore del seno iperbolico dell'argomento

```cpp
inline float sinh(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno iperbolico dell'argomento

## <a name="sinhf"></a><a name="sinhf"></a>sinhf

Calcola il valore del seno iperbolico dell'argomento

```cpp
inline float sinhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno iperbolico dell'argomento

## <a name="sqrt"></a><a name="sqrt"></a>Sqrt

Calcola la radice squre dell'argomento

```cpp
inline float sqrt(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice squre dell'argomento

## <a name="sqrtf"></a><a name="sqrtf"></a>sqrtf (informazioni in base al testo in cui

Calcola la radice squre dell'argomento

```cpp
inline float sqrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice squre dell'argomento

## <a name="tan"></a><a name="tan"></a>Tan

Calcola il valore tangente dell'argomento

```cpp
inline float tan(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore tangente dell'argomento

## <a name="tanf"></a><a name="tanf"></a>tanf

Calcola il valore tangente dell'argomento

```cpp
inline float tanf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore tangente dell'argomento

## <a name="tanh"></a><a name="tanh"></a>tanh

Calcola il valore della tangente iperbolica dell'argomento

```cpp
inline float tanh(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della tangente iperbolica dell'argomento

## <a name="tanhf"></a><a name="tanhf"></a>tanhf

Calcola il valore della tangente iperbolica dell'argomento

```cpp
inline float tanhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della tangente iperbolica dell'argomento

## <a name="trunc"></a><a name="trunc"></a>trunc

Tronca l'argomento al componente integer

```cpp
inline float trunc(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il componente intero dell'argomento

## <a name="truncf"></a><a name="truncf"></a>truncf

Tronca l'argomento al componente integer

```cpp
inline float truncf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il componente intero dell'argomento

## <a name="requirements"></a>Requisiti

**Intestazione:** spazio **dei nomi** amp_math.h: Concurrency::fast_math

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)
