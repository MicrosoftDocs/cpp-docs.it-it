---
title: "Struttura IExecutionResource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IExecutionResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IExecutionResource (struttura)"
ms.assetid: 6b27042b-b98c-4f7f-b831-566950af84cd
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Struttura IExecutionResource
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'astrazione per un thread di hardware.  
  
## Sintassi  
  
```  
struct IExecutionResource;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IExecutionResource::CurrentSubscriptionLevel](../Topic/IExecutionResource::CurrentSubscriptionLevel%20Method.md)|Consente di restituire il numero di radici del processore virtuale attivate e i thread esterni sottoscritti associati attualmente al thread di hardware sottostante che rappresenta la risorsa di esecuzione.|  
|[Metodo IExecutionResource::GetExecutionResourceId](../Topic/IExecutionResource::GetExecutionResourceId%20Method.md)|Consente di restituire un identificatore univoco per il thread di hardware rappresentato dalla risorsa di esecuzione.|  
|[Metodo IExecutionResource::GetNodeId](../Topic/IExecutionResource::GetNodeId%20Method.md)|Consente di restituire un identificatore univoco per il nodo del processore a cui appartiene la risorsa di esecuzione.|  
|[Metodo IExecutionResource::Remove](../Topic/IExecutionResource::Remove%20Method.md)|Consente di restituire la risorsa di esecuzione su Gestione risorse.|  
  
## Note  
 Le risorse dell'esecuzione possono essere autonome o associate con le radici del processore virtuale.  Una risorsa dell'esecuzione autonoma viene creata quando un thread nell'applicazione crea una sottoscrizione del thread.  I metodi [ISchedulerProxy::SubscribeThread](../Topic/ISchedulerProxy::SubscribeCurrentThread%20Method.md) e [ISchedulerProxy::RequestInitialVirtualProcessors](../Topic/ISchedulerProxy::RequestInitialVirtualProcessors%20Method.md) creano sottoscrizioni al thread e restituiscono un'interfaccia `IExecutionResource` che rappresenta la sottoscrizione.  La creazione di una sottoscrizione di thread è una modalità per informare la Gestione risorse che un thread specificato parteciperà nel lavoro messo in coda a un'utilità di pianificazione, insieme alle radici del processore virtuale che la Gestione risorse assegna all'utilità di pianificazione.  Gestione risorse utilizza le informazioni per evitare di eseguire l'oversubscription dei thread di hardware laddove possibile.  
  
## Gerarchia di ereditarietà  
 `IExecutionResource`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IVirtualProcessorRoot](../../../parallel/concrt/reference/ivirtualprocessorroot-structure.md)   
 [Metodo ISchedulerProxy::SubscribeCurrentThread](../Topic/ISchedulerProxy::SubscribeCurrentThread%20Method.md)   
 [Metodo ISchedulerProxy::RequestInitialVirtualProcessors](../Topic/ISchedulerProxy::RequestInitialVirtualProcessors%20Method.md)