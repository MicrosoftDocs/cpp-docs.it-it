---
title: "Agenti asincroni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "agenti [Runtime di concorrenza]"
  - "agenti asincroni"
ms.assetid: 6cf6ccc6-87f1-4e14-af15-ea8ba58fef1a
caps.latest.revision: 15
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Agenti asincroni
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un *agente asincrono*, o semplicemente *agente*, è un componente dell'applicazione che funziona in modo asincrono con altri agenti per risolvere le attività di elaborazione più grandi.  Considerare un agente come un'attività con un ciclo di vita stabilito.  Ad esempio, un agente potrebbe leggere i dati da un dispositivo di input\/output, come tastiera, file su disco o connessione di rete, e un altro agente potrebbe eseguire un'azione su tali dati non appena diventano disponibili.  Il primo agente utilizza il passaggio dei messaggi per informare il secondo agente della disponibilità di altri dati.  L'Utilità di pianificazione del runtime di concorrenza fornisce un meccanismo efficiente per consentire agli agenti di bloccare e restituire un oggetto in modo cooperativo senza richiederne l'annullamento che risulta meno efficace.  
  
 La libreria di agenti definisce la classe [concurrency::agent](../../parallel/concrt/reference/agent-class.md) per rappresentare un agente asincrono.  `agent` è una classe astratta che dichiara il metodo virtuale [concurrency::agent::run](../Topic/agent::run%20Method.md).  Il metodo `run` esegue l'attività eseguita dall'agente.  Poiché il metodo `run` è astratto, è necessario implementarlo in ogni classe derivata da `agent`.  
  
## Ciclo di vita degli agenti  
 Gli agenti hanno un ciclo di vita stabilito.  L'enumerazione [concurrency::agent\_status](../Topic/agent_status%20Enumeration.md) definisce i vari stati di un agente.  Nell'illustrazione seguente viene rappresentato un diagramma di stato che mostra l'avanzamento degli agenti da uno stato all'altro.  In questa illustrazione, le linee continue rappresentano i metodi chiamati dall'applicazione, mentre le linee tratteggiate rappresentano i metodi chiamati dal runtime.  
  
 ![Diagramma dello stato dell'agente](../../parallel/concrt/media/agentstate.png "AgentState")  
  
 Nella tabella seguente viene descritto ogni stato dell'enumerazione `agent_status`.  
  
|Stato dell'agente|Descrizione|  
|-----------------------|-----------------|  
|`agent_created`|L'esecuzione dell'agente non è stata pianificata.|  
|`agent_runnable`|Il runtime sta pianificando l'esecuzione dell'agente.|  
|`agent_started`|L'agente è stato avviato ed è in esecuzione.|  
|`agent_done`|L'agente è stato completato.|  
|`agent_canceled`|L'agente è stato annullato prima dell'attivazione dello stato `started`.|  
  
 `agent_created` è lo stato iniziale di un agente, `agent_runnable` e `agent_started` sono gli stati attivi, mentre `agent_done` e `agent_canceled` sono gli stati finali.  
  
 Utilizzare il metodo [concurrency::agent::status](../Topic/agent::status%20Method.md) per recuperare lo stato corrente di un oggetto `agent`.  Sebbene il metodo `status` sia indipendente dalla concorrenza, lo stato dell'agente può già essere cambiato quando il metodo `status` viene restituito.  Un agente potrebbe trovarsi, ad esempio, nello stato `agent_started` quando viene chiamato il metodo `status`, ma essere passato allo stato `agent_done` subito dopo la restituzione del metodo `status`.  
  
## Metodi e funzionalità  
 Nella tabella seguente vengono illustrati alcuni dei metodi principali appartenenti alla classe `agent`.  Per ulteriori informazioni su tutti i metodi della classe `agent`, vedere [Classe agent](../../parallel/concrt/reference/agent-class.md).  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[start](../Topic/agent::start%20Method.md)|Pianifica l'esecuzione dell'oggetto `agent` impostandolo sullo stato `agent_runnable`.|  
|[run](../Topic/agent::run%20Method.md)|Esegue l'attività che deve essere eseguita dall'oggetto `agent`.|  
|[done](../Topic/agent::done%20Method.md)|Modifica lo stato di un agente in `agent_done`.|  
|[cancel](../Topic/agent::cancel%20Method.md)|Se l'agente non è stato avviato, questo metodo annulla l'esecuzione dell'agente impostandolo sullo stato `agent_canceled`.|  
|[status](../Topic/agent::status%20Method.md)|Recupera lo stato corrente dell'oggetto `agent`.|  
|[wait](../Topic/agent::wait%20Method.md)|Attende che l'oggetto `agent` passi allo stato `agent_done` o `agent_canceled`.|  
|[wait\_for\_all](../Topic/agent::wait_for_all%20Method.md)|Attende che tutti gli oggetti `agent` forniti passino allo stato `agent_done` o `agent_canceled`.|  
|[wait\_for\_one](../Topic/agent::wait_for_one%20Method.md)|Attende che almeno uno degli oggetti `agent` forniti passi allo stato `agent_done` o `agent_canceled`.|  
  
 Dopo avere creato un oggetto agente, chiamare il metodo [concurrency::agent::start](../Topic/agent::start%20Method.md) per pianificarne l'esecuzione.  Il runtime chiama il metodo `run` dopo aver pianificato l'agente e averlo impostato sullo stato `agent_runnable`.  
  
 Il runtime non gestisce le eccezioni generate dagli agenti asincroni.  Per ulteriori informazioni sulla gestione delle eccezioni e sugli agenti, vedere [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).  
  
## Esempio  
 Per un esempio in cui viene illustrato come creare un'applicazione di base basata sugli agenti, vedere [Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md).  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)