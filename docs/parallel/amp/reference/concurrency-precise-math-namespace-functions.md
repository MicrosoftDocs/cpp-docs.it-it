---
title: Funzioni dello spazio dei nomi Concurrency::precise_math
ms.date: 11/04/2016
f1_keywords:
- amp_math/Concurrency::precise_math::acos
- amp_math/Concurrency::precise_math::acosh
- amp_math/Concurrency::precise_math::acoshf
- amp_math/Concurrency::precise_math::asinf
- amp_math/Concurrency::precise_math::asinh
- amp_math/Concurrency::precise_math::atan
- amp_math/Concurrency::precise_math::atan2
- amp_math/Concurrency::precise_math::atanf
- amp_math/Concurrency::precise_math::atanh
- amp_math/Concurrency::precise_math::cbrt
- amp_math/Concurrency::precise_math::cbrtf
- amp_math/Concurrency::precise_math::ceilf
- amp_math/Concurrency::precise_math::copysign
- amp_math/Concurrency::precise_math::cos
- amp_math/Concurrency::precise_math::cosf
- amp_math/Concurrency::precise_math::coshf
- amp_math/Concurrency::precise_math::cospi
- amp_math/Concurrency::precise_math::erf
- amp_math/Concurrency::precise_math::erfc
- amp_math/Concurrency::precise_math::erfcinv
- amp_math/Concurrency::precise_math::erfcinvf
- amp_math/Concurrency::precise_math::erfinv
- amp_math/Concurrency::precise_math::erfinvf
- amp_math/Concurrency::precise_math::exp10
- amp_math/Concurrency::precise_math::exp10f
- amp_math/Concurrency::precise_math::exp2f
- amp_math/Concurrency::precise_math::expf
- amp_math/Concurrency::precise_math::expm1f
- amp_math/Concurrency::precise_math::fabs
- amp_math/Concurrency::precise_math::floor
- amp_math/Concurrency::precise_math::fdim
- amp_math/Concurrency::precise_math::floorf
- amp_math/Concurrency::precise_math::fmaf
- amp_math/Concurrency::precise_math::fmaxf
- amp_math/Concurrency::precise_math::fmin
- amp_math/Concurrency::precise_math::fmod
- amp_math/Concurrency::precise_math::fmodf
- amp_math/Concurrency::precise_math::frexp
- amp_math/Concurrency::precise_math::frexpf
- amp_math/Concurrency::precise_math::hypotf
- amp_math/Concurrency::precise_math::ilogb
- amp_math/Concurrency::precise_math::isfinite
- amp_math/Concurrency::precise_math::isinf
- amp_math/Concurrency::precise_math::isnormal
- amp_math/Concurrency::precise_math::ldexp
- amp_math/Concurrency::precise_math::lgamma
- amp_math/Concurrency::precise_math::lgammaf
- amp_math/Concurrency::precise_math::log10
- amp_math/Concurrency::precise_math::log10f
- amp_math/Concurrency::precise_math::log1pf
- amp_math/Concurrency::precise_math::log2
- amp_math/Concurrency::precise_math::logb
- amp_math/Concurrency::precise_math::logbf
- amp_math/Concurrency::precise_math::modf
- amp_math/Concurrency::precise_math::modff
- amp_math/Concurrency::precise_math::nanf
- amp_math/Concurrency::precise_math::nearbyint
- amp_math/Concurrency::precise_math::nextafter
- amp_math/Concurrency::precise_math::nextafterf
- amp_math/Concurrency::precise_math::phif
- amp_math/Concurrency::precise_math::pow
- amp_math/Concurrency::precise_math::probit
- amp_math/Concurrency::precise_math::probitf
- amp_math/Concurrency::precise_math::rcbrtf
- amp_math/Concurrency::precise_math::remainder
- amp_math/Concurrency::precise_math::remquo
- amp_math/Concurrency::precise_math::remquof
- amp_math/Concurrency::precise_math::roundf
- amp_math/Concurrency::precise_math::rsqrt
- amp_math/Concurrency::precise_math::scalb
- amp_math/Concurrency::precise_math::scalbf
- amp_math/Concurrency::precise_math::scalbnf
- amp_math/Concurrency::precise_math::signbit
- amp_math/Concurrency::precise_math::sin
- amp_math/Concurrency::precise_math::sincos
- amp_math/Concurrency::precise_math::sinf
- amp_math/Concurrency::precise_math::sinh
- amp_math/Concurrency::precise_math::sinpi
- amp_math/Concurrency::precise_math::sinpif
- amp_math/Concurrency::precise_math::sqrtf
- amp_math/Concurrency::precise_math::tan
- amp_math/Concurrency::precise_math::tanh
- amp_math/Concurrency::precise_math::tanhf
- amp_math/Concurrency::precise_math::tanpif
- amp_math/Concurrency::precise_math::tgamma
- amp_math/Concurrency::precise_math::trunc
- amp_math/Concurrency::precise_math::truncf
ms.assetid: fae53ab4-d1c5-45bb-a6a0-a74258e9aea3
ms.openlocfilehash: 53ebaf8d9cc1bca53b1fe51464668d6df8e08424
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126945"
---
# <a name="concurrencyprecise_math-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency::precise_math

