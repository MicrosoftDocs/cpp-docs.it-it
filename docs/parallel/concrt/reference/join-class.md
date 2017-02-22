---
title: "Classe join | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::join"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "join (classe)"
ms.assetid: d2217119-70a1-40b6-809f-c1c13a571c3f
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe join
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `join` è un `propagator_block` multi\-origine, a destinazione singola, che combina insieme messaggi di tipo `_Type` da ognuna delle origini.  
  
## Sintassi  
  
```  
template<  
   class _Type,  
   join_type _Jtype = non_greedy  
>  
class join : public propagator_block<single_link_registry<ITarget<std::vector<_Type>>>, multi_link_registry<ISource<_Type>>>;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di payload dei messaggi uniti e propagati dal blocco.  
  
 `_Jtype`  
 Il tipo di blocco `join` è `greedy` o `non_greedy`  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore join::join](../Topic/join::join%20Constructor.md)|Di overload.  Costruisce un blocco della messaggistica `join`.|  
|[Distruttore join::~join](../Topic/join::~join%20Destructor.md)|Elimina il blocco `join`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo join::accept\_message](../Topic/join::accept_message%20Method.md)|Accetta un messaggio offerto dal blocco di messaggistica `join`, trasferendo la proprietà al chiamante.|  
|[Metodo join::consume\_message](../Topic/join::consume_message%20Method.md)|Utilizza un messaggio precedentemente offerto dal blocco di messaggistica `join` e riservato dalla destinazione trasferendo la proprietà al chiamante.|  
|[Metodo join::link\_target\_notification](../Topic/join::link_target_notification%20Method.md)|Un callback che notifica che una nuova destinazione è stata collegata a questo blocco della messaggistica `join`.|  
|[Metodo join::propagate\_message](../Topic/join::propagate_message%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco `ISource` a quello della messaggistica `join`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo join::propagate\_to\_any\_targets](../Topic/join::propagate_to_any_targets%20Method.md)|Costruisce un messaggio di output che contiene un messaggio di input da ogni origine quando tutti hanno propagato un messaggio.  Consente di inviare tale messaggio di output a ciascuna delle sue destinazioni.|  
|[Metodo join::release\_message](../Topic/join::release_message%20Method.md)|Consente di rilasciare una prenotazione del messaggio precedente. \(Consente di eseguire l'override di [source\_block::release\_message](../Topic/source_block::release_message%20Method.md).\)|  
|[Metodo join::reserve\_message](../Topic/join::reserve_message%20Method.md)|Consente di riservare un messaggio messo a disposizione in precedenza da tale blocco della messaggistica `join`. \(Consente di eseguire l'override [source\_block::reserve\_message](../Topic/source_block::reserve_message%20Method.md).\)|  
|[Metodo join::resume\_propagation](../Topic/join::resume_propagation%20Method.md)|Consente di riprendere una propagazione dopo il rilascio di una prenotazione. \(Consente di eseguire l'override [source\_block::resume\_propagation](../Topic/source_block::resume_propagation%20Method.md).\)|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 [source\_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 [propagator\_block](../../../parallel/concrt/reference/propagator-block-class.md)  
  
 `join`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe choice](../../../parallel/concrt/reference/choice-class.md)   
 [Classe multitype\_join](../../../parallel/concrt/reference/multitype-join-class.md)   
 [Enumerazione join\_type](../Topic/join_type%20Enumeration.md)