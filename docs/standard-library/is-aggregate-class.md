---
description: 'Altre informazioni su: is_aggregate Class'
title: Classe is_aggregate
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_aggregate
helpviewer_keywords:
- is_aggregate
ms.openlocfilehash: 6ca27e6edea42b6c0ae3f0c89749a586adac857b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231368"
---
# <a name="is_aggregate-class"></a>Classe is_aggregate

Verifica se il tipo è un tipo di classe contrassegnato come `aggregate`.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_aggregate;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo di classe contrassegnato `aggregate` ; in caso contrario, include false. Se *T* è un tipo di classe, deve essere un tipo completo.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