||||
|-|-|-|
|[acos](#acos)|[acosf](#acosf)|[acosh](#acosh)|
|[acoshf](#acoshf)|[asin](#asin)|[asinf](#asinf)|
|[asinh](#asinh)|[asinhf](#asinhf)|[atan](#atan)|
|[atan2](#atan2)|[atan2f](#atan2f)|[atanf](#atanf)|
|[atanh](#atanh)|[atanhf](#atanhf)|[cbrt](#cbrt)|
|[cbrtf](#cbrtf)|[ceil](#ceil)|[ceilf](#ceilf)|
|[copysign](#copysign)|[copysignf](#copysignf)|[cos](#cos)|
|[cosf](#cosf)|[cosh](#cosh)|[coshf](#coshf)|
|[Cospi](#cospi)|[cospif](#cospif)|[erf](#erf)|
|[erfc](#erfc)|[erfcf](#erfcf)|[erfcinv](#erfcinv)|
|[erfcinvf](#erfcinvf)|[erff](#erff)|[erfinv](#erfinv)|
|[erfinvf](#erfinvf)|[exp](#exp)|[EXP10](#exp10)|
|[exp10f](#exp10f)|[exp2](#exp2)|[exp2f](#exp2f)|
|[expf](#expf)|[expm1](#expm1)|[expm1f](#expm1f)|
|[fabs](#fabs)|[fabsf](#fabsf)|[floor](#floor)|
|[fdim](#fdim)|[fdimf](#fdimf)||
|[floorf](#floorf)|[fma](#fma)|[fmaf](#fmaf)|
[fmax](#fmax)|[fmaxf](#fmaxf)||
|[fmin](#fmin)|[fminf](#fminf)|[fmod](#fmod)|
|[fmodf](#fmodf)|[fpclassify](#fpclassify)|[frexp](#frexp)|
|[frexpf](#frexpf)|[hypot](#hypot)|[hypotf](#hypotf)|
|[ilogb](#ilogb)|[ilogbf](#ilogbf)|[isFinite](#isfinite)|
|[isinf](#isinf)|[isnan](#isnan)|[isnormal](#isnormal)|
|[ldexp](#ldexp)|[ldexpf](#ldexpf)|[lgamma](#lgamma)|
|[lgammaf](#lgammaf)|[log](#log)|[log10](#log10)|
|[log10f](#log10f)|[log1p](#log1p)|[log1pf](#log1pf)|
|[log2](#log2)|[log2f](#log2f)|[logb](#logb)|
|[logbf](#logbf)|[logf](#logf)|[modf](#modf)|
|[modff](#modff)|[nan](#nan)|[nanf](#nanf)|
|[nearbyint](#nearbyint)|[nearbyintf](#nearbyintf)|[nextafter](#nextafter)|
|[nextafterf](#nextafterf)|[Phi](#phi)|[phif](#phif)|
|[pow](#pow)|[powf](#powf)|[probit](#probit)|
|[probitf](#probitf)|[rcbrt](#rcbrt)|[rcbrtf](#rcbrtf)|
|[remainder](#remainder)|[remainderf](#remainderf)|[remquo](#remquo)|
|[remquof](#remquof)|[round](#round)|[roundf](#roundf)|
|[rsqrt](#rsqrt)|[rsqrtf](#rsqrtf)|[scalb](#scalb)|
|[scalbf](#scalbf)|[scalbn](#scalbn)|[scalbnf](#scalbnf)|
|[signbit](#signbit)|[signbitf](#signbitf)|[sin](#sin)|
|[SinCos](#sincos)|[sincosf](#sincosf)|[sinf](#sinf)|
|[sinh](#sinh)|[sinhf](#sinhf)|[sinpi](#sinpi)|
|[sinpif](#sinpif)|[sqrt](#sqrt)|[sqrtf](#sqrtf)|
|[tan](#tan)|[tanf](#tanf)|[tanh](#tanh)|
|[tanhf](#tanhf)|[tanpi](#tanpi)|[tanpif](#tanpif)|
|[tgamma](#tgamma)|[tgammaf](#tgammaf)|[trunc](#trunc)|
|[truncf](#truncf)|

## <a name="acos"></a>  acos

Calcola l'arcoseno dell'argomento

```cpp
inline float acos(float _X) restrict(amp);

inline double acos(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcoseno dell'argomento.

## <a name="acosf"></a>acosf

Calcola l'arcoseno dell'argomento

```cpp
inline float acosf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcoseno dell'argomento.

## <a name="acosh"></a>acosh

Calcola il coseno iperbolico inverso dell'argomento

```cpp
inline float acosh(float _X) restrict(amp);

inline double acosh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno iperbolico inverso dell'argomento.

## <a name="acoshf"></a>acoshf

Calcola il coseno iperbolico inverso dell'argomento

```cpp
inline float acoshf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno iperbolico inverso dell'argomento.

## <a name="asin"></a>  asin

Calcola l'arcoseno dell'argomento

```cpp
inline float asin(float _X) restrict(amp);

inline double asin(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcoseno dell'argomento.

## <a name="asinf"></a>asinf

Calcola l'arcoseno dell'argomento

```cpp
inline float asinf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcoseno dell'argomento.

## <a name="asinh"></a>asinh

Calcola il seno iperbolico inverso dell'argomento

```cpp
inline float asinh(float _X) restrict(amp);

inline double asinh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno iperbolico inverso dell'argomento.

## <a name="asinhf"></a>asinhf

Calcola il seno iperbolico inverso dell'argomento

```cpp
inline float asinhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno iperbolico inverso dell'argomento.

## <a name="atan"></a>  atan

Calcola l'arcotangente dell'argomento.

```cpp
inline float atan(float _X) restrict(amp);

inline double atan(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcotangente dell'argomento.

## <a name="atan2"></a>  atan2

Calcola il arcotangente di _Y/_X

```cpp
inline float atan2(
    float _Y,
    float _X) restrict(amp);

inline double atan2(
    double _Y,
    double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Y*<br/>
Valore a virgola mobile

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcotangente di _Y/_X

## <a name="atan2f"></a>atan2f

Calcola il arcotangente di _Y/_X

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

Restituisce il valore arcotangente di _Y/_X

## <a name="atanf"></a>atanf

Calcola l'arcotangente dell'argomento.

```cpp
inline float atanf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore arcotangente dell'argomento.

## <a name="atanh"></a>atanh

Calcola la tangente iperbolica inversa dell'argomento

```cpp
inline float atanh(float _X) restrict(amp);

inline double atanh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della tangente iperbolica inversa dell'argomento.

## <a name="atanhf"></a>atanhf

Calcola la tangente iperbolica inversa dell'argomento

```cpp
inline float atanhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della tangente iperbolica inversa dell'argomento.

## <a name="cbrt"></a>cbrt

Calcola la radice reale del cubo dell'argomento

```cpp
inline float cbrt(float _X) restrict(amp);

inline double cbrt(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice reale del cubo dell'argomento.

## <a name="cbrtf"></a>cbrtf

Calcola la radice reale del cubo dell'argomento

```cpp
inline float cbrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice reale del cubo dell'argomento.

## <a name="ceil"></a>ceil

Calcola il limite massimo dell'argomento

```cpp
inline float ceil(float _X) restrict(amp);

inline double ceil(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il limite dell'argomento

## <a name="ceilf"></a>ceilf

Calcola il limite massimo dell'argomento

```cpp
inline float ceilf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il limite dell'argomento

## <a name="copysign"></a>copysign

Produce un valore con la grandezza di _X e il segno di _Y

```cpp
inline float copysign(
    float _X,
    float _Y) restrict(amp);

inline double copysign(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore con la grandezza di _X e il segno di _Y

## <a name="copysignf"></a>copysignf

Produce un valore con la grandezza di _X e il segno di _Y

```cpp
inline float copysignf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore con la grandezza di _X e il segno di _Y

## <a name="cos"></a>  cos

Calcola il coseno dell'argomento.

```cpp
inline float cos(float _X) restrict(amp);

inline double cos(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno dell'argomento.

## <a name="cosf"></a>cosf

Calcola il coseno dell'argomento.

```cpp
inline float cosf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno dell'argomento.

## <a name="cosh"></a>  cosh

Calcola il valore del coseno iperbolico dell'argomento

```cpp
inline float cosh(float _X) restrict(amp);

inline double cosh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno iperbolico dell'argomento.

## <a name="coshf"></a>coshf

Calcola il valore del coseno iperbolico dell'argomento

```cpp
inline float coshf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno iperbolico dell'argomento.

## <a name="cospi"></a>Cospi

Calcola il valore del coseno di pi \* _X

```cpp
inline float cospi(float _X) restrict(amp);

inline double cospi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno di pi \* _X

## <a name="cospif"></a>cospif

Calcola il valore del coseno di pi \* _X

```cpp
inline float cospif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del coseno di pi \* _X

## <a name="erf"></a>ERF

Calcola la funzione di errore di _X

```cpp
inline float erf(float _X) restrict(amp);

inline double erf(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore di _X

## <a name="erfc"></a>erfc

Calcola la funzione di errore complementare di _X

```cpp
inline float erfc(float _X) restrict(amp);

inline double erfc(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore complementare di _X

## <a name="erfcf"></a>erfcf

Calcola la funzione di errore complementare di _X

```cpp
inline float erfcf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore complementare di _X

## <a name="erfcinv"></a>erfcinv

Calcola la funzione di errore complementare inversa di _X

```cpp
inline float erfcinv(float _X) restrict(amp);

inline double erfcinv(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore complementare inversa di _X

## <a name="erfcinvf"></a>erfcinvf

Calcola la funzione di errore complementare inversa di _X

```cpp
inline float erfcinvf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore complementare inversa di _X

## <a name="erff"></a>erff

Calcola la funzione di errore di _X

```cpp
inline float erff(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore di _X

## <a name="erfinv"></a>erfinv

Calcola la funzione di errore inversa di _X

```cpp
inline float erfinv(float _X) restrict(amp);

inline double erfinv(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore inversa di _X

## <a name="erfinvf"></a>erfinvf

Calcola la funzione di errore inversa di _X

```cpp
inline float erfinvf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore inversa di _X

## <a name="exp10"></a>EXP10

Calcola l'esponenziale in base 10 dell'argomento

```cpp
inline float exp10(float _X) restrict(amp);

inline double exp10(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 10 dell'argomento

## <a name="exp10f"></a>exp10f

Calcola l'esponenziale in base 10 dell'argomento

```cpp
inline float exp10f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 10 dell'argomento

## <a name="expm1"></a>expm1

Calcola l'esponenziale in base e dell'argomento, meno 1

```cpp
inline float expm1(float exponent) restrict(amp);

inline double expm1(double exponent) restrict(amp);
```

### <a name="parameters"></a>Parametri

*esponente*<br/>
Il termine esponenziale *n* dell'espressione matematica `e`<sup>n</sup>, dove `e` è la base del logaritmo naturale.

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento, meno 1

## <a name="expm1f"></a>expm1f

Calcola l'esponenziale in base e dell'argomento, meno 1

```cpp
inline float expm1f(float exponent) restrict(amp);
```

### <a name="parameters"></a>Parametri

*esponente*<br/>
Il termine esponenziale *n* dell'espressione matematica `e`<sup>n</sup>, dove `e` è la base del logaritmo naturale.

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento, meno 1

## <a name="exp"></a>  exp

Calcola l'esponenziale in base e dell'argomento

```cpp
inline float exp(float _X) restrict(amp);

inline double exp(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento

## <a name="expf"></a>expf

Calcola l'esponenziale in base e dell'argomento

```cpp
inline float expf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento

## <a name="exp2"></a>exp2

Calcola l'esponenziale in base 2 dell'argomento

```cpp
inline float exp2(float _X) restrict(amp);

inline double exp2(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 2 dell'argomento.

## <a name="exp2f"></a>exp2f

Calcola l'esponenziale in base 2 dell'argomento

```cpp
inline float exp2f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 2 dell'argomento.

## <a name="fabs"></a>Fabs

Restituisce il valore assoluto dell'argomento.

```cpp
inline float fabs(float _X) restrict(amp);

inline double fabs(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore assoluto dell'argomento.

## <a name="fabsf"></a>fabsf

Restituisce il valore assoluto dell'argomento.

```cpp
inline float fabsf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore assoluto dell'argomento.

## <a name="fdim"></a>fdim

Calcola la differenza positiva tra gli argomenti.

```cpp
inline float fdim(
   float _X,
   float _Y
) restrict(amp);
inline double fdim(
   double _X,
   double _Y
) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile *_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Differenza tra _X e _Y se _X è maggiore di _Y; in caso contrario, + 0.

## <a name="fdimf"></a>fdimf

Calcola la differenza positiva tra gli argomenti.

```cpp
inline float fdimf(
   float _X,
   float _Y
) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile *_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Differenza tra _X e _Y se _X è maggiore di _Y; in caso contrario, + 0.

## <a name="floor"></a>Floor

Calcola il piano dell'argomento

```cpp
inline float floor(float _X) restrict(amp);

inline double floor(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il piano dell'argomento.

## <a name="floorf"></a>floorf

Calcola il piano dell'argomento

```cpp
inline float floorf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il piano dell'argomento.

## <a name="a-namefma-fma"></a><a name="fma"> FMA

Calcola il prodotto del primo e del secondo argomento specificati, quindi aggiunge il terzo argomento specificato al risultato; l'intero calcolo viene eseguito come singola operazione.

```cpp
inline float fma(
   float _X,
   float _Y,
   float _Z
) restrict(amp);

inline double fma(
   double _X,
   double _Y,
   double _Z
) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento a virgola mobile.
*_Y*<br/>
Secondo argomento a virgola mobile.
*_Z*<br/>
Terzo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito

Risultato dell'espressione (_X \* _Y) + _Z. L'intero calcolo viene eseguito come singola operazione. in altre termini, le sottoespressioni vengono calcolate in precisione infinita e solo il risultato finale viene arrotondato.

## <a name="fmaf"></a>fmaf

Calcola il prodotto del primo e del secondo argomento specificati, quindi aggiunge il terzo argomento specificato al risultato; l'intero calcolo viene eseguito come singola operazione.

```cpp
inline float fmaf(
   float _X,
   float _Y,
   float _Z
) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento a virgola mobile.
*_Y*<br/>
Secondo argomento a virgola mobile.
*_Z*<br/>
Terzo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito

Risultato dell'espressione (_X \* _Y) + _Z. L'intero calcolo viene eseguito come singola operazione. in altre termini, le sottoespressioni vengono calcolate in precisione infinita e solo il risultato finale viene arrotondato.

## <a name="fmax"></a>Fmax

Determinare il valore numerico massimo degli argomenti

```cpp
inline float fmax(
    float _X,
    float _Y) restrict(amp);

inline double fmax(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="fmaxf"></a>fmaxf

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

## <a name="fmin"></a>Fmin

Determinare il valore numerico minimo degli argomenti

```cpp
inline float fmin(
    float _X,
    float _Y) restrict(amp);

inline double fmin(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="fminf"></a>fminf

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

## <a name="fmod"></a>Funzione fmod (C++ amp)

Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato.

```cpp
inline float fmod(
    float _X,
    float _Y) restrict(amp);

inline double fmod(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento a virgola mobile.

*_Y*<br/>
Secondo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito

Il resto del `_X` diviso per `_Y`; ovvero il valore di `_X` - `_Y`*n*, dove *n* è un intero intero in modo che la grandezza di `_X` - `_Y`*n* sia minore della grandezza di `_Y`.

## <a name="fmodf"></a>fmodf

Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato.

```cpp
inline float fmodf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento a virgola mobile.

*_Y*<br/>
Secondo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito

Il resto del `_X` diviso per `_Y`; ovvero il valore di `_X` - `_Y`*n*, dove *n* è un intero intero in modo che la grandezza di `_X` - `_Y`*n* sia minore della grandezza di `_Y`.

## <a name="fpclassify"></a>fpclassify

Classifica il valore dell'argomento come NaN, infinito, normale, subnormale, zero

```cpp
inline int fpclassify(float _X) restrict(amp);

inline int fpclassify(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della macro di classificazione dei numeri appropriata per il valore dell'argomento.

## <a name="frexp"></a>frexp

Ottiene mantissa ed esponente di _X

```cpp
inline float frexp(
    float _X,
    _Out_ int* _Exp) restrict(amp);

inline double frexp(
    double _X,
    _Out_ int* _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Exp*<br/>
Restituisce l'esponente integer di _X in un valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce mantissa _X

## <a name="frexpf"></a>frexpf

Ottiene mantissa ed esponente di _X

```cpp
inline float frexpf(
    float _X,
    _Out_ int* _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Exp*<br/>
Restituisce l'esponente integer di _X in un valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce mantissa _X

## <a name="hypot"></a>hypot

Calcola la radice quadrata della somma dei quadrati di _X e _Y

```cpp
inline float hypot(
    float _X,
    float _Y) restrict(amp);

inline double hypot(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice quadrata della somma dei quadrati di _X e _Y

## <a name="hypotf"></a>hypotf

Calcola la radice quadrata della somma dei quadrati di _X e _Y

```cpp
inline float hypotf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice quadrata della somma dei quadrati di _X e _Y

## <a name="ilogb"></a>ilogb

Estrae l'esponente di _X come valore int con segno

```cpp
inline int ilogb(float _X) restrict(amp);

inline int ilogb(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente di _X come valore int con segno

## <a name="ilogbf"></a>ilogbf

Estrae l'esponente di _X come valore int con segno

```cpp
inline int ilogbf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente di _X come valore int con segno

## <a name="isfinite"></a>isFinite

Determina se l'argomento ha un valore finito

```cpp
inline int isfinite(float _X) restrict(amp);

inline int isfinite(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore finito

## <a name="isinf"></a>isinf

Determina se l'argomento è un infinito

```cpp
inline int isinf(float _X) restrict(amp);

inline int isinf(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore infinito

## <a name="isnan"></a>IsNaN

Determina se l'argomento è NaN

```cpp
inline int isnan(float _X) restrict(amp);

inline int isnan(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore NaN

## <a name="isnormal"></a>normale

Determina se l'argomento è un normale

```cpp
inline int isnormal(float _X) restrict(amp);

inline int isnormal(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore normale

## <a name="ldexp"></a>ldexp

Calcola un numero reale dal mantissa e dall'esponente specificati.

```cpp
inline float ldexp(
    float _X,
    int _Exp) restrict(amp);

inline double ldexp(
    double _X,
    double _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, mantissa

*_Exp*<br/>
Valore intero, esponente

### <a name="return-value"></a>Valore restituito

Restituisce _X \* 2 ^ _Exp

## <a name="ldexpf"></a>ldexpf

Calcola un numero reale dal mantissa e dall'esponente specificati.

```cpp
inline float ldexpf(
    float _X,
    int _Exp) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, mantissa

*_Exp*<br/>
Valore intero, esponente

### <a name="return-value"></a>Valore restituito

Restituisce _X \* 2 ^ _Exp

## <a name="lgamma"></a>lGamma

Calcola il logaritmo naturale del valore assoluto della gamma dell'argomento

```cpp
inline float lgamma(
    float _X,
    _Out_ int* _Sign) restrict(amp);

inline double lgamma(
    double _X,
    _Out_ int* _Sign) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Sign*<br/>
Restituisce il segno

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo naturale del valore assoluto della gamma dell'argomento

## <a name="lgammaf"></a>lgammaf

Calcola il logaritmo naturale del valore assoluto della gamma dell'argomento

```cpp
inline float lgammaf(
    float _X,
    _Out_ int* _Sign) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Sign*<br/>
Restituisce il segno

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo naturale del valore assoluto della gamma dell'argomento

## <a name="log"></a>  log

Calcola il logaritmo in base e dell'argomento

```cpp
inline float log(float _X) restrict(amp);

inline double log(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e dell'argomento

## <a name="log10"></a>  log10

Calcola il logaritmo in base 10 dell'argomento

```cpp
inline float log10(float _X) restrict(amp);

inline double log10(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="log10f"></a>log10f

Calcola il logaritmo in base 10 dell'argomento

```cpp
inline float log10f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="log1p"></a>log1p

Calcola il logaritmo in base e di 1 più l'argomento

```cpp
inline float log1p(float _X) restrict(amp);

inline double log1p(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e di 1 più l'argomento

## <a name="log1pf"></a>log1pf

Calcola il logaritmo in base e di 1 più l'argomento

```cpp
inline float log1pf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e di 1 più l'argomento

## <a name="log2"></a>log2

Calcola il logaritmo in base 2 dell'argomento

```cpp
inline float log2(float _X) restrict(amp);

inline double log2(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="log2f"></a>log2f

Calcola il logaritmo in base 2 dell'argomento

```cpp
inline float log2f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base 10 dell'argomento

## <a name="logb"></a>logb

Estrae l'esponente di _X come valore intero con segno nel formato a virgola mobile

```cpp
inline float logb(float _X) restrict(amp);

inline double logb(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente con segno di _X

## <a name="logbf"></a>logbf

Estrae l'esponente di _X come valore intero con segno nel formato a virgola mobile

```cpp
inline float logbf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente con segno di _X

## <a name="logf"></a>logf

Calcola il logaritmo in base e dell'argomento

```cpp
inline float logf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e dell'argomento

## <a name="modf"></a>modf

Suddivide l'argomento specificato in parti frazionarie e intere.

```cpp
inline float modf(
    float _X,
    _Out_ float* _Iptr) restrict(amp);

inline double modf(
    double _X,
    _Out_ double* _Iptr) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Iptr*<br/>
out Parte intera di `_X`come valore a virgola mobile.

### <a name="return-value"></a>Valore restituito

Parte frazionaria con segno di `_X`.

## <a name="modff"></a>modff

Suddivide l'argomento specificato in parti frazionarie e intere.

```cpp
inline float modff(
    float _X,
    _Out_ float* _Iptr) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Iptr*<br/>
Parte intera di `_X`come valore a virgola mobile.

### <a name="return-value"></a>Valore restituito

Restituisce la parte frazionaria con segno di `_X`.

## <a name="nan"></a>Nan

Restituisce un valore NaN non interattiva

```cpp
inline double nan(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce un valore NaN non interattiva, se disponibile, con il contenuto indicato in _X

## <a name="nanf"></a>nanf (

Restituisce un valore NaN non interattiva

```cpp
inline float nanf(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce un valore NaN non interattiva, se disponibile, con il contenuto indicato in _X

## <a name="nearbyint"></a>nearbyint

Arrotonda l'argomento a un valore integer in formato a virgola mobile, usando la direzione di arrotondamento corrente.

```cpp
inline float nearbyint(float _X) restrict(amp);

inline double nearbyint(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore intero arrotondato.

## <a name="nearbyintf"></a>nearbyintf

Arrotonda l'argomento a un valore integer in formato a virgola mobile, usando la direzione di arrotondamento corrente.

```cpp
inline float nearbyintf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore intero arrotondato.

## <a name="nextafter"></a>nextafter

Determinare il successivo valore rappresentabile, nel tipo della funzione, dopo _X nella direzione di _Y

```cpp
inline float nextafter(
    float _X,
    float _Y) restrict(amp);

inline double nextafter(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il successivo valore rappresentabile, nel tipo della funzione, dopo _X nella direzione di _Y

## <a name="nextafterf"></a>nextafterf

Determinare il successivo valore rappresentabile, nel tipo della funzione, dopo _X nella direzione di _Y

```cpp
inline float nextafterf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il successivo valore rappresentabile, nel tipo della funzione, dopo _X nella direzione di _Y

## <a name="phi"></a>Phi

Restituisce la funzione di distribuzione cumulativa dell'argomento.

```cpp
inline float phi(float _X) restrict(amp);

inline double phi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa dell'argomento.

## <a name="phif"></a>phif

Restituisce la funzione di distribuzione cumulativa dell'argomento.

```cpp
inline float phif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa dell'argomento.

## <a name="pow"></a>  pow

Calcola _X elevato alla potenza di _Y

```cpp
inline float pow(
    float _X,
    float _Y) restrict(amp);

inline double pow(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile, base

*_Y*<br/>
Valore a virgola mobile, esponente

### <a name="return-value"></a>Valore restituito

## <a name="powf"></a>powf

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

## <a name="probit"></a>probit

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento.

```cpp
inline float probit(float _X) restrict(amp);

inline double probit(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento.

## <a name="probitf"></a>probitf

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento.

```cpp
inline float probitf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento.

## <a name="rcbrt"></a>rcbrt

Restituisce il reciproco della radice del cubo dell'argomento.

```cpp
inline float rcbrt(float _X) restrict(amp);

inline double rcbrt(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice del cubo dell'argomento.

## <a name="rcbrtf"></a>rcbrtf

Restituisce il reciproco della radice del cubo dell'argomento.

```cpp
inline float rcbrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice del cubo dell'argomento.

## <a name="remainder"></a>resto

Calcola il resto: _X REM _Y

```cpp
inline float remainder(
    float _X,
    float _Y) restrict(amp);

inline double remainder(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X REM _Y

## <a name="remainderf"></a>remainderf

Calcola il resto: _X REM _Y

```cpp
inline float remainderf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X REM _Y

## <a name="remquo"></a>remquo

Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Calcola anche il quoziente del separatore del primo argomento specificato diviso per il separatore del secondo argomento specificato e restituisce il quoziente usando la posizione specificata nel terzo argomento.

```cpp
inline float remquo(
    float _X,
    float _Y,
    _Out_ int* _Quo) restrict(amp);

inline double remquo(
    double _X,
    double _Y,
    _Out_ int* _Quo) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento a virgola mobile.

*_Y*<br/>
Secondo argomento a virgola mobile.

*_Quo*<br/>
out Indirizzo di un intero usato per restituire il quoziente dei bit frazionari di `_X` divisi per i bit frazionari di `_Y`.

### <a name="return-value"></a>Valore restituito

Restituisce il resto di `_X` diviso per `_Y`.

## <a name="remquof"></a>remquof

Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Calcola anche il quoziente del separatore del primo argomento specificato diviso per il separatore del secondo argomento specificato e restituisce il quoziente usando la posizione specificata nel terzo argomento.

```cpp
inline float remquof(
    float _X,
    float _Y,
    _Out_ int* _Quo) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento a virgola mobile.

*_Y*<br/>
Secondo argomento a virgola mobile.

*_Quo*<br/>
out Indirizzo di un intero usato per restituire il quoziente dei bit frazionari di `_X` divisi per i bit frazionari di `_Y`.

### <a name="return-value"></a>Valore restituito

Restituisce il resto di `_X` diviso per `_Y`.

## <a name="round"></a>turno

Arrotonda _X al numero intero più vicino

```cpp
inline float round(float _X) restrict(amp);

inline double round(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'intero più vicino di _X

## <a name="roundf"></a>roundf

Arrotonda _X al numero intero più vicino

```cpp
inline float roundf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'intero più vicino di _X

## <a name="rsqrt"></a>rsqrt

Restituisce il reciproco della radice quadrata dell'argomento

```cpp
inline float rsqrt(float _X) restrict(amp);

inline double rsqrt(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice quadrata dell'argomento

## <a name="rsqrtf"></a>rsqrtf

Restituisce il reciproco della radice quadrata dell'argomento

```cpp
inline float rsqrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice quadrata dell'argomento

## <a name="scalb"></a>scalb

Moltiplica _X per FLT_RADIX alla potenza _Y

```cpp
inline float scalb(
    float _X,
    float _Y) restrict(amp);

inline double scalb(
    double _X,
    double _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X \* (FLT_RADIX ^ _Y)

## <a name="scalbf"></a>scalbf

Moltiplica _X per FLT_RADIX alla potenza _Y

```cpp
inline float scalbf(
    float _X,
    float _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X \* (FLT_RADIX ^ _Y)

## <a name="scalbn"></a>scalbn

Moltiplica _X per FLT_RADIX alla potenza _Y

```cpp
inline float scalbn(
    float _X,
    int _Y) restrict(amp);

inline double scalbn(
    double _X,
    int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce _X \* (FLT_RADIX ^ _Y)

## <a name="scalbnf"></a>scalbnf

Moltiplica _X per FLT_RADIX alla potenza _Y

```cpp
inline float scalbnf(
    float _X,
    int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Y*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce _X \* (FLT_RADIX ^ _Y)

## <a name="signbit"></a>signbit

Determina se il segno di _X è negativo

```cpp
inline int signbit(float _X) restrict(amp);

inline int signbit(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se il segno di _X è negativo

## <a name="signbitf"></a>signbitf

Determina se il segno di _X è negativo

```cpp
inline int signbitf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se il segno di _X è negativo

## <a name="sin"></a>  sin

Calcola il valore del seno dell'argomento.

```cpp
inline float sin(float _X) restrict(amp);

inline double sin(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno dell'argomento.

## <a name="sinf"></a>sinf

Calcola il valore del seno dell'argomento.

```cpp
inline float sinf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno dell'argomento.

## <a name="sincos"></a>SinCos

Calcola il valore del seno e del coseno di _X

```cpp
inline void sincos(
    float _X,
    _Out_ float* _S,
    _Out_ float* _C) restrict(amp);

inline void sincos(
    double _X,
    _Out_ double* _S,
    _Out_ double* _C) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_S*<br/>
Restituisce il valore del seno di _X

*_C*<br/>
Restituisce il valore del coseno di _X

## <a name="sincosf"></a>sincosf

Calcola il valore del seno e del coseno di _X

```cpp
inline void sincosf(
    float _X,
    _Out_ float* _S,
    _Out_ float* _C) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_S*<br/>
Restituisce il valore del seno di _X

*_C*<br/>
Restituisce il valore del coseno di _X

## <a name="sinh"></a>  sinh

Calcola il valore del seno iperbolico dell'argomento

```cpp
inline float sinh(float _X) restrict(amp);

inline double sinh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno iperbolico dell'argomento.

## <a name="sinhf"></a>sinhf

Calcola il valore del seno iperbolico dell'argomento

```cpp
inline float sinhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno iperbolico dell'argomento.

## <a name="sinpi"></a>sinpi

Calcola il valore del seno di pi \* _X

```cpp
inline float sinpi(float _X) restrict(amp);

inline double sinpi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno di pi \* _X

## <a name="sinpif"></a>sinpif

Calcola il valore del seno di pi \* _X

```cpp
inline float sinpif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore del seno di pi \* _X

## <a name="sqrt"></a>  sqrt

Calcola la radice Squre dell'argomento

```cpp
inline float sqrt(float _X) restrict(amp);

inline double sqrt(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice Squre dell'argomento.

## <a name="sqrtf"></a>sqrtf

Calcola la radice Squre dell'argomento

```cpp
inline float sqrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice Squre dell'argomento.

## <a name="tan"></a>  tan

Calcola il valore tangente dell'argomento.

```cpp
inline float tan(float _X) restrict(amp);

inline double tan(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore tangente dell'argomento.

## <a name="tanf"></a>TANF

Calcola il valore tangente dell'argomento.

```cpp
inline float tanf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore tangente dell'argomento.

## <a name="tanh"></a>  tanh

Calcola il valore della tangente iperbolica dell'argomento

```cpp
inline float tanh(float _X) restrict(amp);

inline double tanh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della tangente iperbolica dell'argomento.

## <a name="tanhf"></a>tanhf

Calcola il valore della tangente iperbolica dell'argomento

```cpp
inline float tanhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della tangente iperbolica dell'argomento.

## <a name="tanpi"></a>tanpi

Calcola il valore tangente di pi \* _X

```cpp
inline float tanpi(float _X) restrict(amp);

inline double tanpi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore tangente di pi \* _X

## <a name="tanpif"></a>tanpif

Calcola il valore tangente di pi \* _X

```cpp
inline float tanpif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore tangente di pi \* _X

## <a name="tgamma"></a>tgamma

Calcola la funzione gamma di _X

```cpp
inline float tgamma(float _X) restrict(amp);

inline double tgamma(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il risultato della funzione gamma di _X

## <a name="tgammaf"></a>tgammaf

Calcola la funzione gamma di _X

```cpp
inline float tgammaf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il risultato della funzione gamma di _X

## <a name="trunc"></a>trunc

Tronca l'argomento al componente Integer

```cpp
inline float trunc(float _X) restrict(amp);

inline double trunc(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il componente Integer dell'argomento.

## <a name="truncf"></a>truncf

Tronca l'argomento al componente Integer

```cpp
inline float truncf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il componente Integer dell'argomento.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)
