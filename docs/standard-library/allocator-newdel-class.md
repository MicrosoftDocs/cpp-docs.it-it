---
title: Classe allocator_newdel
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocators::allocator_newdel
- allocators/stdext::allocator_newdel
- stdext::allocators::allocator_newdel
helpviewer_keywords:
- stdext::allocators [C++], allocator_newdel
- stdext::allocator_newdel
ms.assetid: 62666cd2-3afe-49f7-9dd1-9bbbb154da98
ms.openlocfilehash: aa5012f6657b2676756d1d8023274a524b451df3
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617469"
---
# <a name="allocator_newdel-class"></a>Classe allocator_newdel

Implementa un allocatore che usa **operator delete** per deallocare un blocco di memoria e un **operatore New** per allocare un blocco di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_newdel;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Osservazioni

La [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passa questa classe come parametro del *nome* nell'istruzione seguente:`ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
