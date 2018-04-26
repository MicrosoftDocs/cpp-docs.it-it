---
title: Classe allocator_unbounded | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- allocators/stdext::allocator_unbounded
- allocators/stdext::allocators::allocator_unbounded
dev_langs:
- C++
helpviewer_keywords:
- allocator_unbounded class
ms.assetid: facbaea1-b320-4d99-96da-039b2642f352
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9dbc7fff1d75e683ee36042e852ced68e82ec9dc
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="allocatorunbounded-class"></a>Classe allocator_unbounded

Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_freelist](../standard-library/cache-freelist-class.md) con lunghezza gestita da [max_unbounded](../standard-library/max-unbounded-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_unbounded;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`Type`|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Note

La macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) passa questa classe come parametro `name` nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
