---
title: Classe allocator&lt;void&gt;
ms.date: 11/04/2016
f1_keywords:
- memory/std::allocator<void>
- allocator<void>
helpviewer_keywords:
- allocator<void> class
ms.assetid: abfb40f5-c600-46a6-b130-f42c6535b2bd
ms.openlocfilehash: af29c70dca56b1e68eef3614357269c587a77ec9
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623672"
---
# <a name="allocatorltvoidgt-class"></a>Classe allocator&lt;void&gt;

Specializzazione dell'allocatore del modello di classe per il tipo **void**, che definisce i tipi che hanno senso in questo contesto.

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

La classe specializza in modo esplicito l' [allocatore](allocator-class.md) del modello di classe per il tipo **void**. I costruttori e l'operatore di assegnazione si comportano come per il modello di classe, ma definiscono solo i tipi seguenti:

- [const_pointer](allocator-class.md#const_pointer).

- [puntatore](allocator-class.md#pointer).

- [value_type](allocator-class.md#value_type).

- [rebind](allocator-class.md#rebind), un modello di classe annidato.
