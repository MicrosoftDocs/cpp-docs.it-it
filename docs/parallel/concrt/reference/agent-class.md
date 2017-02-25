---
title: "Classe agent | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::agent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "agent (classe)"
ms.assetid: 1b09e3d2-5e37-4966-b016-907ef1512456
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe agent
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Classe destinata all'utilizzo come classe di base per tutti gli agenti indipendenti.  Viene utilizzato per nascondere lo stato da altri agenti e per interagire utilizzando il passaggio dei messaggi.  
  
## Sintassi  
  
```  
class agent;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore agent::agent](../Topic/agent::agent%20Constructor.md)|Di overload.  Costruisce un agente.|  
|[Distruttore agent::~agent](../Topic/agent::~agent%20Destructor.md)|Distrugge l'agente.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo agent::cancel](../Topic/agent::cancel%20Method.md)|Sposta un agente dallo stato `agent_created` o `agent_runnable` allo stato `agent_canceled`.|  
|[Metodo agent::start](../Topic/agent::start%20Method.md)|Sposta un agente dallo stato `agent_created` allo stato `agent_runnable` e lo pianifica per l'esecuzione.|  
|[Metodo agent::status](../Topic/agent::status%20Method.md)|Un'origine sincrona di informazioni sullo stato dall'agente.|  
|[Metodo agent::status\_port](../Topic/agent::status_port%20Method.md)|Un'origine asincrona di informazioni sullo stato dall'agente.|  
|[Metodo agent::wait](../Topic/agent::wait%20Method.md)|Consente di attendere un agente per completare la relativa attività.|  
|[Metodo agent::wait\_for\_all](../Topic/agent::wait_for_all%20Method.md)|Consente di attendere tutti gli agenti specificati per completare le proprie attività.|  
|[Metodo agent::wait\_for\_one](../Topic/agent::wait_for_one%20Method.md)|Consente di attendere uno degli agenti specificati per completare la relativa attività.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo agent::done](../Topic/agent::done%20Method.md)|Sposta un agente allo stato `agent_done`, indicando che l'agente è stato completato.|  
|[Metodo agent::run](../Topic/agent::run%20Method.md)|Consente di rappresentare l'attività principale di un agente.  È necessario eseguire l'override di `run` in una classe derivata e di specificare cosa deve eseguire l'agente dopo il suo avvio.|  
  
## Note  
 Per ulteriori informazioni, vedere [Agenti asincroni](../../../parallel/concrt/asynchronous-agents.md).  
  
## Gerarchia di ereditarietà  
 `agent`  
  
## Requisiti  
 **Header:** agents.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)