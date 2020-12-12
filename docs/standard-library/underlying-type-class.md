---
description: 'Altre informazioni su: underlying_type Class'
title: Classe underlying_type
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::underlying_type
helpviewer_keywords:
- underlying_type
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
ms.openlocfilehash: e717abe854f13fc96926deba1d4bf177529618cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97132704"
---
# <a name="underlying_type-class"></a>Classe underlying_type

Genera il tipo integrale sottostante per un tipo di enumerazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct underlying_type;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo da modificare.

## <a name="remarks"></a>Commenti

Il `type` typedef del membro del modello di classe denomina il tipo integrale sottostante di *t*, quando *t* è un tipo di enumerazione; in caso contrario, non esiste alcun typedef del membro `type` .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
