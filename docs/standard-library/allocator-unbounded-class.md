---
title: Classe allocator_unbounded
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocator_unbounded
- allocators/stdext::allocators::allocator_unbounded
helpviewer_keywords:
- allocator_unbounded class
ms.assetid: facbaea1-b320-4d99-96da-039b2642f352
ms.openlocfilehash: ba4c8b774752b327f5a4ede84fa804888cfd31d0
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617382"
---
# <a name="allocator_unbounded-class"></a>Classe allocator_unbounded

Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo *Type* usando una cache di tipo [cache_freelist](cache-freelist-class.md) con una lunghezza gestita da [max_unbounded](max-unbounded-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_unbounded;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Osservazioni

La [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passa questa classe come parametro del *nome* nell'istruzione seguente:`ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
