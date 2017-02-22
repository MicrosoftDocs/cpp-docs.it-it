---
title: "Classe source_block | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::source_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source_block (classe)"
ms.assetid: fbdd4146-e8d0-42e8-b714-fe633f69ffbf
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Classe source_block
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `source_block` è una classe base astratta per blocchi di sola origine.  La classe fornisce funzionalità di gestione dei collegamenti di base come controlli dell'errore comune.  
  
## Sintassi  
  
```  
template<  
   class _TargetLinkRegistry,  
   class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>  
>  
class source_block : public ISource<typename _TargetLinkRegistry::type::type>;  
```  
  
#### Parametri  
 `_TargetLinkRegistry`  
 Registro di sistema dei collegamenti da utilizzare per il mantenimento dei collegamenti di destinazione.  
  
 `_MessageProcessorType`  
 Tipo di processore per elaborazione del messaggio.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`target_iterator`|Iteratore per mostrare le destinazioni connesse.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore source\_block::source\_block](../Topic/source_block::source_block%20Constructor.md)|Costruisce un oggetto `source_block`.|  
|[Distruttore source\_block::~source\_block](../Topic/source_block::~source_block%20Destructor.md)|Elimina l'oggetto `source_block`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo source\_block::accept](../Topic/source_block::accept%20Method.md)|Accetta un messaggio offerto dall'oggetto `source_block`, trasferendo la proprietà al chiamante.|  
|[Metodo source\_block::acquire\_ref](../Topic/source_block::acquire_ref%20Method.md)|Acquisisce un conteggio dei riferimenti su questo oggetto `source_block`, per impedire eliminazione.|  
|[Metodo source\_block::consume](../Topic/source_block::consume%20Method.md)|Utilizza un messaggio precedentemente offerto da questo oggetto `source_block` e riservato correttamente dalla destinazione trasferendo la proprietà al chiamante.|  
|[Metodo source\_block::link\_target](../Topic/source_block::link_target%20Method.md)|Connette un blocco di destinazione al blocco dell'oggetto `source_block`.|  
|[Metodo source\_block::release](../Topic/source_block::release%20Method.md)|Consente di rilasciare una prenotazione corretta del messaggio precedente.|  
|[Metodo source\_block::release\_ref](../Topic/source_block::release_ref%20Method.md)|Consente di rilasciare un conteggio dei riferimenti su tale oggetto `source_block`.|  
|[Metodo source\_block::reserve](../Topic/source_block::reserve%20Method.md)|Consente di riservare un messaggio messo a disposizione in precedenza da tale oggetto `source_block`.|  
|[Metodo source\_block::unlink\_target](../Topic/source_block::unlink_target%20Method.md)|Consente di scollegare un blocco di destinazione dall'oggetto `source_block`.|  
|[Metodo source\_block::unlink\_targets](../Topic/source_block::unlink_targets%20Method.md)|Consente di scollegare tutti i blocchi di destinazione dall'oggetto `source_block`. \(Esegue l'override di [ISource::unlink\_targets](../Topic/ISource::unlink_targets%20Method.md).\)|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo source\_block::accept\_message](../Topic/source_block::accept_message%20Method.md)|Quando sottoposto a override in una classe derivata, accetta un messaggio proposto dall'origine.  I blocchi del messaggio devono eseguire l'override di questo metodo per convalidare `_MsgId` e restituire un messaggio.|  
|[Metodo source\_block::async\_send](../Topic/source_block::async_send%20Method.md)|Consente di mettere in coda in modo asincrono i messaggi e avviare un'attività di propagazione, se questa non è già stata eseguita|  
|[Metodo source\_block::consume\_message](../Topic/source_block::consume_message%20Method.md)|Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente riservato.|  
|[Metodo source\_block::enable\_batched\_processing](../Topic/source_block::enable_batched_processing%20Method.md)|Consente di abilitare l'elaborazione batch per questo blocco.|  
|[Metodo source\_block::initialize\_source](../Topic/source_block::initialize_source%20Method.md)|Inizializza l'opzione `message_propagator` all'interno di questo `source_block`.|  
|[Metodo source\_block::link\_target\_notification](../Topic/source_block::link_target_notification%20Method.md)|Un callback che notifica che una nuova destinazione è stata collegata a questo oggetto `source_block`.|  
|[Metodo source\_block::process\_input\_messages](../Topic/source_block::process_input_messages%20Method.md)|Elabora messaggi di input.  Ciò è utile solo per i blocchi di propagazione, che derivano da source\_block|  
|[Metodo source\_block::propagate\_output\_messages](../Topic/source_block::propagate_output_messages%20Method.md)|Propaga messaggi alle destinazioni.|  
|[Metodo source\_block::propagate\_to\_any\_targets](../Topic/source_block::propagate_to_any_targets%20Method.md)|Quando sottoposto a override in una classe derivata, propaga il messaggio specificato a una o tutte le destinazioni collegate.  Si tratta della routine di propagazione principale per i blocchi di messaggio.|  
|[Metodo source\_block::release\_message](../Topic/source_block::release_message%20Method.md)|Quando sottoposto a override in una classe derivata, rilascia un precedente prenotazione del messaggio.|  
|[Metodo source\_block::remove\_targets](../Topic/source_block::remove_targets%20Method.md)|Consente di rimuovere tutti i collegamenti di destinazione per tale blocco di origine.  Deve essere chiamato dal distruttore.|  
|[Metodo source\_block::reserve\_message](../Topic/source_block::reserve_message%20Method.md)|Quando sottoposto a override in una classe derivata, riserva un messaggio precedentemente proposto dall'oggetto `source_block`.|  
|[Metodo source\_block::resume\_propagation](../Topic/source_block::resume_propagation%20Method.md)|Quando sottoposto a override in una classe derivata, riprende la propagazione dopo che è stata rilasciata una prenotazione.|  
|[Metodo source\_block::sync\_send](../Topic/source_block::sync_send%20Method.md)|Consente di mettere in coda in modo sincrono i messaggi e avviare un'attività di propagazione, se questa non è già stata eseguita.|  
|[Metodo source\_block::unlink\_target\_notification](../Topic/source_block::unlink_target_notification%20Method.md)|Callback che notifica che una destinazione è stata scollegata dall'oggetto `source_block`.|  
|[Metodo source\_block::wait\_for\_outstanding\_async\_sends](../Topic/source_block::wait_for_outstanding_async_sends%20Method.md)|Consente di attendere il completamento di tutte le propagazioni asincrone.  Si utilizza l'attesa della rotazione specifica del propagatore nei distruttori di blocchi del messaggio per assicurarsi che tutte le propagazioni asincrone abbiano il tempo di terminare prima della distruzione del blocco.|  
  
## Note  
 I blocchi del messaggio devono derivare da questo blocco per beneficiare della gestione di collegamenti e della sincronizzazione fornite da questa classe.  
  
## Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 `source_block`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe ISource](../../../parallel/concrt/reference/isource-class.md)