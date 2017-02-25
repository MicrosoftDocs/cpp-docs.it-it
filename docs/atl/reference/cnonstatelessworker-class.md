---
title: "CNonStatelessWorker Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CNonStatelessWorker<Worker>"
  - "ATL::CNonStatelessWorker"
  - "ATL.CNonStatelessWorker"
  - "CNonStatelessWorker"
  - "ATL::CNonStatelessWorker<Worker>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNonStatelessWorker class"
ms.assetid: d00936c6-9e7d-49fb-b87d-417b963367d1
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CNonStatelessWorker Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Riceve le richieste da un pool di thread e le passa sopra a un oggetto di lavoro che viene creato ed eliminato a ogni richiesta.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class Worker  
>  
class CNonStatelessWorker  
```  
  
#### Parametri  
 *Lavoro*  
 Una classe di thread di lavoro conformi a [archetipo di lavoro](../../atl/reference/worker-archetype.md) appropriato per gestire le richieste in coda in [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNonStatelessWorker::RequestType](../Topic/CNonStatelessWorker::RequestType.md)|Implementazione [WorkerArchetype::RequestType](../Topic/WorkerArchetype::RequestType.md).|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNonStatelessWorker::Execute](../Topic/CNonStatelessWorker::Execute.md)|Implementazione [WorkerArchetype::Execute](../Topic/WorkerArchetype::Execute.md).|  
|[CNonStatelessWorker::Initialize](../Topic/CNonStatelessWorker::Initialize.md)|Implementazione [WorkerArchetype::Initialize](../Topic/WorkerArchetype::Initialize.md).|  
|[CNonStatelessWorker::Terminate](../Topic/CNonStatelessWorker::Terminate.md)|Implementazione [WorkerArchetype::Terminate](../Topic/WorkerArchetype::Terminate.md).|  
  
## Note  
 Questa classe è un thread di lavoro semplice da utilizzare con [CThreadPool](../../atl/reference/cthreadpool-class.md).  Questa classe non fornisce alcuna funzionalità di gestione richieste specifici.  Invece, la creazione di un'istanza del *lavoro* per la richiesta e delega l'implementazione dei metodi tale istanza.  
  
 Il vantaggio di questa classe è che consente di modificare il modello di stato per le classi esistenti del thread di lavoro.  `CThreadPool` creerà un singolo thread di lavoro per la durata del thread, se lo lo stato del lavoro, si utilizzerà in più richieste.  Semplicemente eseguendo il wrapping della classe del modello `CNonStatelessWorker` prima di utilizzarlo con `CThreadPool`, la durata di lavoro e lo stato che utilizza è limitata a una singola richiesta.  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [CThreadPool Class](../../atl/reference/cthreadpool-class.md)   
 [Worker Archetype](../../atl/reference/worker-archetype.md)   
 [Classi](../../atl/reference/atl-classes.md)