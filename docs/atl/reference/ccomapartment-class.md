---
title: "CComApartment Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComApartment"
  - "CComApartment"
  - "ATL.CComApartment"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "apartments in ATL EXE modules"
  - "CComApartment class"
ms.assetid: dbc177d7-7ee4-45f2-b563-d578a467ca93
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CComApartment Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce supporto per gestire un apartment in un modulo di raccolte EXE.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CComApartment  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComApartment::CComApartment](../Topic/CComApartment::CComApartment.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComApartment::Apartment](../Topic/CComApartment::Apartment.md)|Contrassegna l'indirizzo iniziale del thread.|  
|[CComApartment::GetLockCount](../Topic/CComApartment::GetLockCount.md)|Restituisce il numero di blocchi corrente del thread.|  
|[CComApartment::Lock](../Topic/CComApartment::Lock.md)|Incrementa il conteggio dei blocchi dei thread.|  
|[CComApartment::Unlock](../Topic/CComApartment::Unlock.md)|Decrementa il conteggio dei blocchi dei thread.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComApartment::m\_dwThreadID](../Topic/CComApartment::m_dwThreadID.md)|Contiene l'identificatore del thread.|  
|[CComApartment::m\_hThread](../Topic/CComApartment::m_hThread.md)|Contiene l'handle del thread.|  
|[CComApartment::m\_nLockCnt](../Topic/CComApartment::m_nLockCnt.md)|Contiene il numero di blocchi corrente del thread.|  
  
## Note  
 `CComApartment` viene utilizzato da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) per gestire un apartment in un modulo di raccolte EXE.  `CComApartment` fornisce metodi per incrementare o decrementare il conteggio dei blocchi su un thread.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)