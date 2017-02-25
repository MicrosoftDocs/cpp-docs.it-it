---
title: "CCRTAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCRTAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCRTAllocator class"
ms.assetid: 3e1b8cb0-859a-41ab-8e93-6f0b5ceca49d
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CCRTAllocator Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la gestione della memoria tramite le routine CRT di memoria.  
  
## Sintassi  
  
```  
  
class ATL::CCRTAllocator  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCRTAllocator::Allocate](../Topic/CCRTAllocator::Allocate.md)|\(Proprietà statica\) chiamare questo metodo per allocare memoria.|  
|[CCRTAllocator::Free](../Topic/CCRTAllocator::Free.md)|\(Proprietà statica\) chiamare questo metodo per liberare memoria.|  
|[CCRTAllocator::Reallocate](../Topic/CCRTAllocator::Reallocate.md)|\(Proprietà statica\) chiamare questo metodo per ridistribuire la memoria.|  
  
## Note  
 Questa classe viene utilizzata da [CHeapPtr](../../atl/reference/cheapptr-class.md) per fornire routine di allocazione della memoria CRT.  La classe della controparte, [CComAllocator](../../atl/reference/ccomallocator-class.md), fornisce gli stessi metodi utilizzando le routine COM.  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CComAllocator Class](../../atl/reference/ccomallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)