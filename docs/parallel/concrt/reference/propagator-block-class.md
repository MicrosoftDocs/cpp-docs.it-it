---
title: Classe propagator_block | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- propagator_block
- AGENTS/concurrency::propagator_block
- AGENTS/concurrency::propagator_block::propagator_block
- AGENTS/concurrency::propagator_block::propagate
- AGENTS/concurrency::propagator_block::send
- AGENTS/concurrency::propagator_block::decline_incoming_messages
- AGENTS/concurrency::propagator_block::initialize_source_and_target
- AGENTS/concurrency::propagator_block::link_source
- AGENTS/concurrency::propagator_block::process_input_messages
- AGENTS/concurrency::propagator_block::propagate_message
- AGENTS/concurrency::propagator_block::register_filter
- AGENTS/concurrency::propagator_block::remove_network_links
- AGENTS/concurrency::propagator_block::send_message
- AGENTS/concurrency::propagator_block::unlink_source
- AGENTS/concurrency::propagator_block::unlink_sources
dev_langs:
- C++
helpviewer_keywords:
- propagator_block class
ms.assetid: 86aa75fd-eda5-42aa-aadf-25c0c1c9742d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eb908bf108bb3ddff375506225b9be97b2898ca5
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33694014"
---
# <a name="propagatorblock-class"></a>Classe propagator_block
La classe `propagator_block` è una classe base astratta per blocchi di messaggio che sono sia origine sia destinazione. Combina la funzionalità delle classi `source_block` e `target_block`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class _TargetLinkRegistry, class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class propagator_block : public source_block<_TargetLinkRegistry,
    _MessageProcessorType>,
 public ITarget<typename _SourceLinkRegistry::type::source_type>;
