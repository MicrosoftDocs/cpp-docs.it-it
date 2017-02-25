---
title: "Classe timed_mutex | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::timed_mutex"
dev_langs: 
  - "C++"
ms.assetid: cd198081-6f38-447a-9dba-e06dfbfafe59
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe timed_mutex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta *un determinato tipo del mutex*.  Gli oggetti di questo tipo vengono utilizzati per applicare l'esclusione reciproca dal blocco limitato nel tempo in un programma.  
  
## Sintassi  
  
```  
class timed_mutex;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore timed\_mutex::timed\_mutex](../Topic/timed_mutex::timed_mutex%20Constructor.md)|Costruisce un oggetto di `timed_mutex` che non sia bloccato.|  
|[Distruttore timed\_mutex::~timed\_mutex](../Topic/timed_mutex::~timed_mutex%20Destructor.md)|Libera tutte le risorse utilizzate dall'oggetto di `timed_mutex`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo timed\_mutex::lock](../Topic/timed_mutex::lock%20Method.md)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|  
|[Metodo timed\_mutex::try\_lock](../Topic/timed_mutex::try_lock%20Method.md)|Tenta di ottenere proprietà di `mutex` senza bloccare.|  
|[Metodo timed\_mutex::try\_lock\_for](../Topic/timed_mutex::try_lock_for%20Method.md)|Tenta di ottenere proprietà di `mutex` per un intervallo di tempo specificato.|  
|[Metodo timed\_mutex::try\_lock\_until](../Topic/timed_mutex::try_lock_until%20Method.md)|Tenta di ottenere la proprietà di `mutex` fino a un'ora specificata.|  
|[Metodo timed\_mutex::unlock](../Topic/timed_mutex::unlock%20Method.md)|Rilascia la proprietà di `mutex`.|  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)