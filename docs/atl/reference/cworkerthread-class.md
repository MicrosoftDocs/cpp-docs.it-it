---
title: "CWorkerThread Class | Microsoft Docs"
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
  - "ATL::CWorkerThread<ThreadTraits>"
  - "ATL::CWorkerThread"
  - "ATL.CWorkerThread"
  - "ATL.CWorkerThread<ThreadTraits>"
  - "CWorkerThread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWorkerThread class"
ms.assetid: be79a832-1345-4a36-a13e-a406cc65286f
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWorkerThread Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe crea un thread di lavoro o utilizza esistente, attende in uno o più gestisce del kernel ed esegue una funzione client specificata quando uno degli handle viene segnalata.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class ThreadTraits= DefaultThreadTraits  
>  
class CWorkerThread  
```  
  
#### Parametri  
 `ThreadTraits`  
 La classe che ha la funzione di creazione del thread, come [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) o [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md).  
  
## Membri  
  
### Strutture protette  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`WorkerClientEntry`||  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWorkerThread::CWorkerThread](../Topic/CWorkerThread::CWorkerThread.md)|Il costruttore per il thread di lavoro.|  
|[CWorkerThread::~CWorkerThread](../Topic/CWorkerThread::~CWorkerThread.md)|Il distruttore per il thread di lavoro.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWorkerThread::AddHandle](../Topic/CWorkerThread::AddHandle.md)|Chiamare questo metodo per aggiungere handle di oggetti waitable all'elenco gestito dal thread di lavoro.|  
|[CWorkerThread::AddTimer](../Topic/CWorkerThread::AddTimer.md)|Chiamare questo metodo per aggiungere un timer waitable periodico all'elenco gestito dal thread di lavoro.|  
|[CWorkerThread::GetThreadHandle](../Topic/CWorkerThread::GetThreadHandle.md)|Chiamare questo metodo per ottenere un handle del thread di lavoro.|  
|[CWorkerThread::GetThreadId](../Topic/CWorkerThread::GetThreadId.md)|Chiamare questo metodo per ottenere l'id del thread di lavoro.|  
|[CWorkerThread::Initialize](../Topic/CWorkerThread::Initialize.md)|Chiamare questo metodo per inizializzare il thread di lavoro.|  
|[CWorkerThread::RemoveHandle](../Topic/CWorkerThread::RemoveHandle.md)|Chiamare questo metodo per rimuovere un handle l'elenco di oggetti waitable.|  
|[CWorkerThread::Shutdown](../Topic/CWorkerThread::Shutdown.md)|Chiamare questo metodo per interrompere il thread di lavoro.|  
  
## Note  
  
### Per utilizzare CWorkerThread  
  
1.  Creare un'istanza della classe.  
  
2.  Chiamata [CWorkerThread::Initialize](../Topic/CWorkerThread::Initialize.md).  
  
3.  Chiamata [CWorkerThread::AddHandle](../Topic/CWorkerThread::AddHandle.md) con l'handle di un oggetto del kernel e un puntatore a un'implementazione [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
     \- oppure \-  
  
     Chiamare [CWorkerThread::AddTimer](../Topic/CWorkerThread::AddTimer.md) con un puntatore a un'implementazione [IWorkerThreadClient](../../atl/reference/iworkerthreadclient-interface.md).  
  
4.  Implementare [IWorkerThreadClient::Execute](../Topic/IWorkerThreadClient::Execute.md) per intraprendere azioni quando l'handle o il timer vengono segnalati.  
  
5.  Per rimuovere un oggetto dall'elenco di oggetti waitable, chiamare [CWorkerThread::RemoveHandle](../Topic/CWorkerThread::RemoveHandle.md).  
  
6.  Per interrompere il thread, chiamare [CWorkerThread::Shutdown](../Topic/CWorkerThread::Shutdown.md).  
  
## Requisiti  
 **Header:** atlutil.h  
  
## Vedere anche  
 [DefaultThreadTraits](../Topic/DefaultThreadTraits.md)   
 [Classi](../../atl/reference/atl-classes.md)   
 [Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)   
 [IWorkerThreadClient Interface](../../atl/reference/iworkerthreadclient-interface.md)