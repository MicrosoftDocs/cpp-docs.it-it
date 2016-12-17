---
title: "CComSafeDeleteCriticalSection Class | Microsoft Docs"
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
  - "CComSafeDeleteCriticalSection"
  - "ATL::CComSafeDeleteCriticalSection"
  - "ATL.CComSafeDeleteCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComSafeDeleteCriticalSection class"
ms.assetid: 4d2932c4-ba8f-48ec-8664-1db8bed01314
caps.latest.revision: 18
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComSafeDeleteCriticalSection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per ottenere e il rilascio della proprietà di un oggetto sezione critica.  
  
## Sintassi  
  
```  
  
class CComSafeDeleteCriticalSection : public CComCriticalSection  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection](../Topic/CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection.md)|Costruttore.|  
|[CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection](../Topic/CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeDeleteCriticalSection::Init](../Topic/CComSafeDeleteCriticalSection::Init.md)|Crea e inizializza un oggetto sezione critica.|  
|[CComSafeDeleteCriticalSection::Lock](../Topic/CComSafeDeleteCriticalSection::Lock.md)|Ottiene la proprietà dell'oggetto sezione critica.|  
|[CComSafeDeleteCriticalSection::Term](../Topic/CComSafeDeleteCriticalSection::Term.md)|Rilascia risorse di sistema utilizzate dall'oggetto sezione critica.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_bInitialized](../Topic/CComSafeDeleteCriticalSection::m_bInitialized.md)|Contrassegna l'oggetto interno **CRITICAL\_SECTION** è stato inizializzato.|  
  
## Note  
 `CComSafeDeleteCriticalSection` deriva dalla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).  Tuttavia, `CComSafeDeleteCriticalSection` fornisce i meccanismi di sicurezza aggiuntivi su [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).  
  
 Quando un'istanza `CComSafeDeleteCriticalSection` area di validità o in modo esplicito vengono eliminati dalla memoria, l'oggetto sezione critica sottostante verrà automaticamente pulito se è ancora valido.  Inoltre, il metodo [CComSafeDeleteCriticalSection::Term](../Topic/CComSafeDeleteCriticalSection::Term.md) terminerà correttamente se l'oggetto sezione critica sottostante non è ancora stato allocato o è già stato rilasciato dalla memoria.  
  
 Vedere [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) per ulteriori informazioni sulle classi di supporto della sezione critica.  
  
## Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComSafeDeleteCriticalSection`  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)