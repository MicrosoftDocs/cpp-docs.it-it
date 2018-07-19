---
title: Classe allocator_newdel | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- allocators/stdext::allocators::allocator_newdel
- allocators/stdext::allocator_newdel
- stdext::allocators::allocator_newdel
dev_langs:
- C++
helpviewer_keywords:
- stdext::allocators [C++], allocator_newdel
- stdext::allocator_newdel
ms.assetid: 62666cd2-3afe-49f7-9dd1-9bbbb154da98
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dde45090a534fc8d5aff09ee12b1b4fe838d9492
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38966276"
---
# <a name="allocatornewdel-class"></a>Classe allocator_newdel

Implementa un allocatore che usa **operatore delete** deallocare una memoria di blocco e **operatore new** per allocare un blocco di memoria.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class allocator_newdel;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Type*|Tipo degli elementi assegnato dall'allocatore.|

## <a name="remarks"></a>Note

Il [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passa questa classe come le *nome* parametro nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<allocators>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[\<allocators>](../standard-library/allocators-header.md)<br/>
