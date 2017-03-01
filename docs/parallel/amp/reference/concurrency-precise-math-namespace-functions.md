---
title: 'Funzioni dello spazio dei nomi Concurrency:: precise_math | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: fae53ab4-d1c5-45bb-a6a0-a74258e9aea3
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 73273a58f73860c77810a6ab59def560962f9539
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencyprecisemath-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency:: precise_math
||||  
|-|-|-|  
|[acos (funzione)](#acos)|[Funzione acosf](#acosf)|[Acosh (funzione)](#acosh)|  
|[acoshf (funzione)](#acoshf)|[asin (funzione)](#asin)|[Funzione asinf](#asinf)|  
|[Asinh (funzione)](#asinh)|[asinhf (funzione)](#asinhf)|[atan (funzione)](#atan)|  
|[atan2 (funzione)](#atan2)|[Funzione atan2f](#atan2f)|[Funzione atanf](#atanf)|  
|[Atanh (funzione)](#atanh)|[atanhf (funzione)](#atanhf)|[Funzione cbrt](#cbrt)|  
|[cbrtf (funzione)](#cbrtf)|[ceil (funzione)](#ceil)|[Funzione ceilf](#ceilf)|  
|[copysign (funzione)](#copysign)|[copysignf (funzione)](#copysignf)|[cos (funzione)](#cos)|  
|[Funzione cosf](#cosf)|[Funzione COSH](#cosh)|[Funzione coshf](#coshf)|  
|[Funzione cospi](#cospi)|[Funzione cospif](#cospif)|[Erf (funzione)](#erf)|  
|[ErfC (funzione)](#erfc)|[Funzione erfcf](#erfcf)|[Funzione erfcinv](#erfcinv)|  
|[Funzione erfcinvf](#erfcinvf)|[erff (funzione)](#erff)|[Funzione erfinv](#erfinv)|  
|[Funzione erfinvf](#erfinvf)|[EXP (funzione)](#exp)|[exp10 (funzione)](#exp10)|  
|[Funzione exp10f](#exp10f)|[EXP2 (funzione)](#exp2)|[Funzione exp2f](#exp2f)|  
|[Funzione expf](#expf)|[expm1 (funzione)](#expm1)|[Funzione expm1f](#expm1f)|  
|[Funzione fabs](#fabs)|[Funzione fabsf](#fabsf)|[Funzione floor](#floor)| 
|[Funzione fdim](#fdim)|[Funzione fdimf](#fdimf)|| 
|[Funzione floorf](#floorf)|[Funzione FMA](#fma)|[Funzione fmaf](#fmaf)|
[Funzione Fmax](#fmax)|[Funzione fmaxf](#fmaxf)|| 
|[Funzione Fmin](#fmin)|[Funzione fminf](#fminf)|[Funzione fmod](#fmod)|  
|[Funzione fmodf](#fmodf)|[Funzione fpclassify](#fpclassify)|[Funzione frexp](#frexp)|  
|[Funzione frexpf](#frexpf)|[Funzione hypot](#hypot)|[hypotf (funzione)](#hypotf)|  
|[Funzione ilogb](#ilogb)|[Funzione ilogbf](#ilogbf)|[Funzione isFinite](#isfinite)|  
|[Funzione isinf](#isinf)|[Funzione isNaN](#isnan)|[Funzione isnormal](#isnormal)|  
|[Funzione ldexp](#ldexp)|[Funzione ldexpf](#ldexpf)|[Funzione lgamma](#lgamma)|  
|[Funzione lgammaf](#lgammaf)|[Funzione log](#log)|[LOG10 (funzione)](#log10)|  
|[Funzione log10f](#log10f)|[Funzione log1p](#log1p)|[Funzione log1pf](#log1pf)|  
|[LOG2 (funzione)](#log2)|[Funzione log2f](#log2f)|[logb (funzione)](#logb)|  
|[logbf (funzione)](#logbf)|[Funzione logf](#logf)|[Funzione modf](#modf)|  
|[Funzione modff](#modff)|[NaN (funzione)](#nan)|[nanf (funzione)](#nanf)|  
|[Funzione nearbyint](#nearbyint)|[Funzione nearbyintf](#nearbyintf)|[nextafter (funzione)](#nextafter)|  
|[Funzione nextafterf](#nextafterf)|[Funzione Phi](#phi)|[Funzione phif](#phif)|  
|[Funzione Pow](#pow)|[Funzione powf](#powf)|[Funzione probit](#probit)|  
|[Funzione probitf](#probitf)|[Funzione rcbrt](#rcbrt)|[Funzione rcbrtf](#rcbrtf)|  
|[Funzione Remainder](#remainder)|[Funzione remainderf](#remainderf)|[remquo (funzione)](#remquo)|  
|[remquof (funzione)](#remquof)|[Round (funzione)](#round)|[Funzione roundf](#roundf)|  
|[Funzione rsqrt](#rsqrt)|[Funzione rsqrtf](#rsqrtf)|[scalb (funzione)](#scalb)|  
|[Funzione scalbf](#scalbf)|[scalbn (funzione)](#scalbn)|[scalbnf (funzione)](#scalbnf)|  
|[Funzione signbit](#signbit)|[Funzione signbitf](#signbitf)|[Funzione sin](#sin)|  
|[Funzione sincos](#sincos)|[Funzione sincosf](#sincosf)|[Funzione sinf](#sinf)|  
|[Funzione SINH](#sinh)|[Funzione sinhf](#sinhf)|[Funzione sinpi](#sinpi)|  
|[Funzione sinpif](#sinpif)|[sqrt (funzione)](#sqrt)|[Funzione sqrtf](#sqrtf)|  
|[tan (funzione)](#tan)|[Funzione tanf](#tanf)|[Tanh (funzione)](#tanh)|  
|[Funzione tanhf](#tanhf)|[Funzione tanpi](#tanpi)|[Funzione tanpif](#tanpif)|  
|[Funzione tgamma](#tgamma)|[Funzione tgammaf](#tgammaf)|[Funzione trunc](#trunc)|  
|[Funzione truncf](#truncf)|  
  
##  <a name="a-nameacosa--acos-function"></a><a name="acos"></a>acos (funzione)  
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
  
##  <a name="a-nameacosfa--acosf-function"></a><a name="acosf"></a>Funzione acosf  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float acosf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcocoseno dell'argomento  
  
##  <a name="a-nameacosha--acosh-function"></a><a name="acosh"></a>Acosh (funzione)  
 Calcola il coseno iperbolico inverso dell'argomento  
  
```  
inline float acosh(float _X) restrict(amp);

 
inline double acosh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore inversa del coseno iperbolico dell'argomento  
  
##  <a name="a-nameacoshfa--acoshf-function"></a><a name="acoshf"></a>acoshf (funzione)  
 Calcola il coseno iperbolico inverso dell'argomento  
  
```  
inline float acoshf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore inversa del coseno iperbolico dell'argomento  
  
##  <a name="a-nameasina--asin-function"></a><a name="asin"></a>asin (funzione)  
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
  
##  <a name="a-nameasinfa--asinf-function"></a><a name="asinf"></a>Funzione asinf  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float asinf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcoseno dell'argomento  
  
##  <a name="a-nameasinha--asinh-function"></a><a name="asinh"></a>Asinh (funzione)  
 Calcola il seno iperbolico inverso dell'argomento  
  
```  
inline float asinh(float _X) restrict(amp);

 
inline double asinh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno iperbolico inverso dell'argomento  
  
##  <a name="a-nameasinhfa--asinhf-function"></a><a name="asinhf"></a>asinhf (funzione)  
 Calcola il seno iperbolico inverso dell'argomento  
  
```  
inline float asinhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno iperbolico inverso dell'argomento  
  
##  <a name="a-nameatana--atan-function"></a><a name="atan"></a>atan (funzione)  
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
  
##  <a name="a-nameatan2a--atan2-function"></a><a name="atan2"></a>atan2 (funzione)  
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
 Restituisce il valore di y/x arcotangente  
  
##  <a name="a-nameatan2fa--atan2f-function"></a><a name="atan2f"></a>Funzione atan2f  
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
 Restituisce il valore di y/x arcotangente  
  
##  <a name="a-nameatanfa--atanf-function"></a><a name="atanf"></a>Funzione atanf  
 Calcola l'arcotangente dell'argomento  
  
```  
inline float atanf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'arcotangente dell'argomento  
  
##  <a name="a-nameatanha--atanh-function"></a><a name="atanh"></a>Atanh (funzione)  
 Calcola la tangente iperbolica inversa dell'argomento  
  
```  
inline float atanh(float _X) restrict(amp);

 
inline double atanh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore tangente iperbolico inverso dell'argomento  
  
##  <a name="a-nameatanhfa--atanhf-function"></a><a name="atanhf"></a>atanhf (funzione)  
 Calcola la tangente iperbolica inversa dell'argomento  
  
```  
inline float atanhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore tangente iperbolico inverso dell'argomento  
  
##  <a name="a-namecbrta--cbrt-function"></a><a name="cbrt"></a>Funzione cbrt  
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
  
##  <a name="a-namecbrtfa--cbrtf-function"></a><a name="cbrtf"></a>cbrtf (funzione)  
 Calcola la radice cubica reale dell'argomento  
  
```  
inline float cbrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice cubica reale dell'argomento  
  
##  <a name="a-nameceila--ceil-function"></a><a name="ceil"></a>ceil (funzione)  
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
  
##  <a name="a-nameceilfa--ceilf-function"></a><a name="ceilf"></a>Funzione ceilf  
 Calcola il limite massimo dell'argomento  
  
```  
inline float ceilf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il limite massimo dell'argomento  
  
##  <a name="a-namecopysigna--copysign-function"></a><a name="copysign"></a>copysign (funzione)  
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
  
##  <a name="a-namecopysignfa--copysignf-function"></a><a name="copysignf"></a>copysignf (funzione)  
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
  
##  <a name="a-namecosa--cos-function"></a><a name="cos"></a>cos (funzione)  
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
  
##  <a name="a-namecosfa--cosf-function"></a><a name="cosf"></a>Funzione cosf  
 Calcola il coseno dell'argomento  
  
```  
inline float cosf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di coseno dell'argomento  
  
##  <a name="a-namecosha--cosh-function"></a><a name="cosh"></a>Funzione COSH  
 Calcola il valore del coseno iperbolico dell'argomento  
  
```  
inline float cosh(float _X) restrict(amp);

 
inline double cosh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico dell'argomento  
  
##  <a name="a-namecoshfa--coshf-function"></a><a name="coshf"></a>Funzione coshf  
 Calcola il valore del coseno iperbolico dell'argomento  
  
```  
inline float coshf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico dell'argomento  
  
##  <a name="a-namecospia--cospi-function"></a><a name="cospi"></a>Funzione cospi  
 Calcola il valore di pi greco coseno * x  
  
```  
inline float cospi(float _X) restrict(amp);

 
inline double cospi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di pi greco coseno * x  
  
##  <a name="a-namecospifa--cospif-function"></a><a name="cospif"></a>Funzione cospif  
 Calcola il valore di pi greco coseno * x  
  
```  
inline float cospif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di pi greco coseno * x  
  
##  <a name="a-nameerfa--erf-function"></a><a name="erf"></a>Erf (funzione)  
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
  
##  <a name="a-nameerfca--erfc-function"></a><a name="erfc"></a>ErfC (funzione)  
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
  
##  <a name="a-nameerfcfa--erfcf-function"></a><a name="erfcf"></a>Funzione erfcf  
 Calcola la funzione di errore complementare di x  
  
```  
inline float erfcf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione di errore complementare di x  
  
##  <a name="a-nameerfcinva--erfcinv-function"></a><a name="erfcinv"></a>Funzione erfcinv  
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
  
##  <a name="a-nameerfcinvfa--erfcinvf-function"></a><a name="erfcinvf"></a>Funzione erfcinvf  
 Calcola la funzione inversa di errore complementare di x  
  
```  
inline float erfcinvf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione inversa di errore complementare di x  
  
##  <a name="a-nameerffa--erff-function"></a><a name="erff"></a>erff (funzione)  
 Calcola la funzione di errore di x  
  
```  
inline float erff(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione di errore di x  
  
##  <a name="a-nameerfinva--erfinv-function"></a><a name="erfinv"></a>Funzione erfinv  
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
  
##  <a name="a-nameerfinvfa--erfinvf-function"></a><a name="erfinvf"></a>Funzione erfinvf  
 Calcola la funzione inversa di errore di x  
  
```  
inline float erfinvf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione inversa di errore di x  
  
##  <a name="a-nameexp10a--exp10-function"></a><a name="exp10"></a>exp10 (funzione)  
 Calcola la base&10; esponenziale dell'argomento  
  
```  
inline float exp10(float _X) restrict(amp);

 
inline double exp10(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base&10; esponenziale dell'argomento  
  
##  <a name="a-nameexp10fa--exp10f-function"></a><a name="exp10f"></a>Funzione exp10f  
 Calcola la base&10; esponenziale dell'argomento  
  
```  
inline float exp10f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base&10; esponenziale dell'argomento  
  
##  <a name="a-nameexpm1a--expm1-function"></a><a name="expm1"></a>expm1 (funzione)  
 Calcola l'esponenziale in base e dell'argomento, meno 1  
  
```  
inline float expm1(float exponent) restrict(amp);

 
inline double expm1(double exponent) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `exponent`  
 Il termine esponenziale *n* dell'espressione matematica `e` <sup>n</sup>, dove `e` è la base del logaritmo naturale.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento, meno 1  
  
##  <a name="a-nameexpm1fa--expm1f-function"></a><a name="expm1f"></a>Funzione expm1f  
 Calcola l'esponenziale in base e dell'argomento, meno 1  
  
```  
inline float expm1f(float exponent) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `exponent`  
 Il termine esponenziale *n* dell'espressione matematica `e` <sup>n</sup>, dove `e` è la base del logaritmo naturale.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento, meno 1  
  
##  <a name="a-nameexpa--exp-function"></a><a name="exp"></a>EXP (funzione)  
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
  
##  <a name="a-nameexpfa--expf-function"></a><a name="expf"></a>Funzione expf  
 Calcola l'esponenziale in base e dell'argomento  
  
```  
inline float expf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale in base e dell'argomento  
  
##  <a name="a-nameexp2a--exp2-function"></a><a name="exp2"></a>EXP2 (funzione)  
 Calcola l'esponenziale dell'argomento base-2  
  
```  
inline float exp2(float _X) restrict(amp);

 
inline double exp2(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale dell'argomento base-2  
  
##  <a name="a-nameexp2fa--exp2f-function"></a><a name="exp2f"></a>Funzione exp2f  
 Calcola l'esponenziale dell'argomento base-2  
  
```  
inline float exp2f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponenziale dell'argomento base-2  
  
##  <a name="a-namefabsa--fabs-function"></a><a name="fabs"></a>Funzione fabs  
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
  
##  <a name="a-namefabsfa--fabsf-function"></a><a name="fabsf"></a>Funzione fabsf  
 Restituisce il valore assoluto dell'argomento  
  
```  
inline float fabsf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore assoluto dell'argomento  

## <a name="a-namefdima-fdim-function"></a><a name="fdim"></a>Funzione fdim  
Calcola la differenza tra gli argomenti positiva.
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
`_X`Valore a virgola mobile `_Y` valore a virgola mobile


### <a name="return-value"></a>Valore restituito
La differenza tra x e y se x è maggiore di y; in caso contrario, +&0;.
 
## <a name="a-namefdimfa-fdimf-function"></a><a name="fdimf"></a>Funzione fdimf
Calcola la differenza tra gli argomenti positiva.
```
inline float fdimf(
   float _X,
   float _Y
) restrict(amp);
```
### <a name="parameters"></a>Parametri
`_X`Valore a virgola mobile `_Y` valore a virgola mobile

### <a name="return-value"></a>Valore restituito
La differenza tra x e y se x è maggiore di y; in caso contrario, +&0;. 
  
##  <a name="a-namefloora--floor-function"></a><a name="floor"></a>Funzione floor  
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
  
##  <a name="a-namefloorfa--floorf-function"></a><a name="floorf"></a>Funzione floorf  
 Calcola la base dell'argomento  
  
```  
inline float floorf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la base dell'argomento  

## <a name="a-namefma-fma-function"></a><a name="fma">Funzione FMA  
Calcola il prodotto del primo e secondo argomento specificato, quindi aggiunge il terzo argomento specificato per il risultato. il calcolo dell'intero viene eseguito come un'unica operazione.
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
`_X`Il primo argomento a virgola mobile.
`_Y`Il secondo argomento a virgola mobile.
`_Z`Il terzo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito
Il risultato dell'espressione ( x * y) + _Z. Il calcolo dell'intero viene eseguito come una singola operazione. vale a dire le sottoespressioni vengono calcolate a precisione infinita, e solo il risultato finale viene arrotondato. 

## <a name="a-namefmafa-fmaf-function"></a><a name="fmaf"></a>Funzione fmaf  
Calcola il prodotto del primo e secondo argomento specificato, quindi aggiunge il terzo argomento specificato per il risultato. il calcolo dell'intero viene eseguito come un'unica operazione.
```
inline float fmaf(
   float _X,
   float _Y,
   float _Z
) restrict(amp);
```  
### <a name="parameters"></a>Parametri
`_X`Il primo argomento a virgola mobile.
`_Y`Il secondo argomento a virgola mobile.
`_Z`Il terzo argomento a virgola mobile.

### <a name="return-value"></a>Valore restituito
Il risultato dell'espressione ( x * y) + _Z. Il calcolo dell'intero viene eseguito come una singola operazione. vale a dire le sottoespressioni vengono calcolate a precisione infinita, e solo il risultato finale viene arrotondato.
  
##  <a name="a-namefmaxa--fmax-function"></a><a name="fmax"></a>Funzione Fmax  
 Determinare il valore numerico massimo degli argomenti  
  
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
 Restituire il valore numerico massimo degli argomenti  
  
##  <a name="a-namefmaxfa--fmaxf-function"></a><a name="fmaxf"></a>Funzione fmaxf  
 Determinare il valore numerico massimo degli argomenti  
  
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
 Restituire il valore numerico massimo degli argomenti  
  
##  <a name="a-namefmina--fmin-function"></a><a name="fmin"></a>Funzione Fmin  
 Determinare il valore numerico minimo degli argomenti  
  
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
 Restituire il valore numerico minimo degli argomenti  
  
##  <a name="a-namefminfa--fminf-function"></a><a name="fminf"></a>Funzione fminf  
 Determinare il valore numerico minimo degli argomenti  
  
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
 Restituire il valore numerico minimo degli argomenti  
  
##  <a name="a-namefmoda--fmod-function-c-amp"></a><a name="fmod"></a>Funzione fmod (C++ AMP)  
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
 Il resto del `_X` diviso per `_Y`; ovvero, il valore di `_X`  -  `_Y` *n*, dove *n* è un numero intero in modo che la grandezza del `_X`  -  `_Y` *n* è inferiore la grandezza del `_Y`.  
  
##  <a name="a-namefmodfa--fmodf-function"></a><a name="fmodf"></a>Funzione fmodf  
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
 Il resto del `_X` diviso per `_Y`; ovvero, il valore di `_X`  -  `_Y` *n*, dove *n* è un numero intero in modo che la grandezza del `_X`  -  `_Y` *n* è inferiore la grandezza del `_Y`.  
  
##  <a name="a-namefpclassifya--fpclassify-function"></a><a name="fpclassify"></a>Funzione fpclassify  
 Classifica il valore dell'argomento come un valore NaN, infinito, normale subnormal, zero  
  
```  
inline int fpclassify(float _X) restrict(amp);

 
inline int fpclassify(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della macro classificazione numerica appropriato per il valore dell'argomento.  
  
##  <a name="a-namefrexpa--frexp-function"></a><a name="frexp"></a>Funzione frexp  
 Ottiene la mantissa ed esponente di x  
  
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
 Restituisce l'esponente dell'intero di x nel valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il x mantissa  
  
##  <a name="a-namefrexpfa--frexpf-function"></a><a name="frexpf"></a>Funzione frexpf  
 Ottiene la mantissa ed esponente di x  
  
```  
inline float frexpf(
    float _X,  
    _Out_ int* _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Exp`  
 Restituisce l'esponente dell'intero di x nel valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il x mantissa  
  
##  <a name="a-namehypota--hypot-function"></a><a name="hypot"></a>Funzione hypot  
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
  
##  <a name="a-namehypotfa--hypotf-function"></a><a name="hypotf"></a>hypotf (funzione)  
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
  
##  <a name="a-nameilogba--ilogb-function"></a><a name="ilogb"></a>Funzione ilogb  
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
  
##  <a name="a-nameilogbfa--ilogbf-function"></a><a name="ilogbf"></a>Funzione ilogbf  
 Estrarre l'esponente di x come un valore signed integer  
  
```  
inline int ilogbf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente di x come un valore signed integer  
  
##  <a name="a-nameisfinitea--isfinite-function"></a><a name="isfinite"></a>Funzione isFinite  
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
  
##  <a name="a-nameisinfa--isinf-function"></a><a name="isinf"></a>Funzione isinf  
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
  
##  <a name="a-nameisnana--isnan-function"></a><a name="isnan"></a>Funzione isNaN  
 Determina se l'argomento è NaN  
  
```  
inline int isnan(float _X) restrict(amp);

 
inline int isnan(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento è un valore NaN  
  
##  <a name="a-nameisnormala--isnormal-function"></a><a name="isnormal"></a>Funzione isnormal  
 Determina se l'argomento è una normale  
  
```  
inline int isnormal(float _X) restrict(amp);

 
inline int isnormal(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento ha un valore normale  
  
##  <a name="a-nameldexpa--ldexp-function"></a><a name="ldexp"></a>Funzione ldexp  
 Calcola un numero reale compreso tra il mantissa specificata e l'esponente.  
  
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
  
##  <a name="a-nameldexpfa--ldexpf-function"></a><a name="ldexpf"></a>Funzione ldexpf  
 Calcola un numero reale compreso tra il mantissa specificata e l'esponente.  
  
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
  
##  <a name="a-namelgammaa--lgamma-function"></a><a name="lgamma"></a>Funzione lgamma  
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
  
##  <a name="a-namelgammafa--lgammaf-function"></a><a name="lgammaf"></a>Funzione lgammaf  
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
  
##  <a name="a-nameloga--log-function"></a><a name="log"></a>Funzione log  
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
  
##  <a name="a-namelog10a--log10-function"></a><a name="log10"></a>LOG10 (funzione)  
 Calcola il logaritmo in base&10; dell'argomento  
  
```  
inline float log10(float _X) restrict(amp);

 
inline double log10(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base&10; dell'argomento  
  
##  <a name="a-namelog10fa--log10f-function"></a><a name="log10f"></a>Funzione log10f  
 Calcola il logaritmo in base&10; dell'argomento  
  
```  
inline float log10f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base&10; dell'argomento  
  
##  <a name="a-namelog1pa--log1p-function"></a><a name="log1p"></a>Funzione log1p  
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
  
##  <a name="a-namelog1pfa--log1pf-function"></a><a name="log1pf"></a>Funzione log1pf  
 Calcola il logaritmo di base e di 1 e l'argomento  
  
```  
inline float log1pf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo di base e di 1 e l'argomento  
  
##  <a name="a-namelog2a--log2-function"></a><a name="log2"></a>LOG2 (funzione)  
 Calcola il logaritmo in base&2; dell'argomento  
  
```  
inline float log2(float _X) restrict(amp);

 
inline double log2(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base&10; dell'argomento  
  
##  <a name="a-namelog2fa--log2f-function"></a><a name="log2f"></a>Funzione log2f  
 Calcola il logaritmo in base&2; dell'argomento  
  
```  
inline float log2f(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base&10; dell'argomento  
  
##  <a name="a-namelogba--logb-function"></a><a name="logb"></a>logb (funzione)  
 Estrae l'esponente di x, come un valore signed integer nel formato a virgola mobile  
  
```  
inline float logb(float _X) restrict(amp);

 
inline double logb(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente firmato del x  
  
##  <a name="a-namelogbfa--logbf-function"></a><a name="logbf"></a>logbf (funzione)  
 Estrae l'esponente di x, come un valore signed integer nel formato a virgola mobile  
  
```  
inline float logbf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'esponente firmato del x  
  
##  <a name="a-namelogfa--logf-function"></a><a name="logf"></a>Funzione logf  
 Calcola il logaritmo di base e dell'argomento  
  
```  
inline float logf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo di base e dell'argomento  
  
##  <a name="a-namemodfa--modf-function"></a><a name="modf"></a>Funzione modf  
 Divide l'argomento specificato in frazionari e parti intere.  
  
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
  
 `_Iptr`(il parametro)  
 La parte intera di `_X`, come un valore a virgola mobile.  
  
### <a name="return-value"></a>Valore restituito  
 La parte decimale con segno del `_X`.  
  
##  <a name="a-namemodffa--modff-function"></a><a name="modff"></a>Funzione modff  
 Divide l'argomento specificato in frazionari e parti intere.  
  
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
  
##  <a name="a-namenana--nan-function"></a><a name="nan"></a>NaN (funzione)  
 Restituisce un valore NaN non interattivo  
  
```  
inline double nan(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una costante NaN, se disponibile, con il contenuto indicato in x  
  
##  <a name="a-namenanfa--nanf-function"></a><a name="nanf"></a>nanf (funzione)  
 Restituisce un valore NaN non interattivo  
  
```  
inline float nanf(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una costante NaN, se disponibile, con il contenuto indicato in x  
  
##  <a name="a-namenearbyinta--nearbyint-function"></a><a name="nearbyint"></a>Funzione nearbyint  
 Consente di arrotondare l'argomento su un valore integer nel formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.  
  
```  
inline float nearbyint(float _X) restrict(amp);

 
inline double nearbyint(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore intero arrotondato.  
  
##  <a name="a-namenearbyintfa--nearbyintf-function"></a><a name="nearbyintf"></a>Funzione nearbyintf  
 Consente di arrotondare l'argomento su un valore integer nel formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.  
  
```  
inline float nearbyintf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore intero arrotondato.  
  
##  <a name="a-namenextaftera--nextafter-function"></a><a name="nextafter"></a>nextafter (funzione)  
 Determinare il successivo valore, rappresentabile nel tipo della funzione, dopo x nella direzione di y  
  
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
 Restituisce il successivo valore rappresentabile, il tipo della funzione, dopo x nella direzione di y  
  
##  <a name="a-namenextafterfa--nextafterf-function"></a><a name="nextafterf"></a>Funzione nextafterf  
 Determinare il successivo valore, rappresentabile nel tipo della funzione, dopo x nella direzione di y  
  
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
 Restituisce il successivo valore rappresentabile, il tipo della funzione, dopo x nella direzione di y  
  
##  <a name="a-namephia--phi-function"></a><a name="phi"></a>Funzione Phi  
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
  
##  <a name="a-namephifa--phif-function"></a><a name="phif"></a>Funzione phif  
 Restituisce la funzione distribuzione cumulativa dell'argomento  
  
```  
inline float phif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione distribuzione cumulativa dell'argomento  
  
##  <a name="a-namepowa--pow-function"></a><a name="pow"></a>Funzione Pow  
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
  
##  <a name="a-namepowfa--powf-function"></a><a name="powf"></a>Funzione powf  
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
  
##  <a name="a-nameprobita--probit-function"></a><a name="probit"></a>Funzione probit  
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
  
##  <a name="a-nameprobitfa--probitf-function"></a><a name="probitf"></a>Funzione probitf  
 Restituisce la funzione distribuzione cumulativa inversa dell'argomento  
  
```  
inline float probitf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la funzione distribuzione cumulativa inversa dell'argomento  
  
##  <a name="a-namercbrta--rcbrt-function"></a><a name="rcbrt"></a>Funzione rcbrt  
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
  
##  <a name="a-namercbrtfa--rcbrtf-function"></a><a name="rcbrtf"></a>Funzione rcbrtf  
 Restituisce il reciproco della radice cubica dell'argomento  
  
```  
inline float rcbrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il reciproco della radice cubica dell'argomento  
  
##  <a name="a-nameremaindera--remainder-function"></a><a name="remainder"></a>Funzione Remainder  
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
  
##  <a name="a-nameremainderfa--remainderf-function"></a><a name="remainderf"></a>Funzione remainderf  
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
  
##  <a name="a-nameremquoa--remquo-function"></a><a name="remquo"></a>remquo (funzione)  
 Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Inoltre calcola il quoziente del separatore del primo argomento specificato diviso per il separatore del secondo argomento specificato e restituisce il quoziente utilizzando il percorso specificato nel terzo argomento.  
  
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
  
 `_Quo`(il parametro)  
 L'indirizzo di un intero che viene utilizzato per restituire il quoziente dei componenti frazionari di `_X` diviso i bit frazionari di `_Y`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il resto di `_X` diviso `_Y`.  
  
##  <a name="a-nameremquofa--remquof-function"></a><a name="remquof"></a>remquof (funzione)  
 Calcola il resto del primo argomento specificato diviso per il secondo argomento specificato. Inoltre calcola il quoziente del separatore del primo argomento specificato diviso per il separatore del secondo argomento specificato e restituisce il quoziente utilizzando il percorso specificato nel terzo argomento.  
  
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
  
 `_Quo`(il parametro)  
 L'indirizzo di un intero che viene utilizzato per restituire il quoziente dei componenti frazionari di `_X` diviso i bit frazionari di `_Y`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il resto di `_X` diviso `_Y`.  
  
##  <a name="a-namerounda--round-function"></a><a name="round"></a>Round (funzione)  
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
  
##  <a name="a-nameroundfa--roundf-function"></a><a name="roundf"></a>Funzione roundf  
 Arrotonda x all'intero più vicino  
  
```  
inline float roundf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'intero più vicino di x  
  
##  <a name="a-namersqrta--rsqrt-function"></a><a name="rsqrt"></a>Funzione rsqrt  
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
  
##  <a name="a-namersqrtfa--rsqrtf-function"></a><a name="rsqrtf"></a>Funzione rsqrtf  
 Restituisce il reciproco della radice quadrata dell'argomento  
  
```  
inline float rsqrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il reciproco della radice quadrata dell'argomento  
  
##  <a name="a-namescalba--scalb-function"></a><a name="scalb"></a>scalb (funzione)  
 Moltiplica x da FLT_RADIX a y l'alimentazione  
  
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
 Restituisce x * (FLT_RADIX ^ y)  
  
##  <a name="a-namescalbfa--scalbf-function"></a><a name="scalbf"></a>Funzione scalbf  
 Moltiplica x da FLT_RADIX a y l'alimentazione  
  
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
 Restituisce x * (FLT_RADIX ^ y)  
  
##  <a name="a-namescalbna--scalbn-function"></a><a name="scalbn"></a>scalbn (funzione)  
 Moltiplica x da FLT_RADIX a y l'alimentazione  
  
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
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x * (FLT_RADIX ^ y)  
  
##  <a name="a-namescalbnfa--scalbnf-function"></a><a name="scalbnf"></a>scalbnf (funzione)  
 Moltiplica x da FLT_RADIX a y l'alimentazione  
  
```  
inline float scalbnf(
    float _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x * (FLT_RADIX ^ y)  
  
##  <a name="a-namesignbita--signbit-function"></a><a name="signbit"></a>Funzione signbit  
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
  
##  <a name="a-namesignbitfa--signbitf-function"></a><a name="signbitf"></a>Funzione signbitf  
 Determina se il segno di x è negativo  
  
```  
inline int signbitf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se il segno di x è negativo  
  
##  <a name="a-namesina--sin-function"></a><a name="sin"></a>Funzione sin  
 Calcola il valore del seno dell'argomento  
  
```  
inline float sin(float _X) restrict(amp);

 
inline double sin(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno dell'argomento  
  
##  <a name="a-namesinfa--sinf-function"></a><a name="sinf"></a>Funzione sinf  
 Calcola il valore del seno dell'argomento  
  
```  
inline float sinf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno dell'argomento  
  
##  <a name="a-namesincosa--sincos-function"></a><a name="sincos"></a>Funzione sincos  
 Calcola un valore seno e il coseno di x  
  
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
 Restituisce il valore del seno di x  
  
 `_C`  
 Restituisce il valore di x coseno  
  
##  <a name="a-namesincosfa--sincosf-function"></a><a name="sincosf"></a>Funzione sincosf  
 Calcola un valore seno e il coseno di x  
  
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
 Restituisce il valore del seno di x  
  
 `_C`  
 Restituisce il valore di x coseno  
  
##  <a name="a-namesinha--sinh-function"></a><a name="sinh"></a>Funzione SINH  
 Calcola il valore del seno iperbolico dell'argomento  
  
```  
inline float sinh(float _X) restrict(amp);

 
inline double sinh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno iperbolico dell'argomento  
  
##  <a name="a-namesinhfa--sinhf-function"></a><a name="sinhf"></a>Funzione sinhf  
 Calcola il valore del seno iperbolico dell'argomento  
  
```  
inline float sinhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno iperbolico dell'argomento  
  
##  <a name="a-namesinpia--sinpi-function"></a><a name="sinpi"></a>Funzione sinpi  
 Calcola il valore del seno di pi greco * x  
  
```  
inline float sinpi(float _X) restrict(amp);

 
inline double sinpi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno di pi greco * x  
  
##  <a name="a-namesinpifa--sinpif-function"></a><a name="sinpif"></a>Funzione sinpif  
 Calcola il valore del seno di pi greco * x  
  
```  
inline float sinpif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del seno di pi greco * x  
  
##  <a name="a-namesqrta--sqrt-function"></a><a name="sqrt"></a>sqrt (funzione)  
 Calcola la radice di squre dell'argomento  
  
```  
inline float sqrt(float _X) restrict(amp);

 
inline double sqrt(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice di squre dell'argomento  
  
##  <a name="a-namesqrtfa--sqrtf-function"></a><a name="sqrtf"></a>Funzione sqrtf  
 Calcola la radice di squre dell'argomento  
  
```  
inline float sqrtf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la radice di squre dell'argomento  
  
##  <a name="a-nametana--tan-function"></a><a name="tan"></a>tan (funzione)  
 Calcola il valore dell'argomento tangente  
  
```  
inline float tan(float _X) restrict(amp);

 
inline double tan(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'argomento tangente  
  
##  <a name="a-nametanfa--tanf-function"></a><a name="tanf"></a>Funzione tanf  
 Calcola il valore dell'argomento tangente  
  
```  
inline float tanf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore dell'argomento tangente  
  
##  <a name="a-nametanha--tanh-function"></a><a name="tanh"></a>Tanh (funzione)  
 Calcola il valore della tangente iperbolico dell'argomento  
  
```  
inline float tanh(float _X) restrict(amp);

 
inline double tanh(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della tangente iperbolico dell'argomento  
  
##  <a name="a-nametanhfa--tanhf-function"></a><a name="tanhf"></a>Funzione tanhf  
 Calcola il valore della tangente iperbolico dell'argomento  
  
```  
inline float tanhf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore della tangente iperbolico dell'argomento  
  
##  <a name="a-nametanpia--tanpi-function"></a><a name="tanpi"></a>Funzione tanpi  
 Calcola il valore di pi greco tangente * x  
  
```  
inline float tanpi(float _X) restrict(amp);

 
inline double tanpi(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di pi greco tangente * x  
  
##  <a name="a-nametanpifa--tanpif-function"></a><a name="tanpif"></a>Funzione tanpif  
 Calcola il valore di pi greco tangente * x  
  
```  
inline float tanpif(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di pi greco tangente * x  
  
##  <a name="a-nametgammaa--tgamma-function"></a><a name="tgamma"></a>Funzione tgamma  
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
  
##  <a name="a-nametgammafa--tgammaf-function"></a><a name="tgammaf"></a>Funzione tgammaf  
 Calcola la funzione gamma di x  
  
```  
inline float tgammaf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il risultato della funzione gamma di x  
  
##  <a name="a-nametrunca--trunc-function"></a><a name="trunc"></a>Funzione trunc  
 Tronca l'argomento per il componente numero intero  
  
```  
inline float trunc(float _X) restrict(amp);

 
inline double trunc(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il componente numero intero dell'argomento  
  
##  <a name="a-nametruncfa--truncf-function"></a><a name="truncf"></a>Funzione truncf  
 Tronca l'argomento per il componente numero intero  
  
```  
inline float truncf(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il componente numero intero dell'argomento  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Concurrency:: precise_math](concurrency-precise-math-namespace.md)

