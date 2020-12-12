---
description: 'Altre informazioni su: is_null_pointer Class'
title: Classe is_null_pointer
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_null_pointer
helpviewer_keywords:
- is_null_pointer
ms.assetid: f3b3601b-f162-4803-a6e9-dabf5c3876cc
ms.openlocfilehash: 91a8b6a27668af72d7641ce1fe36dafc119f5aa7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230665"
---
# <a name="is_null_pointer-class"></a>Classe is_null_pointer

Verifica se il tipo è std::nullptr_t.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_null_pointer;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è `std::nullptr_t` ; in caso contrario, include false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
