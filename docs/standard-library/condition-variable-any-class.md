---
title: "Classe condition_variable_any | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "condition_variable/std::condition_variable_any"
dev_langs: 
  - "C++"
ms.assetid: d8afe5db-1561-4ec2-8e85-21ea03ee4321
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Classe condition_variable_any
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare la classe `condition_variable_any` per attendere un evento di qualsiasi tipo `mutex`.  
  
## Sintassi  
  
```  
class condition_variable_any;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore condition\_variable\_any::condition\_variable\_any](../Topic/condition_variable_any::condition_variable_any%20Constructor.md)|Costruisce un oggetto `condition_variable_any`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo condition\_variable\_any::notify\_all](../Topic/condition_variable_any::notify_all%20Method.md)|Sblocca tutti i thread in attesa dell'oggetto `condition_variable_any`.|  
|[Metodo condition\_variable\_any::notify\_one](../Topic/condition_variable_any::notify_one%20Method.md)|Sblocca uno dei thread in attesa dell'oggetto `condition_variable_any`.|  
|[Metodo condition\_variable\_any::wait](../Topic/condition_variable_any::wait%20Method.md)|Blocca un thread.|  
|[Metodo condition\_variable\_any::wait\_for](../Topic/condition_variable_any::wait_for%20Method.md)|Blocca un thread e imposta un intervallo di tempo dopo il quale il thread si sblocca.|  
|[Metodo condition\_variable\_any::wait\_until](../Topic/condition_variable_any::wait_until%20Method.md)|Blocca la thread, ed imposta un tempo massimo al quale la thread si sbloccherà.|  
  
## Requisiti  
 **Intestazione:** condition\_variable  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<condition\_variable\>](../standard-library/condition-variable.md)