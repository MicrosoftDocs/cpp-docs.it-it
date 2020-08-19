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
ms.openlocfilehash: 30e0f7902a8af435b46aaedf0b38661b7a6604a8
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562597"
---
# <a name="allocator_newdel-class"></a>Classe allocator_newdel

Implementa un allocatore che usa **operator delete** per deallocare un blocco di memoria e un **operatore New** per allocare un blocco di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_newdel;
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo degli elementi assegnato dall'allocatore.

## <a name="remarks"></a>Osservazioni

La [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passa questa classe come parametro del *nome* nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
