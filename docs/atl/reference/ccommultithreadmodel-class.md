---
title: "CComMultiThreadModel Class | Microsoft Docs"
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
  - "CComMultiThreadModel"
  - "ATL.CComMultiThreadModel"
  - "ATL::CComMultiThreadModel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, multithreading"
  - "CComMultiThreadModel class"
  - "threading [ATL]"
ms.assetid: db8f1662-2f7a-44b3-b341-ffbfb6e422a3
caps.latest.revision: 21
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComMultiThreadModel Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CComMultiThreadModel` fornisce metodi thread\-safe per incrementare o decrementare il valore di una variabile.  
  
## Sintassi  
  
```  
  
class CComMultiThreadModel  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModel::AutoCriticalSection](../Topic/CComMultiThreadModel::AutoCriticalSection.md)|Classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md)di riferimenti.|  
|[CComMultiThreadModel::CriticalSection](../Topic/CComMultiThreadModel::CriticalSection.md)|Classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)di riferimenti.|  
|[CComMultiThreadModel::ThreadModelNoCS](../Topic/CComMultiThreadModel::ThreadModelNoCS.md)|Classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md)di riferimenti.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModel::Decrement](../Topic/CComMultiThreadModel::Decrement.md)|\(Statico\) decrementa il valore della variabile specificata in modo thread\-safe.|  
|[CComMultiThreadModel::Increment](../Topic/CComMultiThreadModel::Increment.md)|\(Proprietà statica\) incrementa il valore della variabile specificata in modo thread\-safe.|  
  
## Note  
 In genere, si utilizza `CComMultiThreadModel` a uno di due nomi `typedef`, [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) o [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md).  La classe viene fatto riferimento da ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:  
  
|typedef|Singolo thread|Threading apartment|Modello di threading Free|  
|-------------|--------------------|-------------------------|-------------------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S\=`CComSingleThreadModel`; M\=`CComMultiThreadModel`  
  
 `CComMultiThreadModel` stesso definisce tre nomi `typedef`.  `AutoCriticalSection` e `CriticalSection` fanno riferimento alle classi che forniscono metodi per ottenere e il rilascio della proprietà di una sezione critica.  Classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md)riferimenti di`ThreadModelNoCS`.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CComSingleThreadModel Class](../../atl/reference/ccomsinglethreadmodel-class.md)   
 [CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md)   
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)