---
title: Classe underlying_type
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::underlying_type
helpviewer_keywords:
- underlying_type
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
ms.openlocfilehash: 23e5e9bc5406265f49fca2ed220c597cb32e2a9a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399362"
---
# <a name="underlyingtype-class"></a>Classe underlying_type

Genera il tipo integrale sottostante per un tipo di enumerazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct underlying_type;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo da modificare.

## <a name="remarks"></a>Note

Il `type` typedef del membro della classe modello assegna il tipo di integrale sottostante *T*, quando *T* è un tipo di enumerazione, in caso contrario, non è presente alcun typedef del membro `type`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
