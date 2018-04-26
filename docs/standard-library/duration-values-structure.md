---
title: Struttura duration_values | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- chrono/std::chrono::duration_values
- chrono/std::chrono::duration_values::max
- chrono/std::chrono::duration_values::min
- chrono/std::chrono::duration_values::zero
dev_langs:
- C++
ms.assetid: 7f66d2e3-1faf-47c3-b47e-08f2a87f20e8
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a2cba8fd6fe3e4763e05dc0cc897e8a0b968d611
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="durationvalues-structure"></a>Struttura duration_values

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
|[max](#max)|Statico. Specifica il limite superiore per un valore di tipo `Rep`.|
|[min](#min)|Statico. Specifica il limite inferiore per un valore di tipo `Rep`.|
|[zero](#zero)|Statico. Restituisce `Rep(0)`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<chrono >

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

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<chrono>](../standard-library/chrono.md)<br/>
