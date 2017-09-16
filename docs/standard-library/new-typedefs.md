---
title: '&lt;new&gt; typedefs | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- new/std::new_handler
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
caps.latest.revision: 7
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 8b568dacfac2b912ca5799bb26af1c4c25685e56
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltnewgt-typedefs"></a>&lt;new&gt; typedefs
||  
|-|  
|[new_handler](#new_handler)|  
  
##  <a name="new_handler"></a>  new_handler  
 The type points to a function suitable for use as a new handler.  
  
```
typedef void (*new_handler)();
```  
  
### <a name="remarks"></a>Remarks  
 This type of handler function is called by **operatornew** or `operator new[]` when they cannot satisfy a request for additional storage.  
  
### <a name="example"></a>Example  
  See [set_new_handler](../standard-library/new-functions.md#set_new_handler) for an example using `new_handler` as a return value.  
  
## <a name="see-also"></a>See Also  
 [\<new>](../standard-library/new.md)




