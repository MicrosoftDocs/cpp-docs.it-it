---
description: 'Altre informazioni su: allocator_newdel Class'
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
ms.openlocfilehash: 0f514e64258ef0c1e7a4226a55a661216df9b3d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163574"
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

## <a name="remarks"></a>Commenti

La [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passa questa classe come parametro del *nome* nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
