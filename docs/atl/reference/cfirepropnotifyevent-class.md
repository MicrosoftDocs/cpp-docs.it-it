---
title: "CFirePropNotifyEvent Class | Microsoft Docs"
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
  - "CFirePropNotifyEvent"
  - "ATL::CFirePropNotifyEvent"
  - "ATL.CFirePropNotifyEvent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFirePropNotifyEvent class"
  - "punti di connessione [C++], notifying of events"
  - "sinks, notifying of ATL events"
ms.assetid: eb7a563e-6bce-4cdf-8d20-8c6a5307781b
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFirePropNotifyEvent Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la comunicazione del sink del contenitore relative alle modifiche delle proprietà del controllo.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CFirePropNotifyEvent  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFirePropNotifyEvent::FireOnChanged](../Topic/CFirePropNotifyEvent::FireOnChanged.md)|\(Proprietà statica\) al sink contenitore che una proprietà del controllo è stato modificato.|  
|[CFirePropNotifyEvent::FireOnRequestEdit](../Topic/CFirePropNotifyEvent::FireOnRequestEdit.md)|\(Proprietà statica\) al sink contenitore che una proprietà del controllo sta la modifica.|  
  
## Note  
 `CFirePropNotifyEvent` ha due metodi che informa il sink del contenitore che una proprietà del controllo è stato modificato o sta la modifica.  
  
 Se la classe che implementa il controllo deriva da `IPropertyNotifySink`, i metodi `CFirePropNotifyEvent` vengono richiamati quando si chiama `FireOnRequestEdit` o `FireOnChanged`.  Se la classe del controllo non è derivata da `IPropertyNotifySink`, chiamate alle funzioni `S_OK`restituita.  
  
 Per ulteriori informazioni sulla creazione di controlli, vedere [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md).  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)