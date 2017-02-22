---
title: "Classe message | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::message"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message (classe)"
ms.assetid: 3e1f3505-6c0c-486c-8191-666d0880ec62
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe message
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Busta del messaggio di base contenente il payload dei dati passati tra blocchi della messaggistica.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class message : public ::Concurrency::details::_Runtime_object;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di dati del payload nel messaggio.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Tipo alias per `_Type`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore message::message](../Topic/message::message%20Constructor.md)|Di overload.  Costruisce un oggetto `message`.|  
|[Distruttore message::~message](../Topic/message::~message%20Destructor.md)|Elimina l'oggetto `message`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo message::add\_ref](../Topic/message::add_ref%20Method.md)|Consente di aggiungere al conteggio dei riferimenti per l'oggetto `message`.  Utilizzato per blocchi di messaggio che necessitano del conteggio dei riferimenti per determinare la durata dei messaggi.|  
|[Metodo message::msg\_id](../Topic/message::msg_id%20Method.md)|Restituisce l'ID dell'oggetto `message`.|  
|[Metodo message::remove\_ref](../Topic/message::remove_ref%20Method.md)|Consente di sottrarre dal conteggio dei riferimenti per l'oggetto `message`.  Utilizzato per blocchi di messaggio che necessitano del conteggio dei riferimenti per determinare la durata dei messaggi.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati message::payload](../Topic/message::payload%20Data%20Member.md)|Payload dell'oggetto `message`.|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 `message`  
  
## Requisiti  
 **Header:** agents.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)