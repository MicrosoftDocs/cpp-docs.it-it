---
title: "CComFakeCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComFakeCriticalSection"
  - "CComFakeCriticalSection"
  - "ATL::CComFakeCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComFakeCriticalSection class"
ms.assetid: a4811b97-96bb-493b-ab9f-62822aeddb10
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CComFakeCriticalSection Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce gli stessi metodi [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) ma non fornisce una sezione critica.  
  
## Sintassi  
  
```  
  
class CComFakeCriticalSection  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComFakeCriticalSection::Init](../Topic/CComFakeCriticalSection::Init.md)|Non esegue alcuna operazione poiché non esiste una sezione critica.|  
|[CComFakeCriticalSection::Lock](../Topic/CComFakeCriticalSection::Lock.md)|Non esegue alcuna operazione poiché non esiste una sezione critica.|  
|[CComFakeCriticalSection::Term](../Topic/CComFakeCriticalSection::Term.md)|Non esegue alcuna operazione poiché non esiste una sezione critica.|  
|[CComFakeCriticalSection::Unlock](../Topic/CComFakeCriticalSection::Unlock.md)|Non esegue alcuna operazione poiché non esiste una sezione critica.|  
  
## Note  
 `CComFakeCriticalSection` riflettono i metodi [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).  Tuttavia, `CComFakeCriticalSection` non è disponibile una sezione critica, pertanto, i relativi metodi non eseguono alcuna operazione.  
  
 In genere, si utilizza `CComFakeCriticalSection` con un nome `typedef`, `AutoCriticalSection` o `CriticalSection`.  Quando si utilizza [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), dei nomi `typedef``CComFakeCriticalSection`.  Quando si utilizza [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), fare riferimento [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md) e `CComCriticalSection`, rispettivamente.  
  
## Requisiti  
 **Header:** atlcore.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)