---
description: 'Altre informazioni su: target_block Class'
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
ms.openlocfilehash: 0860ff7b185eef997d7c76f61d67ad10056ca9cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188417"
---
# <a name="target_block-class"></a>Classe target_block

La classe `target_block` corrisponde a una classe base astratta che mette a disposizione la funzionalità di gestione dei collegamenti di base e il controllo degli errori per blocchi di sola destinazione.

## <a name="syntax"></a>Sintassi

```cpp
template<class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _SourceLinkRegistry::type::source_type>>
class target_block : public ITarget<typename _SourceLinkRegistry::type::source_type>;
```

### <a name="parameters"></a>Parametri

*_SourceLinkRegistry*<br/>
Registro dei collegamenti da utilizzare per la conservazione dei collegamenti di origine.

*_MessageProcessorType*<br/>
Tipo di processore per l'elaborazione dei messaggi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`source_iterator`|Tipo di iteratore per l' `source_link_manager` `target_block` oggetto.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[target_block](#ctor)|Costruisce un oggetto `target_block`.|
|[distruttore ~ target_block](#dtor)|Elimina definitivamente l' `target_block` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[propagare](#propagate)|Passa in modo asincrono un messaggio da un blocco di origine a questo blocco di destinazione.|
|[send](#send)|Passa in modo sincrono un messaggio da un blocco di origine a questo blocco di destinazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[async_send](#async_send)|Invia in modo asincrono un messaggio per l'elaborazione.|
|[decline_incoming_messages](#decline_incoming_messages)|Indica al blocco che i nuovi messaggi devono essere rifiutati.|
|[enable_batched_processing](#enable_batched_processing)|Abilita l'elaborazione batch per questo blocco.|
|[initialize_target](#initialize_target)|Inizializza l'oggetto di base. In particolare, `message_processor` è necessario inizializzare l'oggetto.|
|[link_source](#link_source)|Collega un blocco di origine specificato a questo `target_block` oggetto.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi ricevuti come input.|
|[process_message](#process_message)|Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.|
|[propagate_message](#propagate_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco a questo `target_block` oggetto. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[register_filter](#register_filter)|Registra un metodo di filtro che verrà richiamato a ogni messaggio ricevuto.|
|[remove_sources](#remove_sources)|Scollega tutte le origini dopo l'attesa del completamento delle operazioni di invio asincrone in attesa.|
|[send_message](#send_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco a questo `target_block` oggetto. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|
|[sync_send](#sync_send)|Invia in modo sincrono un messaggio per l'elaborazione.|
|[unlink_source](#unlink_source)|Scollega un blocco di origine specificato da questo `target_block` oggetto.|
|[unlink_sources](#unlink_sources)|Scollega tutti i blocchi di origine da questo `target_block` oggetto. Esegue l'override di [ITarget:: unlink_sources](itarget-class.md#unlink_sources).|
|[wait_for_async_sends](#wait_for_async_sends)|Attende il completamento di tutte le propagazioni asincrone.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ITarget](itarget-class.md)

`target_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="async_send"></a><a name="async_send"></a> async_send

Invia in modo asincrono un messaggio per l'elaborazione.

```cpp
void async_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio inviato.

## <a name="decline_incoming_messages"></a><a name="decline_incoming_messages"></a> decline_incoming_messages

Indica al blocco che i nuovi messaggi devono essere rifiutati.

```cpp
void decline_incoming_messages();
```

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal distruttore per garantire che i nuovi messaggi vengano rifiutati mentre è in corso la distruzione.

## <a name="enable_batched_processing"></a><a name="enable_batched_processing"></a> enable_batched_processing

Abilita l'elaborazione batch per questo blocco.

```cpp
void enable_batched_processing();
```

## <a name="initialize_target"></a><a name="initialize_target"></a> initialize_target

Inizializza l'oggetto di base. In particolare, `message_processor` è necessario inizializzare l'oggetto.

```cpp
void initialize_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
Utilità di pianificazione da utilizzare per la pianificazione delle attività.

*_PScheduleGroup*<br/>
Gruppo di pianificazione da utilizzare per la pianificazione delle attività.

## <a name="link_source"></a><a name="link_source"></a> link_source

Collega un blocco di origine specificato a questo `target_block` oggetto.

```cpp
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Puntatore al blocco da `ISource` collegare.

### <a name="remarks"></a>Commenti

Questa funzione non deve essere chiamata direttamente su un `target_block` oggetto. I blocchi devono essere collegati insieme usando il `link_target` metodo sui `ISource` blocchi, che richiameranno il `link_source` Metodo sulla destinazione corrispondente.

## <a name="process_input_messages"></a><a name="process_input_messages"></a> process_input_messages

Elabora i messaggi ricevuti come input.

```cpp
virtual void process_input_messages(_Inout_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da elaborare.

## <a name="process_message"></a><a name="process_message"></a> process_message

Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.

```cpp
virtual void process_message(message<_Source_type> *);
```

## <a name="propagate"></a><a name="propagate"></a> propagare

Passa in modo asincrono un messaggio da un blocco di origine a questo blocco di destinazione.

```cpp
virtual message_status propagate(
    _Inout_opt_ message<_Source_type>* _PMessage,
    _Inout_opt_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Commenti

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il `_PMessage` parametro o `_PSource` è `NULL` .

## <a name="propagate_message"></a><a name="propagate_message"></a> propagate_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco a questo `target_block` oggetto. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status propagate_message(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

## <a name="register_filter"></a><a name="register_filter"></a> register_filter

Registra un metodo di filtro che verrà richiamato a ogni messaggio ricevuto.

```cpp
void register_filter(filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Metodo di filtro.

## <a name="remove_sources"></a><a name="remove_sources"></a> remove_sources

Scollega tutte le origini dopo l'attesa del completamento delle operazioni di invio asincrone in attesa.

```cpp
void remove_sources();
```

### <a name="remarks"></a>Commenti

Tutti i blocchi di destinazione devono chiamare questa routine per rimuovere le origini nel relativo distruttore.

## <a name="send"></a><a name="send"></a> Invia

Passa in modo sincrono un messaggio da un blocco di origine a questo blocco di destinazione.

```cpp
virtual message_status send(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Commenti

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il `_PMessage` parametro o `_PSource` è `NULL` .

L'utilizzo del `send` metodo al di fuori dell'avvio del messaggio e della propagazione dei messaggi all'interno di una rete è pericoloso e può causare un deadlock.

Quando `send` restituisce, il messaggio è già stato accettato e trasferito nel blocco di destinazione oppure è stato rifiutato dalla destinazione.

## <a name="send_message"></a><a name="send_message"></a> send_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco a questo `target_block` oggetto. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo blocco viene restituito a `declined` meno che non venga sottoposto a override da una classe derivata.

## <a name="sync_send"></a><a name="sync_send"></a> sync_send

Invia in modo sincrono un messaggio per l'elaborazione.

```cpp
void sync_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio inviato.

## <a name="target_block"></a><a name="ctor"></a> target_block

Costruisce un oggetto `target_block`.

```cpp
target_block();
```

## <a name="target_block"></a><a name="dtor"></a> ~ target_block

Elimina definitivamente l' `target_block` oggetto.

```cpp
virtual ~target_block();
```

## <a name="unlink_source"></a><a name="unlink_source"></a> unlink_source

Scollega un blocco di origine specificato da questo `target_block` oggetto.

```cpp
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Puntatore al `ISource` blocco che deve essere scollegato.

## <a name="unlink_sources"></a><a name="unlink_sources"></a> unlink_sources

Scollega tutti i blocchi di origine da questo `target_block` oggetto.

```cpp
virtual void unlink_sources();
```

## <a name="wait_for_async_sends"></a><a name="wait_for_async_sends"></a> wait_for_async_sends

Attende il completamento di tutte le propagazioni asincrone.

```cpp
void wait_for_async_sends();
```

### <a name="remarks"></a>Commenti

Questo metodo viene utilizzato dai distruttori di blocchi di messaggi per assicurarsi che tutte le operazioni asincrone abbiano avuto tempo per terminare prima di eliminare definitivamente il blocco.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe ITarget](itarget-class.md)