```  
  
#### <a name="parameters"></a>Parametri  
 `_TargetLinkRegistry`  
 Il Registro di sistema del collegamento da utilizzare per il mantenimento destinazione dei collegamenti.  
  
 `_SourceLinkRegistry`  
 Il Registro di sistema del collegamento per essere utilizzati per contenere i collegamenti di origine.  
  
 `_MessageProcessorType`  
 Il tipo di processore per l'elaborazione dei messaggi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`source_iterator`|Il tipo di iteratore per il `source_link_manager` per questo `propagator_block`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[propagator_block](#ctor)|Costruisce un oggetto `propagator_block`.|  
|[~ propagator_block distruttore](#dtor)|Elimina un oggetto `propagator_block`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[propagate](#propagate)|Consente di passare in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.|  
|[send](#send)|Avvia in modo sincrono un messaggio a questo blocco. Chiamato da un `ISource` blocco. Al termine di questa funzione, il messaggio sarà già stato propagato nel blocco.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[decline_incoming_messages](#decline_incoming_messages)|Indica al blocco che dovrebbero essere rifiutati nuovi messaggi.|  
|[initialize_source_and_target](#initialize_source_and_target)|Inizializza l'oggetto di base. In particolare, il `message_processor` oggetto deve essere inizializzata.|  
|[link_source](#link_source)|Collega un blocco di origine specificato a questo `propagator_block` oggetto.|  
|[process_input_messages](#process_input_messages)|Elabora i messaggi di input. Ciò è utile solo per i blocchi di propagazione che derivano da source_block (esegue l'override [source_block:: process_input_messages](source-block-class.md#process_input_messages).)|  
|[propagate_message](#propagate_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` questo blocco `propagator_block` oggetto. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|  
|[register_filter](#register_filter)|Registra un metodo di filtro che verrà richiamato su ogni messaggio ricevuto.|  
|[remove_network_links](#remove_network_links)|Rimuove tutti i collegamenti di rete di origine e di destinazione da questo `propagator_block` oggetto.|  
|[send_message](#send_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` questo blocco `propagator_block` oggetto. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|  
|[unlink_source](#unlink_source)|Consente di scollegare un blocco di origine specificata dal `propagator_block` oggetto.|  
|[unlink_sources](#unlink_sources)|Scollega tutti i blocchi di origine da questo `propagator_block` oggetto. (Esegue l'override [ITarget:: Unlink_sources](itarget-class.md#unlink_sources).)|  
  
## <a name="remarks"></a>Note  
 Per evitare l'ereditarietà multipla, il `propagator_block` classe eredita il `source_block` classe e `ITarget` classe astratta. La maggior parte delle funzionalità di `target_block` classe viene replicata qui.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 `propagator_block`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="decline_incoming_messages"></a> decline_incoming_messages 

 Indica al blocco che dovrebbero essere rifiutati nuovi messaggi.  
  
```
void decline_incoming_messages();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal distruttore per garantire che vengano rifiutati nuovi messaggi mentre l'eliminazione è in corso.  
  
##  <a name="initialize_source_and_target"></a> initialize_source_and_target 

 Inizializza l'oggetto di base. In particolare, il `message_processor` oggetto deve essere inizializzata.  
  
```
void initialize_source_and_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `_PScheduler`  
 L'utilità di pianificazione da utilizzare per la pianificazione di attività.  
  
 `_PScheduleGroup`  
 Il gruppo di pianificazione da utilizzare per la pianificazione di attività.  
  
##  <a name="link_source"></a> link_source 

 Collega un blocco di origine specificato a questo `propagator_block` oggetto.  
  
```
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PSource`  
 Un puntatore al `ISource` blocco che deve essere collegato.  
  
##  <a name="process_input_messages"></a> process_input_messages 

 Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block  
  
```
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
  
##  <a name="propagate"></a> propagazione 

 Consente di passare in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.  
  
```
virtual message_status propagate(
    _Inout_opt_ message<_Source_type>* _PMessage,
    _Inout_opt_ ISource<_Source_type>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Un puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione dei quali ha deciso di destinazione con il messaggio.  
  
### <a name="remarks"></a>Note  
 Il `propagate` metodo viene richiamato su un blocco di destinazione da un blocco di origine dati collegata. Mette un'attività asincrona per gestire il messaggio, se uno non è già in coda o l'esecuzione.  
  
 Il metodo genera un [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro `NULL`.  
  
##  <a name="propagate_message"></a> propagate_message 

 Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` questo blocco `propagator_block` oggetto. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.  
  
```
virtual message_status propagate_message(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Un puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione dei quali ha deciso di destinazione con il messaggio.  
  
##  <a name="ctor"></a> propagator_block 

 Costruisce un oggetto `propagator_block`.  
  
```
propagator_block();
```  
  
##  <a name="dtor"></a> ~propagator_block 

 Elimina un oggetto `propagator_block`.  
  
```
virtual ~propagator_block();
```  
  
##  <a name="register_filter"></a> register_filter 

 Registra un metodo di filtro che verrà richiamato su ogni messaggio ricevuto.  
  
```
void register_filter(filter_method const& _Filter);
```  
  
### <a name="parameters"></a>Parametri  
 `_Filter`  
 Il metodo di filtro.  
  
##  <a name="remove_network_links"></a> remove_network_links 

 Rimuove tutti i collegamenti di rete di origine e di destinazione da questo `propagator_block` oggetto.  
  
```
void remove_network_links();
```  
  
##  <a name="send"></a> Invia 

 Avvia in modo sincrono un messaggio a questo blocco. Chiamato da un `ISource` blocco. Al termine di questa funzione, il messaggio sarà già stato propagato nel blocco.  
  
```
virtual message_status send(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Un puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione dei quali ha deciso di destinazione con il messaggio.  
  
### <a name="remarks"></a>Note  
 Questo metodo genera un [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro `NULL`.  
  
##  <a name="send_message"></a> send_message 

 Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` questo blocco `propagator_block` oggetto. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.  
  
```
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione dei quali ha deciso di destinazione con il messaggio.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo blocco restituisce `declined` a meno che non viene sottoposto a override da una classe derivata.  
  
##  <a name="unlink_source"></a> unlink_source 

 Consente di scollegare un blocco di origine specificata dal `propagator_block` oggetto.  
  
```
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PSource`  
 Un puntatore al `ISource` blocco che si desidera scollegare.  
  
##  <a name="unlink_sources"></a> unlink_sources 

 Scollega tutti i blocchi di origine da questo `propagator_block` oggetto.  
  
```
virtual void unlink_sources();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe source_block](source-block-class.md)   
 [Classe ITarget](itarget-class.md)
