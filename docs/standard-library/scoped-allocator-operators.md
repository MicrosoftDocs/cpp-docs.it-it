---
title: Operatori &lt;scoped_allocator&gt;
ms.date: 11/04/2016
f1_keywords:
- scoped_allocator/std::operator!=
- scoped_allocator/std::operator==
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
ms.openlocfilehash: 071fc3b73cd3378b110d6d412bb7575e35a77478
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419560"
---
# <a name="ltscoped_allocatorgt-operators"></a>Operatori &lt;scoped_allocator&gt;

|||
|-|-|
|[operator!=](#op_neq)|[operator==](#op_eq_eq)|

## <a name="op_neq"></a>  operator!=

Verifica la disuguaglianza dei due oggetti `scoped_allocator_adaptor`.

```cpp
template <class Outer, class... Inner>
bool operator!=(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
L'oggetto `scoped_allocator_adaptor` a sinistra.

\ a *destra*
L'oggetto `scoped_allocator_adaptor` corretto.

### <a name="return-value"></a>Valore restituito

`!(left == right)`

## <a name="op_eq_eq"></a>  operator==

Verifica l'uguaglianza di due oggetti `scoped_allocator_adaptor`.

```cpp
template <class Outer, class... Inner>
bool operator==(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
L'oggetto `scoped_allocator_adaptor` a sinistra.

\ a *destra*
L'oggetto `scoped_allocator_adaptor` corretto.

### <a name="return-value"></a>Valore restituito

`left.outer_allocator() == right.outer_allocator() && left.inner_allocator() == right.inner_allocator()`

## <a name="see-also"></a>Vedere anche

[<scoped_allocator>](../standard-library/scoped-allocator.md)
