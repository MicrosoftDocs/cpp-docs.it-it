---
title: "CHeapPtrBase Class | Microsoft Docs"
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
  - "ATL.CHeapPtrBase"
  - "ATL::CHeapPtrBase"
  - "CHeapPtrBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeapPtrBase class"
ms.assetid: 501ac1b2-fb34-4c72-b7e6-a4f1fc8fda21
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CHeapPtrBase Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe costituisce la base per diverse classi del puntatore intelligente heap.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class Allocator= CCRTAllocator   
> class CHeapPtrBase  
```  
  
#### Parametri  
 `T`  
 Il tipo di oggetto da archiviare nell'heap.  
  
 `Allocator`  
 La classe di allocazione della memoria da utilizzare.  Per impostazione predefinita le routine CRT sono utilizzate per allocare e liberare memoria.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::~CHeapPtrBase](../Topic/CHeapPtrBase::~CHeapPtrBase.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::AllocateBytes](../Topic/CHeapPtrBase::AllocateBytes.md)|Chiamare questo metodo per allocare memoria.|  
|[CHeapPtrBase::Attach](../Topic/CHeapPtrBase::Attach.md)|Chiamare questo metodo per eseguire la proprietà di un puntatore esistente.|  
|[CHeapPtrBase::Detach](../Topic/CHeapPtrBase::Detach.md)|Chiamare questo metodo per liberare la proprietà di un puntatore.|  
|[CHeapPtrBase::Free](../Topic/CHeapPtrBase::Free.md)|Chiamare questo metodo per eliminare un oggetto fa riferimento a `CHeapPtrBase`.|  
|[CHeapPtrBase::ReallocateBytes](../Topic/CHeapPtrBase::ReallocateBytes.md)|Chiamare questo metodo per ridistribuire la memoria.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::operator T\*](../Topic/CHeapPtrBase::operator%20T*.md)|l'operatore di cast.|  
|[CHeapPtrBase::operator &](../Topic/CHeapPtrBase::operator%20&.md)|Operatore &.|  
|[CHeapPtrBase::operator \-\>](../Topic/CHeapPtrBase::operator%20-%3E.md)|L'operatore di puntatore a membro.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtrBase::m\_pData](../Topic/CHeapPtrBase::m_pData.md)|La variabile membro dati puntatore.|  
  
## Note  
 Questa classe costituisce la base per diverse classi del puntatore intelligente heap.  Le classi derivate, ad esempio, [CHeapPtr](../../atl/reference/cheapptr-class.md) e [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), aggiungere i propri costruttori e operatori.  Vedere queste classi per esempi di implementazione.  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CComHeapPtr Class](../../atl/reference/ccomheapptr-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)