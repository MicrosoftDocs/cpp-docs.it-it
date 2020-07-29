---
title: Classe allocator&lt;void&gt;
ms.date: 11/04/2016
f1_keywords:
- memory/std::allocator<void>
- allocator<void>
helpviewer_keywords:
- allocator<void> class
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
ms.openlocfilehash: b6ca3f8b994756a21d85860fd8aff429ee38e58b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87204930"
---
# <a name="allocatorltvoidgt-class"></a>Classe allocator&lt;void&gt;

Specializzazione dell'allocatore del modello di classe da digitare **`void`** , definendo i tipi che hanno senso in questo contesto.

## <a name="syntax"></a>Sintassi

```cpp
template <>
class allocator<void> {
    typedef void *pointer;
    typedef const void *const_pointer;
    typedef void value_type;
    template <class Other>
    struct rebind;
    allocator();
    allocator(const allocator<void>&);

    template <class Other>
    allocator(const allocator<Other>&);

    template <class Other>
    allocator<void>& operator=(const allocator<Other>&);
};
```

## <a name="remarks"></a>Osservazioni

La classe specializza in modo esplicito l' [allocatore](allocator-class.md) del modello di classe per il tipo **`void`** . I costruttori e l'operatore di assegnazione si comportano come per il modello di classe, ma definiscono solo i tipi seguenti:

- [const_pointer](allocator-class.md#const_pointer).

- [puntatore](allocator-class.md#pointer).

- [value_type](allocator-class.md#value_type).

- [rebind](allocator-class.md#rebind), un modello di classe annidato.
