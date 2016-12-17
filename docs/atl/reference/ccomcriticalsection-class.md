---
title: "CComCriticalSection Class | Microsoft Docs"
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
  - "ATL.CComCriticalSection"
  - "CComCriticalSection"
  - "ATL::CComCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCriticalSection class"
ms.assetid: 44e1edd2-90be-4bfe-9739-58e8b419e7d1
caps.latest.revision: 21
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComCriticalSection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per ottenere e il rilascio della proprietà di un oggetto sezione critica.  
  
## Sintassi  
  
```  
  
class CComCriticalSection  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCriticalSection::CComCriticalSection](../Topic/CComCriticalSection::CComCriticalSection.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCriticalSection::Init](../Topic/CComCriticalSection::Init.md)|Crea e inizializza un oggetto sezione critica.|  
|[CComCriticalSection::Lock](../Topic/CComCriticalSection::Lock.md)|Ottiene la proprietà dell'oggetto sezione critica.|  
|[CComCriticalSection::Term](../Topic/CComCriticalSection::Term.md)|Rilascia risorse di sistema utilizzate dall'oggetto sezione critica.|  
|[CComCriticalSection::Unlock](../Topic/CComCriticalSection::Unlock.md)|Elimina la proprietà dell'oggetto sezione critica.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCriticalSection::m\_sec](../Topic/CComCriticalSection::m_sec.md)|Un oggetto **CRITICAL\_SECTION**.|  
  
## Note  
 `CComCriticalSection` è simile classificare [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), ma è necessario impostare in modo esplicito inizializzare e pubblicare la sezione critica.  
  
 In genere, si utilizza `CComCriticalSection` con il nome [CriticalSection](../Topic/CComMultiThreadModel::CriticalSection.md)di `typedef`.  Questo riferimento al nome `CComCriticalSection` quando [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) sta utilizzando.  
  
 Vedere [classe di CComCritSecLock](../../atl/reference/ccomcritseclock-class.md) in modo più sicuro utilizzare questa classe che la chiamata `Lock` e `Unlock` direttamente.  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CComFakeCriticalSection Class](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComCritSecLock Class](../../atl/reference/ccomcritseclock-class.md)