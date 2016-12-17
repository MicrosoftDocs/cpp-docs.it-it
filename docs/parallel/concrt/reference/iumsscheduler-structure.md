---
title: "Struttura IUMSScheduler | Microsoft Docs"
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
  - "concrtrm/concurrency::IUMSScheduler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUMSScheduler (struttura)"
ms.assetid: 3a500225-4e02-4849-bb56-d744865f5870
caps.latest.revision: 18
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura IUMSScheduler
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia a un'astrazione di un'utilità di pianificazione di lavoro che desidera che la Gestione risorse del runtime di concorrenza passi thread UMS in modalità utente schedulable.  Gestione risorse utilizza questa interfaccia per comunicare con le utilità di pianificazione del thread UMS.  L'interfaccia `IUMSScheduler` eredita dall'interfaccia `IScheduler`.  
  
## Sintassi  
  
```  
struct IUMSScheduler : public IScheduler;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IUMSScheduler::SetCompletionList](../Topic/IUMSScheduler::SetCompletionList%20Method.md)|Assegna un'interfaccia `IUMSCompletionList` a un'utilità di pianificazione del thread UMS.|  
  
## Note  
 Se si implementa un'utilità di pianificazione personalizzata che comunica con Gestione risorse e si desidera che i thread UMS vengano passati all'utilità di pianificazione anziché i thread Win32 comuni, è necessario fornire un'implementazione dell'interfaccia `IUMSScheduler`.  Inoltre, è necessario impostare il valore dei criteri affinché la chiave dei criteri dell'utilità di pianificazione `SchedulerKind` sia `UmsThreadDefault`.  Se i criteri specificano il thread UMS, l'interfaccia `IScheduler` passata come un parametro al metodo [IResourceManager::RegisterScheduler](../Topic/IResourceManager::RegisterScheduler%20Method.md) deve essere un'interfaccia `IUMSScheduler`.  
  
 Gestione risorse è in grado di passare thread UMS solo su sistemi operativi che dispongono della funzionalità UMS. Sistemi operativi a 64 bit con Windows 7 e supporto thread UMS superiori.  Se si creano criteri dell'utilità di pianificazione con la chiave `SchedulerKind` impostata sul valore `UmsThreadDefault` e la piattaforma sottostante non supporta UMS, il valore della chiave `SchedulerKind` su quei criteri sarà cambiata sul valore `ThreadScheduler`.  È necessario rileggere sempre il valore di questi criteri prima di prevedere la ricezione di thread UMS.  
  
 L'interfaccia `IUMSScheduler` corrisponde a un'entità finale di un canale bidirezionale di comunicazione tra un'utilità di pianificazione e Gestione risorse.  L'altra entità finale viene rappresentata dalle interfacce `IResourceManager` e `ISchedulerProxy` implementate da Gestione risorse.  
  
## Gerarchia di ereditarietà  
 [IScheduler](../../../parallel/concrt/reference/ischeduler-structure.md)  
  
 `IUMSScheduler`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Enumerazione PolicyElementKey](../Topic/PolicyElementKey%20Enumeration.md)   
 [Struttura IScheduler](../../../parallel/concrt/reference/ischeduler-structure.md)   
 [Struttura IUMSCompletionList](../../../parallel/concrt/reference/iumscompletionlist-structure.md)   
 [Struttura IResourceManager](../../../parallel/concrt/reference/iresourcemanager-structure.md)