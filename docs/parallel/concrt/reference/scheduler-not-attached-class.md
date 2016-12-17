---
title: "Classe scheduler_not_attached | Microsoft Docs"
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
  - "concrt/concurrency::scheduler_not_attached"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scheduler_not_attached (classe)"
ms.assetid: 26001970-b400-463b-be3d-8623359c399a
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe scheduler_not_attached
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando viene eseguita un'operazione che richiede un'utilità di pianificazione di essere associata al contesto corrente e uno no.  
  
## Sintassi  
  
```  
class scheduler_not_attached : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scheduler\_not\_attached::scheduler\_not\_attached](../Topic/scheduler_not_attached::scheduler_not_attached%20Constructor.md)|Di overload.  Costruisce un oggetto `scheduler_not_attached`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `scheduler_not_attached`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Metodo Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md)