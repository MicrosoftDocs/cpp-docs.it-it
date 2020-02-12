---
title: Spazio dei nomi Concurrency::fast_math
ms.date: 11/04/2016
f1_keywords:
- amp_math/Concurrency::fast_math
ms.assetid: 54fed939-9902-49db-9f29-e98fd9821508
ms.openlocfilehash: 57e2134a2254dc4bc34d515e65e2ec629efeff33
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139517"
---
# <a name="concurrencyfast_math-namespace"></a>Spazio dei nomi Concurrency::fast_math

Le funzioni nello spazio dei nomi `fast_math` hanno una precisione inferiore, supportano solo una precisione singola (`float`) e chiamano gli intrinseci DirectX. Esistono due versioni di ciascuna funzione, ad esempio `cos` e `cosf`. Entrambe le versioni accettano e restituiscono un `float`, ma ognuna chiama la stessa funzione intrinseca DirectX.

## <a name="syntax"></a>Sintassi

```cpp
namespace fast_math;
```

## <a name="members"></a>Members

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[cos](concurrency-fast-math-namespace-functions.md#cos)|Calcola l'arcoseno dell'argomento|
|[cosf](concurrency-fast-math-namespace-functions.md#cosf)|Calcola l'arcoseno dell'argomento|
|[asin](concurrency-fast-math-namespace-functions.md#asin)|Calcola l'arcoseno dell'argomento|
|[asinf](concurrency-fast-math-namespace-functions.md#asinf)|Calcola l'arcoseno dell'argomento|
|[atan](concurrency-fast-math-namespace-functions.md#atan)|Calcola l'arcotangente dell'argomento.|
|[atan2](concurrency-fast-math-namespace-functions.md#atan2)|Calcola il arcotangente di _Y/_X|
|[atan2f](concurrency-fast-math-namespace-functions.md#atan2f)|Calcola il arcotangente di _Y/_X|
|[atanf](concurrency-fast-math-namespace-functions.md#atanf)|Calcola l'arcotangente dell'argomento.|
|[ceil](concurrency-fast-math-namespace-functions.md#ceil)|Calcola il limite massimo dell'argomento|
|[ceilf](concurrency-fast-math-namespace-functions.md#ceilf)|Calcola il limite massimo dell'argomento|
|[cos](concurrency-fast-math-namespace-functions.md#cos)|Calcola il coseno dell'argomento.|
|[cosf](concurrency-fast-math-namespace-functions.md#cosf)|Calcola il coseno dell'argomento.|
|[cosh](concurrency-fast-math-namespace-functions.md#cosh)|Calcola il valore del coseno iperbolico dell'argomento|
|[coshf](concurrency-fast-math-namespace-functions.md#coshf)|Calcola il valore del coseno iperbolico dell'argomento|
|[exp](concurrency-fast-math-namespace-functions.md#exp)|Calcola l'esponenziale in base e dell'argomento|
|[exp2](concurrency-fast-math-namespace-functions.md#exp2)|Calcola l'esponenziale in base 2 dell'argomento|
|[exp2f](concurrency-fast-math-namespace-functions.md#exp2f)|Calcola l'esponenziale in base 2 dell'argomento|
|[expf](concurrency-fast-math-namespace-functions.md#expf)|Calcola l'esponenziale in base e dell'argomento|
|[fabs](concurrency-fast-math-namespace-functions.md#fabs)|Restituisce il valore assoluto dell'argomento.|
|[fabsf](concurrency-fast-math-namespace-functions.md#fabsf)|Restituisce il valore assoluto dell'argomento.|
|[floor](concurrency-fast-math-namespace-functions.md#floor)|Calcola il piano dell'argomento|
|[floorf](concurrency-fast-math-namespace-functions.md#floorf)|Calcola il piano dell'argomento|
|[fmax](concurrency-fast-math-namespace-functions.md#fmax)|Determinare il valore numerico massimo degli argomenti|
|[fmaxf](concurrency-fast-math-namespace-functions.md#fmaxf)|Determinare il valore numerico massimo degli argomenti|
|[fmin](concurrency-fast-math-namespace-functions.md#fmin)|Determinare il valore numerico minimo degli argomenti|
|[fminf](concurrency-fast-math-namespace-functions.md#fminf)|Determinare il valore numerico minimo degli argomenti|
|[fmod](concurrency-fast-math-namespace-functions.md#fmod)|Calcola il resto a virgola mobile di _X/_Y|
|[fmodf](concurrency-fast-math-namespace-functions.md#fmodf)|Calcola il resto a virgola mobile di _X/_Y|
|[frexp](concurrency-fast-math-namespace-functions.md#frexp)|Ottiene mantissa ed esponente di _X|
|[frexpf](concurrency-fast-math-namespace-functions.md#frexpf)|Ottiene mantissa ed esponente di _X|
|[isFinite](concurrency-fast-math-namespace-functions.md#isfinite)|Determina se l'argomento ha un valore finito|
|[isinf](concurrency-fast-math-namespace-functions.md#isinf)|Determina se l'argomento è un infinito|
|[isnan](concurrency-fast-math-namespace-functions.md#isnan)|Determina se l'argomento è NaN|
|[ldexp](concurrency-fast-math-namespace-functions.md#ldexp)|Calcola un numero reale da mantissa ed esponente|
|[ldexpf](concurrency-fast-math-namespace-functions.md#ldexpf)|Calcola un numero reale da mantissa ed esponente|
|[log](concurrency-fast-math-namespace-functions.md#log)|Calcola il logaritmo in base e dell'argomento|
|[log10](concurrency-fast-math-namespace-functions.md#log10)|Calcola il logaritmo in base 10 dell'argomento|
|[log10f](concurrency-fast-math-namespace-functions.md#log10f)|Calcola il logaritmo in base 10 dell'argomento|
|[log2](concurrency-fast-math-namespace-functions.md#log2)|Calcola il logaritmo in base 2 dell'argomento|
|[log2f](concurrency-fast-math-namespace-functions.md#log2f)|Calcola il logaritmo in base 2 dell'argomento|
|[logf](concurrency-fast-math-namespace-functions.md#logf)|Calcola il logaritmo in base e dell'argomento|
|[modf](concurrency-fast-math-namespace-functions.md#modf)|Suddivide _X in parti frazionarie e intere.|
|[modff](concurrency-fast-math-namespace-functions.md#modff)|Suddivide _X in parti frazionarie e intere.|
|[pow](concurrency-fast-math-namespace-functions.md#pow)|Calcola _X elevato alla potenza di _Y|
|[powf](concurrency-fast-math-namespace-functions.md#powf)|Calcola _X elevato alla potenza di _Y|
|[round](concurrency-fast-math-namespace-functions.md#round)|Arrotonda _X al numero intero più vicino|
|[roundf](concurrency-fast-math-namespace-functions.md#roundf)|Arrotonda _X al numero intero più vicino|
|[rsqrt](concurrency-fast-math-namespace-functions.md#rsqrt)|Restituisce il reciproco della radice quadrata dell'argomento|
|[rsqrtf](concurrency-fast-math-namespace-functions.md#rsqrtf)|Restituisce il reciproco della radice quadrata dell'argomento|
|[signbit](concurrency-fast-math-namespace-functions.md#signbit)|Restituisce il segno dell'argomento.|
|[signbitf](concurrency-fast-math-namespace-functions.md#signbitf)|Restituisce il segno dell'argomento.|
|[sin](concurrency-fast-math-namespace-functions.md#sin)|Calcola il valore del seno dell'argomento.|
|[SinCos](concurrency-fast-math-namespace-functions.md#sincos)|Calcola il valore del seno e del coseno di _X|
|[sincosf](concurrency-fast-math-namespace-functions.md#sincosf)|Calcola il valore del seno e del coseno di _X|
|[sinf](concurrency-fast-math-namespace-functions.md#sinf)|Calcola il valore del seno dell'argomento.|
|[sinh](concurrency-fast-math-namespace-functions.md#sinh)|Calcola il valore del seno iperbolico dell'argomento|
|[sinhf](concurrency-fast-math-namespace-functions.md#sinhf)|Calcola il valore del seno iperbolico dell'argomento|
|[sqrt](concurrency-fast-math-namespace-functions.md#sqrt)|Calcola la radice quadrata dell'argomento|
|[sqrtf](concurrency-fast-math-namespace-functions.md#sqrtf)|Calcola la radice quadrata dell'argomento|
|[tan](concurrency-fast-math-namespace-functions.md#tan)|Calcola il valore tangente dell'argomento.|
|[tanf](concurrency-fast-math-namespace-functions.md#tanf)|Calcola il valore tangente dell'argomento.|
|[tanh](concurrency-fast-math-namespace-functions.md#tanh)|Calcola il valore della tangente iperbolica dell'argomento|
|[tanhf](concurrency-fast-math-namespace-functions.md#tanhf)|Calcola il valore della tangente iperbolica dell'argomento|
|[trunc](concurrency-fast-math-namespace-functions.md#trunc)|Tronca l'argomento al componente Integer|
|[truncf](concurrency-fast-math-namespace-functions.md#truncf)|Tronca l'argomento al componente Integer|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_math. h

**Spazio dei nomi:** Concurrency:: fast_math

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
