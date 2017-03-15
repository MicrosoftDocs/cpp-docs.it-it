---
title: "Classe lock_guard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "mutex/std::lock_guard"
dev_langs: 
  - "C++"
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe lock_guard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un modello che è possibile creare un'istanza per creare un oggetto di cui il distruttore sblocca `mutex`.  
  
## Sintassi  
  
```  
template<class Mutex>  
class lock_guard;  
```  
  
## Note  
 Un argomento di template `Mutex` deve assegnare *un nome a un tipo di mutex*.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`lock_guard::mutex_type`|Sinonimo di un argomento di template `Mutex`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore lock\_guard::lock\_guard](../Topic/lock_guard::lock_guard%20Constructor.md)|Costruisce un oggetto `lock_guard`.|  
|[Distruttore lock\_guard::~lock\_guard](../Topic/lock_guard::~lock_guard%20Destructor.md)|Sblocca `mutex` passato al costruttore.|  
  
## Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex\>](../standard-library/mutex.md)