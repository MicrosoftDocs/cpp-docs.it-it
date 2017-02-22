---
title: "Struttura IExecutionContext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IExecutionContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IExecutionContext (struttura)"
ms.assetid: f3108089-ecda-4b07-86db-3efae60c31e0
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Struttura IExecutionContext
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia a un contesto di esecuzione che può essere in esecuzione su un processore virtuale specificato e il cui contesto può essere cambiato cooperativamente.  
  
## Sintassi  
  
```  
struct IExecutionContext;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IExecutionContext::Dispatch](../Topic/IExecutionContext::Dispatch%20Method.md)|Il metodo chiamato quando un proxy del thread inizia l'esecuzione di un particolare contesto di esecuzione.  Deve corrispondere alla routine di lavoro principale per l'utilità di pianificazione.|  
|[Metodo IExecutionContext::GetId](../Topic/IExecutionContext::GetId%20Method.md)|Consente di restituire un identificatore univoco per il contesto di esecuzione.|  
|[Metodo IExecutionContext::GetProxy](../Topic/IExecutionContext::GetProxy%20Method.md)|Consente di restituire un'interfaccia al proxy del thread che sta eseguendo il contesto.|  
|[Metodo IExecutionContext::GetScheduler](../Topic/IExecutionContext::GetScheduler%20Method.md)|Consente di restituire un'interfaccia all'utilità di pianificazione a cui appartiene tale contesto di esecuzione.|  
|[Metodo IExecutionContext::SetProxy](../Topic/IExecutionContext::SetProxy%20Method.md)|Associa un proxy del thread a questo contesto di esecuzione.  Il proxy del thread associato richiama questo metodo poco prima di iniziare l'esecuzione del metodo `Dispatch` del contesto.|  
  
## Note  
 Se si implementa un'utilità di pianificazione personalizzata che si interfaccia con il gestore risorse del runtime di concorrenza, sarà necessario implementare l'interfaccia `IExecutionContext`.  I thread creati da Gestione risorse eseguono un lavoro per conto dell'utilità di pianificazione mediante l'esecuzione del metodo `IExecutionContext::Dispatch`.  
  
## Gerarchia di ereditarietà  
 `IExecutionContext`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IScheduler](../../../parallel/concrt/reference/ischeduler-structure.md)   
 [Struttura IThreadProxy](../../../parallel/concrt/reference/ithreadproxy-structure.md)