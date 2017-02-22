---
title: "CHeapPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CHeapPtr"
  - "CHeapPtr"
  - "ATL.CHeapPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeapPtr class"
ms.assetid: e5c5bfd4-9bf1-4164-8a83-8155fe253454
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CHeapPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe del puntatore intelligente per gestire i puntatori heap.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
typename T,  
class Allocator= CCRTAllocator  
> class CHeapPtr :  
public CHeapPtrBase< T, Allocator>  
```  
  
#### Parametri  
 `T`  
 Il tipo di oggetto da archiviare nell'heap.  
  
 `Allocator`  
 La classe di allocazione della memoria da utilizzare.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtr::CHeapPtr](../Topic/CHeapPtr::CHeapPtr.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtr::Allocate](../Topic/CHeapPtr::Allocate.md)|Chiamare questo metodo per allocare memoria nell'heap per archiviare oggetti.|  
|[CHeapPtr::Reallocate](../Topic/CHeapPtr::Reallocate.md)|Chiamare questo metodo per ridistribuire la memoria nell'heap.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtr::operator \=](../Topic/CHeapPtr::operator%20=.md)|l'operatore di assegnazione.|  
  
## Note  
 `CHeapPtr` è derivato da [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) e per impostazione predefinita vengono utilizzate le routine CRT \(in [CCRTAllocator](../../atl/reference/ccrtallocator-class.md)\) per allocare e liberare memoria.  La classe [CHeapPtrList](../../atl/reference/cheapptrlist-class.md) può essere utilizzata per costruire un elenco con puntatori heap.  Vedere anche [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), che utilizza le routine di allocazione della memoria COM.  
  
## Gerarchia di ereditarietà  
 [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)  
  
 `CHeapPtr`  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CHeapPtrBase Class](../../atl/reference/cheapptrbase-class.md)   
 [CCRTAllocator Class](../../atl/reference/ccrtallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)