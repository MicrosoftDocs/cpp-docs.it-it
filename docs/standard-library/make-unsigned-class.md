---
title: Classe make_unsigned
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::make_unsigned
helpviewer_keywords:
- make_unsigned class
- make_unsigned
ms.assetid: 7a6a3c4f-1a4c-47e8-9ee2-ac1f7b669353
ms.openlocfilehash: 4c0224bd5fd7dc8c6589ae474bb9acb9a8f09cf6
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456316"
---
# <a name="makeunsigned-class"></a>Classe make_unsigned

Rende la dimensione del tipo o del tipo non firmato più piccolo superiore o uguale a quella del tipo.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct make_unsigned;

template <class T>
using make_unsigned_t = typename make_unsigned<T>::type;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*T*|Tipo da modificare.|

## <a name="remarks"></a>Note

Un'istanza del modificatore di tipo include un tipo modificato che è *T* se `is_unsigned<T>` include true. In caso contrario è il tipo con segno più piccolo `ST` per il quale `sizeof (T) <= sizeof (ST)`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
