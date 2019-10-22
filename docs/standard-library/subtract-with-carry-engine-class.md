---
title: Classe subtract_with_carry_engine
ms.date: 11/04/2016
f1_keywords:
- random/std::subtract_with_carry_engine
- random/std::subtract_with_carry_engine::default_seed
- random/std::subtract_with_carry_engine::discard
- random/std::subtract_with_carry_engine::min
- random/std::subtract_with_carry_engine::max
- random/std::subtract_with_carry_engine::seed
helpviewer_keywords:
- std::subtract_with_carry_engine [C++]
- std::subtract_with_carry_engine [C++], default_seed
- std::subtract_with_carry_engine [C++], discard
- std::subtract_with_carry_engine [C++], min
- std::subtract_with_carry_engine [C++], max
- std::subtract_with_carry_engine [C++], seed
ms.assetid: 94a055f2-a620-4a22-ac34-c156924bab31
ms.openlocfilehash: 63cbbb3a1a508b41c1e0632eda3eeabe4fda6696
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72685823"
---
# <a name="subtract_with_carry_engine-class"></a>Classe subtract_with_carry_engine

Genera una sequenza casuale usando l'algoritmo subtract-with-carry (lagged Fibonacci).

## <a name="syntax"></a>Sintassi

```cpp
template <class UIntType, size_t W, size_t S, size_t R>
class subtract_with_carry_engine;
```

### <a name="parameters"></a>Parametri

@No__t_1 *UIntType*
Tipo di risultato Unsigned Integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

@No__t_1 *W*
**Dimensione parola**. Dimensione di ogni parola, in bit, della sequenza di stato. **Precondizione**:`0 < W ≤ numeric_limits<UIntType>::digits`

@No__t_1 *S*
**Ritardo breve**. Numero di valori Integer. **Precondizione**:`0 < S < R`

*R*\
**Ritardo lungo**. Determina la ricorrenza nella serie generata.

## <a name="members"></a>Members

||||
|-|-|-|
|`subtract_with_carry_engine::subtract_with_carry_engine`|`subtract_with_carry_engine::min`|`subtract_with_carry_engine::discard`|
|`subtract_with_carry_engine::operator()`|`subtract_with_carry_engine::max`|`subtract_with_carry_engine::seed`|
|`default_seed` è una costante membro definita come `19780503u`, usata come valore di parametro predefinito per `subtract_with_carry_engine::seed` e per il costruttore a valore singolo.|||

Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

Il modello di classe `substract_with_carry_engine` rappresenta un miglioramento rispetto a [linear_congruential_engine](../standard-library/linear-congruential-engine-class.md). Nessuno di questi motori può tuttavia eguagliare la rapidità e la qualità dei risultati offerte da [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md).

Questo motore produce valori di un tipo integrale senza segno specificato dall'utente usando la relazione di ricorrenza ( *periodo*) `x(i) = (x(i - R) - x(i - S) - cy(i - 1)) mod M`, dove `cy(i)` ha il valore `1` se `x(i - S) - x(i - R) - cy(i - 1) < 0`, in caso contrario `0` e `M` ha il valore `2`<sup>W</sup>. Lo stato del motore è un indicatore Carry più valori *R* . Questi valori sono costituiti dagli ultimi valori *r* restituiti se `operator()` è stato chiamato almeno *R* volte, in caso contrario i valori `N` restituiti e gli ultimi `R - N` valori del valore di inizializzazione.

L'argomento del modello `UIntType` deve essere abbastanza grande da contenere valori fino a `M - 1`.

Sebbene sia possibile costruire un generatore direttamente da questo motore, è anche possibile usare uno dei typedef predefiniti seguenti:

`ranlux24_base`: usato come base per `ranlux24`.
`typedef subtract_with_carry_engine<unsigned int, 24, 10, 24> ranlux24_base;`

`ranlux48_base`: usato come base per `ranlux48`.
`typedef subtract_with_carry_engine<unsigned long long, 48, 5, 12> ranlux48_base;`

Per informazioni dettagliate sull'algoritmo del motore subract-with-carry, vedere l'articolo di Wikipedia [Generatore di Fibonacci ritardato](https://en.wikipedia.org/wiki/Lagged_Fibonacci_generator).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
