---
title: "Struttura IResourceManager | Microsoft Docs"
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
  - "concrtrm/concurrency::IResourceManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IResourceManager (struttura)"
ms.assetid: 3dd5ec2c-fe53-4121-ae77-1bc1d1167ff4
caps.latest.revision: 20
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura IResourceManager
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia alla Gestione risorse del runtime di concorrenza.  Si tratta dell'interfaccia con cui le utilità di pianificazione comunicano con Gestione risorse.  
  
## Sintassi  
  
```  
struct IResourceManager;  
```  
  
## Membri  
  
### Enumerazioni pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione IResourceManager::OSVersion](../Topic/IResourceManager::OSVersion%20Enumeration.md)|Un tipo enumerato che rappresenta la versione del sistema operativo.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IResourceManager::CreateNodeTopology](../Topic/IResourceManager::CreateNodeTopology%20Method.md)|Questo metodo, presente solo nelle build di debug del runtime, è un hook del test progettato per facilitare il controllo della Gestione risorse su topologie hardware varianti, senza richiedere un hardware effettivo corrispondente alla configurazione.  Con le compilazioni del runtime per la vendita, il metodo sarà restituito senza eseguire alcuna azione.|  
|[Metodo IResourceManager::GetAvailableNodeCount](../Topic/IResourceManager::GetAvailableNodeCount%20Method.md)|Restituisce il numero di nodi disponibili per Gestione risorse.|  
|[Metodo IResourceManager::GetFirstNode](../Topic/IResourceManager::GetFirstNode%20Method.md)|Restituisce il primo nodo nell'ordine di enumerazione come definito da Gestione risorse.|  
|[Metodo IResourceManager::Reference](../Topic/IResourceManager::Reference%20Method.md)|Incrementa il conteggio dei riferimenti sull'istanza del gestore risorse.|  
|[Metodo IResourceManager::RegisterScheduler](../Topic/IResourceManager::RegisterScheduler%20Method.md)|Consente di registrare un'utilità di pianificazione con Gestione risorse.  Una volta registrata l'utilità di pianificazione, deve comunicare con il gestore risorse utilizzando l'interfaccia `ISchedulerProxy` restituita.|  
|[Metodo IResourceManager::Release](../Topic/IResourceManager::Release%20Method.md)|Riduce il conteggio dei riferimenti sull'istanza del gestore risorse.  Gestione risorse viene distrutto quando il conteggio dei riferimenti passa a `0`.|  
  
## Note  
 Utilizzare la funzione [CreateResourceManager](../Topic/CreateResourceManager%20Function.md) per ottenere un'interfaccia all'istanza singleton di Gestione risorse.  Il metodo incrementa un conteggio dei riferimenti su Gestione risorse ed è necessario richiamare il metodo [IResourceManager::Release](../Topic/IResourceManager::Release%20Method.md) per rilasciare il riferimento dopo aver terminato l'utilizzo di Gestione risorse.  In genere, ogni utilità di pianificazione creata richiamerà questo metodo durante la creazione e rilascerà il riferimento a Gestione risorse dopo l'arresto.  
  
## Gerarchia di ereditarietà  
 `IResourceManager`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura ISchedulerProxy](../../../parallel/concrt/reference/ischedulerproxy-structure.md)   
 [Struttura IScheduler](../../../parallel/concrt/reference/ischeduler-structure.md)