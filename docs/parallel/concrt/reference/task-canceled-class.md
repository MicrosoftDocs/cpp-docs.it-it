---
title: "Classe task_canceled | Microsoft Docs"
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
  - "concrt/concurrency::task_canceled"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "task_canceled (classe)"
ms.assetid: c3f0b234-2cc1-435f-a48e-995f45b190be
caps.latest.revision: 11
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe task_canceled
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe descrive un'eccezione generata dal livello di attività di PPL per annullare l'attività corrente.  Viene generata anche dal `get()` metodo su  [attività](../Topic/Task%20Class%20-%20Internal%20Members.md), per un'operazione annullata.  
  
## Sintassi  
  
```  
class task_canceled : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore task\_canceled::task\_canceled](../Topic/task_canceled::task_canceled%20Constructor.md)|Di overload.  Costruisce un oggetto `task_canceled`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `task_canceled`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:**  la concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Metodo task::get](../Topic/task::get%20Method.md)   
 [Funzione cancel\_current\_task](../Topic/cancel_current_task%20Function.md)