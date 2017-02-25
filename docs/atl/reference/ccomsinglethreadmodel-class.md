---
title: "CComSingleThreadModel Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComSingleThreadModel"
  - "CComSingleThreadModel"
  - "ATL::CComSingleThreadModel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComSingleThreadModel class"
  - "single-threaded applications"
  - "single-threaded applications, ATL"
ms.assetid: e5dc30c7-405a-4ba4-8ae9-51937243fce8
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComSingleThreadModel Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per incrementare o decrementare il valore di una variabile.  
  
## Sintassi  
  
```  
  
class CComSingleThreadModel  
  
```  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSingleThreadModel::AutoCriticalSection](../Topic/CComSingleThreadModel::AutoCriticalSection.md)|Classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)di riferimenti.|  
|[CComSingleThreadModel::CriticalSection](../Topic/CComSingleThreadModel::CriticalSection.md)|Classe `CComFakeCriticalSection`di riferimenti.|  
|[CComSingleThreadModel::ThreadModelNoCS](../Topic/CComSingleThreadModel::ThreadModelNoCS.md)|Fa riferimento `CComSingleThreadModel`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSingleThreadModel::Decrement](../Topic/CComSingleThreadModel::Decrement.md)|Decrementa il valore della variabile specificata.  Questa implementazione non è thread\-safe.|  
|[CComSingleThreadModel::Increment](../Topic/CComSingleThreadModel::Increment.md)|Incrementa il valore della variabile specificata.  Questa implementazione non è thread\-safe.|  
  
## Note  
 `CComSingleThreadModel` fornisce metodi per incrementare o decrementare il valore di una variabile.  a differenza [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), questi metodi non sono thread\-safe.  
  
 In genere, si utilizza `CComSingleThreadModel` a uno di due nomi `typedef`, [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) o [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md).  La classe viene fatto riferimento da ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:  
  
|typedef|Solo modello di threading|Modello di threading apartment|Modello di threading Free|  
|-------------|-------------------------------|------------------------------------|-------------------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S\=`CComSingleThreadModel`; M\=`CComMultiThreadModel`  
  
 `CComSingleThreadModel` stesso definisce tre nomi `typedef`.  Riferimenti `CComSingleThreadModel`di`ThreadModelNoCS`.  `AutoCriticalSection` e il riferimento `CriticalSection` classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce i metodi vuoti associati a ottenere e il rilascio della proprietà di una sezione critica.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)