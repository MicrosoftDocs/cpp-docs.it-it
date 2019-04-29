---
title: Classe target_block
ms.date: 11/04/2016
f1_keywords:
- target_block
- AGENTS/concurrency::target_block
- AGENTS/concurrency::target_block::target_block
- AGENTS/concurrency::target_block::propagate
- AGENTS/concurrency::target_block::send
- AGENTS/concurrency::target_block::async_send
- AGENTS/concurrency::target_block::decline_incoming_messages
- AGENTS/concurrency::target_block::enable_batched_processing
- AGENTS/concurrency::target_block::initialize_target
- AGENTS/concurrency::target_block::link_source
- AGENTS/concurrency::target_block::process_input_messages
- AGENTS/concurrency::target_block::process_message
- AGENTS/concurrency::target_block::propagate_message
- AGENTS/concurrency::target_block::register_filter
- AGENTS/concurrency::target_block::remove_sources
- AGENTS/concurrency::target_block::send_message
- AGENTS/concurrency::target_block::sync_send
- AGENTS/concurrency::target_block::unlink_source
- AGENTS/concurrency::target_block::unlink_sources
- AGENTS/concurrency::target_block::wait_for_async_sends
helpviewer_keywords:
- target_block class
ms.assetid: 3ce181b4-b94a-4894-bf7b-64fc09821f9f
ms.openlocfilehash: 6033da1347e116b4b68cf719a461a1cf6ff5d04f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62385168"
---
# <a name="targetblock-class"></a>Classe target_block

La classe `target_block` corrisponde a una classe base astratta che mette a disposizione la funzionalità di gestione dei collegamenti di base e il controllo degli errori per blocchi di sola destinazione.

## <a name="syntax"></a>Sintassi

```
template<class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _SourceLinkRegistry::type::source_type>>
class target_block : public ITarget<typename _SourceLinkRegistry::type::source_type>;
```

#### <a name="parameters"></a>Parametri

*_SourceLinkRegistry*<br/>
Il Registro di sistema collegamento da utilizzare per mantenere i collegamenti di origine.

