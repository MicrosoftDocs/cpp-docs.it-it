---
title: 'Namespace Concurrency:: fast_math | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amp_math/Concurrency::fast_math
dev_langs:
- C++
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 293452bf0a01f7f83a8a41bcb511bc57c9d45f26
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencyfastmath-namespace"></a>Spazio dei nomi Concurrency::fast_math
Funzioni di `fast_math` dello spazio dei nomi sono offre una precisione inferiore, supportano sola e con precisione singola (`float`) e chiamare le funzioni intrinseche di DirectX. Esistono due versioni di ogni funzione, ad esempio `cos` e `cosf`. Entrambe le versioni accettano e restituiscono un `float`, ma ogni chiama intrinseco di DirectX stesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace fast_math;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cos (funzione) (fast_math)](concurrency-fast-math-namespace-functions.md#cos)|Calcola l'arcoseno dell'argomento|  
|[Funzione cosf (fast_math)](concurrency-fast-math-namespace-functions.md#cosf)|Calcola l'arcoseno dell'argomento|  
|[Funzione ASIN (fast_math)](concurrency-fast-math-namespace-functions.md#asin)|Calcola l'arcoseno dell'argomento|  
|[Funzione asinf (fast_math)](concurrency-fast-math-namespace-functions.md#asinf)|Calcola l'arcoseno dell'argomento|  
|[Funzione ATAN (fast_math)](concurrency-fast-math-namespace-functions.md#atan)|Calcola l'arcotangente dell'argomento|  
|[Funzione ATAN2 (fast_math)](concurrency-fast-math-namespace-functions.md#atan2)|Calcola l'arcotangente di y/x|  
|[Funzione atan2f (fast_math)](concurrency-fast-math-namespace-functions.md#atan2f)|Calcola l'arcotangente di y/x|  
|[Funzione atanf (fast_math)](concurrency-fast-math-namespace-functions.md#atanf)|Calcola l'arcotangente dell'argomento|  
|[Funzione ceil (fast_math)](concurrency-fast-math-namespace-functions.md#ceil)|Calcola il limite massimo dell'argomento|  
|[Funzione ceilf (fast_math)](concurrency-fast-math-namespace-functions.md#ceilf)|Calcola il limite massimo dell'argomento|  
|[cos (funzione) (fast_math)](concurrency-fast-math-namespace-functions.md#cos)|Calcola il coseno dell'argomento|  
|[Funzione cosf (fast_math)](concurrency-fast-math-namespace-functions.md#cosf)|Calcola il coseno dell'argomento|  
|[Funzione COSH (fast_math)](concurrency-fast-math-namespace-functions.md#cosh)|Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione coshf (fast_math)](concurrency-fast-math-namespace-functions.md#coshf)|Calcola il valore del coseno iperbolico dell'argomento|  
|[Funzione EXP (fast_math)](concurrency-fast-math-namespace-functions.md#exp)|Calcola l'esponenziale in base e dell'argomento|  
|[Funzione EXP2 (fast_math)](concurrency-fast-math-namespace-functions.md#exp2)|Calcola l'esponenziale dell'argomento base-2|  
|[Funzione exp2f (fast_math)](concurrency-fast-math-namespace-functions.md#exp2f)|Calcola l'esponenziale dell'argomento base-2|  
|[Funzione expf (fast_math)](concurrency-fast-math-namespace-functions.md#expf)|Calcola l'esponenziale in base e dell'argomento|  
|[Funzione fabs (fast_math)](concurrency-fast-math-namespace-functions.md#fabs)|Restituisce il valore assoluto dell'argomento|  
|[Funzione fabsf (fast_math)](concurrency-fast-math-namespace-functions.md#fabsf)|Restituisce il valore assoluto dell'argomento|  
|[Funzione floor (fast_math)](concurrency-fast-math-namespace-functions.md#floor)|Calcola la base dell'argomento|  
|[Funzione floorf (fast_math)](concurrency-fast-math-namespace-functions.md#floorf)|Calcola la base dell'argomento|  
|[Funzione Fmax (fast_math)](concurrency-fast-math-namespace-functions.md#fmax)|Determinare il valore numerico massimo degli argomenti|  
|[Funzione fmaxf (fast_math)](concurrency-fast-math-namespace-functions.md#fmaxf)|Determinare il valore numerico massimo degli argomenti|  
|[Funzione Fmin (fast_math)](concurrency-fast-math-namespace-functions.md#fmin)|Determinare il valore numerico minimo degli argomenti|  
|[Funzione fminf (fast_math)](concurrency-fast-math-namespace-functions.md#fminf)|Determinare il valore numerico minimo degli argomenti|  
|[Funzione fmod (fast_math)](concurrency-fast-math-namespace-functions.md#fmod)|Calcola il resto a virgola mobile di x/y|  
|[Funzione fmodf (fast_math)](concurrency-fast-math-namespace-functions.md#fmodf)|Calcola il resto a virgola mobile di x/y|  
|[Funzione frexp (fast_math)](concurrency-fast-math-namespace-functions.md#frexp)|Ottiene la mantissa ed esponente di x|  
|[Funzione frexpf (fast_math)](concurrency-fast-math-namespace-functions.md#frexpf)|Ottiene la mantissa ed esponente di x|  
|[Funzione isFinite (fast_math)](concurrency-fast-math-namespace-functions.md#isfinite)|Determina se l'argomento ha un valore finito|  
|[Funzione isinf (fast_math)](concurrency-fast-math-namespace-functions.md#isinf)|Determina se l'argomento è infinito|  
|[Funzione IsNaN (fast_math)](concurrency-fast-math-namespace-functions.md#isnan)|Determina se l'argomento è NaN|  
|[Funzione ldexp (fast_math)](concurrency-fast-math-namespace-functions.md#ldexp)|Calcola un numero reale compreso tra la mantissa ed esponente|  
|[Funzione ldexpf (fast_math)](concurrency-fast-math-namespace-functions.md#ldexpf)|Calcola un numero reale compreso tra la mantissa ed esponente|  
|[Funzione log (fast_math)](concurrency-fast-math-namespace-functions.md#log)|Calcola il logaritmo di base e dell'argomento|  
|[Funzione LOG10 (fast_math)](concurrency-fast-math-namespace-functions.md#log10)|Calcola il logaritmo in base&10; dell'argomento|  
|[Funzione log10f (fast_math)](concurrency-fast-math-namespace-functions.md#log10f)|Calcola il logaritmo in base&10; dell'argomento|  
|[Funzione LOG2 (fast_math)](concurrency-fast-math-namespace-functions.md#log2)|Calcola il logaritmo in base&2; dell'argomento|  
|[Funzione log2f (fast_math)](concurrency-fast-math-namespace-functions.md#log2f)|Calcola il logaritmo in base&2; dell'argomento|  
|[Funzione logf (fast_math)](concurrency-fast-math-namespace-functions.md#logf)|Calcola il logaritmo di base e dell'argomento|  
|[Funzione modf (fast_math)](concurrency-fast-math-namespace-functions.md#modf)|Divide x in frazionari e parti intere.|  
|[Funzione modff (fast_math)](concurrency-fast-math-namespace-functions.md#modff)|Divide x in frazionari e parti intere.|  
|[Pow (funzione) (fast_math)](concurrency-fast-math-namespace-functions.md#pow)|Calcola x elevato alla potenza di y|  
|[Funzione powf (fast_math)](concurrency-fast-math-namespace-functions.md#powf)|Calcola x elevato alla potenza di y|  
|[Funzione Round (fast_math)](concurrency-fast-math-namespace-functions.md#round)|Arrotonda x all'intero più vicino|  
|[Funzione roundf (fast_math)](concurrency-fast-math-namespace-functions.md#roundf)|Arrotonda x all'intero più vicino|  
|[Funzione rsqrt (fast_math)](concurrency-fast-math-namespace-functions.md#rsqrt)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione rsqrtf (fast_math)](concurrency-fast-math-namespace-functions.md#rsqrtf)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[Funzione signbit (fast_math)](concurrency-fast-math-namespace-functions.md#signbit)|Restituisce il segno dell'argomento|  
|[Funzione signbitf (fast_math)](concurrency-fast-math-namespace-functions.md#signbitf)|Restituisce il segno dell'argomento|  
|[Funzione sin (fast_math)](concurrency-fast-math-namespace-functions.md#sin)|Calcola il valore del seno dell'argomento|  
|[Funzione sincos (fast_math)](concurrency-fast-math-namespace-functions.md#sincos)|Calcola un valore seno e il coseno di x|  
|[Funzione sincosf (fast_math)](concurrency-fast-math-namespace-functions.md#sincosf)|Calcola un valore seno e il coseno di x|  
|[Funzione sinf (fast_math)](concurrency-fast-math-namespace-functions.md#sinf)|Calcola il valore del seno dell'argomento|  
|[Funzione sinh (fast_math)](concurrency-fast-math-namespace-functions.md#sinh)|Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sinhf (fast_math)](concurrency-fast-math-namespace-functions.md#sinhf)|Calcola il valore del seno iperbolico dell'argomento|  
|[Funzione sqrt (fast_math)](concurrency-fast-math-namespace-functions.md#sqrt)|Calcola la radice quadrata dell'argomento|  
|[Funzione sqrtf (fast_math)](concurrency-fast-math-namespace-functions.md#sqrtf)|Calcola la radice quadrata dell'argomento|  
|[Funzione TAN (fast_math)](concurrency-fast-math-namespace-functions.md#tan)|Calcola il valore dell'argomento tangente|  
|[Funzione tanf (fast_math)](concurrency-fast-math-namespace-functions.md#tanf)|Calcola il valore dell'argomento tangente|  
|[Funzione TANH (fast_math)](concurrency-fast-math-namespace-functions.md#tanh)|Calcola il valore della tangente iperbolico dell'argomento|  
|[Funzione tanhf (fast_math)](concurrency-fast-math-namespace-functions.md#tanhf)|Calcola il valore della tangente iperbolico dell'argomento|  
|[Funzione trunc (fast_math)](concurrency-fast-math-namespace-functions.md#trunc)|Tronca l'argomento per il componente numero intero|  
|[Funzione truncf (fast_math)](concurrency-fast-math-namespace-functions.md#truncf)|Tronca l'argomento per il componente numero intero|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_math. h  
  
 **Namespace:** Concurrency:: fast_math  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

