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
ms.openlocfilehash: d52eeb1f34938958c9716692ed6bbd7d830c93b5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411058"
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
|*Type*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Note

Il [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passa questa classe come le *nome* parametro nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_CHUNKLIST, SYNC_DEFAULT, allocator_chunklist);`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
