---
title: '&lt;forward_list&gt; functions | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- forward_list/std::swap
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: bc9a3e66e9cebfeb02f4e4b059b5c087ce93c2eb
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltforwardlistgt-functions"></a>&lt;forward_list&gt; functions
||  
|-|  
|[swap](#swap)|  
  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two forward lists.  
  
```
void swap(
    forward_list <Type, Allocator>& left,
    forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`left`|An object of type `forward_list`.|  
|`right`|An object of type `forward_list`.|  
  
### <a name="remarks"></a>Remarks  
 This template function executes `left.swap(right)`.  
  
## <a name="see-also"></a>See Also  
 [<forward_list>](../standard-library/forward-list.md)




