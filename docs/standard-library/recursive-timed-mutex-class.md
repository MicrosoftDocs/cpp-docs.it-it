---
title: "Classe recursive_timed_mutex | Microsoft Docs"
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
  - "mutex/std::recursive_timed_mutex"
dev_langs: 
  - "C++"
ms.assetid: 59cc2d5c-ed80-45f3-a0a8-05652a8ead7e
caps.latest.revision: 9
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe recursive_timed_mutex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta *un determinato tipo del mutex*.  Gli oggetti di questo tipo vengono utilizzati per applicare l'esclusione reciproca utilizzando il blocco limitato nel tempo in un programma.  A differenza degli oggetti di tipo [timed\_mutex](../standard-library/timed-mutex-class.md), l'effetto di chiamare i metodi di blocco per gli oggetti di `recursive_timed_mutex` è ben definito.  
  
## Sintassi  
  
```  
class recursive_timed_mutex;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore recursive\_timed\_mutex::recursive\_timed\_mutex](../Topic/recursive_timed_mutex::recursive_timed_mutex%20Constructor.md)|Costruisce un oggetto di `recursive_timed_mutex` che non sia bloccato.|  
|[Distruttore recursive\_timed\_mutex::~recursive\_timed\_mutex](../Topic/recursive_timed_mutex::~recursive_timed_mutex%20Destructor.md)|Libera tutte le risorse utilizzate dall'oggetto di `recursive_timed_mutex`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo recursive\_timed\_mutex::lock](../Topic/recursive_timed_mutex::lock%20Method.md)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|  
|[Metodo recursive\_timed\_mutex::try\_lock](../Topic/recursive_timed_mutex::try_lock%20Method.md)|Tenta di ottenere proprietà di `mutex` senza bloccare.|  
|[Metodo recursive\_timed\_mutex::try\_lock\_for](../Topic/recursive_timed_mutex::try_lock_for%20Method.md)|Tenta di ottenere proprietà di `mutex` per un intervallo di tempo specificato.|  
|[Metodo recursive\_timed\_mutex::try\_lock\_until](../Topic/recursive_timed_mutex::try_lock_until%20Method.md)|Tenta di ottenere la proprietà di `mutex` fino a un'ora specificata.|  
|[Metodo recursive\_timed\_mutex::unlock](../Topic/recursive_timed_mutex::unlock%20Method.md)|Rilascia la proprietà di `mutex`.|  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)