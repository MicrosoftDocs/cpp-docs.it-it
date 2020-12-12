---
description: 'Altre informazioni su: make_unsigned Class'
title: Classe make_unsigned
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::make_unsigned
helpviewer_keywords:
- make_unsigned class
- make_unsigned
ms.assetid: 7a6a3c4f-1a4c-47e8-9ee2-ac1f7b669353
ms.openlocfilehash: 3767a9971c17667b5d2fe545e524f563df2a7f42
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277518"
---
# <a name="make_unsigned-class"></a>Classe make_unsigned

Rende la dimensione del tipo o del tipo non firmato più piccolo superiore o uguale a quella del tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct make_unsigned;

template <class T>
using make_unsigned_t = typename make_unsigned<T>::type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Commenti

Un'istanza del modificatore di tipo include un tipo modificato che è *T* se `is_unsigned<T>` include true. In caso contrario è il tipo con segno più piccolo `ST` per il quale `sizeof (T) <= sizeof (ST)`.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
