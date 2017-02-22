---
title: "Classe timer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::timer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "timer (classe)"
ms.assetid: 4f4dea51-de9f-40f9-93f5-dd724c567b49
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe timer
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `timer` è un `source_block` in grado di inviare un messaggio alla sua destinazione dopo che è trascorso un determinato periodo di tempo oppure ad intervalli specifici.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class timer : public Concurrency::details::_Timer, public source_block<single_link_registry<ITarget<_Type>>>;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di payload dei messaggi di output di questo blocco.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore timer::timer](../Topic/timer::timer%20Constructor.md)|Di overload.  Costruisce un blocco della messaggistica `timer` che genererà un messaggio specificato dopo un intervallo specificato.|  
|[Distruttore timer::~timer](../Topic/timer::~timer%20Destructor.md)|Distrugge un blocco della messaggistica `timer`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo timer::pause](../Topic/timer::pause%20Method.md)|Consente di arrestare il blocco della messaggistica `timer`.  Se è un blocco della messaggistica `timer` ripetuto, è possibile effettuare un riavvio con una chiamata `start()` successiva.  Per i timer non ripetuti, questa operazione ha lo stesso effetto della chiamata `stop`.|  
|[Metodo timer::start](../Topic/timer::start%20Method.md)|Avvia il blocco della messaggistica `timer`.  Numero specificato di millisecondi dopo la chiamata; il valore specificato sarà propagato downstream come un `message`.|  
|[Metodo timer::stop](../Topic/timer::stop%20Method.md)|Consente di arrestare il blocco della messaggistica `timer`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo timer::accept\_message](../Topic/timer::accept_message%20Method.md)|Accetta un messaggio offerto dal blocco di messaggistica `timer`, trasferendo la proprietà al chiamante.|  
|[Metodo timer::consume\_message](../Topic/timer::consume_message%20Method.md)|Utilizza un messaggio precedentemente offerto da `timer` e riservato dalla destinazione trasferendo la proprietà al chiamante.|  
|[Metodo timer::link\_target\_notification](../Topic/timer::link_target_notification%20Method.md)|Un callback che notifica che una nuova destinazione è stata collegata a questo blocco della messaggistica `timer`.|  
|[Metodo timer::propagate\_to\_any\_targets](../Topic/timer::propagate_to_any_targets%20Method.md)|Consente di tentare di proporre il messaggio prodotto dal blocco `timer` a tutte le destinazioni collegate.|  
|[Metodo timer::release\_message](../Topic/timer::release_message%20Method.md)|Consente di rilasciare una prenotazione del messaggio precedente. \(Consente di eseguire l'override di [source\_block::release\_message](../Topic/source_block::release_message%20Method.md).\)|  
|[Metodo timer::reserve\_message](../Topic/timer::reserve_message%20Method.md)|Consente di riservare un messaggio messo a disposizione in precedenza da tale blocco della messaggistica `timer`. \(Consente di eseguire l'override [source\_block::reserve\_message](../Topic/source_block::reserve_message%20Method.md).\)|  
|[Metodo timer::resume\_propagation](../Topic/timer::resume_propagation%20Method.md)|Consente di riprendere una propagazione dopo il rilascio di una prenotazione. \(Consente di eseguire l'override [source\_block::resume\_propagation](../Topic/source_block::resume_propagation%20Method.md).\)|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [source\_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 `timer`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)