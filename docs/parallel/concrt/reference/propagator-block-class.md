---
title: "Classe propagator_block | Microsoft Docs"
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
  - "agents/concurrency::propagator_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "propagator_block (classe)"
ms.assetid: 86aa75fd-eda5-42aa-aadf-25c0c1c9742d
caps.latest.revision: 21
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe propagator_block
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `propagator_block` è una classe base astratta per blocchi di messaggio che sono sia origine sia destinazione.  Combina la funzionalità delle classi `source_block` e `target_block`.  
  
## Sintassi  
  
```  
template<  
   class _TargetLinkRegistry,  
   class _SourceLinkRegistry,  
   class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>  
>  
class propagator_block : public source_block<_TargetLinkRegistry, _MessageProcessorType>, public ITarget<typename _SourceLinkRegistry::type::source_type>;  
```  
  
#### Parametri  
 `_TargetLinkRegistry`  
 Registro di sistema del collegamento da utilizzare per il mantenimento dei collegamenti di destinazione.  
  
 `_SourceLinkRegistry`  
 Registro di sistema del collegamento da utilizzare per il mantenimento dei collegamenti di origine.  
  
 `_MessageProcessorType`  
 Tipo di processore per elaborazione del messaggio.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`source_iterator`|Tipo di iteratore per `source_link_manager` di `propagator_block`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore propagator\_block::propagator\_block](../Topic/propagator_block::propagator_block%20Constructor.md)|Costruisce un oggetto `propagator_block`.|  
|[Distruttore propagator\_block::~propagator\_block](../Topic/propagator_block::~propagator_block%20Destructor.md)|Elimina un oggetto `propagator_block`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo propagator\_block::propagate](../Topic/propagator_block::propagate%20Method.md)|Consente di passare in modo asincrono un messaggio da un blocco di origine a quello di destinazione.|  
|[Metodo propagator\_block::send](../Topic/propagator_block::send%20Method.md)|Consente di avviare in modo sincrono un messaggio per questo blocco.  Chiamato da un blocco `ISource`.  Quando la funzione viene completata, il messaggio sarà già stato propagato nel blocco.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo propagator\_block::decline\_incoming\_messages](../Topic/propagator_block::decline_incoming_messages%20Method.md)|Consente di indicare il blocco che deve rifiutare i nuovi messaggi.|  
|[Metodo propagator\_block::initialize\_source\_and\_target](../Topic/propagator_block::initialize_source_and_target%20Method.md)|Consente di inizializzare l'oggetto di base.  In particolare, l'oggetto `message_processor` ha bisogno di essere inizializzato.|  
|[Metodo propagator\_block::link\_source](../Topic/propagator_block::link_source%20Method.md)|Collega un blocco di origine specificato all'oggetto `propagator_block`.|  
|[Metodo propagator\_block::process\_input\_messages](../Topic/propagator_block::process_input_messages%20Method.md)|Elabora messaggi di input.  Ciò è utile solo per i blocchi di propagazione, che derivano da source\_block \(Override di [source\_block::process\_input\_messages](../Topic/source_block::process_input_messages%20Method.md)\).|  
|[Metodo propagator\_block::propagate\_message](../Topic/propagator_block::propagate_message%20Method.md)|Quando sottoposto a override in una classe derivata, il metodo passa in modo asincrono un messaggio da un blocco `ISource` all'oggetto `propagator_block`.  Viene richiamato dal metodo `propagate` se chiamato da un blocco di origine.|  
|[Metodo propagator\_block::register\_filter](../Topic/propagator_block::register_filter%20Method.md)|Consente di registrare un metodo di filtro che verrà richiamato a ogni messaggio ricevuto.|  
|[Metodo propagator\_block::remove\_network\_links](../Topic/propagator_block::remove_network_links%20Method.md)|Consente di rimuovere tutti i collegamenti di rete di origine e di destinazione da tale oggetto `propagator_block`.|  
|[Metodo propagator\_block::send\_message](../Topic/propagator_block::send_message%20Method.md)|Quando sottoposto a override in una classe derivata, il metodo passa in modo sincrono un messaggio da un blocco `ISource` all'oggetto `propagator_block`.  Viene richiamato dal metodo `send` se chiamato da un blocco di origine.|  
|[Metodo propagator\_block::unlink\_source](../Topic/propagator_block::unlink_source%20Method.md)|Consente di scollegare un blocco di origine specificato dall'oggetto `propagator_block`.|  
|[Metodo propagator\_block::unlink\_sources](../Topic/propagator_block::unlink_sources%20Method.md)|Consente di scollegare tutti i blocchi di origine dall'oggetto `propagator_block`. \(Esegue l'override di [ITarget::unlink\_sources](../Topic/ITarget::unlink_sources%20Method.md).\)|  
  
## Note  
 Per ottenere l'ereditarietà multipla, la classe `propagator_block` eredita da quella `source_block` e da quella astratta `ITarget`.  La maggior parte delle funzioni nella classe `target_block` è replicata qui.  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [ITarget](../../../parallel/concrt/reference/itarget-class.md)  
  
 [source\_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 `propagator_block`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe source\_block](../../../parallel/concrt/reference/source-block-class.md)   
 [Classe ITarget](../../../parallel/concrt/reference/itarget-class.md)