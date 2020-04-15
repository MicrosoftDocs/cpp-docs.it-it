---
title: Operatori &lt;scoped_allocator&gt;
ms.date: 11/04/2016
f1_keywords:
- scoped_allocator/std::operator!=
- scoped_allocator/std::operator==
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
ms.openlocfilehash: 45da89793c3f4ea131404fc3392413e7aea9ef3e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373387"
---
# <a name="ltscoped_allocatorgt-operators"></a>Operatori &lt;scoped_allocator&gt;

|||
|-|-|
|[operatore!](#op_neq)|[operatore di comando](#op_eq_eq)|

## <a name="operator"></a><a name="op_neq"></a>operatore!

Verifica la disuguaglianza dei due oggetti `scoped_allocator_adaptor`.

```cpp
template <class Outer, class... Inner>
bool operator!=(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `scoped_allocator_adaptor` a sinistra.

*va bene*\
L'oggetto `scoped_allocator_adaptor` corretto.

### <a name="return-value"></a>Valore restituito

`!(left == right)`

## <a name="operator"></a><a name="op_eq_eq"></a>operatore di comando

Verifica l'uguaglianza di due oggetti `scoped_allocator_adaptor`.

```cpp
template <class Outer, class... Inner>
bool operator==(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### <a name="parameters"></a>Parametri

*Sinistra*\
L'oggetto `scoped_allocator_adaptor` a sinistra.

*va bene*\
L'oggetto `scoped_allocator_adaptor` corretto.

### <a name="return-value"></a>Valore restituito

`left.outer_allocator() == right.outer_allocator() && left.inner_allocator() == right.inner_allocator()`

## <a name="see-also"></a>Vedere anche

[>scoped_allocator<](../standard-library/scoped-allocator.md)
