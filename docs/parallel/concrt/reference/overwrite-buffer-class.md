---
title: "Classe overwrite_buffer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::overwrite_buffer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overwrite_buffer (classe)"
ms.assetid: 5cc428fe-3697-419c-9fb2-78f6181c9293
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe overwrite_buffer
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `overwrite_buffer` è un `propagator_block` multi\-origine a destinazione singola, in grado di archiviare un unico messaggio alla volta.  I nuovi messaggi sovrascrivono i precedenti.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class overwrite_buffer : public propagator_block<multi_link_registry<ITarget<_Type>>, multi_link_registry<ISource<_Type>>>;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di payload dei messaggi memorizzati e propagati dal buffer.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore overwrite\_buffer::overwrite\_buffer](../Topic/overwrite_buffer::overwrite_buffer%20Constructor.md)|Di overload.  Costruisce un blocco della messaggistica `overwrite_buffer`.|  
|[Distruttore overwrite\_buffer::~overwrite\_buffer](../Topic/overwrite_buffer::~overwrite_buffer%20Destructor.md)|Distrugge il blocco della messaggistica `overwrite_buffer`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo overwrite\_buffer::has\_value](../Topic/overwrite_buffer::has_value%20Method.md)|Controlla se questo blocco della messaggistica `overwrite_buffer` dispone già di un valore.|  
|[Metodo overwrite\_buffer::value](../Topic/overwrite_buffer::value%20Method.md)|Ottiene un riferimento al payload corrente del messaggio archiviato nel blocco della messaggistica `overwrite_buffer`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo overwrite\_buffer::accept\_message](../Topic/overwrite_buffer::accept_message%20Method.md)|Accetta un messaggio offerto dal blocco di messaggistica `overwrite_buffer`, restituendo una copia del messaggio al chiamante.|  
|[Metodo overwrite\_buffer::consume\_message](../Topic/overwrite_buffer::consume_message%20Method.md)|Utilizza un messaggio precedentemente offerto dal blocco di messaggistica `overwrite_buffer` e riservato dalla destinazione restituendo una copia del messaggio al chiamante.|  
|[Metodo overwrite\_buffer::link\_target\_notification](../Topic/overwrite_buffer::link_target_notification%20Method.md)|Un callback che notifica che una nuova destinazione è stata collegata a questo blocco della messaggistica `overwrite_buffer`.|  
|[Metodo overwrite\_buffer::propagate\_message](../Topic/overwrite_buffer::propagate_message%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco `ISource` a quello della messaggistica `overwrite_buffer`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo overwrite\_buffer::propagate\_to\_any\_targets](../Topic/overwrite_buffer::propagate_to_any_targets%20Method.md)|Consente di posizionare `message``_PMessage` in tale blocco della messaggistica `overwrite_buffer` e di metterlo a disposizione di tutte le destinazioni collegate.|  
|[Metodo overwrite\_buffer::release\_message](../Topic/overwrite_buffer::release_message%20Method.md)|Consente di rilasciare una prenotazione del messaggio precedente. \(Consente di eseguire l'override di [source\_block::release\_message](../Topic/source_block::release_message%20Method.md).\)|  
|[Metodo overwrite\_buffer::reserve\_message](../Topic/overwrite_buffer::reserve_message%20Method.md)|Consente di riservare un messaggio messo a disposizione in precedenza da tale blocco della messaggistica `overwrite_buffer`. \(Consente di eseguire l'override [source\_block::reserve\_message](../Topic/source_block::reserve_message%20Method.md).\)|  
|[Metodo overwrite\_buffer::resume\_propagation](../Topic/overwrite_buffer::resume_propagation%20Method.md)|Consente di riprendere una propagazione dopo il rilascio di una prenotazione. \(Consente di eseguire l'override [source\_block::resume\_propagation](../Topic/source_block::resume_propagation%20Method.md).\)|  
|[Metodo overwrite\_buffer::send\_message](../Topic/overwrite_buffer::send_message%20Method.md)|Consente di passare in modo sincrono un messaggio da un blocco `ISource` a quello della messaggistica `overwrite_buffer`.  Viene richiamato dal metodo `send` se chiamato da un blocco di origine.|  
|[Metodo overwrite\_buffer::supports\_anonymous\_source](../Topic/overwrite_buffer::supports_anonymous_source%20Method.md)|Consente di eseguire l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. \(Override di [ITarget::supports\_anonymous\_source](../Topic/ITarget::supports_anonymous_source%20Method.md)\).|  
  
## Note  
 Un blocco della messaggistica `overwrite_buffer` propaga copie del suo messaggio archiviato a ciascuna delle sue destinazioni.  
  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 [source\_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 [propagator\_block](../../../parallel/concrt/reference/propagator-block-class.md)  
  
 `overwrite_buffer`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe unbounded\_buffer](../Topic/unbounded_buffer%20Class.md)   
 [Classe single\_assignment](../../../parallel/concrt/reference/single-assignment-class.md)