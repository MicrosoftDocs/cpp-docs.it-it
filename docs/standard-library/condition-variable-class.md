---
title: "Classe condition_variable | Microsoft Docs"
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
  - "condition_variable/std::condition_variable"
dev_langs: 
  - "C++"
ms.assetid: 80b1295c-b73d-4d46-b664-6e183f2eec1b
caps.latest.revision: 16
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe condition_variable
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare la classe `condition_variable` per attendere un evento quando si ha un `mutex` di tipo `unique_lock<mutex>`.  Gli oggetti di questo tipo possono avere prestazioni migliori rispetto agli oggetti di tipo [condition\_variable\_any\<unique\_lock\<mutex\>\>](../standard-library/condition-variable-any-class.md).  
  
## Sintassi  
  
```  
class condition_variable;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore condition\_variable::condition\_variable](../Topic/condition_variable::condition_variable%20Constructor.md)|Costruisce un oggetto `condition_variable`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo condition\_variable::native\_handle](../Topic/condition_variable::native_handle%20Method.md)|Restituisce il tipo specifico dell'implementazione che rappresenta l'handle condition\_variable.|  
|[Metodo condition\_variable::notify\_all](../Topic/condition_variable::notify_all%20Method.md)|Sblocca tutti i thread in attesa dell'oggetto `condition_variable`.|  
|[Metodo condition\_variable::notify\_one](../Topic/condition_variable::notify_one%20Method.md)|Sblocca uno dei thread in attesa dell'oggetto `condition_variable`.|  
|[Metodo condition\_variable::wait](../Topic/condition_variable::wait%20Method.md)|Blocca un thread.|  
|[Metodo condition\_variable::wait\_for](../Topic/condition_variable::wait_for%20Method.md)|Blocca un thread e imposta un intervallo di tempo dopo il quale il thread si sblocca.|  
|[Metodo condition\_variable::wait\_until](../Topic/condition_variable::wait_until%20Method.md)|Blocca la thread, ed imposta un tempo massimo al quale la thread si sbloccherà.|  
  
## Requisiti  
 **Intestazione:** condition\_variable  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<condition\_variable\>](../standard-library/condition-variable.md)