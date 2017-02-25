---
title: "Classe task_completion_event | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppltasks/concurrency::task_completion_event"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_completion_event (classe)"
ms.assetid: fb19ed98-f245-48dc-9ba5-487ba879b28a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Classe task_completion_event
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `task_completion_event` consente di ritardare l'esecuzione di un'attività fino a soddisfare una condizione, o avviare un'attività in risposta a un evento esterno.  
  
## Sintassi  
  
```  
template<  
   typename _ResultType  
>  
class task_completion_event;  
  
template<>  
class task_completion_event<void>;  
```  
  
#### Parametri  
 `_ResultType`  
 Il tipo di risultato di questa classe `task_completion_event`.  
  
 `T`  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore task\_completion\_event::task\_completion\_event](../Topic/task_completion_event::task_completion_event%20Constructor.md)|Costruisce un oggetto `task_completion_event`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo task\_completion\_event::set](../Topic/task_completion_event::set%20Method.md)|Di overload.  Imposta l'evento di completamento di un'attività.|  
|[Metodo task\_completion\_event::set\_exception](../Topic/task_completion_event::set_exception%20Method.md)|Di overload.  Propaga un'eccezione a tutte le attività associate a questo evento.|  
  
## Note  
 Utilizzare un'attività creata da un evento di completamento di attività quando lo scenario richiede di creare un'attività che completerà e pertanto avrà le relative continuazioni pianificate per l'esecuzione, a un certo punto in futuro.  `task_completion_event` deve avere lo stesso tipo dell'attività creata e chiamare il metodo set nell'evento di completamento di un'attività con un valore di quel tipo genererà il completamento dell'attività associata e fornirà tale valore come risultato delle relative continuazioni.  
  
 Se l'evento di completamento delle attività non viene mai segnalato, tutte le attività create da esso verranno annullate quando viene eliminato.  
  
 `task_completion_event` si comporta come un puntatore intelligente e deve essere passato per valore.  
  
## Gerarchia di ereditarietà  
 `task_completion_event`  
  
## Requisiti  
 **Intestazione:** ppltasks.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [task Class](http://msdn.microsoft.com/it-it/5389e8a5-5038-40b6-844a-55e9b58ad35f)