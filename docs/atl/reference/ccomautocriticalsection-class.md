---
title: "CComAutoCriticalSection Class | Microsoft Docs"
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
  - "ATL.CComAutoCriticalSection"
  - "ATL::CComAutoCriticalSection"
  - "CComAutoCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAutoCriticalSection class"
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComAutoCriticalSection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CComAutoCriticalSection` fornisce metodi per ottenere e il rilascio della proprietà di un oggetto sezione critica.  
  
## Sintassi  
  
```  
  
class CComAutoCriticalSection : public CComCriticalSection  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAutoCriticalSection::CComAutoCriticalSection](../Topic/CComAutoCriticalSection::CComAutoCriticalSection.md)|Costruttore.|  
|[CComAutoCriticalSection::~CComAutoCriticalSection](../Topic/CComAutoCriticalSection::~CComAutoCriticalSection.md)|Il distruttore.|  
  
## Note  
 `CComAutoCriticalSection` è simile classificare [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), a meno che `CComAutoCriticalSection` automaticamente inizializzare l'oggetto sezione critica nel costruttore.  
  
 In genere, si utilizza `CComAutoCriticalSection` con il nome [AutoCriticalSection](../Topic/CComMultiThreadModel::AutoCriticalSection.md)di `typedef`.  Questo riferimento al nome `CComAutoCriticalSection` quando [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) sta utilizzando.  
  
 I metodi `Term` e `Init` da [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si utilizza questa classe.  
  
## Gerarchia di ereditarietà  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComAutoCriticalSection`  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [CComFakeCriticalSection Class](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)