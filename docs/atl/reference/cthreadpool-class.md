---
title: "CThreadPool Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CThreadPool"
  - "ATL::CThreadPool"
  - "CThreadPool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CThreadPool class"
ms.assetid: 06683718-01b9-413c-9481-2dc1734ec70f
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CThreadPool Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un pool di thread di lavoro che elaborano una coda di elementi di lavoro.  
  
## Sintassi  
  
```  
  
      template <  
   class Worker,  
   class ThreadTraits = DefaultThreadTraits  
>  
class CThreadPool :  
   public IThreadPoolConfig  
```  
  
#### Parametri  
 *Lavoro*  
 La classe conformi a [archetipo di lavoro](../../atl/reference/worker-archetype.md) fornito il codice utilizzato agli elementi dell'analisi di processo in coda nel pool di thread.  
  
 `ThreadTraits`  
 La classe che fornisce la funzione utilizzata per creare i thread nel pool.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CThreadPool::CThreadPool](../Topic/CThreadPool::CThreadPool.md)|Il costruttore per il pool di thread.|  
|[CThreadPool::~CThreadPool](../Topic/CThreadPool::~CThreadPool.md)|Il distruttore per il pool di thread.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CThreadPool::AddRef](../Topic/CThreadPool::AddRef.md)|Implementazione di `IUnknown::AddRef`.|  
|[CThreadPool::GetNumThreads](../Topic/CThreadPool::GetNumThreads.md)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[CThreadPool::GetQueueHandle](../Topic/CThreadPool::GetQueueHandle.md)|Chiamare questo metodo per ottenere un handle delle porte di completamento di I\/O utilizzata agli elementi di lavoro della coda.|  
|[CThreadPool::GetSize](../Topic/CThreadPool::GetSize.md)|Chiamare questo metodo per ottenere il numero di thread nel pool.|  
|[CThreadPool::GetTimeout](../Topic/CThreadPool::GetTimeout.md)|Chiamare questo metodo per ottenere il tempo massimo in millisecondi che il pool di thread rimarrà un thread per interrompere.|  
|[CThreadPool::Initialize](../Topic/CThreadPool::Initialize.md)|Chiamare questo metodo per inizializzare il pool di thread.|  
|[CThreadPool::QueryInterface](../Topic/CThreadPool::QueryInterface.md)|Implementazione **IUnknown::QueryInterface**.|  
|[CThreadPool::QueueRequest](../Topic/CThreadPool::QueueRequest.md)|Chiamare questo metodo per accodare un elemento di lavoro da gestire da un thread del pool.|  
|[CThreadPool::Release](../Topic/CThreadPool::Release.md)|Implementazione di `IUnknown::Release`.|  
|[CThreadPool::SetSize](../Topic/CThreadPool::SetSize.md)|Chiamare questo metodo per impostare il numero di thread nel pool.|  
|[CThreadPool::SetTimeout](../Topic/CThreadPool::SetTimeout.md)|Chiamare questo metodo per impostare il tempo massimo in millisecondi che il pool di thread rimarrà un thread per interrompere.|  
|[CThreadPool::Shutdown](../Topic/CThreadPool::Shutdown.md)|Chiamare questo metodo per interrompere il pool di thread.|  
  
## Note  
 I thread del pool vengono creati e vengono eliminati al pool inizializzato, ridimensionato o, viene arrestato.  Un'istanza *di lavoro* della classe viene creata nello stack di ogni thread di lavoro nel pool.  Ogni istanza vivrà per la durata del thread.  
  
 Immediatamente dopo la creazione di un thread, Worker::`Initialize` verrà chiamato sull'oggetto associato a tale thread.  Immediatamente prima della distruzione di un thread, Worker::`Terminate` verrà chiamato.  Entrambi i metodi devono accettare un argomento **void\***.  Il valore di questo argomento passato al pool di thread con il parametro `pvWorkerParam`[CThreadPool::Initialize](../Topic/CThreadPool::Initialize.md).  
  
 Quando sono presenti elementi di lavoro nella coda e i thread di lavoro disponibili per il lavoro, un thread di lavoro eseguirà il raggiungimento di un elemento dalla coda e chiamerà il metodo Execute dell'oggetto del *lavoro* per tale thread.  Tre elementi vengono quindi passati al metodo: l'elemento dalla coda, da stesso `pvWorkerParam` passato a Worker::`Initialize` e a Worker::`Terminate`e un puntatore a una struttura [SOVRAPPOSTO](http://msdn.microsoft.com/library/windows/desktop/ms684342) utilizzata per la coda delle porte di completamento di I\/O.  
  
 La classe *di lavoro* dichiara il tipo di elementi che verranno ordinati in coda nel pool di thread immettendo un typedef, Worker::`RequestType`.  Questo tipo deve essere in grado di eseguire il cast da e verso **ULONG\_PTR**.  
  
 Un esempio di una classe *di lavoro* è [CNonStatelessWorker Class](../../atl/reference/cnonstatelessworker-class.md).  
  
## Gerarchia di ereditarietà  
 `IUnknown`  
  
 [IThreadPoolConfig](../../atl/reference/ithreadpoolconfig-interface.md)  
  
 `CThreadPool`  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [IThreadPoolConfig Interface](../../atl/reference/ithreadpoolconfig-interface.md)   
 [DefaultThreadTraits](../Topic/DefaultThreadTraits.md)   
 [Classi](../../atl/reference/atl-classes.md)