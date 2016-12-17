---
title: "Classe message_processor | Microsoft Docs"
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
  - "agents/concurrency::message_processor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message_processor (classe)"
ms.assetid: 23afb052-daa7-44ed-bf24-d2513db748da
caps.latest.revision: 16
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe message_processor
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `message_processor` rappresenta la classe base astratta per l'elaborazione degli oggetti `message`.  Non esiste garanzia sull'ordinamento dei messaggi.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class message_processor;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di dati del payload nei messaggi gestiti dall'oggetto `message_processor`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Tipo alias per `_Type`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo message\_processor::async\_send](../Topic/message_processor::async_send%20Method.md)|Quando sottoposto a override in una classe derivata, posiziona in modo asincrono i messaggi nel blocco.|  
|[Metodo message\_processor::sync\_send](../Topic/message_processor::sync_send%20Method.md)|Quando sottoposto a override in una classe derivata, posiziona in modo sincrono i messaggi nel blocco.|  
|[Metodo message\_processor::wait](../Topic/message_processor::wait%20Method.md)|Quando sottoposto a override in una classe derivata, attende il completamento di tutte le operazioni asincrone.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo message\_processor::process\_incoming\_message](../Topic/message_processor::process_incoming_message%20Method.md)|Quando sottoposto a override in una classe derivata, esegue l'elaborazione futura di messaggi nel blocco.  Chiamato ogniqualvolta viene aggiunto un nuovo messaggio e la coda viene trovata vuota.|  
  
## Gerarchia di ereditarietà  
 `message_processor`  
  
## Requisiti  
 **Header:** agents.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe ordered\_message\_processor](../../../parallel/concrt/reference/ordered-message-processor-class.md)