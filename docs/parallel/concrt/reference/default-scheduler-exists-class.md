---
title: "Classe default_scheduler_exists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::default_scheduler_exists"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "default_scheduler_exists (classe)"
ms.assetid: f6e575e2-4e0f-455a-9e06-54f462ce0c1c
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe default_scheduler_exists
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando il metodo di `Scheduler::SetDefaultSchedulerPolicy` viene chiamato quando già esisteva un'utilità di pianificazione predefinita nel processo.  
  
## Sintassi  
  
```  
class default_scheduler_exists : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore default\_scheduler\_exists::default\_scheduler\_exists](../Topic/default_scheduler_exists::default_scheduler_exists%20Constructor.md)|Di overload.  Costruisce un oggetto `default_scheduler_exists`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `default_scheduler_exists`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Metodo Scheduler::SetDefaultSchedulerPolicy](../Topic/Scheduler::SetDefaultSchedulerPolicy%20Method.md)