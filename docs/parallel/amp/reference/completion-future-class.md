---
title: "Classe completion_future | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::completion_future"
dev_langs: 
  - "C++"
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe completion_future
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un corrispondente futuro alle operazioni asincrone di C\+\+ AMP.  
  
## Sintassi  
  
```  
class completion_future;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore completion\_future::completion\_future](../Topic/completion_future::completion_future%20Constructor.md)|Inizializza una nuova istanza della classe `completion_future`.|  
|[Distruttore completion\_future::~completion\_future](../Topic/completion_future::~completion_future%20Destructor.md)|Elimina l'oggetto `completion_future`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo completion\_future::get](../Topic/completion_future::get%20Method.md)|Attende finché l'operazione asincrona associata viene completata.|  
|[Metodo completion\_future::then](../Topic/completion_future::then%20Method.md)|Concatena un oggetto funzione di callback all'oggetto `completion_future` da eseguire quando l'operazione asincrona associata completa l'esecuzione.|  
|[Metodo completion\_future::to\_task](../Topic/completion_future::to_task%20Method.md)|Restituisce un oggetto `task` che corrisponde all'operazione asincrona associata.|  
|[Metodo completion\_future::valid](../Topic/completion_future::valid%20Method.md)|Ottiene un valore booleano che indica se l'oggetto è associato ad un'operazione asincrona.|  
|[Metodo completion\_future::wait](../Topic/completion_future::wait%20Method.md)|Blocca fino al completamento dell'operazione asincrona associata.|  
|[Metodo completion\_future::wait\_for](../Topic/completion_future::wait_for%20Method.md)|Blocca fino al completamento dell'operazione asincrona associata o allo scadere del tempo specificato da `_Rel_time`.|  
|[Metodo completion\_future::wait\_until](../Topic/completion_future::wait_until%20Method.md)|Blocca fino al completamento dell'operazione asincrona associata o fino al momento in cui l'ora corrente non supera il valore specificato da `_Abs_time`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[completion\_future::operator std::shared\_future\<void\> Operator](../Topic/completion_future::operator%20std::shared_future%3Cvoid%3E%20Operator.md)|Converte in modo implicito l'oggetto `completion_future` in un oggetto `std::shared_future`.|  
|[Operatore completion\_future::operator\=](../Topic/completion_future::operator=%20Operator.md)|Copia il contenuto dell'oggetto `completion_future` specificato in questo oggetto.|  
  
## Gerarchia di ereditarietà  
 `completion_future`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)