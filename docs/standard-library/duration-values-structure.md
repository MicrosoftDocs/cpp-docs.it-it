---
title: Struttura duration_values
ms.date: 11/04/2016
f1_keywords:
- chrono/std::chrono::duration_values
- chrono/std::chrono::duration_values::max
- chrono/std::chrono::duration_values::min
- chrono/std::chrono::duration_values::zero
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
ms.openlocfilehash: e2c03b4540ea5f89843562d1310b71635b3bc259
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368738"
---
# <a name="duration_values-structure"></a>Struttura duration_values

Offre valori specifici per `Rep` parametro di modello [duration](../standard-library/duration-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Rep>
struct duration_values;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Massimo](#max)|Statico. Specifica il limite superiore per un valore di tipo `Rep`.|
|[Minimo](#min)|Statico. Specifica il limite inferiore per un valore di tipo `Rep`.|
|[Zero](#zero)|Statico. Restituisce `Rep(0)`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<crono>

**Spazio dei nomi:** std::chrono

## <a name="duration_valuesmax"></a><a name="max"></a>duration_values::max

Metodo statico che restituisce il limite superiore dei valori di tipo `Ref`.

```cpp
static constexpr Rep max();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `numeric_limits<Rep>::max()`.

### <a name="remarks"></a>Osservazioni

Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere maggiore di [duration_values::zero](#zero).

## <a name="duration_valuesmin"></a><a name="min"></a>duration_values::min

Metodo statico che restituisce il limite inferiore dei valori di tipo `Ref`.

```cpp
static constexpr Rep min();
```

### <a name="return-value"></a>Valore restituito

In effetti, restituisce `numeric_limits<Rep>::lowest()`.

### <a name="remarks"></a>Osservazioni

Quando `Rep` è un tipo definito dall'utente, il valore restituito deve essere inferiore o uguale a [duration_values::zero](#zero).

## <a name="duration_valueszero"></a><a name="zero"></a>duration_values::zero

Restituisce `Rep(0)`.

```cpp
static constexpr Rep zero();
```

### <a name="remarks"></a>Osservazioni

Quando `Rep` è un tipo definito dall'utente, il valore restituito deve rappresentare l’infinito additivo.

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>crono](../standard-library/chrono.md)
