---
title: "Classe single_assignment | Microsoft Docs"
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
  - "agents/concurrency::single_assignment"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single_assignment (classe)"
ms.assetid: ccc34728-8de9-4e07-b83d-a36a58d9d2b9
caps.latest.revision: 21
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe single_assignment
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `single_assignment` è un `propagator_block` multi\-origine, a destinazione singola, in grado di archiviare un unico `message` di sola scrittura.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class single_assignment : public propagator_block<multi_link_registry<ITarget<_Type>>, multi_link_registry<ISource<_Type>>>;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di payload del messaggio memorizzato e propagato dal buffer.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore single\_assignment::single\_assignment](../Topic/single_assignment::single_assignment%20Constructor.md)|Di overload.  Costruisce un blocco della messaggistica `single_assignment`.|  
|[Distruttore single\_assignment::~single\_assignment](../Topic/single_assignment::~single_assignment%20Destructor.md)|Distrugge il blocco della messaggistica `single_assignment`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo single\_assignment::has\_value](../Topic/single_assignment::has_value%20Method.md)|Controlla se questo blocco della messaggistica `single_assignment` è già stato inizializzato con un valore.|  
|[Metodo single\_assignment::value](../Topic/single_assignment::value%20Method.md)|Ottiene un riferimento al payload corrente del messaggio archiviato nel blocco della messaggistica `single_assignment`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo single\_assignment::accept\_message](../Topic/single_assignment::accept_message%20Method.md)|Accetta un messaggio offerto dal blocco di messaggistica `single_assignment`, restituendo una copia del messaggio al chiamante.|  
|[Metodo single\_assignment::consume\_message](../Topic/single_assignment::consume_message%20Method.md)|Utilizza un messaggio precedentemente offerto dal blocco di messaggistica `single_assignment` e riservato dalla destinazione restituendo una copia del messaggio al chiamante.|  
|[Metodo single\_assignment::link\_target\_notification](../Topic/single_assignment::link_target_notification%20Method.md)|Un callback che notifica che una nuova destinazione è stata collegata a questo blocco della messaggistica `single_assignment`.|  
|[Metodo single\_assignment::propagate\_message](../Topic/single_assignment::propagate_message%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco `ISource` a quello della messaggistica `single_assignment`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo single\_assignment::propagate\_to\_any\_targets](../Topic/single_assignment::propagate_to_any_targets%20Method.md)|Consente di posizionare `message``_PMessage` in tale blocco della messaggistica `single_assignment` e di metterlo a disposizione di tutte le destinazioni collegate.|  
|[Metodo single\_assignment::release\_message](../Topic/single_assignment::release_message%20Method.md)|Consente di rilasciare una prenotazione del messaggio precedente. \(Consente di eseguire l'override di [source\_block::release\_message](../Topic/source_block::release_message%20Method.md).\)|  
|[Metodo single\_assignment::reserve\_message](../Topic/single_assignment::reserve_message%20Method.md)|Consente di riservare un messaggio messo a disposizione in precedenza da tale blocco della messaggistica `single_assignment`. \(Consente di eseguire l'override [source\_block::reserve\_message](../Topic/source_block::reserve_message%20Method.md).\)|  
|[Metodo single\_assignment::resume\_propagation](../Topic/single_assignment::resume_propagation%20Method.md)|Consente di riprendere una propagazione dopo il rilascio di una prenotazione. \(Consente di eseguire l'override [source\_block::resume\_propagation](../Topic/source_block::resume_propagation%20Method.md).\)|  
|[Metodo single\_assignment::send\_message](../Topic/single_assignment::send_message%20Method.md)|Consente di passare in modo sincrono un messaggio da un blocco `ISource` a quello della messaggistica `single_assignment`.  Viene richiamato dal metodo `send` se chiamato da un blocco di origine.|  
  
## Note  
 Un blocco della messaggistica `single_assignment` propaga copie del messaggio in ogni destinazione.  
  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 [source\_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 [propagator\_block](../../../parallel/concrt/reference/propagator-block-class.md)  
  
 `single_assignment`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe overwrite\_buffer](../../../parallel/concrt/reference/overwrite-buffer-class.md)   
 [Classe unbounded\_buffer](../Topic/unbounded_buffer%20Class.md)