---
title: Classe allocator_variable_size
ms.date: 11/04/2016
f1_keywords:
- allocators/stdext::allocator_variable_size
- allocators/stdext::allocators::allocator_variable_size
- stdext::allocators::allocator_variable_size
helpviewer_keywords:
- stdext::allocator_variable_size
- stdext::allocators [C++], allocator_variable_size
ms.assetid: c3aa4105-ae45-4385-bbbe-9f23060478cb
ms.openlocfilehash: bf243089ee8f4e26930e183b007a108e38f444e3
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68458147"
---
# <a name="allocatorvariablesize-class"></a>Classe allocator_variable_size

Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo *Type* usando una cache di tipo [cache_freelist](../standard-library/cache-freelist-class.md) con una lunghezza gestita da [max_variable_size](../standard-library/max-variable-size-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_variable_size;
```

### <a name="parameters"></a>Parametri

|Parametro|DESCRIZIONE|
|---------------|-----------------|
|*Tipo*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Note

La macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) passa questa classe come parametro *Name* nell'istruzione seguente:`ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_variable_size), SYNC_DEFAULT, allocator_variable_size);`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)
