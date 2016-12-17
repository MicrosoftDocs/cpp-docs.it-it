---
title: "CComMultiThreadModelNoCS Class | Microsoft Docs"
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
  - "ATL::CComMultiThreadModelNoCS"
  - "CComMultiThreadModelNoCS"
  - "ATL.CComMultiThreadModelNoCS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, multithreading"
  - "CComMultiThreadModelNoCS class"
  - "threading [ATL]"
ms.assetid: 2b3f7a45-fd72-452c-aaf3-ccdaa621c821
caps.latest.revision: 18
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComMultiThreadModelNoCS Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CComMultiThreadModelNoCS` fornisce metodi thread\-safe per incrementare o decrementare il valore di una variabile, senza blocco della sezione critica o sbloccare la funzionalità.  
  
## Sintassi  
  
```  
  
class CComMultiThreadModelNoCS  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModelNoCS::AutoCriticalSection](../Topic/CComMultiThreadModelNoCS::AutoCriticalSection.md)|Classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)di riferimenti.|  
|[CComMultiThreadModelNoCS::CriticalSection](../Topic/CComMultiThreadModelNoCS::CriticalSection.md)|Classe `CComFakeCriticalSection`di riferimenti.|  
|[CComMultiThreadModelNoCS::ThreadModelNoCS](../Topic/CComMultiThreadModelNoCS::ThreadModelNoCS.md)|Classe `CComMultiThreadModelNoCS`di riferimenti.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModelNoCS::Decrement](../Topic/CComMultiThreadModelNoCS::Decrement.md)|\(Statico\) decrementa il valore della variabile specificata in modo thread\-safe.|  
|[CComMultiThreadModelNoCS::Increment](../Topic/CComMultiThreadModelNoCS::Increment.md)|\(Proprietà statica\) incrementa il valore della variabile specificata in modo thread\-safe.|  
  
## Note  
 `CComMultiThreadModelNoCS` è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in quanto fornisce metodi thread\-safe per incrementare e decremento una variabile.  Tuttavia, quando si fa riferimento a una classe di sezione critica con `CComMultiThreadModelNoCS`, i metodi come `Lock` e `Unlock` non faranno alcuna operazione.  
  
 In genere, si utilizza `CComMultiThreadModelNoCS` con il nome `ThreadModelNoCS``typedef`.  Questo `typedef` è definito in `CComMultiThreadModelNoCS`, in `CComMultiThreadModel`e in [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).  
  
> [!NOTE]
>  i nomi globali [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) e [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md)`typedef` non fanno riferimento `CComMultiThreadModelNoCS`.  
  
 Oltre a `ThreadModelNoCS`, `CComMultiThreadModelNoCS` definisce `AutoCriticalSection` e `CriticalSection`.  Il riferimento di questi due nomi seconda `typedef`[CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce i metodi vuoti associato a ottenere e la pubblicazione della sezione critica.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)