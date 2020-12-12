---
description: 'Altre informazioni su: allocator_suballoc Class'
title: Classe allocator_suballoc
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocators::allocator_suballoc
- allocators/stdext::allocator_suballoc
helpviewer_keywords:
- allocator_suballoc class
ms.assetid: 50c6a5c0-d00d-4276-9285-d908fd4f6483
ms.openlocfilehash: 7e542b4b8f419f1ac219c63b113aced7e0bd7cda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163587"
---
# <a name="allocator_suballoc-class"></a>Classe allocator_suballoc

Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo *Type* usando una cache di tipo [cache_suballoc](cache-suballoc-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_suballoc;
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo degli elementi assegnato dall'allocatore.

## <a name="remarks"></a>Commenti

La [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passa questa classe come parametro del *nome* nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_SUBALLOC, SYNC_DEFAULT, allocator_suballoc);`

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
