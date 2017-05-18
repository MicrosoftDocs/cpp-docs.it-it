---
title: Classe allocator_suballoc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- allocators::allocator_suballoc
- allocator_suballoc
- allocators/stdext::allocators::allocator_suballoc
- stdext::allocators::allocator_suballoc
- allocators/stdext::allocator_suballoc
dev_langs:
- C++
helpviewer_keywords:
- allocator_suballoc class
ms.assetid: 50c6a5c0-d00d-4276-9285-d908fd4f6483
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: b4b41a1be1880e32bd353699c74fa9964cb3db0c
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="allocatorsuballoc-class"></a>Classe allocator_suballoc
Descrive un oggetto che gestisce l'allocazione e la liberazione dello spazio di archiviazione per gli oggetti di tipo `Type` usando una cache di tipo [cache_suballoc](../standard-library/cache-suballoc-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Type>  
class allocator_suballoc;
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Type`|Tipo degli elementi assegnato dall'allocatore.|  
  
## <a name="remarks"></a>Note  
 La macro [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) passa questa classe come parametro `name` nell'istruzione seguente: `ALLOCATOR_DECL(CACHE_SUBALLOC, SYNC_DEFAULT, allocator_suballoc);`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<allocators>  
  
 **Spazio dei nomi:** stdext  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




