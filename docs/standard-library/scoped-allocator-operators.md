---
description: 'Altre informazioni su: &lt; &gt; operatori scoped_allocator'
title: Operatori &lt;scoped_allocator&gt;
ms.date: 11/04/2016
f1_keywords:
- scoped_allocator/std::operator!=
- scoped_allocator/std::operator==
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
ms.openlocfilehash: 2f32a42ded9c73cbc2608f3e39f3566deee20e83
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197139"
---
# <a name="ltscoped_allocatorgt-operators"></a>Operatori &lt;scoped_allocator&gt;

[operatore! =](#op_neq)\
[operatore = =](#op_eq_eq)

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica la disuguaglianza dei due oggetti `scoped_allocator_adaptor`.

```cpp
template <class Outer, class... Inner>
bool operator!=(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### <a name="parameters"></a>Parametri

*sinistra*\
L'oggetto `scoped_allocator_adaptor` a sinistra.

*Ok*\
L'oggetto `scoped_allocator_adaptor` corretto.

### <a name="return-value"></a>Valore restituito

`!(left == right)`

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica l'uguaglianza di due oggetti `scoped_allocator_adaptor`.

```cpp
template <class Outer, class... Inner>
bool operator==(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### <a name="parameters"></a>Parametri

*sinistra*\
L'oggetto `scoped_allocator_adaptor` a sinistra.

*Ok*\
L'oggetto `scoped_allocator_adaptor` corretto.

### <a name="return-value"></a>Valore restituito

`left.outer_allocator() == right.outer_allocator() && left.inner_allocator() == right.inner_allocator()`

## <a name="see-also"></a>Vedi anche

[<scoped_allocator>](../standard-library/scoped-allocator.md)
