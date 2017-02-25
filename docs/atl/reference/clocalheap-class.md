---
title: "CLocalHeap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CLocalHeap"
  - "ATL::CLocalHeap"
  - "CLocalHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLocalHeap class"
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CLocalHeap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni locali dell'heap Win32.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CLocalHeap : public IAtlMemMgr  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLocalHeap::Allocate](../Topic/CLocalHeap::Allocate.md)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CLocalHeap::Free](../Topic/CLocalHeap::Free.md)|Chiamare questo metodo per liberare un blocco di memoria allocato dal gestore di memoria.|  
|[CLocalHeap::GetSize](../Topic/CLocalHeap::GetSize.md)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato dal gestore di memoria.|  
|[CLocalHeap::Reallocate](../Topic/CLocalHeap::Reallocate.md)|Chiamare questo metodo per ridistribuire la memoria allocata da questo gestore di memoria.|  
  
## Note  
 Le funzioni di allocazione della memoria di risorse di`CLocalHeap` utilizzo dell'heap locale funzioni Win32.  
  
> [!NOTE]
>  Le funzioni locali dell'heap sono più lente di altre funzioni di gestione della memoria e forniscono le funzionalità.  Pertanto, le nuove applicazioni devono utilizzare [funzioni heap](http://msdn.microsoft.com/library/windows/desktop/aa366711).  Questi sono disponibili nella classe [CWin32Heap](../../atl/reference/cwin32heap-class.md).  
  
## Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CLocalHeap`  
  
## Requisiti  
 **Header:** atlmem.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)