---
title: "CCRTHeap Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CCRTHeap"
  - "ATL.CCRTHeap"
  - "CCRTHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCRTHeap class"
ms.assetid: 321bd6c5-1856-4ff7-8590-95044a1209f7
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCRTHeap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap CRT.  
  
## Sintassi  
  
```  
  
class CCRTHeap : public IAtlMemMgr  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCRTHeap::Allocate](../Topic/CCRTHeap::Allocate.md)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CCRTHeap::Free](../Topic/CCRTHeap::Free.md)|Chiamare questo metodo per liberare un blocco di memoria allocato dal gestore di memoria.|  
|[CCRTHeap::GetSize](../Topic/CCRTHeap::GetSize.md)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato dal gestore di memoria.|  
|[CCRTHeap::Reallocate](../Topic/CCRTHeap::Reallocate.md)|Chiamare questo metodo per ridistribuire la memoria allocata da questo gestore di memoria.|  
  
## Note  
 Le funzioni di allocazione della memoria di risorse di`CCRTHeap` utilizzo dell'heap CRT esecuzione, inclusi [malloc](../../c-runtime-library/reference/malloc.md), [libero](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md)e [\_msize](../../c-runtime-library/reference/msize.md).  
  
## Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CCRTHeap`  
  
## Requisiti  
 **Header:** atlmem.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)