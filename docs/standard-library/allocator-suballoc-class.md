---
title: Classe allocator_suballoc
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocators::allocator_suballoc
- allocators/stdext::allocator_suballoc
helpviewer_keywords:
- allocator_suballoc class
ms.assetid: 50c6a5c0-d00d-4276-9285-d908fd4f6483
ms.openlocfilehash: 01d282585133d55ee3f7ec96c212705c2afca9d1
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617429"
---
# <a name="allocator_suballoc-class"></a>Classe allocator_suballoc

Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo *Type* usando una cache di tipo [cache_suballoc](cache-suballoc-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_suballoc;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Osservazioni

La [ALLOCATOR_DECL](allocators-functions.md#allocator_decl) macro passa questa classe come parametro del *nome* nell'istruzione seguente:`ALLOCATOR_DECL(CACHE_SUBALLOC, SYNC_DEFAULT, allocator_suballoc);`

## <a name="requirements"></a>Requisiti

**Intestazione:**\<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
