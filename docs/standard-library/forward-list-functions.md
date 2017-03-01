---
title: Funzioni &lt;forward_list&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 0d6bc656-7049-4651-a4bd-c9a805e47756
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: b1c8cbb3a8dbbf7f6c14400f531e7ab40a2c84f6
ms.lasthandoff: 02/24/2017

---
# <a name="ltforwardlistgt-functions"></a>Funzioni &lt;forward_list&gt;
||  
|-|  
|[swap](#swap)|  
  
##  <a name="a-nameswapa--swap"></a><a name="swap"></a>  swap  
 Scambia gli elementi di due elenchi di inoltro.  
  
```
void swap(
    forward_list <Type, Allocator>& left,
    forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="remarks"></a>Note  
 Questa funzione modello esegue `left.swap(right)`.  
  
## <a name="see-also"></a>Vedere anche  
 [<forward_list>](../standard-library/forward-list.md)