*_MessageProcessorType*<br/>
Il tipo di processore per l'elaborazione dei messaggi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`source_iterator`|Il tipo di iteratore per il `source_link_manager` per questo `target_block` oggetto.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[target_block](#ctor)|Costruisce un oggetto `target_block`.|
|[~ target_block distruttore](#dtor)|Elimina definitivamente il `target_block` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[propagate](#propagate)|Consente di passare in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.|
|[send](#send)|Consente di passare in modo sincrono un messaggio da un blocco di origine per questo blocco di destinazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[async_send](#async_send)|In modo asincrono invia un messaggio per l'elaborazione.|
|[decline_incoming_messages](#decline_incoming_messages)|Indica al blocco che i nuovi messaggi debbano essere rifiutati.|
|[enable_batched_processing](#enable_batched_processing)|Abilita l'elaborazione batch per questo blocco.|
|[initialize_target](#initialize_target)|Inizializza l'oggetto di base. In particolare, il `message_processor` oggetto deve essere inizializzata.|
|[link_source](#link_source)|Collega un blocco di origine specificato a questa `target_block` oggetto.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi ricevuti come input.|
|[process_message](#process_message)|Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.|
|[propagate_message](#propagate_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco da questo `target_block` oggetto. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[register_filter](#register_filter)|Registra un metodo di filtro che verrà richiamato su ogni messaggio ricevuto.|
|[remove_sources](#remove_sources)|Consente di scollegare tutte le origini dopo un'attesa di operazioni di invio asincrona in sospeso da completare.|
|[send_message](#send_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco da questo `target_block` oggetto. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.|
|[sync_send](#sync_send)|Inviare in modo sincrono un messaggio per l'elaborazione.|
|[unlink_source](#unlink_source)|Scollega un blocco di origine specificato da questo `target_block` oggetto.|
|[unlink_sources](#unlink_sources)|Scollega tutti i blocchi di origine dal `target_block` oggetto. (Esegue l'override [ITarget:: Unlink_sources](itarget-class.md#unlink_sources).)|
|[wait_for_async_sends](#wait_for_async_sends)|Attende che tutte le propagazioni asincrone per il completamento.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ITarget](itarget-class.md)

`target_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="async_send"></a> async_send

In modo asincrono invia un messaggio per l'elaborazione.

```
void async_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Un puntatore per il messaggio da inviare.

##  <a name="decline_incoming_messages"></a> decline_incoming_messages

Indica al blocco che i nuovi messaggi debbano essere rifiutati.

```
void decline_incoming_messages();
```

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal distruttore per garantire che i nuovi messaggi vengono rifiutati mentre l'eliminazione è in corso.

##  <a name="enable_batched_processing"></a> enable_batched_processing

Abilita l'elaborazione batch per questo blocco.

```
void enable_batched_processing();
```

##  <a name="initialize_target"></a> initialize_target

Inizializza l'oggetto di base. In particolare, il `message_processor` oggetto deve essere inizializzata.

```
void initialize_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
L'utilità di pianificazione da utilizzare per la pianificazione di attività.

*_PScheduleGroup*<br/>
Il gruppo di pianificazione da utilizzare per la pianificazione di attività.

##  <a name="link_source"></a> link_source

Collega un blocco di origine specificato a questa `target_block` oggetto.

```
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Un puntatore al `ISource` blocco che deve essere collegato.

### <a name="remarks"></a>Note

Questa funzione non deve essere chiamata direttamente su un `target_block` oggetto. I blocchi devono essere connesse tra loro tramite il `link_target` metodo sul `ISource` blocchi, che verranno richiamato il `link_source` metodo nella destinazione corrispondente.

##  <a name="process_input_messages"></a> process_input_messages

Elabora i messaggi ricevuti come input.

```
virtual void process_input_messages(_Inout_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio che deve essere elaborato.

##  <a name="process_message"></a> process_message

Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.

```
virtual void process_message(message<_Source_type> *);
```

##  <a name="propagate"></a> propagate

Consente di passare in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.

```
virtual message_status propagate(
    _Inout_opt_ message<_Source_type>* _PMessage,
    _Inout_opt_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro è `NULL`.

##  <a name="propagate_message"></a> propagate_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco da questo `target_block` oggetto. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status propagate_message(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

##  <a name="register_filter"></a> register_filter

Registra un metodo di filtro che verrà richiamato su ogni messaggio ricevuto.

```
void register_filter(filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Il metodo di filtro.

##  <a name="remove_sources"></a> remove_sources

Consente di scollegare tutte le origini dopo un'attesa di operazioni di invio asincrona in sospeso da completare.

```
void remove_sources();
```

### <a name="remarks"></a>Note

Tutti i blocchi di destinazione devono chiamare la routine per rimuovere le origini nel distruttore.

##  <a name="send"></a> Invia

Consente di passare in modo sincrono un messaggio da un blocco di origine per questo blocco di destinazione.

```
virtual message_status send(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro è `NULL`.

Uso di `send` metodo all'esterno di inizio del messaggio e per propagare i messaggi all'interno di una rete è un'operazione rischiosa e può causare un deadlock.

Quando `send` termina, il messaggio sia già accettato e trasferito nel blocco di destinazione o è stato rifiutato dalla destinazione.

##  <a name="send_message"></a> send_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco da questo `target_block` oggetto. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo blocco restituisce `declined` a meno che non viene sottoposto a override da una classe derivata.

##  <a name="sync_send"></a> sync_send

Inviare in modo sincrono un messaggio per l'elaborazione.

```
void sync_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Un puntatore per il messaggio da inviare.

##  <a name="ctor"></a> target_block

Costruisce un oggetto `target_block`.

```
target_block();
```

##  <a name="dtor"></a> ~target_block

Elimina definitivamente il `target_block` oggetto.

```
virtual ~target_block();
```

##  <a name="unlink_source"></a> unlink_source

Scollega un blocco di origine specificato da questo `target_block` oggetto.

```
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Un puntatore al `ISource` blocco che deve essere sconnesso.

##  <a name="unlink_sources"></a> unlink_sources

Scollega tutti i blocchi di origine dal `target_block` oggetto.

```
virtual void unlink_sources();
```

##  <a name="wait_for_async_sends"></a> wait_for_async_sends

Attende che tutte le propagazioni asincrone per il completamento.

```
void wait_for_async_sends();
```

### <a name="remarks"></a>Note

Questo metodo viene utilizzato per i distruttori di blocco di messaggio per verificare che tutte le operazioni asincrone hanno avuto tempo per essere completata prima dell'eliminazione del blocco.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ITarget](itarget-class.md)
