---
title: "Classe ordered_message_processor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::ordered_message_processor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ordered_message_processor (classe)"
ms.assetid: 787adfb7-7f79-4a70-864a-80e3b64088cd
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Classe ordered_message_processor
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un `ordered_message_processor` è un `message_processor` che consente ai blocchi del messaggio di elaborare messaggi nell'ordine in cui vengono ricevuti.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class ordered_message_processor : public message_processor<_Type>;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di payload dei messaggi gestiti dal processore.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Tipo alias per `_Type`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ordered\_message\_processor::ordered\_message\_processor](../Topic/ordered_message_processor::ordered_message_processor%20Constructor.md)|Costruisce un oggetto `ordered_message_processor`.|  
|[Distruttore ordered\_message\_processor::~ordered\_message\_processor](../Topic/ordered_message_processor::~ordered_message_processor%20Destructor.md)|Elimina l'oggetto `ordered_message_processor`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ordered\_message\_processor::async\_send](../Topic/ordered_message_processor::async_send%20Method.md)|Consente di mettere in coda in modo asincrono i messaggi e avviare un'attività di elaborazione, se questa non è stata già eseguita. \(Esegue l'override di [message\_processor::async\_send](../Topic/message_processor::async_send%20Method.md).\)|  
|[Metodo ordered\_message\_processor::initialize](../Topic/ordered_message_processor::initialize%20Method.md)|Inizializza l'oggetto `ordered_message_processor` con la funzione di callback, l'utilità di pianificazione e il gruppo di pianificazione appropriati.|  
|[Metodo ordered\_message\_processor::initialize\_batched\_processing](../Topic/ordered_message_processor::initialize_batched_processing%20Method.md)|Inizializza l'elaborazione batch dei messaggi|  
|[Metodo ordered\_message\_processor::sync\_send](../Topic/ordered_message_processor::sync_send%20Method.md)|Consente di mettere in coda in modo sincrono i messaggi e avviare un'attività di elaborazione, se questa non è stata già eseguita. \(Esegue l'override di [message\_processor::sync\_send](../Topic/message_processor::sync_send%20Method.md).\)|  
|[Metodo ordered\_message\_processor::wait](../Topic/ordered_message_processor::wait%20Method.md)|Un'attesa della rotazione specifica del processore utilizzata in distruttori di blocchi di messaggio per assicurarsi che tutte le attività dell'elaborazione asincrona dispongano del tempo per il completamento prima di distruggere il blocco. \(Esegue l'override di [message\_processor::wait](../Topic/message_processor::wait%20Method.md).\)|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ordered\_message\_processor::process\_incoming\_message](../Topic/ordered_message_processor::process_incoming_message%20Method.md)|Funzione di elaborazione chiamata in modo asincrono.  Rimuove messaggi dalla coda e comincia ad elaborarli. \(Esegue l'override di [message\_processor::process\_incoming\_message](../Topic/message_processor::process_incoming_message%20Method.md).\)|  
  
## Gerarchia di ereditarietà  
 [message\_processor](../../../parallel/concrt/reference/message-processor-class.md)  
  
 `ordered_message_processor`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)