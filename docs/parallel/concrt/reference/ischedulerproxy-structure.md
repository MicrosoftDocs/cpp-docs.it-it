---
title: "Struttura ISchedulerProxy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::ISchedulerProxy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISchedulerProxy (struttura)"
ms.assetid: af416973-7a1c-4c30-aa3b-4161c2aaea54
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Struttura ISchedulerProxy
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Interfaccia con cui le utilità di pianificazione comunicano con Gestione risorse del runtime di concorrenza per negoziare l'allocazione delle risorse.  
  
## Sintassi  
  
```  
struct ISchedulerProxy;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ISchedulerProxy::BindContext](../Topic/ISchedulerProxy::BindContext%20Method.md)|Associa un contesto di esecuzione a un proxy del thread, se non è già associato ad uno.|  
|[Metodo ISchedulerProxy::CreateOversubscriber](../Topic/ISchedulerProxy::CreateOversubscriber%20Method.md)|Crea una nuova radice di processore virtuale nel thread di hardware associato a una risorsa di esecuzione esistente.|  
|[Metodo ISchedulerProxy::RequestInitialVirtualProcessors](../Topic/ISchedulerProxy::RequestInitialVirtualProcessors%20Method.md)|Consente di richiedere un'allocazione iniziale di radici del processore virtuale.  Ogni radice del processore virtuale rappresenta la possibilità di eseguire un thread che può eseguire lavoro per l'utilità di pianificazione.|  
|[Metodo ISchedulerProxy::Shutdown](../Topic/ISchedulerProxy::Shutdown%20Method.md)|Notifica al gestore risorse che l'utilità di pianificazione si sta chiudendo.  Ciò determinerà la richiesta immediata da parte di Gestione risorse di recuperare tutte le risorse concesse all'utilità di pianificazione.|  
|[Metodo ISchedulerProxy::SubscribeCurrentThread](../Topic/ISchedulerProxy::SubscribeCurrentThread%20Method.md)|Consente di registrare il thread corrente con Gestione risorse associandolo all'utilità di pianificazione.|  
|[Metodo ISchedulerProxy::UnbindContext](../Topic/ISchedulerProxy::UnbindContext%20Method.md)|Annulla l'associazione di un proxy del thread dal contesto di esecuzione specificato dal parametro `pContext` e la restituisce al pool libero della factory di proxy di thread.  Tale metodo può essere chiamato solo su un contesto di esecuzione che è stato associato tramite il metodo [ISchedulerProxy::BindContext](../Topic/ISchedulerProxy::BindContext%20Method.md) e non è stato ancora avviato tramite la presenza del parametro `pContext` di una chiamata al metodo [IThreadProxy::SwitchTo](../Topic/IThreadProxy::SwitchTo%20Method.md).|  
  
## Note  
 Gestione risorse passa un'interfaccia `ISchedulerProxy` a ogni utilità di pianificazione che si registra insieme mediante il metodo [IResourceManager::RegisterScheduler](../Topic/IResourceManager::RegisterScheduler%20Method.md).  
  
## Gerarchia di ereditarietà  
 `ISchedulerProxy`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IScheduler](../../../parallel/concrt/reference/ischeduler-structure.md)   
 [Struttura IThreadProxy](../../../parallel/concrt/reference/ithreadproxy-structure.md)   
 [Struttura IVirtualProcessorRoot](../../../parallel/concrt/reference/ivirtualprocessorroot-structure.md)   
 [Struttura IResourceManager](../../../parallel/concrt/reference/iresourcemanager-structure.md)