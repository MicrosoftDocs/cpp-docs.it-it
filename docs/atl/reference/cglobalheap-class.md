---
title: "CGlobalHeap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CGlobalHeap"
  - "ATL::CGlobalHeap"
  - "CGlobalHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CGlobalHeap class"
ms.assetid: e348d838-3aa7-4bee-a1b3-cd000c99f834
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CGlobalHeap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni globali dell'heap Win32.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CGlobalHeap : public IAtlMemMgr  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGlobalHeap::Allocate](../Topic/CGlobalHeap::Allocate.md)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CGlobalHeap::Free](../Topic/CGlobalHeap::Free.md)|Chiamare questo metodo per liberare un blocco di memoria allocato dal gestore di memoria.|  
|[CGlobalHeap::GetSize](../Topic/CGlobalHeap::GetSize.md)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato dal gestore di memoria.|  
|[CGlobalHeap::Reallocate](../Topic/CGlobalHeap::Reallocate.md)|Chiamare questo metodo per ridistribuire la memoria allocata da questo gestore di memoria.|  
  
## Note  
 `CGlobalHeap` implementa le funzioni di allocazione della memoria mediante le funzioni globali dell'heap Win32.  
  
> [!NOTE]
>  Le funzioni globali dell'heap sono più lente di altre funzioni di gestione della memoria e forniscono le funzionalità.  Pertanto, le nuove applicazioni devono utilizzare [funzioni heap](http://msdn.microsoft.com/library/windows/desktop/aa366711).  Questi sono disponibili nella classe [CWin32Heap](../../atl/reference/cwin32heap-class.md).  Le funzioni globali sono ancora utilizzate da DDE e le funzioni degli Appunti.  
  
## Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CGlobalHeap`  
  
## Requisiti  
 **Header:** atlmem.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)