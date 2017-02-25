---
title: "Classe mutex (Libreria dei modelli standard) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::mutex"
dev_langs: 
  - "C++"
ms.assetid: 7999d055-f74f-4303-810f-8d3c9cde2f69
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Classe mutex (Libreria dei modelli standard)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un *tipo di mutex*.  Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.  
  
## Sintassi  
  
```  
class mutex;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore mutex::mutex \(Libreria dei modelli standard\)](../Topic/mutex::mutex%20Constructor%20\(STL\).md)|Costruisce un oggetto `mutex`.|  
|[Distruttore mutex::~mutex \(Libreria dei modelli standard\)](../Topic/mutex::~mutex%20Destructor%20\(STL\).md)|Rilascia le risorse utilizzate dall'oggetto `mutex`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo mutex::lock \(Libreria dei modelli standard\)](../Topic/mutex::lock%20Method%20\(STL\).md)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|  
|[Metodo mutex::native\_handle \(STL\)](../Topic/mutex::native_handle%20Method%20\(STL\).md)|Restituisce il tipo specifico dell'implementazione che rappresenta il gestore del mutex.|  
|[Metodo mutex::try\_lock \(Libreria dei modelli standard\)](../Topic/mutex::try_lock%20Method%20\(STL\).md)|Tenta di ottenere proprietà di `mutex` senza bloccare.|  
|[Metodo mutex::unlock \(Libreria dei modelli standard\)](../Topic/mutex::unlock%20Method%20\(STL\).md)|Rilascia la proprietà di `mutex`.|  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)