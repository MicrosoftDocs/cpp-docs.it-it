---
title: Classe allocator_chunklist
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocator_chunklist
- allocators/stdext::allocators::allocator_chunklist
helpviewer_keywords:
- stdext::allocator_chunklist
- stdext::allocators [C++], allocator_chunklist
ms.assetid: ea72ed0a-dfdb-4c8b-8096-e4baf567b80f
ms.openlocfilehash: 46ae9c613b66e00658f09ad10f33b721c6948ff7
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456420"
---
# <a name="allocatorchunklist-class"></a>Classe allocator_chunklist

Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti usando una cache di tipo [cache_chunklist](../standard-library/cache-chunklist-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_chunklist;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Note

La macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) passa questa classe come parametro *Name* nell'istruzione seguente:`ALLOCATOR_DECL(CACHE_CHUNKLIST, SYNC_DEFAULT, allocator_chunklist);`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
