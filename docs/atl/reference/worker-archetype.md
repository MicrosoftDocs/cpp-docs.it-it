---
title: "Worker Archetype | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Worker archetype"
ms.assetid: 834145cd-09d3-4149-bc99-620e1871cbfb
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Worker Archetype
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le classi conformi a archetipo *di lavoro* forniscono il codice agli elementi dell'analisi di processo in coda in un pool di thread.  
  
 **Implementazione**  
  
 Per implementare la classe conformi a questo archetipo, la classe deve fornire le funzionalità seguenti:  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Initialize](../Topic/WorkerArchetype::Initialize.md)|Chiamato per inizializzare l'oggetto di lavoro prima di tutte le richieste vengono passati a [di esecuzione](../Topic/WorkerArchetype::Execute.md).|  
|[Execute](../Topic/WorkerArchetype::Execute.md)|Chiamato per elaborare un elemento di lavoro.|  
|[Termina](../Topic/WorkerArchetype::Terminate.md)|Chiamato per uninitialize l'oggetto di lavoro dopo tutte le richieste è stato passato a [di esecuzione](../Topic/WorkerArchetype::Execute.md).|  
  
|Typedef|Descrizione|  
|-------------|-----------------|  
|[RequestType](../Topic/WorkerArchetype::RequestType.md)|Un typedef per il tipo di elemento di lavoro che può essere elaborato dalla classe di lavoro.|  
  
 Gli aspetti comuni di una classe *di lavoro* è simile al seguente:  
  
 [!code-cpp[NVC_ATL_Utilities#137](../../atl/codesnippet/CPP/worker-archetype_1.cpp)]  
  
 **Implementazioni di esistenti**  
  
 Queste classi sono conformi a questo archetipo:  
  
|Classe|Descrizione|  
|------------|-----------------|  
|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|Riceve le richieste dal pool di thread e le passa sopra a un oggetto di lavoro creato e distrutte per ogni richiesta.|  
  
 **Utilizzare**  
  
 Questi parametri di modello che la classe per adattarli a questo archetipo:  
  
|Nome parametro|Utilizzato da|  
|--------------------|-------------------|  
|*Lavoro*|[CThreadPool](../../atl/reference/cthreadpool-class.md)|  
|*Lavoro*|[CNonStatelessWorker](../../atl/reference/cnonstatelessworker-class.md)|  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [Archetypes](../../atl/reference/atl-archetypes.md)   
 [Concetti](../../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)