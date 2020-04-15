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
ms.openlocfilehash: ee6ab2313fbdc288ebba1b3fdacf192b7b578eb6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321861"
---
# <a name="concurrencyprecise_math-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency::precise_math

||||
|-|-|-|
|[Acos](#acos)|[acosf](#acosf)|[acosh](#acosh)|
|[acoshf](#acoshf)|[Asin](#asin)|[asinf](#asinf)|
|[asinh](#asinh)|[asinhf](#asinhf)|[Atan](#atan)|
|[atan2](#atan2)|[atan2f](#atan2f)|[atanf](#atanf)|
|[atanh](#atanh)|[atanhf](#atanhf)|[cbrt](#cbrt)|
|[cbrtf](#cbrtf)|[Ceil](#ceil)|[ceilf](#ceilf)|
|[copysign](#copysign)|[copysignf](#copysignf)|[Perché](#cos)|
|[cosf](#cosf)|[cosh](#cosh)|[coshf](#coshf)|
|[cospi](#cospi)|[cospif](#cospif)|[erf](#erf)|
|[erfc](#erfc)|[erfcf](#erfcf)|[erfcinv](#erfcinv)|
|[erfcinvf](#erfcinvf)|[erff](#erff)|[erfinv](#erfinv)|
|[erfinvf](#erfinvf)|[Exp](#exp)|[exp10](#exp10)|
|[exp10f](#exp10f)|[exp2](#exp2)|[exp2f](#exp2f)|
|[expf](#expf)|[expm1](#expm1)|[expm1f](#expm1f)|
|[fabs](#fabs)|[fabsf](#fabsf)|[Pavimento](#floor)|
|[fdim](#fdim)|[fdimf](#fdimf)||
|[floorf](#floorf)|[fma](#fma)|[fmaf](#fmaf)|
[fmax](#fmax)|[fmaxf](#fmaxf)||
|[fmin](#fmin)|[fminf](#fminf)|[fmod](#fmod)|
|[fmodf](#fmodf)|[fpclassify](#fpclassify)|[frexp](#frexp)|
|[frexpf](#frexpf)|[hypot](#hypot)|[hypotf](#hypotf)|
|[ilogb](#ilogb)|[ilogbf](#ilogbf)|[isfinite](#isfinite)|
|[isinf](#isinf)|[isan](#isnan)|[isnormal](#isnormal)|
|[ldexp](#ldexp)|[ldexpf](#ldexpf)|[lgamma](#lgamma)|
|[lgammaf](#lgammaf)|[Registro](#log)|[log10 (informazioni in due)](#log10)|
|[log10f](#log10f)|[log1p](#log1p)|[log1pf](#log1pf)|
|[log2 (informazioni in due)](#log2)|[log2f](#log2f)|[logb](#logb)|
|[logbf](#logbf)|[logf](#logf)|[modf](#modf)|
|[modff](#modff)|[nan](#nan)|[nanf](#nanf)|
|[nearbyint](#nearbyint)|[nearbyintf](#nearbyintf)|[nextafter](#nextafter)|
|[nextafterf](#nextafterf)|[Phi](#phi)|[phif](#phif)|
|[pow](#pow)|[powf](#powf)|[Probit](#probit)|
|[probitf](#probitf)|[rcbrt](#rcbrt)|[rcbrtf](#rcbrtf)|
|[remainder](#remainder)|[remainderf](#remainderf)|[remquo](#remquo)|
|[remquof](#remquof)|[Rotondo](#round)|[roundf](#roundf)|
|[rsqrt (rsqrt)](#rsqrt)|[rsqrtf (informazioni in base al sistema in tra](#rsqrtf)|[scalb](#scalb)|
|[scalbf](#scalbf)|[scalbn](#scalbn)|[scalbnf](#scalbnf)|
|[signbit](#signbit)|[signbitf](#signbitf)|[Peccato](#sin)|
|[Sincos](#sincos)|[sincosmo](#sincosf)|[sinf](#sinf)|
|[sinh](#sinh)|[sinhf](#sinhf)|[sinpi](#sinpi)|
|[sinpif](#sinpif)|[Sqrt](#sqrt)|[sqrtf](#sqrtf)|
|[Tan](#tan)|[tanf](#tanf)|[tanh](#tanh)|
|[tanhf](#tanhf)|[tanpi](#tanpi)|[tanpif](#tanpif)|
|[tgamma](#tgamma)|[tgammaf](#tgammaf)|[trunc](#trunc)|
|[truncf](#truncf)|

## <a name="acos"></a><a name="acos"></a>Acos

Calcola l'arcocoseno dell'argomento

```cpp
inline float acos(float _X) restrict(amp);

inline double acos(double _X) restrict(amp);
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

## <a name="acosh"></a><a name="acosh"></a>acosh

Calcola l'inversa del coseno iperbolico dell'argomento

```cpp
inline float acosh(float _X) restrict(amp);

inline double acosh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore inverso del coseno iperbolico dell'argomento

## <a name="acoshf"></a><a name="acoshf"></a>acoshf

Calcola l'inversa del coseno iperbolico dell'argomento

```cpp
inline float acoshf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore inverso del coseno iperbolico dell'argomento

## <a name="asin"></a><a name="asin"></a>Asin

Calcola l'arcoseno dell'argomento

```cpp
inline float asin(float _X) restrict(amp);

inline double asin(double _X) restrict(amp);
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

## <a name="asinh"></a><a name="asinh"></a>asinh

Calcola l'inversa del seno iperbolico dell'argomento

```cpp
inline float asinh(float _X) restrict(amp);

inline double asinh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore inverso del seno iperbolico dell'argomento

## <a name="asinhf"></a><a name="asinhf"></a>asinhf

Calcola l'inversa del seno iperbolico dell'argomento

```cpp
inline float asinhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore inverso del seno iperbolico dell'argomento

## <a name="atan"></a><a name="atan"></a>Atan

Calcola l'arcotangente dell'argomento.

```cpp
inline float atan(float _X) restrict(amp);

inline double atan(double _X) restrict(amp);
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

## <a name="atanh"></a><a name="atanh"></a>atanh

Calcola l'inversa della tangente iperbolica dell'argomento

```cpp
inline float atanh(float _X) restrict(amp);

inline double atanh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore inverso della tangente iperbolica dell'argomento

## <a name="atanhf"></a><a name="atanhf"></a>atanhf

Calcola l'inversa della tangente iperbolica dell'argomento

```cpp
inline float atanhf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore inverso della tangente iperbolica dell'argomento

## <a name="cbrt"></a><a name="cbrt"></a>cbrt

Calcola la radice del cubo reale dell'argomento

```cpp
inline float cbrt(float _X) restrict(amp);

inline double cbrt(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice del cubo reale dell'argomento

## <a name="cbrtf"></a><a name="cbrtf"></a>cbrtf

Calcola la radice del cubo reale dell'argomento

```cpp
inline float cbrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la radice del cubo reale dell'argomento

## <a name="ceil"></a><a name="ceil"></a>Ceil

Calcola il limite massimo dell'argomento

```cpp
inline float ceil(float _X) restrict(amp);

inline double ceil(double _X) restrict(amp);
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

## <a name="copysign"></a><a name="copysign"></a>copysign

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

## <a name="copysignf"></a><a name="copysignf"></a>copysignf

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

## <a name="cos"></a><a name="cos"></a>Perché

Calcola il coseno dell'argomento.

```cpp
inline float cos(float _X) restrict(amp);

inline double cos(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno dell'argomento

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

## <a name="cosh"></a><a name="cosh"></a>Cosh

Calcola il valore del coseno iperbolico dell'argomento

```cpp
inline float cosh(float _X) restrict(amp);

inline double cosh(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno iperbolico dell'argomento

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

## <a name="cospi"></a><a name="cospi"></a>cospi

Calcola il valore coseno \* di pi greco _X

```cpp
inline float cospi(float _X) restrict(amp);

inline double cospi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno di pi \* _X

## <a name="cospif"></a><a name="cospif"></a>cospif

Calcola il valore coseno \* di pi greco _X

```cpp
inline float cospif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore coseno di pi \* _X

## <a name="erf"></a><a name="erf"></a>Erf

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

## <a name="erfc"></a><a name="erfc"></a>erfc

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

## <a name="erfcf"></a><a name="erfcf"></a>erfcf

Calcola la funzione di errore complementare di _X

```cpp
inline float erfcf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore complementare di _X

## <a name="erfcinv"></a><a name="erfcinv"></a>erfcinv

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

## <a name="erfcinvf"></a><a name="erfcinvf"></a>erfcinvf

Calcola la funzione di errore complementare inversa di _X

```cpp
inline float erfcinvf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore complementare inversa di _X

## <a name="erff"></a><a name="erff"></a>erff

Calcola la funzione di errore di _X

```cpp
inline float erff(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore di _X

## <a name="erfinv"></a><a name="erfinv"></a>erfinv

Calcola la funzione di errore inverso di _X

```cpp
inline float erfinv(float _X) restrict(amp);

inline double erfinv(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore inversa di _X

## <a name="erfinvf"></a><a name="erfinvf"></a>erfinvf

Calcola la funzione di errore inverso di _X

```cpp
inline float erfinvf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di errore inversa di _X

## <a name="exp10"></a><a name="exp10"></a>exp10

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

## <a name="exp10f"></a><a name="exp10f"></a>exp10f

Calcola l'esponenziale in base 10 dell'argomento

```cpp
inline float exp10f(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base 10 dell'argomento

## <a name="expm1"></a><a name="expm1"></a>expm1

Calcola l'esponenziale in base e dell'argomento, meno 1

```cpp
inline float expm1(float exponent) restrict(amp);

inline double expm1(double exponent) restrict(amp);
```

### <a name="parameters"></a>Parametri

*Esponente*<br/>
Il termine *n* esponenziale n `e`dell'espressione matematica <sup>n</sup>, dove `e` è la base del logaritmo naturale.

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento, meno 1

## <a name="expm1f"></a><a name="expm1f"></a>expm1f

Calcola l'esponenziale in base e dell'argomento, meno 1

```cpp
inline float expm1f(float exponent) restrict(amp);
```

### <a name="parameters"></a>Parametri

*Esponente*<br/>
Il termine *n* esponenziale n `e`dell'espressione matematica <sup>n</sup>, dove `e` è la base del logaritmo naturale.

### <a name="return-value"></a>Valore restituito

Restituisce l'esponenziale in base e dell'argomento, meno 1

## <a name="exp"></a><a name="exp"></a>Exp

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

## <a name="exp2"></a><a name="exp2"></a>exp2

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

## <a name="fabs"></a><a name="fabs"></a>Fab

Restituisce il valore assoluto dell'argomento

```cpp
inline float fabs(float _X) restrict(amp);

inline double fabs(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

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

## <a name="fdim"></a><a name="fdim"></a>fdim

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
*_Y* dei valori a virgola mobile<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

La differenza tra _X e _Y se _X è maggiore di _Y; in caso contrario, 0 USD.

## <a name="fdimf"></a><a name="fdimf"></a>fdimf

Calcola la differenza positiva tra gli argomenti.

```cpp
inline float fdimf(
   float _X,
   float _Y
) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
*_Y* dei valori a virgola mobile<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

La differenza tra _X e _Y se _X è maggiore di _Y; in caso contrario, 0 USD.

## <a name="floor"></a><a name="floor"></a>Pavimento

Calcola il piano dell'argomento

```cpp
inline float floor(float _X) restrict(amp);

inline double floor(double _X) restrict(amp);
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

## <a name="a-namefma-fma"></a><a name="fma">Fma

Calcola il prodotto del primo e del secondo argomento specificato, quindi aggiunge il terzo argomento specificato al risultato; l'intero calcolo viene eseguito come una singola operazione.

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

Il risultato dell'espressione (_X \* _Y) - _Z. L'intero calcolo viene eseguito come una singola operazione; vale a dire, le sottoespressioni vengono calcolate con precisione infinita e viene arrotondato solo il risultato finale.

## <a name="fmaf"></a><a name="fmaf"></a>fmaf

Calcola il prodotto del primo e del secondo argomento specificato, quindi aggiunge il terzo argomento specificato al risultato; l'intero calcolo viene eseguito come una singola operazione.

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

Il risultato dell'espressione (_X \* _Y) - _Z. L'intero calcolo viene eseguito come una singola operazione; vale a dire, le sottoespressioni vengono calcolate con precisione infinita e viene arrotondato solo il risultato finale.

## <a name="fmax"></a><a name="fmax"></a>Fmax

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

## <a name="fmod-function-c-amp"></a><a name="fmod"></a>Funzione fmod (AMP)

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

Il resto `_X` di `_Y`diviso per ; vale a dire, `_X`  -  `_Y`il valore di *n*, dove *n* è `_X`  -  `_Y`un intero numero intero in modo che la grandezza di *n* sia inferiore alla grandezza di `_Y`.

## <a name="fmodf"></a><a name="fmodf"></a>fmodf

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

Il resto `_X` di `_Y`diviso per ; vale a dire, `_X`  -  `_Y`il valore di *n*, dove *n* è `_X`  -  `_Y`un intero numero intero in modo che la grandezza di *n* sia inferiore alla grandezza di `_Y`.

## <a name="fpclassify"></a><a name="fpclassify"></a>fpclassifica

Classifica il valore dell'argomento come NaN, infinito, normale, subnormale, zero

```cpp
inline int fpclassify(float _X) restrict(amp);

inline int fpclassify(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore della macro di classificazione dei numeri appropriata al valore dell'argomento.

## <a name="frexp"></a><a name="frexp"></a>frexp

Ottiene la mantissa e l'esponente di _X

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

## <a name="hypot"></a><a name="hypot"></a>hypot

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

## <a name="hypotf"></a><a name="hypotf"></a>hypotf

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

## <a name="ilogb"></a><a name="ilogb"></a>ilogb

Estrarre l'esponente di _X come valore int con segno

```cpp
inline int ilogb(float _X) restrict(amp);

inline int ilogb(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente di _X come valore int con segno

## <a name="ilogbf"></a><a name="ilogbf"></a>ilogbf

Estrarre l'esponente di _X come valore int con segno

```cpp
inline int ilogbf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente di _X come valore int con segno

## <a name="isfinite"></a><a name="isfinite"></a>isfinite

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

## <a name="isinf"></a><a name="isinf"></a>isinf

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

## <a name="isnan"></a><a name="isnan"></a>isan

Determina se l'argomento è un NaN

```cpp
inline int isnan(float _X) restrict(amp);

inline int isnan(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore NaN

## <a name="isnormal"></a><a name="isnormal"></a>è normale

Determina se l'argomento è normale

```cpp
inline int isnormal(float _X) restrict(amp);

inline int isnormal(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se e solo se l'argomento ha un valore normale

## <a name="ldexp"></a><a name="ldexp"></a>ldexp

Calcola un numero reale dalla mantissa e dall'esponente specificati.

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

Restituisce \* _X 2-_Exp

## <a name="ldexpf"></a><a name="ldexpf"></a>ldexpf

Calcola un numero reale dalla mantissa e dall'esponente specificati.

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

Restituisce \* _X 2-_Exp

## <a name="lgamma"></a><a name="lgamma"></a>lgamma

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

Restituisce il logaritmo naturale del valore assoluto di gamma dell'argomento

## <a name="lgammaf"></a><a name="lgammaf"></a>lgammaf

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

Restituisce il logaritmo naturale del valore assoluto di gamma dell'argomento

## <a name="log"></a><a name="log"></a>Registro

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

## <a name="log10"></a><a name="log10"></a>log10 (informazioni in due)

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

## <a name="log1p"></a><a name="log1p"></a>log1p (informazioni in base al taalla

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

## <a name="log1pf"></a><a name="log1pf"></a>log1pf (registro)

Calcola il logaritmo in base e di 1 più l'argomento

```cpp
inline float log1pf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il logaritmo in base e di 1 più l'argomento

## <a name="log2"></a><a name="log2"></a>log2 (informazioni in due)

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

## <a name="logb"></a><a name="logb"></a>logb (in questo registro)

Estrae l'esponente di _X, come valore intero con segno in formato a virgola mobile

```cpp
inline float logb(float _X) restrict(amp);

inline double logb(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente firmato di _X

## <a name="logbf"></a><a name="logbf"></a>logbf (inquestoe si è

Estrae l'esponente di _X, come valore intero con segno in formato a virgola mobile

```cpp
inline float logbf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce l'esponente firmato di _X

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

Divide l'argomento specificato in parti frazionarie e intere.

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
[fuori] La parte `_X`intera di , come valore a virgola mobile.

### <a name="return-value"></a>Valore restituito

Parte frazionaria firmata di `_X`.

## <a name="modff"></a><a name="modff"></a>modff

Divide l'argomento specificato in parti frazionarie e intere.

```cpp
inline float modff(
    float _X,
    _Out_ float* _Iptr) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

*_Iptr*<br/>
La parte `_X`intera di , come valore a virgola mobile.

### <a name="return-value"></a>Valore restituito

Restituisce la parte `_X`frazionaria firmata di .

## <a name="nan"></a><a name="nan"></a>Nan

Restituisce un NaN silenzioso

```cpp
inline double nan(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce un NaN silenzioso, se disponibile, con il contenuto indicato nella _X

## <a name="nanf"></a><a name="nanf"></a>nanf

Restituisce un NaN silenzioso

```cpp
inline float nanf(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce un NaN silenzioso, se disponibile, con il contenuto indicato nella _X

## <a name="nearbyint"></a><a name="nearbyint"></a>nearbyint

Arrotonda l'argomento a un valore integer in formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.

```cpp
inline float nearbyint(float _X) restrict(amp);

inline double nearbyint(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore intero arrotondato.

## <a name="nearbyintf"></a><a name="nearbyintf"></a>nearbyintf

Arrotonda l'argomento a un valore integer in formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.

```cpp
inline float nearbyintf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore intero arrotondato.

## <a name="nextafter"></a><a name="nextafter"></a>dopo

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

## <a name="nextafterf"></a><a name="nextafterf"></a>nextafterf

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

## <a name="phi"></a><a name="phi"></a>Phi

Restituisce la funzione di distribuzione cumulativa dell'argomento

```cpp
inline float phi(float _X) restrict(amp);

inline double phi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa dell'argomento

## <a name="phif"></a><a name="phif"></a>phif

Restituisce la funzione di distribuzione cumulativa dell'argomento

```cpp
inline float phif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa dell'argomento

## <a name="pow"></a><a name="pow"></a>Pow

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

## <a name="probit"></a><a name="probit"></a>Probit

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento

```cpp
inline float probit(float _X) restrict(amp);

inline double probit(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento

## <a name="probitf"></a><a name="probitf"></a>probitf

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento

```cpp
inline float probitf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce la funzione di distribuzione cumulativa inversa dell'argomento

## <a name="rcbrt"></a><a name="rcbrt"></a>rcbrt

Restituisce il reciproco della radice cubica dell'argomento

```cpp
inline float rcbrt(float _X) restrict(amp);

inline double rcbrt(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice cubica dell'argomento

## <a name="rcbrtf"></a><a name="rcbrtf"></a>rcbrtf

Restituisce il reciproco della radice cubica dell'argomento

```cpp
inline float rcbrtf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il reciproco della radice cubica dell'argomento

## <a name="remainder"></a><a name="remainder"></a>Resto

Calcola il resto: _X _Y REM

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

Restituisce _X _Y REM

## <a name="remainderf"></a><a name="remainderf"></a>remainderf

Calcola il resto: _X _Y REM

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

Restituisce _X _Y REM

## <a name="remquo"></a><a name="remquo"></a>remquo

Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Calcola anche il quoziente del significando del primo argomento specificato diviso per il significando del secondo argomento specificato e restituisce il quoziente utilizzando la posizione specificata nel terzo argomento.

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
[fuori] Indirizzo di un numero intero utilizzato per restituire il quoziente `_X` dei bit frazionari di `_Y`divisi per i bit frazionari di .

### <a name="return-value"></a>Valore restituito

Restituisce il `_X` resto `_Y`di diviso per .

## <a name="remquof"></a><a name="remquof"></a>remquof

Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Calcola anche il quoziente del significando del primo argomento specificato diviso per il significando del secondo argomento specificato e restituisce il quoziente utilizzando la posizione specificata nel terzo argomento.

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
[fuori] Indirizzo di un numero intero utilizzato per restituire il quoziente `_X` dei bit frazionari di `_Y`divisi per i bit frazionari di .

### <a name="return-value"></a>Valore restituito

Restituisce il `_X` resto `_Y`di diviso per .

## <a name="round"></a><a name="round"></a>Rotondo

Arrotonda _X all'intero più vicino

```cpp
inline float round(float _X) restrict(amp);

inline double round(double _X) restrict(amp);
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

inline double rsqrt(double _X) restrict(amp);
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

## <a name="scalb"></a><a name="scalb"></a>scalb

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

Restituisce \* _X (FLT_RADIX e _Y)

## <a name="scalbf"></a><a name="scalbf"></a>scalbf

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

Restituisce \* _X (FLT_RADIX e _Y)

## <a name="scalbn"></a><a name="scalbn"></a>scalbn

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
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce \* _X (FLT_RADIX e _Y)

## <a name="scalbnf"></a><a name="scalbnf"></a>scalbnf

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
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce \* _X (FLT_RADIX e _Y)

## <a name="signbit"></a><a name="signbit"></a>signbit

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

inline double sin(double _X) restrict(amp);
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
Restituisce il valore sine di _X

*_C*<br/>
Restituisce il valore coseno di _X

## <a name="sincosf"></a><a name="sincosf"></a>sincosmo

Calcola il valore sine e coseno di _X

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
Restituisce il valore sine di _X

*_C*<br/>
Restituisce il valore coseno di _X

## <a name="sinh"></a><a name="sinh"></a>Sinh

Calcola il valore del seno iperbolico dell'argomento

```cpp
inline float sinh(float _X) restrict(amp);

inline double sinh(double _X) restrict(amp);
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

## <a name="sinpi"></a><a name="sinpi"></a>sinpi

Calcola il valore sine di pi \* greco _X

```cpp
inline float sinpi(float _X) restrict(amp);

inline double sinpi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore sine di pi \* _X

## <a name="sinpif"></a><a name="sinpif"></a>sinpif

Calcola il valore sine di pi \* greco _X

```cpp
inline float sinpif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore sine di pi \* _X

## <a name="sqrt"></a><a name="sqrt"></a>Sqrt

Calcola la radice squre dell'argomento

```cpp
inline float sqrt(float _X) restrict(amp);

inline double sqrt(double _X) restrict(amp);
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

inline double tan(double _X) restrict(amp);
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

inline double tanh(double _X) restrict(amp);
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

## <a name="tanpi"></a><a name="tanpi"></a>tanpi

Calcola il valore \* tangente di pi greco _X

```cpp
inline float tanpi(float _X) restrict(amp);

inline double tanpi(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore \* tangente del pi greco _X

## <a name="tanpif"></a><a name="tanpif"></a>tanpif

Calcola il valore \* tangente di pi greco _X

```cpp
inline float tanpif(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il valore \* tangente del pi greco _X

## <a name="tgamma"></a><a name="tgamma"></a>tgamma

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

## <a name="tgammaf"></a><a name="tgammaf"></a>tgammaf

Calcola la funzione gamma di _X

```cpp
inline float tgammaf(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce il risultato della funzione gamma di _X

## <a name="trunc"></a><a name="trunc"></a>trunc

Tronca l'argomento al componente integer

```cpp
inline float trunc(float _X) restrict(amp);

inline double trunc(double _X) restrict(amp);
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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)
