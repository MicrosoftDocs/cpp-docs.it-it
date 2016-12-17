---
title: "Classe invalid_multiple_scheduling | Microsoft Docs"
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
  - "concrt/concurrency::invalid_multiple_scheduling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_multiple_scheduling (classe)"
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe invalid_multiple_scheduling
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando un oggetto di `task_handle` viene pianificata più volte utilizzando il metodo di `run` di oggetto di `structured_task_group` o di `task_group` senza una corrispondente chiamata ai metodi di `run_and_wait` o di `wait` .  
  
## Sintassi  
  
```  
class invalid_multiple_scheduling : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_multiple\_scheduling::invalid\_multiple\_scheduling](../Topic/invalid_multiple_scheduling::invalid_multiple_scheduling%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_multiple_scheduling`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_multiple_scheduling`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe task\_handle](../../../parallel/concrt/reference/task-handle-class.md)   
 [Classe task\_group](../Topic/task_group%20Class.md)   
 [Metodo task\_group::run](../Topic/task_group::run%20Method.md)   
 [Metodo task\_group::wait](../Topic/task_group::wait%20Method.md)   
 [Metodo task\_group::run\_and\_wait](../Topic/task_group::run_and_wait%20Method.md)   
 [Classe structured\_task\_group](../../../parallel/concrt/reference/structured-task-group-class.md)   
 [Metodo structured\_task\_group::run](../Topic/structured_task_group::run%20Method.md)   
 [Metodo structured\_task\_group::wait](../Topic/structured_task_group::wait%20Method.md)   
 [Metodo structured\_task\_group::run\_and\_wait](../Topic/structured_task_group::run_and_wait%20Method.md)