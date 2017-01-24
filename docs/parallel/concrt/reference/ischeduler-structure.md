---
title: "Struttura IScheduler | Microsoft Docs"
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
  - "concrtrm/concurrency::IScheduler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IScheduler (struttura)"
ms.assetid: 471de85a-2b1a-4b6d-ab81-2eff2737161e
caps.latest.revision: 18
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura IScheduler
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia a un'astrazione di un'utilità di pianificazione del lavoro.  Gestione risorse del runtime di concorrenza utilizza tale interfaccia per comunicare con le utilità di pianificazione del lavoro.  
  
## Sintassi  
  
```  
struct IScheduler;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IScheduler::AddVirtualProcessors](../Topic/IScheduler::AddVirtualProcessors%20Method.md)|Consente di offrire a un'utilità di pianificazione un set di radici del processore virtuale per l'utilizzo.  Ogni interfaccia `IVirtualProcessorRoot` rappresenta il diritto di eseguire un solo thread che possa eseguire lavoro per conto dell'utilità di pianificazione.|  
|[Metodo IScheduler::GetId](../Topic/IScheduler::GetId%20Method.md)|Consente di restituire un identificatore univoco per l'utilità di pianificazione.|  
|[Metodo IScheduler::GetPolicy](../Topic/IScheduler::GetPolicy%20Method.md)|Consente di restituire una copia dei criteri dell'utilità di pianificazione.  Per ulteriori informazioni sui criteri dell'utilità di pianificazione, vedere [SchedulerPolicy](../../../parallel/concrt/reference/schedulerpolicy-class.md).|  
|[Metodo IScheduler::NotifyResourcesExternallyBusy](../Topic/IScheduler::NotifyResourcesExternallyBusy%20Method.md)|Notifica a questa utilità di pianificazione che i thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` sono ora utilizzati da altre utilità di pianificazione.|  
|[Metodo IScheduler::NotifyResourcesExternallyIdle](../Topic/IScheduler::NotifyResourcesExternallyIdle%20Method.md)|Notifica a questa utilità di pianificazione che i thread di hardware rappresentati dal set di radici del processore virtuale nella matrice `ppVirtualProcessorRoots` non sono utilizzati da altre utilità di pianificazione.|  
|[Metodo IScheduler::RemoveVirtualProcessors](../Topic/IScheduler::RemoveVirtualProcessors%20Method.md)|Inizia la rimozione di radici del processore virtuale che sono state allocate precedentemente a questa utilità di pianificazione.|  
|[Metodo IScheduler::Statistics](../Topic/IScheduler::Statistics%20Method.md)|Consente di fornire informazioni correlate alle frequenze di arrivo e completamento delle attività, nonché modificare la lunghezza della coda per un'utilità di pianificazione.|  
  
## Note  
 Se si implementa un'utilità di pianificazione personalizzata che comunica con il gestore risorse, è necessario fornire un'implementazione dell'interfaccia `IScheduler`.  Questa interfaccia corrisponde a un'entità finale di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e Gestione risorse.  L'altra entità finale viene rappresentata dalle interfacce `IResourceManager` e `ISchedulerProxy` implementate da Gestione risorse.  
  
## Gerarchia di ereditarietà  
 `IScheduler`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Classe SchedulerPolicy](../../../parallel/concrt/reference/schedulerpolicy-class.md)   
 [Struttura IExecutionContext](../../../parallel/concrt/reference/iexecutioncontext-structure.md)   
 [Struttura IThreadProxy](../../../parallel/concrt/reference/ithreadproxy-structure.md)   
 [Struttura IVirtualProcessorRoot](../../../parallel/concrt/reference/ivirtualprocessorroot-structure.md)   
 [Struttura IResourceManager](../../../parallel/concrt/reference/iresourcemanager-structure.md)