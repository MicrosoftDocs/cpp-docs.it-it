---
title: Classe allocator_chunklist | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- stdext::allocators::allocator_chunklist
- allocators::allocator_chunklist
- allocators/stdext::allocator_chunklist
- allocators/stdext::allocators::allocator_chunklist
- allocator_chunklist
dev_langs:
- C++
helpviewer_keywords:
- allocator_chunklist class
ms.assetid: ea72ed0a-dfdb-4c8b-8096-e4baf567b80f
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 9acdadca2530f8ed54ec4bde7a6a1fe218f00f8a
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="allocatorchunklist-class"></a>Classe allocator_chunklist
Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti usando una cache di tipo [cache_chunklist](../standard-library/cache-chunklist-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Type>  
class allocator_chunklist;
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Type`|Tipo degli elementi assegnato dall'allocatore.|  
  
## <a name="remarks"></a>Note  
 La macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) passa questa classe come parametro `name` nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_CHUNKLIST, SYNC_DEFAULT, allocator_chunklist``);`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




