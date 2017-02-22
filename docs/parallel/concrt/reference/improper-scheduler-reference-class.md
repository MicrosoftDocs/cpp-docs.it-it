---
title: "Classe improper_scheduler_reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::improper_scheduler_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "improper_scheduler_reference (classe)"
ms.assetid: 434a7512-7796-4255-92a7-f3bf71c6a7a7
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe improper_scheduler_reference
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando il metodo di `Reference` viene chiamato su un oggetto di `Scheduler` in fase di chiusura, da un contesto che non fa parte dell'utilità di pianificazione.  
  
## Sintassi  
  
```  
class improper_scheduler_reference : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore improper\_scheduler\_reference::improper\_scheduler\_reference](../Topic/improper_scheduler_reference::improper_scheduler_reference%20Constructor.md)|Di overload.  Costruisce un oggetto `improper_scheduler_reference`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `improper_scheduler_reference`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Metodo Scheduler::Reference](../Topic/Scheduler::Reference%20Method.md)