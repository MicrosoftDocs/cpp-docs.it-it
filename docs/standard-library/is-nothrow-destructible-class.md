---
description: 'Altre informazioni su: is_nothrow_destructible Class'
title: Classe is_nothrow_destructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_nothrow_destructible
helpviewer_keywords:
- is_nothrow_destructible
ms.assetid: 0bbd8a28-e312-4d72-bd28-aac027f974d3
ms.openlocfilehash: 017cc6de7ce5c618fcc3f47540efd34b5fdc40a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323618"
---
# <a name="is_nothrow_destructible-class"></a>Classe is_nothrow_destructible

Verifica se il tipo è distruttibile e se il distruttore è noto al compilatore come elemento che non genera eccezioni.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_nothrow_destructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo distruttibile e il distruttore è noto al compilatore di non generare. In caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
