---
title: "CWin32Heap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CWin32Heap"
  - "ATL.CWin32Heap"
  - "CWin32Heap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWin32Heap class"
ms.assetid: 69176022-ed98-4e3b-96d8-116b0c58ac95
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CWin32Heap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione heap Win32.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CWin32Heap : public IAtlMemMgr  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWin32Heap::CWin32Heap](../Topic/CWin32Heap::CWin32Heap.md)|Costruttore.|  
|[CWin32Heap::~CWin32Heap](../Topic/CWin32Heap::~CWin32Heap.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWin32Heap::Allocate](../Topic/CWin32Heap::Allocate.md)|Alloca un blocco di memoria dall'heap.|  
|[CWin32Heap::Attach](../Topic/CWin32Heap::Attach.md)|Associa l'oggetto dell'heap in un heap esistente.|  
|[CWin32Heap::Detach](../Topic/CWin32Heap::Detach.md)|Rimuove l'oggetto dell'heap da un heap esistente.|  
|[CWin32Heap::Free](../Topic/CWin32Heap::Free.md)|Libera la memoria allocata in precedenza dall'heap.|  
|[CWin32Heap::GetSize](../Topic/CWin32Heap::GetSize.md)|Restituisce la dimensione di un blocco di memoria allocato dall'heap.|  
|[CWin32Heap::Reallocate](../Topic/CWin32Heap::Reallocate.md)|Ridistribuisce un blocco di memoria dall'heap.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWin32Heap::m\_bOwnHeap](../Topic/CWin32Heap::m_bOwnHeap.md)|Un flag utilizzato per determinare proprietà corrente degli heap.|  
|[CWin32Heap::m\_hHeap](../Topic/CWin32Heap::m_hHeap.md)|Un handle per l'oggetto dell'heap.|  
  
## Note  
 `CWin32Heap` implementa i metodi di allocazione della memoria tramite le funzioni di allocazione heap Win32, inclusi [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597) e [HeapFree](http://msdn.microsoft.com/library/windows/desktop/aa366701).  Diversamente da altre classi dell'heap, `CWin32Heap` richiede un handle valido dell'heap di essere fornito prima che la memoria allocata in: l'altra impostazione predefinita le classi mediante l'heap del processo.  L'handle può essere assegnato al costruttore o il metodo [CWin32Heap::Attach](../Topic/CWin32Heap::Attach.md).  Vedere il metodo [CWin32Heap::CWin32Heap](../Topic/CWin32Heap::CWin32Heap.md) per ulteriori informazioni.  
  
## Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CWin32Heap`  
  
## Requisiti  
 **Header:** atlmem.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [IAtlMemMgr Class](../../atl/reference/iatlmemmgr-class.md)   
 [CLocalHeap Class](../../atl/reference/clocalheap-class.md)   
 [CGlobalHeap Class](../../atl/reference/cglobalheap-class.md)   
 [CCRTHeap Class](../../atl/reference/ccrtheap-class.md)   
 [CComHeap Class](../../atl/reference/ccomheap-class.md)