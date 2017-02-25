---
title: "Classe packaged_task | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "future/std::packaged_task"
dev_langs: 
  - "C++"
ms.assetid: 0a72cbe3-f22a-4bfe-8e50-dcb268c98780
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe packaged_task
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene descritto *un provider asincrono* che è un wrapper di chiamata della cui firma di chiamata è `Ty(ArgTypes...)`.  Lo *stato collegato asincrono* utilizza una copia del relativo oggetto chiamabile oltre al risultato potenziale.  
  
## Sintassi  
  
```  
template<class>  
class packaged_task;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore packaged\_task::packaged\_task](../Topic/packaged_task::packaged_task%20Constructor.md)|Costruisce un oggetto `packaged_task`.|  
|[Distruttore packaged\_task::~packaged\_task](../Topic/packaged_task::~packaged_task%20Destructor.md)|Elimina un oggetto `packaged_task`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo packaged\_task::get\_future](../Topic/packaged_task::get_future%20Method.md)|Restituisce un oggetto di [futuro](../standard-library/future-class.md) con lo stesso stato asincrono collegato.|  
|[Metodo packaged\_task::make\_ready\_at\_thread\_exit](../Topic/packaged_task::make_ready_at_thread_exit%20Method.md)|Chiama l'oggetto chiamabile archiviato nello stato collegato asincrono e di archiviare il valore restituito.|  
|[Metodo packaged\_task::reset](../Topic/packaged_task::reset%20Method.md)|Sostituisce lo stato asincrono collegato.|  
|[Metodo packaged\_task::swap](../Topic/packaged_task::swap%20Method.md)|Scambia lo stato asincrono collegato con quello di un oggetto specificato.|  
|[Metodo packaged\_task::valid](../Topic/packaged_task::valid%20Method.md)|Specifica se l'oggetto dispone di uno stato asincrono collegato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore packaged\_task::operator\=](../Topic/packaged_task::operator=%20Operator.md)|Trasferisce uno stato asincrono collegato da un oggetto specificato.|  
|[Operatore packaged\_task::operator\(\)](../Topic/packaged_task::operator\(\)%20Operator.md)|Chiama l'oggetto chiamabile archiviato nello stato collegato asincrono, atomico di archiviare il valore restituito e imposta lo stato *su pronto*.|  
|[Operatore packaged\_task::operator bool](../Topic/packaged_task::operator%20bool%20Operator.md)|Specifica se l'oggetto dispone di uno stato asincrono collegato.|  
  
## Requisiti  
 **Intestazione:** future  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<future\>](../standard-library/future.md)