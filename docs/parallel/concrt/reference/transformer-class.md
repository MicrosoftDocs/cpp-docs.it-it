---
title: "Classe transformer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::transformer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "transformer (classe)"
ms.assetid: eea71925-7043-4a92-bfd4-dbc0ece5d081
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe transformer
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `transformer` è un `propagator_block` multi\-origine, a destinazione singola, che può accettare messaggi di un tipo ed è in grado di archiviare un numero non associato di messaggi di un tipo diverso.  
  
## Sintassi  
  
```  
template<  
   class _Input,  
   class _Output  
>  
class transformer : public propagator_block<single_link_registry<ITarget<_Output>>, multi_link_registry<ISource<_Input>>>;  
```  
  
#### Parametri  
 `_Input`  
 Tipo di payload dei messaggi accettati dal buffer.  
  
 `_Output`  
 Tipo di payload dei messaggi memorizzati e propagati esternamente dal buffer.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore transformer::transformer](../Topic/transformer::transformer%20Constructor.md)|Di overload.  Costruisce un blocco della messaggistica `transformer`.|  
|[Distruttore transformer::~transformer](../Topic/transformer::~transformer%20Destructor.md)|Distrugge il blocco della messaggistica `transformer`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo transformer::accept\_message](../Topic/transformer::accept_message%20Method.md)|Accetta un messaggio offerto dal blocco di messaggistica `transformer`, trasferendo la proprietà al chiamante.|  
|[Metodo transformer::consume\_message](../Topic/transformer::consume_message%20Method.md)|Utilizza un messaggio precedentemente offerto da `transformer` e riservato dalla destinazione trasferendo la proprietà al chiamante.|  
|[Metodo transformer::link\_target\_notification](../Topic/transformer::link_target_notification%20Method.md)|Un callback che notifica che una nuova destinazione è stata collegata a questo blocco della messaggistica `transformer`.|  
|[Metodo transformer::propagate\_message](../Topic/transformer::propagate_message%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco `ISource` a quello della messaggistica `transformer`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo transformer::propagate\_to\_any\_targets](../Topic/transformer::propagate_to_any_targets%20Method.md)|Consente di eseguire la funzione del trasformatore sui messaggi di input.|  
|[Metodo transformer::release\_message](../Topic/transformer::release_message%20Method.md)|Consente di rilasciare una prenotazione del messaggio precedente. \(Consente di eseguire l'override di [source\_block::release\_message](../Topic/source_block::release_message%20Method.md).\)|  
|[Metodo transformer::reserve\_message](../Topic/transformer::reserve_message%20Method.md)|Consente di riservare un messaggio messo a disposizione in precedenza da tale blocco della messaggistica `transformer`. \(Consente di eseguire l'override [source\_block::reserve\_message](../Topic/source_block::reserve_message%20Method.md).\)|  
|[Metodo transformer::resume\_propagation](../Topic/transformer::resume_propagation%20Method.md)|Consente di riprendere una propagazione dopo il rilascio di una prenotazione. \(Consente di eseguire l'override [source\_block::resume\_propagation](../Topic/source_block::resume_propagation%20Method.md).\)|  
|[Metodo transformer::send\_message](../Topic/transformer::send_message%20Method.md)|Consente di passare in modo sincrono un messaggio da un blocco `ISource` a quello della messaggistica `transformer`.  Viene richiamato dal metodo `send` se chiamato da un blocco di origine.|  
|[Metodo transformer::supports\_anonymous\_source](../Topic/transformer::supports_anonymous_source%20Method.md)|Consente di eseguire l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. \(Override di [ITarget::supports\_anonymous\_source](../Topic/ITarget::supports_anonymous_source%20Method.md)\).|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 [source\_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 [propagator\_block](../../../parallel/concrt/reference/propagator-block-class.md)  
  
 `transformer`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe call](../../../parallel/concrt/reference/call-class.md)