---
title: 'Funzioni dello spazio dei nomi Concurrency:: precise_math | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: fae53ab4-d1c5-45bb-a6a0-a74258e9aea3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c1d329e13d686e7f378646105b4bcaed2dbb3a3a
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="concurrencyprecisemath-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency:: precise_math
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
|[cospi](#cospi)|[cospif](#cospif)|[erf](#erf)|  
|[erfc](#erfc)|[erfcf](#erfcf)|[erfcinv](#erfcinv)|  
|[erfcinvf](#erfcinvf)|[erff](#erff)|[erfinv](#erfinv)|  
|[erfinvf](#erfinvf)|[exp](#exp)|[exp10](#exp10)|  
|[exp10f](#exp10f)|[exp2](#exp2)|[exp2f](#exp2f)|  
|[expf](#expf)|[expm1](#expm1)|[expm1f](#expm1f)|  
|[fabs](#fabs)|[fabsf](#fabsf)|[floor](#floor)| 
|[fdim](#fdim)|[fdimf](#fdimf)|| 
|[floorf](#floorf)|[fma](#fma)|[fmaf](#fmaf)|
[fmax](#fmax)|[fmaxf](#fmaxf)|| 
|[fmin](#fmin)|[fminf](#fminf)|[fmod](#fmod)|  
|[fmodf](#fmodf)|[fpclassify](#fpclassify)|[frexp](#frexp)|  
|[frexpf](#frexpf)|[hypot](#hypot)|[hypotf](#hypotf)|  
|[ilogb](#ilogb)|[ilogbf](#ilogbf)|[isfinite](#isfinite)|  
|[isinf](#isinf)|[isnan](#isnan)|[isnormal](#isnormal)|  
|[ldexp](#ldexp)|[ldexpf](#ldexpf)|[lgamma](#lgamma)|  
|[lgammaf](#lgammaf)|[log](#log)|[log10](#log10)|  
|[log10f](#log10f)|[log1p](#log1p)|[log1pf](#log1pf)|  
|[log2](#log2)|[log2f](#log2f)|[logb](#logb)|  
|[logbf](#logbf)|[logf](#logf)|[modf](#modf)|  
|[modff](#modff)|[nan](#nan)|[nanf](#nanf)|  
|[nearbyint](#nearbyint)|[nearbyintf](#nearbyintf)|[nextafter](#nextafter)|  
|[nextafterf](#nextafterf)|[phi](#phi)|[phif](#phif)|  
|[pow](#pow)|[powf](#powf)|[probit](#probit)|  
|[probitf](#probitf)|[rcbrt](#rcbrt)|[rcbrtf](#rcbrtf)|  
|[remainder](#remainder)|[remainderf](#remainderf)|[remquo](#remquo)|  
|[remquof](#remquof)|[round](#round)|[roundf](#roundf)|  
|[rsqrt](#rsqrt)|[rsqrtf](#rsqrtf)|[scalb](#scalb)|  
|[scalbf](#scalbf)|[scalbn](#scalbn)|[scalbnf](#scalbnf)|  
|[signbit](#signbit)|[signbitf](#signbitf)|[sin](#sin)|  
|[sincos](#sincos)|[sincosf](#sincosf)|[sinf](#sinf)|  
|[sinh](#sinh)|[sinhf](#sinhf)|[sinpi](#sinpi)|  
|[sinpif](#sinpif)|[sqrt](#sqrt)|[sqrtf](#sqrtf)|  
|[tan](#tan)|[tanf](#tanf)|[tanh](#tanh)|  
|[tanhf](#tanhf)|[tanpi](#tanpi)|[tanpif](#tanpif)|  
|[tgamma](#tgamma)|[tgammaf](#tgammaf)|[trunc](#trunc)|  
|[truncf](#truncf)|  
  
##  <a name="acos"></a>  acos  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float acos(float _X) restrict(amp);

 
inline double acos(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcocoseno dell'argomento  
  
##  <a name="acosf"></a>  acosf  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float acosf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcocoseno dell'argomento  
  
##  <a name="acosh"></a>  acosh  
 Calcola il coseno iperbolico inverso dell'argomento  
  
```  
inline float acosh(float _X) restrict(amp);

 
inline double acosh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico inverso dell'argomento  
  
##  <a name="acoshf"></a>  acoshf  
 Calcola il coseno iperbolico inverso dell'argomento  
  
```  
inline float acoshf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico inverso dell'argomento  
  
##  <a name="asin"></a>  asin  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float asin(float _X) restrict(amp);

 
inline double asin(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcoseno dell'argomento  
  
##  <a name="asinf"></a>  asinf  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float asinf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcoseno dell'argomento  
  
##  <a name="asinh"></a>  asinh  
 Calcola il seno iperbolico inverso dell'argomento  
  
```  
inline float asinh(float _X) restrict(amp);

 
inline double asinh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno iperbolico inverso dell'argomento  
  
##  <a name="asinhf"></a>  asinhf  
 Calcola il seno iperbolico inverso dell'argomento  
  
```  
inline float asinhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno iperbolico inverso dell'argomento  
  
##  <a name="atan"></a>  atan  
 Calcola l'arcotangente dell'argomento  
  
```  
inline float atan(float _X) restrict(amp);

 
inline double atan(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcotangente dell'argomento  
  
##  <a name="atan2"></a>  atan2  
 Calcola l'arcotangente di y/x  
  
```  
inline float atan2(
    float _Y,  
    float _X) restrict(amp);

 
inline double atan2(
    double _Y,  
    double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Y`  
 Valore a virgola mobile  
  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcotangente di y/x  
  
##  <a name="atan2f"></a>  atan2f  
 Calcola l'arcotangente di y/x  
  
```  
inline float atan2f(
    float _Y,  
    float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Y`  
 Valore a virgola mobile  
  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcotangente di y/x  
  
##  <a name="atanf"></a>  atanf  
 Calcola l'arcotangente dell'argomento  
  
```  
inline float atanf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcotangente dell'argomento  
  
##  <a name="atanh"></a>  atanh  
 Calcola la tangente iperbolica inversa dell'argomento  
  
```  
inline float atanh(float _X) restrict(amp);

 
inline double atanh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente iperbolico inverso dell'argomento  
  
##  <a name="atanhf"></a>  atanhf  
 Calcola la tangente iperbolica inversa dell'argomento  
  
```  
inline float atanhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente iperbolico inverso dell'argomento  
  
##  <a name="cbrt"></a>  cbrt  
 Calcola la radice cubica reale dell'argomento  
  
```  
inline float cbrt(float _X) restrict(amp);

 
inline double cbrt(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice cubica reale dell'argomento  
  
##  <a name="cbrtf"></a>  cbrtf  
 Calcola la radice cubica reale dell'argomento  
  
```  
inline float cbrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice cubica reale dell'argomento  
  
##  <a name="ceil"></a>  ceil  
 Calcola il limite massimo dell'argomento  
  
```  
inline float ceil(float _X) restrict(amp);

 
inline double ceil(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite massimo dell'argomento  
  
##  <a name="ceilf"></a>  ceilf  
 Calcola il limite massimo dell'argomento  
  
```  
inline float ceilf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite massimo dell'argomento  
  
##  <a name="copysign"></a>  copysign  
 Produce un valore con la grandezza del x e il segno di y  
  
```  
inline float copysign(
    float _X,  
    float _Y) restrict(amp);

 
inline double copysign(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore con la grandezza del x e il segno di y  
  
##  <a name="copysignf"></a>  copysignf  
 Produce un valore con la grandezza del x e il segno di y  
  
```  
inline float copysignf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore con la grandezza del x e il segno di y  
  
##  <a name="cos"></a>  cos  
 Calcola il coseno dell'argomento  
  
```  
inline float cos(float _X) restrict(amp);

 
inline double cos(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di coseno dell'argomento  
  
##  <a name="cosf"></a>  cosf  
 Calcola il coseno dell'argomento  
  
```  
inline float cosf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di coseno dell'argomento  
  
##  <a name="cosh"></a>  cosh  
 Calcola il coseno iperbolico di valore dell'argomento  
  
```  
inline float cosh(float _X) restrict(amp);

 
inline double cosh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico dell'argomento  
  
##  <a name="coshf"></a>  coshf  
 Calcola il coseno iperbolico di valore dell'argomento  
  
```  
inline float coshf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico dell'argomento  
  
##  <a name="cospi"></a>  cospi  
 Calcola il coseno di valore di pi greco * x  
  
```  
inline float cospi(float _X) restrict(amp);

 
inline double cospi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il coseno di valore di pi greco * x  
  
##  <a name="cospif"></a>  cospif  
 Calcola il coseno di valore di pi greco * x  
  
```  
inline float cospif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il coseno di valore di pi greco * x  
  
##  <a name="erf"></a>  erf  
 Calcola la funzione di errore di x  
  
```  
inline float erf(float _X) restrict(amp);

 
inline double erf(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione di errore di x  
  
##  <a name="erfc"></a>  erfc  
 Calcola la funzione di errore complementare di x  
  
```  
inline float erfc(float _X) restrict(amp);

 
inline double erfc(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione di errore complementare di x  
  
##  <a name="erfcf"></a>  erfcf  
 Calcola la funzione di errore complementare di x  
  
```  
inline float erfcf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione di errore complementare di x  
  
##  <a name="erfcinv"></a>  erfcinv  
 Calcola la funzione inversa di errore complementare di x  
  
```  
inline float erfcinv(float _X) restrict(amp);

 
inline double erfcinv(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione inversa di errore complementare di x  
  
##  <a name="erfcinvf"></a>  erfcinvf  
 Calcola la funzione inversa di errore complementare di x  
  
```  
inline float erfcinvf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione inversa di errore complementare di x  
  
##  <a name="erff"></a>  erff  
 Calcola la funzione di errore di x  
  
```  
inline float erff(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione di errore di x  
  
##  <a name="erfinv"></a>  erfinv  
 Calcola la funzione inversa di errore di x  
  
```  
inline float erfinv(float _X) restrict(amp);

 
inline double erfinv(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione inversa di errore di x  
  
##  <a name="erfinvf"></a>  erfinvf  
 Calcola la funzione inversa di errore di x  
  
```  
inline float erfinvf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione inversa di errore di x  
  
##  <a name="exp10"></a>  exp10  
 Viene calcolato in base 10 esponenziale dell'argomento  
  
```  
inline float exp10(float _X) restrict(amp);

 
inline double exp10(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base 10 esponenziale dell'argomento  
  
##  <a name="exp10f"></a>  exp10f  
 Viene calcolato in base 10 esponenziale dell'argomento  
  
```  
inline float exp10f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base 10 esponenziale dell'argomento  
  
##  <a name="expm1"></a>  expm1  
 Calcola l'esponenziale in base e dell'argomento, meno 1  
  
```  
inline float expm1(float exponent) restrict(amp);

 
inline double expm1(double exponent) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `exponent`  
 Il termine esponenziale  *n*  dell'espressione matematica `e` <sup> n </sup>, dove `e` è la base del logaritmo naturale.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento, meno 1  
  
##  <a name="expm1f"></a>  expm1f  
 Calcola l'esponenziale in base e dell'argomento, meno 1  
  
```  
inline float expm1f(float exponent) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `exponent`  
 Il termine esponenziale  *n*  dell'espressione matematica `e` <sup> n </sup>, dove `e` è la base del logaritmo naturale.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento, meno 1  
  
##  <a name="exp"></a>  exp  
 Calcola l'esponenziale in base e dell'argomento  
  
```  
inline float exp(float _X) restrict(amp);

 
inline double exp(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento  
  
##  <a name="expf"></a>  expf  
 Calcola l'esponenziale in base e dell'argomento  
  
```  
inline float expf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento  
  
##  <a name="exp2"></a>  exp2  
 Calcola l'esponenziale dell'argomento di base-2  
  
```  
inline float exp2(float _X) restrict(amp);

 
inline double exp2(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base 2 esponenziale dell'argomento  
  
##  <a name="exp2f"></a>  exp2f  
 Calcola l'esponenziale dell'argomento di base-2  
  
```  
inline float exp2f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base 2 esponenziale dell'argomento  
  
##  <a name="fabs"></a>  fabs  
 Restituisce il valore assoluto dell'argomento  
  
```  
inline float fabs(float _X) restrict(amp);

 
inline double fabs(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore assoluto dell'argomento  
  
##  <a name="fabsf"></a>  fabsf  
 Restituisce il valore assoluto dell'argomento  
  
```  
inline float fabsf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore assoluto dell'argomento  

## <a name="fdim"></a> fdim  
Calcola la differenza tra gli argomenti positivo.
```  
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
`_X` Valore a virgola mobile `_Y` valore a virgola mobile


### <a name="return-value"></a>Valore restituito
La differenza tra x e y se x è maggiore di y; in caso contrario, + 0.
 
## <a name="fdimf"></a> fdimf  
Calcola la differenza tra gli argomenti positivo.
```
inline float fdimf(
   float _X,
   float _Y
) restrict(amp);
```
### <a name="parameters"></a>Parametri
`_X` Valore a virgola mobile `_Y` valore a virgola mobile

### <a name="return-value"></a>Valore restituito
La differenza tra x e y se x è maggiore di y; in caso contrario, + 0. 
  
##  <a name="floor"></a>  floor  
 Calcola la base dell'argomento  
  
```  
inline float floor(float _X) restrict(amp);

 
inline double floor(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base dell'argomento  
  
##  <a name="floorf"></a>  floorf  
 Calcola la base dell'argomento  
  
```  
inline float floorf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base dell'argomento  

## <a name="a-namefma-fma"></a><a name="fma"> fma  
Calcola il prodotto del primo e il secondo argomento specificato, quindi aggiunge il terzo argomento specificato per il risultato. il calcolo dell'intero viene eseguito come un'unica operazione.
```
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
`_X` Il primo argomento a virgola mobile.
`_Y` Il secondo argomento a virgola mobile.
`_Z` Il terzo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito
Il risultato dell'espressione ( x * y) + _Z. Il calcolo dell'intero viene eseguito come una singola operazione. vale a dire le sottoespressioni vengono calcolate a precisione infinita, e solo il risultato finale viene arrotondato. 

## <a name="fmaf"></a> fmaf  
Calcola il prodotto del primo e il secondo argomento specificato, quindi aggiunge il terzo argomento specificato per il risultato. il calcolo dell'intero viene eseguito come un'unica operazione.
```
inline float fmaf(
   float _X,
   float _Y,
   float _Z
) restrict(amp);
```  
### <a name="parameters"></a>Parametri
`_X` Il primo argomento a virgola mobile.
`_Y` Il secondo argomento a virgola mobile.
`_Z` Il terzo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito
Il risultato dell'espressione ( x * y) + _Z. Il calcolo dell'intero viene eseguito come una singola operazione. vale a dire le sottoespressioni vengono calcolate a precisione infinita, e solo il risultato finale viene arrotondato.
  
##  <a name="fmax"></a>  fmax  
 Determinare il valore numerico massimo di argomenti  
  
```  
inline float fmax(
    float _X,  
    float _Y) restrict(amp);

 
inline double fmax(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico massimo di argomenti  
  
##  <a name="fmaxf"></a>  fmaxf  
 Determinare il valore numerico massimo di argomenti  
  
```  
inline float fmaxf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico massimo di argomenti  
  
##  <a name="fmin"></a>  fmin  
 Determinare il valore numerico minimo di argomenti  
  
```  
inline float fmin(
    float _X,  
    float _Y) restrict(amp);

 
inline double fmin(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico minimo di argomenti  
  
##  <a name="fminf"></a>  fminf  
 Determinare il valore numerico minimo di argomenti  
  
```  
inline float fminf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico minimo di argomenti  
  
##  <a name="fmod"></a>  fmod (funzione) (C++ AMP)  
 Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato.  
  
```  
inline float fmod(
    float _X,  
    float _Y) restrict(amp);

 
inline double fmod(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Il primo argomento a virgola mobile.  
  
 `_Y`  
 Il secondo argomento a virgola mobile.  
  
### <a name="return-value"></a>Valore restituito  
 Il resto della `_X` diviso `_Y`; ovvero, il valore di `_X`  -  `_Y`  *n* , dove  *n*  è un numero intero tale che la grandezza del `_X`  -  `_Y`  *n*  è minore della grandezza di `_Y`.  
  
##  <a name="fmodf"></a>  fmodf  
 Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato.  
  
```  
inline float fmodf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Il primo argomento a virgola mobile.  
  
 `_Y`  
 Il secondo argomento a virgola mobile.  
  
### <a name="return-value"></a>Valore restituito  
 Il resto della `_X` diviso `_Y`; ovvero, il valore di `_X`  -  `_Y`  *n* , dove  *n*  è un numero intero tale che la grandezza del `_X`  -  `_Y`  *n*  è minore della grandezza di `_Y`.  
  
##  <a name="fpclassify"></a>  fpclassify  
 Classifica il valore dell'argomento come un valore NaN, infinito, normale, subnormal zero  
  
```  
inline int fpclassify(float _X) restrict(amp);

 
inline int fpclassify(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della macro numero classificazione appropriato per il valore dell'argomento.  
  
##  <a name="frexp"></a>  frexp  
 Ottiene la mantissa e l'esponente di x  
  
```  
inline float frexp(
    float _X,  
    _Out_ int* _Exp) restrict(amp);

 
inline double frexp(
    double _X,  
    _Out_ int* _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Exp`  
 Restituisce l'esponente intero di x nel valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il x mantissa  
  
##  <a name="frexpf"></a>  frexpf  
 Ottiene la mantissa e l'esponente di x  
  
```  
inline float frexpf(
    float _X,  
    _Out_ int* _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Exp`  
 Restituisce l'esponente intero di x nel valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il x mantissa  
  
##  <a name="hypot"></a>  hypot  
 Calcola la radice quadrata della somma dei quadrati di x e y  
  
```  
inline float hypot(
    float _X,  
    float _Y) restrict(amp);

 
inline double hypot(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice quadrata della somma dei quadrati di x e y  
  
##  <a name="hypotf"></a>  hypotf  
 Calcola la radice quadrata della somma dei quadrati di x e y  
  
```  
inline float hypotf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice quadrata della somma dei quadrati di x e y  
  
##  <a name="ilogb"></a>  ilogb  
 Estrarre l'esponente di x come un valore signed integer  
  
```  
inline int ilogb(float _X) restrict(amp);

 
inline int ilogb(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente di x come un valore signed integer  
  
##  <a name="ilogbf"></a>  ilogbf  
 Estrarre l'esponente di x come un valore signed integer  
  
```  
inline int ilogbf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente di x come un valore signed integer  
  
##  <a name="isfinite"></a>  isfinite  
 Determina se l'argomento ha un valore finito  
  
```  
inline int isfinite(float _X) restrict(amp);

 
inline int isfinite(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento è un valore finito  
  
##  <a name="isinf"></a>  isinf  
 Determina se l'argomento è infinito  
  
```  
inline int isinf(float _X) restrict(amp);

 
inline int isinf(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento è un valore infinito  
  
##  <a name="isnan"></a>  isnan  
 Determina se l'argomento è NaN  
  
```  
inline int isnan(float _X) restrict(amp);

 
inline int isnan(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento ha un valore NaN  
  
##  <a name="isnormal"></a>  isnormal  
 Determina se l'argomento è un normale  
  
```  
inline int isnormal(float _X) restrict(amp);

 
inline int isnormal(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento ha un valore normale  
  
##  <a name="ldexp"></a>  ldexp  
 Calcola un numero reale compreso tra la mantissa specificata e un esponente.  
  
```  
inline float ldexp(
    float _X,  
    int _Exp) restrict(amp);

 
inline double ldexp(
    double _X,  
    double _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, per la mantissa  
  
 `_Exp`  
 Valore intero, esponente  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x * 2 ^ _Exp  
  
##  <a name="ldexpf"></a>  ldexpf  
 Calcola un numero reale compreso tra la mantissa specificata e un esponente.  
  
```  
inline float ldexpf(
    float _X,  
    int _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, per la mantissa  
  
 `_Exp`  
 Valore intero, esponente  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x * 2 ^ _Exp  
  
##  <a name="lgamma"></a>  lgamma  
 Calcola il logaritmo naturale del valore assoluto della gamma dell'argomento  
  
```  
inline float lgamma(
    float _X,  
    _Out_ int* _Sign) restrict(amp);

 
inline double lgamma(
    double _X,  
    _Out_ int* _Sign) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Sign`  
 Restituisce il segno  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo naturale del valore assoluto della gamma dell'argomento  
  
##  <a name="lgammaf"></a>  lgammaf  
 Calcola il logaritmo naturale del valore assoluto della gamma dell'argomento  
  
```  
inline float lgammaf(
    float _X,  
    _Out_ int* _Sign) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Sign`  
 Restituisce il segno  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo naturale del valore assoluto della gamma dell'argomento  
  
##  <a name="log"></a>  log  
 Calcola il logaritmo di base e dell'argomento  
  
```  
inline float log(float _X) restrict(amp);

 
inline double log(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo di base e dell'argomento  
  
##  <a name="log10"></a>  log10  
 Calcola il logaritmo in base 10 dell'argomento  
  
```  
inline float log10(float _X) restrict(amp);

 
inline double log10(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base 10 dell'argomento  
  
##  <a name="log10f"></a>  log10f  
 Calcola il logaritmo in base 10 dell'argomento  
  
```  
inline float log10f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base 10 dell'argomento  
  
##  <a name="log1p"></a>  log1p  
 Calcola il logaritmo di base e di 1 e l'argomento  
  
```  
inline float log1p(float _X) restrict(amp);

 
inline double log1p(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo di base e di 1 e l'argomento  
  
##  <a name="log1pf"></a>  log1pf  
 Calcola il logaritmo di base e di 1 e l'argomento  
  
```  
inline float log1pf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo di base e di 1 e l'argomento  
  
##  <a name="log2"></a>  log2  
 Calcola il logaritmo in base 2 dell'argomento  
  
```  
inline float log2(float _X) restrict(amp);

 
inline double log2(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base 10 dell'argomento  
  
##  <a name="log2f"></a>  log2f  
 Calcola il logaritmo in base 2 dell'argomento  
  
```  
inline float log2f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base 10 dell'argomento  
  
##  <a name="logb"></a>  logb  
 Estrae l'esponente di x, come un valore intero con segno in formato a virgola mobile  
  
```  
inline float logb(float _X) restrict(amp);

 
inline double logb(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente di x con segno  
  
##  <a name="logbf"></a>  logbf  
 Estrae l'esponente di x, come un valore intero con segno in formato a virgola mobile  
  
```  
inline float logbf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente di x con segno  
  
##  <a name="logf"></a>  logf  
 Calcola il logaritmo di base e dell'argomento  
  
```  
inline float logf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo di base e dell'argomento  
  
##  <a name="modf"></a>  modf  
 Divide le parti intere e l'argomento specificato in frazionari.  
  
```  
inline float modf(
    float _X,  
    _Out_ float* _Iptr) restrict(amp);

 
inline double modf(
    double _X,  
    _Out_ double* _Iptr) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Iptr` (parametro) out  
 La parte intera di `_X`, come un valore a virgola mobile.  
  
### <a name="return-value"></a>Valore restituito  
 La parte decimale con segno del `_X`.  
  
##  <a name="modff"></a>  modff  
 Divide le parti intere e l'argomento specificato in frazionari.  
  
```  
inline float modff(
    float _X,  
    _Out_ float* _Iptr) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Iptr`  
 La parte intera di `_X`, come un valore a virgola mobile.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la parte decimale con segno del `_X`.  
  
##  <a name="nan"></a>  nan  
 Restituisce un NaN non interattivo  
  
```  
inline double nan(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un NaN non interattivo, se disponibile, con il contenuto indicato in x  
  
##  <a name="nanf"></a>  nanf  
 Restituisce un NaN non interattivo  
  
```  
inline float nanf(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un NaN non interattivo, se disponibile, con il contenuto indicato in x  
  
##  <a name="nearbyint"></a>  nearbyint  
 Arrotonda un valore intero in formato a virgola mobile, la direzione di arrotondamento corrente utilizzando l'argomento.  
  
```  
inline float nearbyint(float _X) restrict(amp);

 
inline double nearbyint(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore intero arrotondato.  
  
##  <a name="nearbyintf"></a>  nearbyintf  
 Arrotonda un valore intero in formato a virgola mobile, la direzione di arrotondamento corrente utilizzando l'argomento.  
  
```  
inline float nearbyintf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore intero arrotondato.  
  
##  <a name="nextafter"></a>  nextafter  
 Determinare il valore rappresentabile successivo, il tipo della funzione, dopo x nella direzione di y  
  
```  
inline float nextafter(
    float _X,  
    float _Y) restrict(amp);

 
inline double nextafter(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il successivo valore rappresentabile nel tipo della funzione, dopo x nella direzione di y  
  
##  <a name="nextafterf"></a>  nextafterf  
 Determinare il valore rappresentabile successivo, il tipo della funzione, dopo x nella direzione di y  
  
```  
inline float nextafterf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il successivo valore rappresentabile nel tipo della funzione, dopo x nella direzione di y  
  
##  <a name="phi"></a>  phi  
 Restituisce la funzione distribuzione cumulativa dell'argomento  
  
```  
inline float phi(float _X) restrict(amp);

 
inline double phi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione distribuzione cumulativa dell'argomento  
  
##  <a name="phif"></a>  phif  
 Restituisce la funzione distribuzione cumulativa dell'argomento  
  
```  
inline float phif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione distribuzione cumulativa dell'argomento  
  
##  <a name="pow"></a>  pow  
 Calcola x elevato alla potenza di y  
  
```  
inline float pow(
    float _X,  
    float _Y) restrict(amp);

 
inline double pow(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, base  
  
 `_Y`  
 Valore a virgola mobile, esponente  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="powf"></a>  powf  
 Calcola x elevato alla potenza di y  
  
```  
inline float powf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, base  
  
 `_Y`  
 Valore a virgola mobile, esponente  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="probit"></a>  probit  
 Restituisce la funzione distribuzione cumulativa inversa dell'argomento  
  
```  
inline float probit(float _X) restrict(amp);

 
inline double probit(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione distribuzione cumulativa inversa dell'argomento  
  
##  <a name="probitf"></a>  probitf  
 Restituisce la funzione distribuzione cumulativa inversa dell'argomento  
  
```  
inline float probitf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione distribuzione cumulativa inversa dell'argomento  
  
##  <a name="rcbrt"></a>  rcbrt  
 Restituisce il reciproco della radice cubica dell'argomento  
  
```  
inline float rcbrt(float _X) restrict(amp);

 
inline double rcbrt(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il reciproco della radice cubica dell'argomento  
  
##  <a name="rcbrtf"></a>  rcbrtf  
 Restituisce il reciproco della radice cubica dell'argomento  
  
```  
inline float rcbrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il reciproco della radice cubica dell'argomento  
  
##  <a name="remainder"></a>  resto  
 Calcola il resto: y REM x  
  
```  
inline float remainder(
    float _X,  
    float _Y) restrict(amp);

 
inline double remainder(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce y REM x  
  
##  <a name="remainderf"></a>  remainderf  
 Calcola il resto: y REM x  
  
```  
inline float remainderf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce y REM x  
  
##  <a name="remquo"></a>  remquo  
 Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Anche calcola il quoziente del separatore del primo argomento specificato diviso per il separatore del secondo argomento specificato e restituisce il quoziente utilizzando il percorso specificato nel terzo argomento.  
  
```  
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
 `_X`  
 Il primo argomento a virgola mobile.  
  
 `_Y`  
 Il secondo argomento a virgola mobile.  
  
 `_Quo` (parametro) out  
 L'indirizzo di un intero che viene utilizzato per restituire il quoziente dei bit frazionario di `_X` diviso per i bit di frazionari `_Y`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il resto di `_X` diviso `_Y`.  
  
##  <a name="remquof"></a>  remquof  
 Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Anche calcola il quoziente del separatore del primo argomento specificato diviso per il separatore del secondo argomento specificato e restituisce il quoziente utilizzando il percorso specificato nel terzo argomento.  
  
```  
inline float remquof(
    float _X,  
    float _Y,  
    _Out_ int* _Quo) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Il primo argomento a virgola mobile.  
  
 `_Y`  
 Il secondo argomento a virgola mobile.  
  
 `_Quo` (parametro) out  
 L'indirizzo di un intero che viene utilizzato per restituire il quoziente dei bit frazionario di `_X` diviso per i bit di frazionari `_Y`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il resto di `_X` diviso `_Y`.  
  
##  <a name="round"></a>  Funzione round  
 Arrotonda x all'intero più vicino  
  
```  
inline float round(float _X) restrict(amp);

 
inline double round(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'intero più vicino di x  
  
##  <a name="roundf"></a>  roundf  
 Arrotonda x all'intero più vicino  
  
```  
inline float roundf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'intero più vicino di x  
  
##  <a name="rsqrt"></a>  rsqrt  
 Restituisce il reciproco della radice quadrata dell'argomento  
  
```  
inline float rsqrt(float _X) restrict(amp);

 
inline double rsqrt(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il reciproco della radice quadrata dell'argomento  
  
##  <a name="rsqrtf"></a>  rsqrtf  
 Restituisce il reciproco della radice quadrata dell'argomento  
  
```  
inline float rsqrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il reciproco della radice quadrata dell'argomento  
  
##  <a name="scalb"></a>  scalb  
 Moltiplica x da FLT_RADIX per la power y  
  
```  
inline float scalb(
    float _X,  
    float _Y) restrict(amp);

 
inline double scalb(
    double _X,  
    double _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="scalbf"></a>  scalbf  
 Moltiplica x da FLT_RADIX per la power y  
  
```  
inline float scalbf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="scalbn"></a>  scalbn  
 Moltiplica x da FLT_RADIX per la power y  
  
```  
inline float scalbn(
    float _X,  
    int _Y) restrict(amp);

 
inline double scalbn(
    double _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="scalbnf"></a>  scalbnf  
 Moltiplica x da FLT_RADIX per la power y  
  
```  
inline float scalbnf(
    float _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Returns _X * (FLT_RADIX ^ _Y)  
  
##  <a name="signbit"></a>  signbit  
 Determina se il segno di x è negativo  
  
```  
inline int signbit(float _X) restrict(amp);

 
inline int signbit(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se il segno di x è negativo  
  
##  <a name="signbitf"></a>  signbitf  
 Determina se il segno di x è negativo  
  
```  
inline int signbitf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se il segno di x è negativo  
  
##  <a name="sin"></a>  sin  
 Calcola il valore seno dell'argomento  
  
```  
inline float sin(float _X) restrict(amp);

 
inline double sin(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno dell'argomento  
  
##  <a name="sinf"></a>  sinf  
 Calcola il valore seno dell'argomento  
  
```  
inline float sinf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno dell'argomento  
  
##  <a name="sincos"></a>  sincos  
 Calcola un valore seno e coseno di x  
  
```  
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
 `_X`  
 Valore a virgola mobile  
  
 `_S`  
 Restituisce il valore seno di x  
  
 `_C`  
 Restituisce il coseno di valore di x  
  
##  <a name="sincosf"></a>  sincosf  
 Calcola un valore seno e coseno di x  
  
```  
inline void sincosf(
    float _X,  
    _Out_ float* _S,  
    _Out_ float* _C) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_S`  
 Restituisce il valore seno di x  
  
 `_C`  
 Restituisce il coseno di valore di x  
  
##  <a name="sinh"></a>  sinh  
 Calcola il valore seno iperbolico dell'argomento  
  
```  
inline float sinh(float _X) restrict(amp);

 
inline double sinh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno iperbolico dell'argomento  
  
##  <a name="sinhf"></a>  sinhf  
 Calcola il valore seno iperbolico dell'argomento  
  
```  
inline float sinhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno iperbolico dell'argomento  
  
##  <a name="sinpi"></a>  sinpi  
 Calcola il valore seno di pi greco * x  
  
```  
inline float sinpi(float _X) restrict(amp);

 
inline double sinpi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno di pi greco * x  
  
##  <a name="sinpif"></a>  sinpif  
 Calcola il valore seno di pi greco * x  
  
```  
inline float sinpif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore seno di pi greco * x  
  
##  <a name="sqrt"></a>  sqrt  
 Calcola la radice squre dell'argomento  
  
```  
inline float sqrt(float _X) restrict(amp);

 
inline double sqrt(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice squre dell'argomento  
  
##  <a name="sqrtf"></a>  sqrtf  
 Calcola la radice squre dell'argomento  
  
```  
inline float sqrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice squre dell'argomento  
  
##  <a name="tan"></a>  tan  
 Calcola il valore di controllo di tangente dell'argomento  
  
```  
inline float tan(float _X) restrict(amp);

 
inline double tan(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente dell'argomento  
  
##  <a name="tanf"></a>  tanf  
 Calcola il valore di controllo di tangente dell'argomento  
  
```  
inline float tanf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente dell'argomento  
  
##  <a name="tanh"></a>  tanh  
 Calcola il valore di controllo di tangente iperbolico dell'argomento  
  
```  
inline float tanh(float _X) restrict(amp);

 
inline double tanh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente iperbolico dell'argomento  
  
##  <a name="tanhf"></a>  tanhf  
 Calcola il valore di controllo di tangente iperbolico dell'argomento  
  
```  
inline float tanhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente iperbolico dell'argomento  
  
##  <a name="tanpi"></a>  tanpi  
 Calcola il valore di controllo di tangente di pi greco * x  
  
```  
inline float tanpi(float _X) restrict(amp);

 
inline double tanpi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente di pi greco * x  
  
##  <a name="tanpif"></a>  tanpif  
 Calcola il valore di controllo di tangente di pi greco * x  
  
```  
inline float tanpif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di controllo di tangente di pi greco * x  
  
##  <a name="tgamma"></a>  tgamma  
 Calcola la funzione gamma di x  
  
```  
inline float tgamma(float _X) restrict(amp);

 
inline double tgamma(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della funzione gamma di x  
  
##  <a name="tgammaf"></a>  tgammaf  
 Calcola la funzione gamma di x  
  
```  
inline float tgammaf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della funzione gamma di x  
  
##  <a name="trunc"></a>  trunc  
 Tronca l'argomento per il componente integer  
  
```  
inline float trunc(float _X) restrict(amp);

 
inline double trunc(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il componente integer dell'argomento  
  
##  <a name="truncf"></a>  truncf  
 Tronca l'argomento per il componente integer  
  
```  
inline float truncf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il componente integer dell'argomento  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)
