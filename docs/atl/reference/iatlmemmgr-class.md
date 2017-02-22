---
title: "IAtlMemMgr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IAtlMemMgr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAtlMemMgr class"
  - "memoria, gestione"
  - "memoria, memory manager"
ms.assetid: 18b2c569-25fe-4464-bdb6-3b1abef7154a
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# IAtlMemMgr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta l'interfaccia a un gestore di memoria.  
  
## Sintassi  
  
```  
  
__interface __declspec( uuid( "654F7EF5-CFDF-4df9-A450-6C6A13C622C0" )) IAtlMemMgr  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Allocare](../Topic/IAtlMemMgr::Allocate.md)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[Free](../Topic/IAtlMemMgr::Free.md)|Chiamare questo metodo per liberare un blocco di memoria.|  
|[GetSize](../Topic/IAtlMemMgr::GetSize.md)|Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocata.|  
|[Ridistribuire](../Topic/IAtlMemMgr::Reallocate.md)|Chiamare questo metodo per ridistribuire un blocco di memoria.|  
  
## Note  
 L'interfaccia viene implementata da [CComHeap](../../atl/reference/ccomheap-class.md), da [CCRTHeap](../../atl/reference/ccrtheap-class.md), da [CLocalHeap](../../atl/reference/clocalheap-class.md), da [CGlobalHeap](../../atl/reference/cglobalheap-class.md), o da [CWin32Heap](../../atl/reference/cwin32heap-class.md).  
  
> [!NOTE]
>  Il locale e le funzioni globali dell'heap sono più lenti di altre funzioni di gestione della memoria e forniscono le funzionalità.  Pertanto, le nuove applicazioni devono utilizzare [funzioni heap](http://msdn.microsoft.com/library/windows/desktop/aa366711).  Questi sono disponibili nella classe [CWin32Heap](../../atl/reference/cwin32heap-class.md).  
  
## Esempio  
 [!code-cpp[NVC_ATL_Utilities#94](../../atl/codesnippet/CPP/iatlmemmgr-class_1.cpp)]  
  
## Requisiti  
 **Header:** atlmem.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)