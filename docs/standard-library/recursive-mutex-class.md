---
title: "Classe recursive_mutex | Microsoft Docs"
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
  - "mutex/std::recursive_mutex"
dev_langs: 
  - "C++"
ms.assetid: eb5ffd1b-7e78-4559-8391-bb220ead42fc
caps.latest.revision: 9
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe recursive_mutex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un *tipo di mutex*.  A differenza di [mutex](../standard-library/mutex-class-stl.md), il comportamento delle chiamate a bloccare i metodi per oggetti già sono bloccati è ben definito.  
  
## Sintassi  
  
```  
class recursive_mutex;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore recursive\_mutex::recursive\_mutex](../Topic/recursive_mutex::recursive_mutex%20Constructor.md)|Costruisce un oggetto `recursive_mutex`.|  
|[Distruttore recursive\_mutex::~recursive\_mutex](../Topic/recursive_mutex::~recursive_mutex%20Destructor.md)|Libera tutte le risorse utilizzate dall'oggetto di `recursive_mutex`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo recursive\_mutex::lock](../Topic/recursive_mutex::lock%20Method.md)|Blocca il thread chiamante finché il thread non ottenere la proprietà del mutex.|  
|[Metodo recursive\_mutex::try\_lock](../Topic/recursive_mutex::try_lock%20Method.md)|Tenta di ottenere proprietà del mutex senza blocco.|  
|[Metodo recursive\_mutex::unlock](../Topic/recursive_mutex::unlock%20Method.md)|Elimina la proprietà del mutex.|  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)