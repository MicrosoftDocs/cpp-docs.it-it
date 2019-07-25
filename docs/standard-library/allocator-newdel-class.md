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
ms.openlocfilehash: d49a1596371e4a69873b826d3e756f263539d034
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448314"
---
# <a name="allocatornewdel-class"></a>Classe allocator_newdel

Implementa un allocatore che usa **operator delete** per deallocare un blocco di memoria e un **operatore New** per allocare un blocco di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_newdel;
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Note

La macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) passa questa classe come parametro *Name* nell'istruzione seguente:`ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
