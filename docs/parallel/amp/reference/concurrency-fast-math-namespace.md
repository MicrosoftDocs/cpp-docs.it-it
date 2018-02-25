---
title: 'Concurrency:: fast_math Namespace | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- amp_math/Concurrency::fast_math
dev_langs:
- C++
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 11c6f990cdcc4dab0a3526d338333183a0f5e889
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="concurrencyfastmath-namespace"></a>Spazio dei nomi Concurrency::fast_math
Le funzioni di `fast_math` dello spazio dei nomi sono offre una precisione inferiore, supportano sola e con precisione singola (`float`) e chiamare le funzioni intrinseche di DirectX. Esistono due versioni di ogni funzione, ad esempio `cos` e `cosf`. Entrambe le versioni accettano e restituiscono un `float`, ma ogni chiama intrinseco di DirectX stesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
namespace fast_math;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="functions"></a>Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cos](concurrency-fast-math-namespace-functions.md#cos)|Calcola l'arcoseno dell'argomento|  
|[cosf](concurrency-fast-math-namespace-functions.md#cosf)|Calcola l'arcoseno dell'argomento|  
|[asin](concurrency-fast-math-namespace-functions.md#asin)|Calcola l'arcoseno dell'argomento|  
|[asinf](concurrency-fast-math-namespace-functions.md#asinf)|Calcola l'arcoseno dell'argomento|  
|[atan](concurrency-fast-math-namespace-functions.md#atan)|Calcola l'arcotangente dell'argomento|  
|[atan2](concurrency-fast-math-namespace-functions.md#atan2)|Calcola l'arcotangente di y/x|  
|[atan2f](concurrency-fast-math-namespace-functions.md#atan2f)|Calcola l'arcotangente di y/x|  
|[atanf](concurrency-fast-math-namespace-functions.md#atanf)|Calcola l'arcotangente dell'argomento|  
|[ceil](concurrency-fast-math-namespace-functions.md#ceil)|Calcola il limite massimo dell'argomento|  
|[ceilf](concurrency-fast-math-namespace-functions.md#ceilf)|Calcola il limite massimo dell'argomento|  
|[cos](concurrency-fast-math-namespace-functions.md#cos)|Calcola il coseno dell'argomento|  
|[cosf](concurrency-fast-math-namespace-functions.md#cosf)|Calcola il coseno dell'argomento|  
|[cosh](concurrency-fast-math-namespace-functions.md#cosh)|Calcola il coseno iperbolico di valore dell'argomento|  
|[coshf](concurrency-fast-math-namespace-functions.md#coshf)|Calcola il coseno iperbolico di valore dell'argomento|  
|[exp](concurrency-fast-math-namespace-functions.md#exp)|Calcola l'esponenziale in base e dell'argomento|  
|[exp2](concurrency-fast-math-namespace-functions.md#exp2)|Calcola l'esponenziale dell'argomento di base-2|  
|[exp2f](concurrency-fast-math-namespace-functions.md#exp2f)|Calcola l'esponenziale dell'argomento di base-2|  
|[expf](concurrency-fast-math-namespace-functions.md#expf)|Calcola l'esponenziale in base e dell'argomento|  
|[fabs](concurrency-fast-math-namespace-functions.md#fabs)|Restituisce il valore assoluto dell'argomento|  
|[fabsf](concurrency-fast-math-namespace-functions.md#fabsf)|Restituisce il valore assoluto dell'argomento|  
|[floor](concurrency-fast-math-namespace-functions.md#floor)|Calcola la base dell'argomento|  
|[floorf](concurrency-fast-math-namespace-functions.md#floorf)|Calcola la base dell'argomento|  
|[fmax](concurrency-fast-math-namespace-functions.md#fmax)|Determinare il valore numerico massimo di argomenti|  
|[fmaxf](concurrency-fast-math-namespace-functions.md#fmaxf)|Determinare il valore numerico massimo di argomenti|  
|[fmin](concurrency-fast-math-namespace-functions.md#fmin)|Determinare il valore numerico minimo di argomenti|  
|[fminf](concurrency-fast-math-namespace-functions.md#fminf)|Determinare il valore numerico minimo di argomenti|  
|[fmod](concurrency-fast-math-namespace-functions.md#fmod)|Calcola il resto a virgola mobile di x/y|  
|[fmodf](concurrency-fast-math-namespace-functions.md#fmodf)|Calcola il resto a virgola mobile di x/y|  
|[frexp](concurrency-fast-math-namespace-functions.md#frexp)|Ottiene la mantissa e l'esponente di x|  
|[frexpf](concurrency-fast-math-namespace-functions.md#frexpf)|Ottiene la mantissa e l'esponente di x|  
|[isfinite](concurrency-fast-math-namespace-functions.md#isfinite)|Determina se l'argomento ha un valore finito|  
|[isinf](concurrency-fast-math-namespace-functions.md#isinf)|Determina se l'argomento è infinito|  
|[isnan](concurrency-fast-math-namespace-functions.md#isnan)|Determina se l'argomento è NaN|  
|[ldexp](concurrency-fast-math-namespace-functions.md#ldexp)|Calcola un numero reale compreso tra la mantissa ed esponente|  
|[ldexpf](concurrency-fast-math-namespace-functions.md#ldexpf)|Calcola un numero reale compreso tra la mantissa ed esponente|  
|[log](concurrency-fast-math-namespace-functions.md#log)|Calcola il logaritmo di base e dell'argomento|  
|[log10](concurrency-fast-math-namespace-functions.md#log10)|Calcola il logaritmo in base 10 dell'argomento|  
|[log10f](concurrency-fast-math-namespace-functions.md#log10f)|Calcola il logaritmo in base 10 dell'argomento|  
|[log2](concurrency-fast-math-namespace-functions.md#log2)|Calcola il logaritmo in base 2 dell'argomento|  
|[log2f](concurrency-fast-math-namespace-functions.md#log2f)|Calcola il logaritmo in base 2 dell'argomento|  
|[logf](concurrency-fast-math-namespace-functions.md#logf)|Calcola il logaritmo di base e dell'argomento|  
|[modf](concurrency-fast-math-namespace-functions.md#modf)|Divide x in frazionari e parti intere.|  
|[modff](concurrency-fast-math-namespace-functions.md#modff)|Divide x in frazionari e parti intere.|  
|[pow](concurrency-fast-math-namespace-functions.md#pow)|Calcola x elevato alla potenza di y|  
|[powf](concurrency-fast-math-namespace-functions.md#powf)|Calcola x elevato alla potenza di y|  
|[round](concurrency-fast-math-namespace-functions.md#round)|Arrotonda x all'intero più vicino|  
|[roundf](concurrency-fast-math-namespace-functions.md#roundf)|Arrotonda x all'intero più vicino|  
|[rsqrt](concurrency-fast-math-namespace-functions.md#rsqrt)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[rsqrtf](concurrency-fast-math-namespace-functions.md#rsqrtf)|Restituisce il reciproco della radice quadrata dell'argomento|  
|[signbit](concurrency-fast-math-namespace-functions.md#signbit)|Restituisce il segno dell'argomento|  
|[signbitf](concurrency-fast-math-namespace-functions.md#signbitf)|Restituisce il segno dell'argomento|  
|[sin](concurrency-fast-math-namespace-functions.md#sin)|Calcola il valore seno dell'argomento|  
|[sincos](concurrency-fast-math-namespace-functions.md#sincos)|Calcola un valore seno e coseno di x|  
|[sincosf](concurrency-fast-math-namespace-functions.md#sincosf)|Calcola un valore seno e coseno di x|  
|[sinf](concurrency-fast-math-namespace-functions.md#sinf)|Calcola il valore seno dell'argomento|  
|[sinh](concurrency-fast-math-namespace-functions.md#sinh)|Calcola il valore seno iperbolico dell'argomento|  
|[sinhf](concurrency-fast-math-namespace-functions.md#sinhf)|Calcola il valore seno iperbolico dell'argomento|  
|[sqrt](concurrency-fast-math-namespace-functions.md#sqrt)|Calcola la radice quadrata dell'argomento|  
|[sqrtf](concurrency-fast-math-namespace-functions.md#sqrtf)|Calcola la radice quadrata dell'argomento|  
|[tan](concurrency-fast-math-namespace-functions.md#tan)|Calcola il valore di controllo di tangente dell'argomento|  
|[tanf](concurrency-fast-math-namespace-functions.md#tanf)|Calcola il valore di controllo di tangente dell'argomento|  
|[tanh](concurrency-fast-math-namespace-functions.md#tanh)|Calcola il valore di controllo di tangente iperbolico dell'argomento|  
|[tanhf](concurrency-fast-math-namespace-functions.md#tanhf)|Calcola il valore di controllo di tangente iperbolico dell'argomento|  
|[trunc](concurrency-fast-math-namespace-functions.md#trunc)|Tronca l'argomento per il componente integer|  
|[truncf](concurrency-fast-math-namespace-functions.md#truncf)|Tronca l'argomento per il componente integer|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp_math.h  
  
 **Namespace:** Concurrency:: fast_math  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
