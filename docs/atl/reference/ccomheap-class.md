---
title: "CComHeap Class | Microsoft Docs"
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
  - "CComHeap"
  - "ATL.CComHeap"
  - "ATL::CComHeap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComHeap class"
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComHeap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione della memoria COM.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CComHeap : public IAtlMemMgr  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComHeap::Allocate](../Topic/CComHeap::Allocate.md)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CComHeap::Free](../Topic/CComHeap::Free.md)|Chiamare questo metodo per liberare un blocco di memoria allocato dal gestore di memoria.|  
|[CComHeap::GetSize](../Topic/CComHeap::GetSize.md)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato dal gestore di memoria.|  
|[CComHeap::Reallocate](../Topic/CComHeap::Reallocate.md)|Chiamare questo metodo per ridistribuire la memoria allocata da questo gestore di memoria.|  
  
## Note  
 `CComHeap` implementa le funzioni di allocazione della memoria tramite le funzioni di allocazione COM, inclusi [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722), [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226)e [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280).  La quantità massima di memoria che può essere allocata è uguale a 2147483647 byte\) **INT\_MAX** \(.  
  
## Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CComHeap`  
  
## Requisiti  
 **Header:** ATLComMem.h  
  
## Vedere anche  
 [esempio di DynamicConsumer](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CWin32Heap Class](../../atl/reference/cwin32heap-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)