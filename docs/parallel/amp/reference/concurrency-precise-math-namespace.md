---
title: 'Namespace Concurrency:: precise_math | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_math/Concurrency::precise_math
dev_langs:
- C++
ms.assetid: ba653308-dc28-4384-b2fd-6cd718a72f91
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: b64bd3e3702701ae2685d6688d88988dd91dc5d0
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencyprecisemath-namespace"></a>Spazio dei nomi Concurrency::precise_math
Funzioni di `precise_math` dello spazio dei nomi sono conformi C99. Entrambi precisione singola e precisione doppia le versioni di ogni funzione sono incluse. Ad esempio, `acos` è la versione a precisione doppia e `acosf` è la versione a precisione singola. Queste funzioni, tra cui le funzioni e precisione singola, richiedono il supporto esteso e precisione doppia sull'acceleratore. È possibile utilizzare il [membro dati Accelerator:: supports_double_precision](accelerator-class.md#supports_double_precision) per determinare se è possibile eseguire queste funzioni in un tasto di scelta rapida specifico. 

  
## <a name="syntax"></a>Sintassi  
  
```cpp  
namespace precise_math;  
```  
  
#### <a name="parameters"></a>Parametri  
  
## <a name="members"></a>Membri  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[acos (funzione)](concurrency-precise-math-namespace-functions.md#acos)|Di overload. Calcola l'arcoseno dell'argomento|  
|[Funzione acosf](concurrency-precise-math-namespace-functions.md#acosf)|Calcola l'arcoseno dell'argomento|  
|[Acosh (funzione)](concurrency-precise-math-namespace-functions.md#acosh)|Di overload. Calcola il coseno iperbolico inverso dell'argomento|  
|[acoshf (funzione)](concurrency-precise-math-namespace-functions.md#acoshf)|Calcola il coseno iperbolico inverso dell'argomento|  
|[asin (funzione)](concurrency-precise-math-namespace-functions.md#asin)|Di overload. Calcola l'arcoseno dell'argomento|  
|[Funzione asinf](concurrency-precise-math-namespace-functions.md#asinf)|Calcola l'arcoseno dell'argomento|  
|[Asinh (funzione)](concurrency-precise-math-namespace-functions.md#asinh)|Di overload. Calcola il seno iperbolico inverso dell'argomento|  
|[asinhf (funzione)](concurrency-precise-math-namespace-functions.md#asinhf)|Calcola il seno iperbolico inverso dell'argomento|  
|[atan (funzione)](concurrency-precise-math-namespace-functions.md#atan)|Di overload. Calcola l'arcotangente dell'argomento|  
|[atan2 (funzione)](concurrency-precise-math-namespace-functions.md#atan2)|Di overload. Calcola l'arcotangente di y/x|  
|[Funzione atan2f](concurrency-precise-math-namespace-functions.md#atan2f)|Calcola l'arcotangente di y/x|  
|[Funzione atanf](concurrency-precise-math-namespace-functions.md#atanf)|Calcola l'arcotangente dell'argomento|  
|[Atanh (funzione)](concurrency-precise-math-namespace-functions.md#atanh)|Di overload. Calcola la tangente iperbolica inversa dell'argomento|  
|[atanhf (funzione)](concurrency-precise-math-namespace-functions.md#atanhf)|Calcola la tangente iperbolica inversa dell'argomento|  
|[Funzione cbrt](concurrency-precise-math-namespace-functions.md#cbrt)|Di overload. Calcola la radice cubica reale dell'argomento|  
|[cbrtf (funzione)](concurrency-precise-math-namespace-functions.md#cbrtf)|Calcola la radice cubica reale dell'argomento|  
|[ceil (funzione)](concurrency-precise-math-namespace-functions.md#ceil)|Di overload. Calcola il limite massimo dell'argomento|  
|[Funzione ceilf](concurrency-precise-math-namespace-functions.md#ceilf)|Calcola il limite massimo dell'argomento|  
|[copysign (funzione)](concurrency-precise-math-namespace-functions.md#copysign)|Di overload. Produce un valore con la grandezza del x e il segno di y|  
|[copysignf (funzione)](concurrency-precise-math-namespace-functions.md#copysignf)|Produce un valore con la grandezza del x e il segno di y|  
|[cos (funzione)](concurrency-precise-math-namespace-functions.md#cos)|Di overload. Calcola il coseno dell'argomento|  
|[Funzione cosf](concurrency-precise-math-namespace-functions.md#cosf)|Calcola il coseno dell'argomento|  
|[Funzione COSH](concurrency-precise-math-namespace-functions.md#cosh)|Di overload. Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione coshf](concurrency-precise-math-namespace-functions.md#coshf)|Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione cospi](concurrency-precise-math-namespace-functions.md#cospi)|Di overload. Calcola il valore di pi greco coseno * x|  
|[Funzione cospif](concurrency-precise-math-namespace-functions.md#cospif)|Calcola il valore di pi greco coseno * x|  
|[Erf (funzione)](concurrency-precise-math-namespace-functions.md#erf)|Di overload. Calcola la funzione di errore di x|  
|[ErfC (funzione)](concurrency-precise-math-namespace-functions.md#erfc)|Di overload. Calcola la funzione di errore complementare di x|  
|[Funzione erfcf](concurrency-precise-math-namespace-functions.md#erfcf)|Calcola la funzione di errore complementare di x|  
|[Funzione erfcinv](concurrency-precise-math-namespace-functions.md#erfcinv)|Di overload. Calcola la funzione inversa di errore complementare di x|  
|[Funzione erfcinvf](concurrency-precise-math-namespace-functions.md#erfcinvf)|Calcola la funzione inversa di errore complementare di x|  
|[erff (funzione)](concurrency-precise-math-namespace-functions.md#erff)|Calcola la funzione di errore di x|  
|[Funzione erfinv](concurrency-precise-math-namespace-functions.md#erfinv)|Di overload. Calcola la funzione inversa di errore di x|  
|[Funzione erfinvf](concurrency-precise-math-namespace-functions.md#erfinvf)|Calcola la funzione inversa di errore di x|  
|[EXP (funzione)](concurrency-precise-math-namespace-functions.md#exp)|Di overload. Calcola l'esponenziale in base e dell'argomento|  
|[exp10 (funzione)](concurrency-precise-math-namespace-functions.md#exp10)|Di overload. Calcola la base&10; esponenziale dell'argomento|  
|[Funzione exp10f](concurrency-precise-math-namespace-functions.md#exp10f)|Calcola la base&10; esponenziale dell'argomento|  
|[EXP2 (funzione)](concurrency-precise-math-namespace-functions.md#exp2)|Di overload. Calcola l'esponenziale dell'argomento base-2|  
|[Funzione exp2f](concurrency-precise-math-namespace-functions.md#exp2f)|Calcola l'esponenziale dell'argomento base-2|  
|[Funzione expf](concurrency-precise-math-namespace-functions.md#expf)|Calcola l'esponenziale in base e dell'argomento|  
|[expm1 (funzione)](concurrency-precise-math-namespace-functions.md#expm1)|Di overload. Calcola l'esponenziale in base e dell'argomento, meno 1|  
|[Funzione expm1f](concurrency-precise-math-namespace-functions.md#expm1f)|Calcola l'esponenziale in base e dell'argomento, meno 1|  
|[Funzione fabs](concurrency-precise-math-namespace-functions.md#fabs)|Di overload. Restituisce il valore assoluto dell'argomento|  
|[Funzione fabsf](concurrency-precise-math-namespace-functions.md#fabsf)|Restituisce il valore assoluto dell'argomento|  
|[Funzione fdim](concurrency-precise-math-namespace-functions.md#fdim)|Di overload. Determina la differenza tra gli argomenti positiva|  
|[Funzione fdimf](concurrency-precise-math-namespace-functions.md#fdimf)|Determina la differenza tra gli argomenti positiva|  
|[Funzione floor](concurrency-precise-math-namespace-functions.md#floor)|Di overload. Calcola la base dell'argomento|  
|[Funzione floorf](concurrency-precise-math-namespace-functions.md#floorf)|Calcola la base dell'argomento|  
|[Funzione FMA](concurrency-precise-math-namespace-functions.md#fma)|Di overload. Calcolo ( x * y) + _Z, arrotondato come un'unica operazione ternaria|  
|[Funzione fmaf](concurrency-precise-math-namespace-functions.md#fmaf)|Calcolo ( x * y) + _Z, arrotondato come un'unica operazione ternaria|  
|[Funzione Fmax](concurrency-precise-math-namespace-functions.md#fmax)|Di overload. Determinare il valore numerico massimo degli argomenti|  
|[Funzione fmaxf](concurrency-precise-math-namespace-functions.md#fmaxf)|Determinare il valore numerico massimo degli argomenti|  
|[Funzione Fmin](concurrency-precise-math-namespace-functions.md#fmin)|Di overload. Determinare il valore numerico minimo degli argomenti|  
|[Funzione fminf](concurrency-precise-math-namespace-functions.md#fminf)|Determinare il valore numerico minimo degli argomenti|  
|[Funzione fmod (C++ AMP)](concurrency-precise-math-namespace-functions.md#fmod)|Di overload. Calcola il resto a virgola mobile di x/y|  
|[Funzione fmodf](concurrency-precise-math-namespace-functions.md#fmodf)|Calcola il resto a virgola mobile di x/y|  
|[Funzione fpclassify](concurrency-precise-math-namespace-functions.md#fpclassify)|Di overload. Classifica il valore dell'argomento come un valore NaN, infinito, normale subnormal, zero|  
|[Funzione frexp](concurrency-precise-math-namespace-functions.md#frexp)|Di overload. Ottiene la mantissa ed esponente di x|  
|[Funzione frexpf](concurrency-precise-math-namespace-functions.md#frexpf)|Ottiene la mantissa ed esponente di x|  
|[Funzione hypot](concurrency-precise-math-namespace-functions.md#hypot)|Di overload. Calcola la radice quadrata della somma dei quadrati di x e y|  
|[hypotf (funzione)](concurrency-precise-math-namespace-functions.md#hypotf)|Calcola la radice quadrata della somma dei quadrati di x e y|  
|[Funzione ilogb](concurrency-precise-math-namespace-functions.md#ilogb)|Di overload. Estrarre l'esponente di x come un valore signed integer|  
|[Funzione ilogbf](concurrency-precise-math-namespace-functions.md#ilogbf)|Estrarre l'esponente di x come un valore signed integer|  
|[Funzione isFinite](concurrency-precise-math-namespace-functions.md#isfinite)|Di overload. Determina se l'argomento ha un valore finito|  
|[Funzione isinf](concurrency-precise-math-namespace-functions.md#isinf)|Di overload. Determina se l'argomento è infinito|  
|[Funzione isNaN](concurrency-precise-math-namespace-functions.md#isnan)|Di overload. Determina se l'argomento è NaN|  
|[Funzione isnormal](concurrency-precise-math-namespace-functions.md#isnormal)|Di overload. Determina se l'argomento è una normale|  
|[Funzione ldexp](concurrency-precise-math-namespace-functions.md#ldexp)|Di overload. Calcola un numero reale compreso tra la mantissa ed esponente|  
|[Funzione ldexpf](concurrency-precise-math-namespace-functions.md#ldexpf)|Calcola un numero reale compreso tra la mantissa ed esponente|  
|[Funzione lgamma](concurrency-precise-math-namespace-functions.md#lgamma)|Di overload. Calcola il logaritmo naturale del valore assoluto della gamma dell'argomento|  
|[Funzione lgammaf](concurrency-precise-math-namespace-functions.md#lgammaf)|Calcola il logaritmo naturale del valore assoluto della gamma dell'argomento|  
|[Funzione log](concurrency-precise-math-namespace-functions.md#log)|Di overload. Calcola il logaritmo di base e dell'argomento|  
|[LOG10 (funzione)](concurrency-precise-math-namespace-functions.md#log10)|Di overload. Calcola il logaritmo in base&10; dell'argomento|  
|[Funzione log10f](concurrency-precise-math-namespace-functions.md#log10f)|Calcola il logaritmo in base&10; dell'argomento|  
|[Funzione log1p](concurrency-precise-math-namespace-functions.md#log1p)|Di overload. Calcola il logaritmo di base e di 1 e l'argomento|  
|[Funzione log1pf](concurrency-precise-math-namespace-functions.md#log1pf)|Calcola il logaritmo di base e di 1 e l'argomento|  
|[LOG2 (funzione)](concurrency-precise-math-namespace-functions.md#log2)|Di overload. Calcola il logaritmo in base&2; dell'argomento|  
|[Funzione log2f](concurrency-precise-math-namespace-functions.md#log2f)|Calcola il logaritmo in base&2; dell'argomento|  
|[logb (funzione)](concurrency-precise-math-namespace-functions.md#logb)|Di overload. Estrae l'esponente di x, come un valore signed integer nel formato a virgola mobile|  
|[logbf (funzione)](concurrency-precise-math-namespace-functions.md#logbf)|Estrae l'esponente di x, come un valore signed integer nel formato a virgola mobile|  
|[Funzione logf](concurrency-precise-math-namespace-functions.md#logf)|Calcola il logaritmo di base e dell'argomento|  
|[Funzione modf](concurrency-precise-math-namespace-functions.md#modf)|Di overload. Divide x in frazionari e parti intere.|  
|[Funzione modff](concurrency-precise-math-namespace-functions.md#modff)|Divide x in frazionari e parti intere.|  
|[NaN (funzione)](concurrency-precise-math-namespace-functions.md#nan)|Restituisce un valore NaN non interattivo|  
|[nanf (funzione)](concurrency-precise-math-namespace-functions.md#nanf)|Restituisce un valore NaN non interattivo|  
|[Funzione nearbyint](concurrency-precise-math-namespace-functions.md#nearbyint)|Di overload. Consente di arrotondare l'argomento su un valore integer nel formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.|  
|[Funzione nearbyintf](concurrency-precise-math-namespace-functions.md#nearbyintf)|Consente di arrotondare l'argomento su un valore integer nel formato a virgola mobile, utilizzando la direzione di arrotondamento corrente.|  
|[nextafter (funzione)](concurrency-precise-math-namespace-functions.md#nextafter)|Di overload. Determinare il successivo valore, rappresentabile nel tipo della funzione, dopo x nella direzione di y|  
|[Funzione nextafterf](concurrency-precise-math-namespace-functions.md#nextafterf)|Determinare il successivo valore, rappresentabile nel tipo della funzione, dopo x nella direzione di y|  
|[Funzione Phi](concurrency-precise-math-namespace-functions.md#phi)|Di overload. Restituisce la funzione distribuzione cumulativa dell'argomento|  
|[Funzione phif](concurrency-precise-math-namespace-functions.md#phif)|Restituisce la funzione distribuzione cumulativa dell'argomento|  
|[Funzione Pow](concurrency-precise-math-namespace-functions.md#pow)|Di overload. Calcola x elevato alla potenza di y|  
|[Funzione powf](concurrency-precise-math-namespace-functions.md#powf)|Calcola x elevato alla potenza di y|  
|[Funzione probit](concurrency-precise-math-namespace-functions.md#probit)|Di overload. Restituisce la funzione distribuzione cumulativa inversa dell'argomento|  
|[Funzione probitf](concurrency-precise-math-namespace-functions.md#probitf)|Restituisce la funzione distribuzione cumulativa inversa dell'argomento|  
|[Funzione rcbrt](concurrency-precise-math-namespace-functions.md#rcbrt)|Di overload. Restituisce il reciproco della radice cubica dell'argomento|  
|[Funzione rcbrtf](concurrency-precise-math-namespace-functions.md#rcbrtf)|Restituisce il reciproco della radice cubica dell'argomento|  
|[Funzione Remainder](concurrency-precise-math-namespace-functions.md#remainder)|Di overload. Calcola il resto: y REM x|  
|[Funzione remainderf](concurrency-precise-math-namespace-functions.md#remainderf)|Calcola il resto: y REM x|  
|[remquo (funzione)](concurrency-precise-math-namespace-functions.md#remquo)|Di overload. Calcola il resto come y REM x stesso. Inoltre calcola i bit più bassi 23 di x il quoziente y e assegna tale valore lo stesso segno x/y. Nel valore integer a cui puntato _Quo archivia questo valore con segno.|  
|[remquof (funzione)](concurrency-precise-math-namespace-functions.md#remquof)|Calcola il resto come y REM x stesso. Inoltre calcola i bit più bassi 23 di x il quoziente y e assegna tale valore lo stesso segno x/y. Nel valore integer a cui puntato _Quo archivia questo valore con segno.|  
|[Round (funzione)](concurrency-precise-math-namespace-functions.md#round)|Di overload. Arrotonda x all'intero più vicino|  
|[Funzione roundf](concurrency-precise-math-namespace-functions.md#roundf)|Arrotonda x all'intero più vicino|  
|[Funzione rsqrt](concurrency-precise-math-namespace-functions.md#rsqrt)|Di overload. Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione rsqrtf](concurrency-precise-math-namespace-functions.md#rsqrtf)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[scalb (funzione)](concurrency-precise-math-namespace-functions.md#scalb)|Di overload. Moltiplica x da FLT_RADIX a y l'alimentazione|  
|[Funzione scalbf](concurrency-precise-math-namespace-functions.md#scalbf)|Moltiplica x da FLT_RADIX a y l'alimentazione|  
|[scalbn (funzione)](concurrency-precise-math-namespace-functions.md#scalbn)|Di overload. Moltiplica x da FLT_RADIX a y l'alimentazione|  
|[scalbnf (funzione)](concurrency-precise-math-namespace-functions.md#scalbnf)|Moltiplica x da FLT_RADIX a y l'alimentazione|  
|[Funzione signbit](concurrency-precise-math-namespace-functions.md#signbit)|Di overload. Determina se il segno di x è negativo|  
|[Funzione signbitf](concurrency-precise-math-namespace-functions.md#signbitf)|Determina se il segno di x è negativo|  
|[Funzione sin](concurrency-precise-math-namespace-functions.md#sin)|Di overload. Calcola il valore del seno dell'argomento|  
|[Funzione sincos](concurrency-precise-math-namespace-functions.md#sincos)|Di overload. Calcola un valore seno e il coseno di x|  
|[Funzione sincosf](concurrency-precise-math-namespace-functions.md#sincosf)|Calcola un valore seno e il coseno di x|  
|[Funzione sinf](concurrency-precise-math-namespace-functions.md#sinf)|Calcola il valore del seno dell'argomento|  
|[Funzione SINH](concurrency-precise-math-namespace-functions.md#sinh)|Di overload. Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sinhf](concurrency-precise-math-namespace-functions.md#sinhf)|Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sinpi](concurrency-precise-math-namespace-functions.md#sinpi)|Di overload. Calcola il valore del seno di pi greco * x|  
|[Funzione sinpif](concurrency-precise-math-namespace-functions.md#sinpif)|Calcola il valore del seno di pi greco * x|  
|[sqrt (funzione)](concurrency-precise-math-namespace-functions.md#sqrt)|Di overload. Calcola la radice di squre dell'argomento|  
|[Funzione sqrtf](concurrency-precise-math-namespace-functions.md#sqrtf)|Calcola la radice di squre dell'argomento|  
|[tan (funzione)](concurrency-precise-math-namespace-functions.md#tan)|Di overload. Calcola il valore dell'argomento tangente|  
|[Funzione tanf](concurrency-precise-math-namespace-functions.md#tanf)|Calcola il valore dell'argomento tangente|  
|[Tanh (funzione)](concurrency-precise-math-namespace-functions.md#tanh)|Di overload. Calcola il valore della tangente iperbolico dell'argomento|  
|[Funzione tanhf](concurrency-precise-math-namespace-functions.md#tanhf)|Calcola il valore della tangente iperbolico dell'argomento|  
|[Funzione tanpi](concurrency-precise-math-namespace-functions.md#tanpi)|Di overload. Calcola il valore di pi greco tangente * x|  
|[Funzione tanpif](concurrency-precise-math-namespace-functions.md#tanpif)|Calcola il valore di pi greco tangente * x|  
|[Funzione tgamma](concurrency-precise-math-namespace-functions.md#tgamma)|Di overload. Calcola la funzione gamma di x|  
|[Funzione tgammaf](concurrency-precise-math-namespace-functions.md#tgammaf)|Calcola la funzione gamma di x|  
|[Funzione trunc](concurrency-precise-math-namespace-functions.md#trunc)|Di overload. Tronca l'argomento per il componente numero intero|  
|[Funzione truncf](concurrency-precise-math-namespace-functions.md#truncf)|Tronca l'argomento per il componente numero intero|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_math. h  
  
 **Spazio dei nomi:** Concurrency  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

