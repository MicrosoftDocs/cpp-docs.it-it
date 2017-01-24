---
title: "CHandle Class | Microsoft Docs"
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
  - "ATL.CHandle"
  - "ATL::CHandle"
  - "CHandle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHandle class"
ms.assetid: 883e9db5-40ec-4e29-9c74-4dd2ddd2e35d
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CHandle Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi per la creazione e l'utilizzo di un oggetto di handle.  
  
## Sintassi  
  
```  
  
class CHandle  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::CHandle](../Topic/CHandle::CHandle.md)|Costruttore.|  
|[CHandle::~CHandle](../Topic/CHandle::~CHandle.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::Attach](../Topic/CHandle::Attach.md)|Chiamare questo metodo per associare l'oggetto `CHandle` per gestire esistenti.|  
|[CHandle::Close](../Topic/CHandle::Close.md)|Chiamare questo metodo per chiudere un oggetto `CHandle`.|  
|[CHandle::Detach](../Topic/CHandle::Detach.md)|Chiamare questo metodo per rimuovere un handle da un oggetto `CHandle`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::operator HANDLE](../Topic/CHandle::operator%20HANDLE.md)|Restituisce il valore dell'handle memorizzato.|  
|[CHandle::operator \=](../Topic/CHandle::operator%20=.md)|Operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHandle::m\_h](../Topic/CHandle::m_h.md)|La variabile membro che contiene l'handle.|  
  
## Note  
 Un oggetto `CHandle` può essere utilizzato ogni volta che un handle sono necessarie: la differenza principale è che l'oggetto `CHandle` automaticamente eliminato.  
  
> [!NOTE]
>  Alcune funzioni API utilizzeranno NULL come gestire vuote o non valide, mentre altri utilizzano INVALID\_HANDLE\_VALUE.  Gli utilizzi di`CHandle` solo NULL e tratteranno INVALID\_HANDLE\_VALUE come gestire reali.  Se si chiama un'api che può restituire INVALID\_HANDLE\_VALUE, è necessario verificare questo valore prima di chiamare [CHandle::Attach](../Topic/CHandle::Attach.md) o di passarli al costruttore `CHandle` e anziché passare NULL.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)