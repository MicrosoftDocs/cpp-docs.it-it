---
title: "Classe target_block | Microsoft Docs"
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
  - "agents/concurrency::target_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "target_block (classe)"
ms.assetid: 3ce181b4-b94a-4894-bf7b-64fc09821f9f
caps.latest.revision: 21
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe target_block
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `target_block` corrisponde a una classe base astratta che mette a disposizione la funzionalità di gestione dei collegamenti di base e il controllo degli errori per blocchi di sola destinazione.  
  
## Sintassi  
  
```  
template<  
   class _SourceLinkRegistry,  
   class _MessageProcessorType = ordered_message_processor<typename _SourceLinkRegistry::type::source_type>  
>  
class target_block : public ITarget<typename _SourceLinkRegistry::type::source_type>;  
```  
  
#### Parametri  
 `_SourceLinkRegistry`  
 Registro di sistema del collegamento da utilizzare per il mantenimento dei collegamenti di origine.  
  
 `_MessageProcessorType`  
 Tipo di processore per elaborazione del messaggio.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`source_iterator`|Tipo dell'iteratore per `source_link_manager` dell'oggetto `target_block`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore target\_block::target\_block](../Topic/target_block::target_block%20Constructor.md)|Costruisce un oggetto `target_block`.|  
|[Distruttore target\_block::~target\_block](../Topic/target_block::~target_block%20Destructor.md)|Elimina l'oggetto `target_block`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo target\_block::propagate](../Topic/target_block::propagate%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco di origine a quello di destinazione.|  
|[Metodo target\_block::send](../Topic/target_block::send%20Method.md)|Consente di passare in modo sincrono un messaggio da un blocco di origine a quello di destinazione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo target\_block::async\_send](../Topic/target_block::async_send%20Method.md)|Consente di inviare in modo asincrono un messaggio per l'elaborazione.|  
|[Metodo target\_block::decline\_incoming\_messages](../Topic/target_block::decline_incoming_messages%20Method.md)|Consente di indicare il blocco che deve rifiutare i nuovi messaggi.|  
|[Metodo target\_block::enable\_batched\_processing](../Topic/target_block::enable_batched_processing%20Method.md)|Consente di abilitare l'elaborazione batch per questo blocco.|  
|[Metodo target\_block::initialize\_target](../Topic/target_block::initialize_target%20Method.md)|Consente di inizializzare l'oggetto di base.  In particolare, l'oggetto `message_processor` ha bisogno di essere inizializzato.|  
|[Metodo target\_block::link\_source](../Topic/target_block::link_source%20Method.md)|Collega un blocco di origine specificato all'oggetto `target_block`.|  
|[Metodo target\_block::process\_input\_messages](../Topic/target_block::process_input_messages%20Method.md)|Consente di elaborare i messaggi ricevuti in input.|  
|[Metodo target\_block::process\_message](../Topic/target_block::process_message%20Method.md)|Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.|  
|[Metodo target\_block::propagate\_message](../Topic/target_block::propagate_message%20Method.md)|Quando sottoposto a override in una classe derivata, il metodo passa in modo asincrono un messaggio da un blocco `ISource` all'oggetto `target_block`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo target\_block::register\_filter](../Topic/target_block::register_filter%20Method.md)|Consente di registrare un metodo di filtro che verrà richiamato a ogni messaggio ricevuto.|  
|[Metodo target\_block::remove\_sources](../Topic/target_block::remove_sources%20Method.md)|Consente di scollegare tutte le origini dopo aver atteso il completamento delle operazioni di invio asincrone in sospeso.|  
|[Metodo target\_block::send\_message](../Topic/target_block::send_message%20Method.md)|Quando sottoposto a override in una classe derivata, il metodo passa in modo sincrono un messaggio da un blocco `ISource` all'oggetto `target_block`.  Viene richiamato dal metodo `send` se chiamato da un blocco di origine.|  
|[Metodo target\_block::sync\_send](../Topic/target_block::sync_send%20Method.md)|Consente di inviare in modo sincrono un messaggio per l'elaborazione.|  
|[Metodo target\_block::unlink\_source](../Topic/target_block::unlink_source%20Method.md)|Consente di scollegare un blocco di origine specificato dall'oggetto `target_block`.|  
|[Metodo target\_block::unlink\_sources](../Topic/target_block::unlink_sources%20Method.md)|Consente di scollegare tutti i blocchi di origine dall'oggetto `target_block`. \(Esegue l'override di [ITarget::unlink\_sources](../Topic/ITarget::unlink_sources%20Method.md).\)|  
|[Metodo target\_block::wait\_for\_async\_sends](../Topic/target_block::wait_for_async_sends%20Method.md)|Consente di attendere il completamento di tutte le propagazioni asincrone.|  
  
## Gerarchia di ereditarietà  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 `target_block`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe ITarget](../../../parallel/concrt/reference/itarget-class.md)