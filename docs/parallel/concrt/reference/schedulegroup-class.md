---
title: "Classe ScheduleGroup | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::ScheduleGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ScheduleGroup (classe)"
ms.assetid: 86d380ff-f2e8-411c-b1a8-22bd3079824a
caps.latest.revision: 20
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe ScheduleGroup
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Consente di rappresentare un'astrazione per un gruppo di pianificazione.  I gruppi di pianificazione organizzano un set di lavoro correlato che trae vantaggio da una chiusura pianificata a livello temporaneo, eseguendo un'altra attività nello stesso gruppo prima di spostarsi in un altro gruppo, o a livello spaziale, eseguendo più elementi all'interno dello stesso gruppo sullo stesso nodo NUMA o sul socket fisico.  
  
## Sintassi  
  
```  
class ScheduleGroup;  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore ScheduleGroup::~ScheduleGroup](../Topic/ScheduleGroup::~ScheduleGroup%20Destructor.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ScheduleGroup::Id](../Topic/ScheduleGroup::Id%20Method.md)|Consente di restituire un identificatore per il gruppo di pianificazione che è univoco all'interno dell'utilità di pianificazione a cui appartiene il gruppo.|  
|[Metodo ScheduleGroup::Reference](../Topic/ScheduleGroup::Reference%20Method.md)|Incrementa il conteggio dei riferimenti di gruppo di pianificazione.|  
|[Metodo ScheduleGroup::Release](../Topic/ScheduleGroup::Release%20Method.md)|Decrementa il conteggio dei riferimenti di gruppo di pianificazione.|  
|[Metodo ScheduleGroup::ScheduleTask](../Topic/ScheduleGroup::ScheduleTask%20Method.md)|Consente di pianificare un'attività semplificata all'interno del gruppo di pianificazione.|  
  
## Gerarchia di ereditarietà  
 `ScheduleGroup`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe CurrentScheduler](../../../parallel/concrt/reference/currentscheduler-class.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)