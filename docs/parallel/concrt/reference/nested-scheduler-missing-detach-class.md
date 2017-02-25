---
title: "Classe nested_scheduler_missing_detach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::nested_scheduler_missing_detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nested_scheduler_missing_detach (classe)"
ms.assetid: 65d3f277-6d43-4160-97ef-caf8b26c1641
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe nested_scheduler_missing_detach
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe descrive un'eccezione generata quando il runtime di concorrenza rileva che non è sta eseguita la chiamata al metodo `CurrentScheduler::Detach` su un contesto allegato a una seconda utilità di pianificazione attraverso il metodo `Attach` dell'oggetto `Scheduler`.  
  
## Sintassi  
  
```  
class nested_scheduler_missing_detach : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore nested\_scheduler\_missing\_detach::nested\_scheduler\_missing\_detach](../Topic/nested_scheduler_missing_detach::nested_scheduler_missing_detach%20Constructor.md)|Di overload.  Costruisce un oggetto `nested_scheduler_missing_detach`.|  
  
## Note  
 Questa eccezione viene generata solo quando si annida un'utilità di pianificazione in un'altra chiamando il metodo `Attach` di un oggetto `Scheduler` su un contesto già di proprietà o collegato a un'altra utilità di pianificazione.  Il runtime di concorrenza genera opportunisticamente questa eccezione quando può rilevare lo scenario come aiuto all'individuazione del problema.  Non tutte le istanze di trascurare di chiamare il metodo `CurrentScheduler::Detach` generano questa eccezione.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `nested_scheduler_missing_detach`  
  
## Requisiti  
 **Header:** concrt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Scheduler](../../../parallel/concrt/reference/scheduler-class.md)   
 [Metodo CurrentScheduler::Detach](../Topic/CurrentScheduler::Detach%20Method.md)   
 [Metodo Scheduler::Attach](../Topic/Scheduler::Attach%20Method.md)