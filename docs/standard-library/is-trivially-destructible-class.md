---
description: 'Altre informazioni su: is_trivially_destructible Class'
title: Classe is_trivially_destructible
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_trivially_destructible
helpviewer_keywords:
- is_trivially_destructible
ms.assetid: 3f7a787d-2448-40c5-ac51-a228318e02ce
ms.openlocfilehash: 41f36c027175cbf67049eed986b9188ba1532048
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154357"
---
# <a name="is_trivially_destructible-class"></a>Classe is_trivially_destructible

Verifica se il tipo è facilmente distruttibile.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_trivially_destructible;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

Un'istanza del predicato di tipo include true se il tipo *T* è un tipo distruttibile e il distruttore è noto al compilatore per l'utilizzo di operazioni non semplici. In caso contrario, contiene false.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
