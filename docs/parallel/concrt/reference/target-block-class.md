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
ms.openlocfilehash: 4009133161133a99aeb0ee040f0c82fdbabecaa0
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142647"
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

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`source_iterator`|Tipo di iteratore per l'`source_link_manager` per questo oggetto `target_block`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[target_block](#ctor)|Costruisce un oggetto `target_block`.|
|[distruttore ~ target_block](#dtor)|Elimina definitivamente l'oggetto `target_block`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[propagare](#propagate)|Passa in modo asincrono un messaggio da un blocco di origine a questo blocco di destinazione.|
|[send](#send)|Passa in modo sincrono un messaggio da un blocco di origine a questo blocco di destinazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[async_send](#async_send)|Invia in modo asincrono un messaggio per l'elaborazione.|
|[decline_incoming_messages](#decline_incoming_messages)|Indica al blocco che i nuovi messaggi devono essere rifiutati.|
|[enable_batched_processing](#enable_batched_processing)|Abilita l'elaborazione batch per questo blocco.|
|[initialize_target](#initialize_target)|Inizializza l'oggetto di base. In particolare, è necessario inizializzare l'oggetto `message_processor`.|
|[link_source](#link_source)|Collega un blocco di origine specificato a questo oggetto `target_block`.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi ricevuti come input.|
|[process_message](#process_message)|Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.|
|[propagate_message](#propagate_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un blocco `ISource` a questo oggetto `target_block`. Viene richiamato dal metodo `propagate`, quando viene chiamato da un blocco di origine.|
|[register_filter](#register_filter)|Registra un metodo di filtro che verrà richiamato a ogni messaggio ricevuto.|
|[remove_sources](#remove_sources)|Scollega tutte le origini dopo l'attesa del completamento delle operazioni di invio asincrone in attesa.|
|[send_message](#send_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un blocco di `ISource` a questo oggetto `target_block`. Viene richiamato dal metodo `send`, quando viene chiamato da un blocco di origine.|
|[sync_send](#sync_send)|Invia in modo sincrono un messaggio per l'elaborazione.|
|[unlink_source](#unlink_source)|Scollega un blocco di origine specificato da questo oggetto `target_block`.|
|[unlink_sources](#unlink_sources)|Scollega tutti i blocchi di origine da questo oggetto `target_block`. Esegue l'override di [ITarget:: unlink_sources](itarget-class.md#unlink_sources).|
|[wait_for_async_sends](#wait_for_async_sends)|Attende il completamento di tutte le propagazioni asincrone.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ITarget](itarget-class.md)

`target_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="async_send"></a>async_send

Invia in modo asincrono un messaggio per l'elaborazione.

```cpp
void async_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio inviato.

## <a name="decline_incoming_messages"></a>decline_incoming_messages

Indica al blocco che i nuovi messaggi devono essere rifiutati.

```cpp
void decline_incoming_messages();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato dal distruttore per garantire che i nuovi messaggi vengano rifiutati mentre è in corso la distruzione.

## <a name="enable_batched_processing"></a>enable_batched_processing

Abilita l'elaborazione batch per questo blocco.

```cpp
void enable_batched_processing();
```

## <a name="initialize_target"></a>initialize_target

Inizializza l'oggetto di base. In particolare, è necessario inizializzare l'oggetto `message_processor`.

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

## <a name="link_source"></a>link_source

Collega un blocco di origine specificato a questo oggetto `target_block`.

```cpp
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Puntatore al blocco di `ISource` da collegare.

### <a name="remarks"></a>Osservazioni

Questa funzione non deve essere chiamata direttamente su un oggetto `target_block`. I blocchi devono essere collegati insieme usando il metodo `link_target` nei blocchi `ISource`, che richiameranno il metodo `link_source` sulla destinazione corrispondente.

## <a name="process_input_messages"></a>process_input_messages

Elabora i messaggi ricevuti come input.

```cpp
virtual void process_input_messages(_Inout_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da elaborare.

## <a name="process_message"></a>process_message

Quando sottoposto a override in una classe derivata, elabora un messaggio che è stato accettato dall'oggetto `target_block`.

```cpp
virtual void process_message(message<_Source_type> *);
```

## <a name="propagate"></a>propagare

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

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PMessage` o `_PSource` è `NULL`.

## <a name="propagate_message"></a>propagate_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un blocco `ISource` a questo oggetto `target_block`. Viene richiamato dal metodo `propagate`, quando viene chiamato da un blocco di origine.

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

## <a name="register_filter"></a>register_filter

Registra un metodo di filtro che verrà richiamato a ogni messaggio ricevuto.

```cpp
void register_filter(filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Metodo di filtro.

## <a name="remove_sources"></a>remove_sources

Scollega tutte le origini dopo l'attesa del completamento delle operazioni di invio asincrone in attesa.

```cpp
void remove_sources();
```

### <a name="remarks"></a>Osservazioni

Tutti i blocchi di destinazione devono chiamare questa routine per rimuovere le origini nel relativo distruttore.

## <a name="send"></a>Invia

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

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PMessage` o `_PSource` è `NULL`.

L'utilizzo del metodo `send` al di fuori dell'avvio del messaggio e della propagazione dei messaggi all'interno di una rete è pericoloso e può causare un deadlock.

Quando `send` restituisce, il messaggio è già stato accettato e trasferito nel blocco di destinazione oppure è stato rifiutato dalla destinazione.

## <a name="send_message"></a>send_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un blocco di `ISource` a questo oggetto `target_block`. Viene richiamato dal metodo `send`, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo blocco restituisce `declined` a meno che non venga sottoposto a override da una classe derivata.

## <a name="sync_send"></a>sync_send

Invia in modo sincrono un messaggio per l'elaborazione.

```cpp
void sync_send(_Inout_opt_ message<_Source_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio inviato.

## <a name="ctor"></a>target_block

Costruisce un oggetto `target_block`.

```cpp
target_block();
```

## <a name="dtor"></a>~ target_block

Elimina definitivamente l'oggetto `target_block`.

```cpp
virtual ~target_block();
```

## <a name="unlink_source"></a>unlink_source

Scollega un blocco di origine specificato da questo oggetto `target_block`.

```cpp
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Puntatore al blocco di `ISource` che deve essere scollegato.

## <a name="unlink_sources"></a>unlink_sources

Scollega tutti i blocchi di origine da questo oggetto `target_block`.

```cpp
virtual void unlink_sources();
```

## <a name="wait_for_async_sends"></a>wait_for_async_sends

Attende il completamento di tutte le propagazioni asincrone.

```cpp
void wait_for_async_sends();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene utilizzato dai distruttori di blocchi di messaggi per assicurarsi che tutte le operazioni asincrone abbiano avuto tempo per terminare prima di eliminare definitivamente il blocco.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ITarget](itarget-class.md)
