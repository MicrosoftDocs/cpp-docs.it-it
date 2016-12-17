---
title: "Classe improper_scheduler_attach | Microsoft Docs"
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
  - "concrt/concurrency::improper_scheduler_attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "improper_scheduler_attach (classe)"
ms.assetid: 5a76da0a-091b-4748-8f62-b3a28f674f9e
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe improper_scheduler_attach
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando il metodo di `Attach` viene chiamato su un oggetto di `Scheduler` che è già associata al contesto corrente.  
  
## Sintassi  
  
```  
class improper_scheduler_attach : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore improper\_scheduler\_attach::improper\_scheduler\_attach](../Topic/improper_scheduler_attach::improper_scheduler_attach%20Constructor.md)|Di overload.  Costruisce un oggetto `improper_scheduler_attach`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `improper_scheduler_attach`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Metodo Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md)