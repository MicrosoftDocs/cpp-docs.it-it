---
title: Struttura duration_values
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::duration_values
- chrono/std::chrono::duration_values::max
- chrono/std::chrono::duration_values::min
- chrono/std::chrono::duration_values::zero
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
ms.openlocfilehash: ba4b202a5c8c6da742ac884bf58a5b8c55373d14
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68454294"
---
# <a name="durationvalues-structure"></a>Struttura duration_values

Offre valori specifici per `Rep` parametro di modello [duration](../standard-library/duration-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Rep>
struct duration_values;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[max](#max)|Statico. Specifica il limite superiore per un valore di tipo `Rep`.|
|[min](#min)|Statico. Specifica il limite inferiore per un valore di tipo `Rep`.|
|[zero](#zero)|Statico. Restituisce `Rep(0)`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> Chrono

**Spazio dei nomi:** std::chrono

## <a name="max"></a>  duration_values::max

Metodo statico che restituisce il limite superiore dei valori di tipo `Ref`.

```cpp
static constexpr Rep max();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `numeric_limits<Rep>::max()`.

### <a name="remarks"></a>Note

Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere maggiore di [duration_values::zero](#zero).

## <a name="min"></a>  duration_values::min

Metodo statico che restituisce il limite inferiore dei valori di tipo `Ref`.

```cpp
static constexpr Rep min();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `numeric_limits<Rep>::lowest()`.

### <a name="remarks"></a>Note

Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere inferiore o uguale a [duration_values::zero](#zero).

## <a name="zero"></a>  duration_values::zero

Restituisce `Rep(0)`.

```cpp
static constexpr Rep zero();
```

### <a name="remarks"></a>Note

Quando `Rep` è un tipo definito dall'utente, il valore restituito deve rappresentare l’infinito additivo.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
