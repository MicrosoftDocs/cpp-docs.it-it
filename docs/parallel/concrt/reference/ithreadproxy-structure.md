---
title: "Struttura IThreadProxy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::IThreadProxy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IThreadProxy (struttura)"
ms.assetid: feb89241-a555-4e61-ad48-40add54daeca
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Struttura IThreadProxy
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Astrazione per un thread di esecuzione.  A seconda della chiave di criteri `SchedulerType` dell'utilità di pianificazione che si crea, la Gestione risorse concederà un proxy del thread appoggiato da un thread Win32 normale o un thread UMS in modalità utente.  I thread UMS sono supportati su sistemi operativi a 64 bit con Windows versione 7 e successive.  
  
## Sintassi  
  
```  
struct IThreadProxy;  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo IThreadProxy::GetId](../Topic/IThreadProxy::GetId%20Method.md)|Consente di restituire un identificatore univoco per il proxy del thread.|  
|[Metodo IThreadProxy::SwitchOut](../Topic/IThreadProxy::SwitchOut%20Method.md)|Annulla l'associazione il contesto dalla radice virtuale sottostante del processore.|  
|[Metodo IThreadProxy::SwitchTo](../Topic/IThreadProxy::SwitchTo%20Method.md)|Consente di eseguire un cambio di contesto cooperativo passando dal contesto attualmente in esecuzione a uno diverso.|  
|[Metodo IThreadProxy::YieldToSystem](../Topic/IThreadProxy::YieldToSystem%20Method.md)|Fa in modo che il thread chiamante ceda l'esecuzione a un altro thread pronto per essere eseguito sul processore corrente.  Il sistema operativo seleziona il thread successivo da eseguire.|  
  
## Note  
 I proxy del thread sono associati ai contesti di esecuzione rappresentati dall'interfaccia `IExecutionContext` in qualità di mezzo per l'invio del lavoro.  
  
## Gerarchia di ereditarietà  
 `IThreadProxy`  
  
## Requisiti  
 **Header:** concrtrm.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Struttura IExecutionContext](../../../parallel/concrt/reference/iexecutioncontext-structure.md)   
 [Struttura IScheduler](../../../parallel/concrt/reference/ischeduler-structure.md)   
 [Struttura IVirtualProcessorRoot](../../../parallel/concrt/reference/ivirtualprocessorroot-structure.md)