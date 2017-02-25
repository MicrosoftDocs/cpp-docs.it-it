---
title: "CComAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComAllocator"
  - "ATL::CComAllocator"
  - "CComAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAllocator class"
ms.assetid: 0cd706fd-0c7b-42d3-9054-febe2966fc8e
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComAllocator Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la gestione della memoria tramite le routine di memoria COM.  
  
## Sintassi  
  
```  
  
class CComAllocator  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAllocator::Allocate](../Topic/CComAllocator::Allocate.md)|Chiamare questo metodo statico per allocare memoria.|  
|[CComAllocator::Free](../Topic/CComAllocator::Free.md)|Chiamare questo metodo statico per liberare la memoria allocata.|  
|[CComAllocator::Reallocate](../Topic/CComAllocator::Reallocate.md)|Chiamare questo metodo statico per ridistribuire la memoria.|  
  
## Note  
 Questa classe viene utilizzata da [CComHeapPtr](../../atl/reference/ccomheapptr-class.md) per fornire routine di allocazione della memoria COM.  La classe della controparte, [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), fornisce gli stessi metodi utilizzando le routine CRT.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CComHeapPtr Class](../../atl/reference/ccomheapptr-class.md)   
 [CCRTAllocator Class](../../atl/reference/ccrtallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)