---
title: "CComSimpleThreadAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComSimpleThreadAllocator"
  - "ATL::CComSimpleThreadAllocator"
  - "ATL.CComSimpleThreadAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL threads"
  - "ATL threads, allocazione"
  - "CComSimpleThreadAllocator class"
  - "threading [ATL], selecting threads"
ms.assetid: 66b2166a-8c50-49fd-b8e4-7f293470327d
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComSimpleThreadAllocator Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe gestisce la selezione della classe `CComAutoThreadModule`.  
  
## Sintassi  
  
```  
  
class CComSimpleThreadAllocator  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSimpleThreadAllocator::GetThread](../Topic/CComSimpleThreadAllocator::GetThread.md)|Selezionare un thread.|  
  
## Note  
 `CComSimpleThreadAllocator` gestisce la selezione [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  `CComSimpleThreadAllocator::GetThread` cicla semplicemente ciascun thread e restituisce il successivo nella sequenza.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CComApartment Class](../../atl/reference/ccomapartment-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)