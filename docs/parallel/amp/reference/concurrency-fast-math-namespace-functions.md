---
title: 'Funzioni dello spazio dei nomi Concurrency:: fast_math | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: f5763d62-795b-4de6-a7a5-c7115f158708
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 4a01f48a7d087281ab1e9222d1077e92ab8b0d6c
ms.openlocfilehash: 0545a57c492f5c1872c71c04c99b54f86b644102
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencyfastmath-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency:: fast_math
||||  
|-|-|-|  
|[acos (funzione)](#acos)|[Funzione acosf](#acosf)|[asin (funzione)](#asin)|  
|[Funzione asinf](#asinf)|[atan (funzione)](#atan)|[atan2 (funzione)](#atan2)|  
|[Funzione atan2f](#atan2f)|[Funzione atanf](#atanf)|[ceil (funzione)](#ceil)|  
|[Funzione ceilf](#ceilf)|[cos (funzione)](#cos)|[Funzione cosf](#cosf)|  
|[Funzione COSH](#cosh)|[Funzione coshf](#coshf)|[EXP (funzione)](#exp)|  
|[EXP2 (funzione)](#exp2)|[Funzione exp2f](#exp2f)|[Funzione expf](#expf)|  
|[Funzione fabs](#fabs)|[Funzione fabsf](#fabsf)|[Funzione floor](#floor)|  
|[Funzione floorf](#floorf)|[Funzione Fmax](#fmax)|[Funzione fmaxf](#fmaxf)|  
|[Funzione Fmin](#fmin)|[Funzione fminf](#fminf)|[Funzione fmod](#fmod)|  
|[Funzione fmodf](#fmodf)|[Funzione frexp](#frexp)|[Funzione frexpf](#frexpf)|  
|[Funzione isFinite](#isfinite)|[Funzione isinf](#isinf)|[Funzione isNaN](#isnan)|  
|[Funzione ldexp](#ldexp)|[Funzione ldexpf](#ldexpf)|[Funzione log](#log)|  
|[LOG10 (funzione)](#log10)|[Funzione log10f](#log10f)|[LOG2 (funzione)](#log2)|  
|[Funzione log2f](#log2f)|[Funzione logf](#logf)|[Funzione modf](#modf)|  
|[Funzione modff](#modff)|[Funzione Pow](#pow)|[Funzione powf](#powf)|  
|[Round (funzione)](#round)|[Funzione roundf](#roundf)|[Funzione rsqrt](#rsqrt)|  
|[Funzione rsqrtf](#rsqrtf)|[Funzione signbit](#signbit)|[Funzione signbitf](#signbitf)|  
|[Funzione sin](#sin)|[Funzione sincos](#sincos)|[Funzione sincosf](#sincosf)|  
|[Funzione sinf](#sinf)|[Funzione SINH](#sinh)|[Funzione sinhf](#sinhf)|  
|[sqrt (funzione)](#sqrt)|[Funzione sqrtf](#sqrtf)|[tan (funzione)](#tan)|  
|[Funzione tanf](#tanf)|[Tanh (funzione)](#tanh)|[Funzione tanhf](#tanhf)|  
|[Funzione trunc](#trunc)|[Funzione truncf](#truncf)|  
  
##  <a name="a-nameacosa--acos-function"></a><a name="acos"></a>acos (funzione)  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float acos(float _X) restrict(amp);
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
  
##  <a name="a-nameasina--asin-function"></a><a name="asin"></a>asin (funzione)  
 Calcola l'arcoseno dell'argomento  
  
```  
inline float asin(float _X) restrict(amp);
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
  
##  <a name="a-nameatana--atan-function"></a><a name="atan"></a>atan (funzione)  
 Calcola l'arcotangente dell'argomento  
  
```  
inline float atan(float _X) restrict(amp);
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
  
##  <a name="a-nameceila--ceil-function"></a><a name="ceil"></a>ceil (funzione)  
 Calcola il limite massimo dell'argomento  
  
```  
inline float ceil(float _X) restrict(amp);
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
  
##  <a name="a-namecosa--cos-function"></a><a name="cos"></a>cos (funzione)   
 Calcola il coseno dell'argomento  
  
```  
inline float cos(float _X) restrict(amp);
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
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore del coseno iperbolico dell'argomento  
  
##  <a name="a-nameexpa--exp-function"></a><a name="exp"></a>EXP (funzione)  
 Calcola l'esponenziale in base e dell'argomento  
  
```  
inline float exp(float _X) restrict(amp);
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
  
##  <a name="a-namefabsa--fabs-function"></a><a name="fabs"></a>Funzione fabs  
 Restituisce il valore assoluto dell'argomento  
  
```  
inline float fabs(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
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
  
##  <a name="a-namefloora--floor-function"></a><a name="floor"></a>Funzione floor  
 Calcola la base dell'argomento  
  
```  
inline float floor(float _X) restrict(amp);
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
  
##  <a name="a-namefmaxa--fmax-function"></a><a name="fmax"></a>Funzione Fmax  
 Determinare il valore numerico massimo degli argomenti  
  
```  
inline float max(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
 `_Y`  
 Valore intero  
  
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
inline float min(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
 `_Y`  
 Valore intero  
  
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
  
##  <a name="a-namefmoda--fmod-function"></a><a name="fmod"></a>Funzione fmod  
 Calcola il resto a virgola mobile di x/y  
  
```  
inline float fmod(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il resto a virgola mobile di x/y  
  
##  <a name="a-namefmodfa--fmodf-function"></a><a name="fmodf"></a>Funzione fmodf  
 Calcola il resto a virgola mobile di x/y.  
  
```  
inline float fmodf(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Y`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il resto a virgola mobile di x/y  
  
##  <a name="a-namefrexpa--frexp-function"></a><a name="frexp"></a>Funzione frexp  
 Ottiene la mantissa ed esponente di x  
  
```  
inline float frexp(
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
  
##  <a name="a-nameisfinitea--isfinite-function"></a><a name="isfinite"></a>Funzione isFinite  
 Determina se l'argomento ha un valore finito  
  
```  
inline int isfinite(float _X) restrict(amp);
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
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero se e solo se l'argomento è un valore NaN  
  
##  <a name="a-nameldexpa--ldexp-function"></a><a name="ldexp"></a>Funzione ldexp  
 Calcola un numero reale compreso tra la mantissa ed esponente  
  
```  
inline float ldexp(
    float _X,  
    int _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, mentissa  
  
 `_Exp`  
 Esponente dell'intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x * 2 ^ _Exp  
  
##  <a name="a-nameldexpfa--ldexpf-function"></a><a name="ldexpf"></a>Funzione ldexpf  
 Calcola un numero reale compreso tra la mantissa ed esponente  
  
```  
inline float ldexpf(
    float _X,  
    int _Exp) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, mentissa  
  
 `_Exp`  
 Esponente dell'intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x * 2 ^ _Exp  
  
##  <a name="a-nameloga--log-function"></a><a name="log"></a>Funzione log  
 Calcola il logaritmo di base e dell'argomento  
  
```  
inline float log(float _X) restrict(amp);
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
  
##  <a name="a-namelog2a--log2-function"></a><a name="log2"></a>LOG2 (funzione)  
 Calcola il logaritmo in base&2; dell'argomento  
  
```  
inline float log2(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il logaritmo in base&2; dell'argomento  
  
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
 Divide x in frazionari e parti intere.  
  
```  
inline float modf(
    float _X,  
    float* _Ip) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Ip`  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la parte decimale con segno del x  
  
##  <a name="a-namemodffa--modff-function"></a><a name="modff"></a>Funzione modff  
 Divide x in frazionari e parti intere.  
  
```  
inline float modff(
    float _X,  
    float* _Ip) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
 `_Ip`  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la parte decimale con segno del x  
  
##  <a name="a-namepowa--pow-function"></a><a name="pow"></a>Funzione Pow  
 Calcola x elevato alla potenza di y  
  
```  
inline float pow(
    float _X,  
    float _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile, base  
  
 `_Y`  
 Valore a virgola mobile, esponente  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di x elevato alla potenza di y  
  
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
  
##  <a name="a-namerounda--round-function"></a><a name="round"></a>Round (funzione)  
 Arrotonda x all'intero più vicino  
  
```  
inline float round(float _X) restrict(amp);
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
  
##  <a name="a-namesignbita--signbit-function"></a><a name="signbit"></a>Funzione signbit  
 Determina se il segno di x è negativo  
  
```  
inline int signbit(float _X) restrict(amp);
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
    float* _S,  
    float* _C) restrict(amp);
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
    float* _S,  
    float* _C) restrict(amp);
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
  
##  <a name="a-namesqrta--sqrt-function"></a><a name="sqrt"></a>sqrt (funzione)  
 Calcola la radice di squre dell'argomento  
  
```  
inline float sqrt(float _X) restrict(amp);
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
  
##  <a name="a-nametrunca--trunc-function"></a><a name="trunc"></a>Funzione trunc  
 Tronca l'argomento per il componente numero intero  
  
```  
inline float trunc(float _X) restrict(amp);
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
 [Namespace Concurrency:: fast_math](concurrency-fast-math-namespace.md)

