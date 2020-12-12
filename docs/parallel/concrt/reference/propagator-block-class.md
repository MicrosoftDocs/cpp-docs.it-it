---
description: 'Altre informazioni su: propagator_block Class'
title: Classe propagator_block
ms.date: 11/04/2016
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
helpviewer_keywords:
- propagator_block class
ms.assetid: 86aa75fd-eda5-42aa-aadf-25c0c1c9742d
ms.openlocfilehash: 4dd006829e01f663be20be76a2cc2e0364ef7b38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115261"
---
# <a name="propagator_block-class"></a>Classe propagator_block

La classe `propagator_block` è una classe base astratta per blocchi di messaggio che sono sia origine sia destinazione. Combina la funzionalità delle classi `source_block` e `target_block`.

## <a name="syntax"></a>Sintassi

```cpp
template<class _TargetLinkRegistry, class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class propagator_block : public source_block<_TargetLinkRegistry,
    _MessageProcessorType>,
public ITarget<typename _SourceLinkRegistry::type::source_type>;
```

### <a name="parameters"></a>Parametri

*_TargetLinkRegistry*<br/>
Registro dei collegamenti da utilizzare per la conservazione dei collegamenti di destinazione.

*_SourceLinkRegistry*<br/>
Registro dei collegamenti da utilizzare per la conservazione dei collegamenti di origine.

*_MessageProcessorType*<br/>
Tipo di processore per l'elaborazione dei messaggi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`source_iterator`|Tipo dell'iteratore per l'oggetto `source_link_manager` per questo `propagator_block` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[propagator_block](#ctor)|Costruisce un oggetto `propagator_block`.|
|[Distruttore ~ propagator_block](#dtor)|Elimina un oggetto `propagator_block` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[propagare](#propagate)|Passa in modo asincrono un messaggio da un blocco di origine a questo blocco di destinazione.|
|[send](#send)|Avvia in modo sincrono un messaggio in questo blocco. Chiamato da un `ISource` blocco. Al termine di questa funzione, il messaggio verrà già propagato nel blocco.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[decline_incoming_messages](#decline_incoming_messages)|Indica al blocco che i nuovi messaggi devono essere rifiutati.|
|[initialize_source_and_target](#initialize_source_and_target)|Inizializza l'oggetto di base. In particolare, `message_processor` è necessario inizializzare l'oggetto.|
|[link_source](#link_source)|Collega un blocco di origine specificato a questo `propagator_block` oggetto.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione, che derivano da source_block (esegue l'override di [source_block::p rocess_input_messages](source-block-class.md#process_input_messages).)|
|[propagate_message](#propagate_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco a questo `propagator_block` oggetto. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[register_filter](#register_filter)|Registra un metodo di filtro che verrà richiamato in ogni messaggio ricevuto.|
|[remove_network_links](#remove_network_links)|Rimuove tutti i collegamenti di rete di origine e di destinazione da questo `propagator_block` oggetto.|
|[send_message](#send_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco a questo `propagator_block` oggetto. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|
|[unlink_source](#unlink_source)|Scollega un blocco di origine specificato da questo `propagator_block` oggetto.|
|[unlink_sources](#unlink_sources)|Scollega tutti i blocchi di origine da questo `propagator_block` oggetto. Esegue l'override di [ITarget:: unlink_sources](itarget-class.md#unlink_sources).|

## <a name="remarks"></a>Commenti

Per evitare l'ereditarietà multipla, la `propagator_block` classe eredita dalla classe `source_block` e dalla `ITarget` classe astratta. La maggior parte delle funzionalità della `target_block` classe viene replicata qui.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

`propagator_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="decline_incoming_messages"></a><a name="decline_incoming_messages"></a> decline_incoming_messages

Indica al blocco che i nuovi messaggi devono essere rifiutati.

```cpp
void decline_incoming_messages();
```

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal distruttore per garantire che i nuovi messaggi vengano rifiutati mentre è in corso la distruzione.

## <a name="initialize_source_and_target"></a><a name="initialize_source_and_target"></a> initialize_source_and_target

Inizializza l'oggetto di base. In particolare, `message_processor` è necessario inizializzare l'oggetto.

```cpp
void initialize_source_and_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
Utilità di pianificazione da utilizzare per la pianificazione delle attività.

*_PScheduleGroup*<br/>
Gruppo di pianificazione da utilizzare per la pianificazione delle attività.

## <a name="link_source"></a><a name="link_source"></a> link_source

Collega un blocco di origine specificato a questo `propagator_block` oggetto.

```cpp
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Puntatore al blocco da `ISource` collegare.

## <a name="process_input_messages"></a><a name="process_input_messages"></a> process_input_messages

Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block

```cpp
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da elaborare.

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

Il `propagate` metodo viene richiamato in un blocco di destinazione da un blocco di origine collegato. Accoda un'attività asincrona per gestire il messaggio, se non è già in coda o in esecuzione.

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il `_PMessage` parametro o `_PSource` è `NULL` .

## <a name="propagate_message"></a><a name="propagate_message"></a> propagate_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco a questo `propagator_block` oggetto. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

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

## <a name="propagator_block"></a><a name="ctor"></a> propagator_block

Costruisce un oggetto `propagator_block`.

```cpp
propagator_block();
```

## <a name="propagator_block"></a><a name="dtor"></a> ~ propagator_block

Elimina un oggetto `propagator_block` .

```cpp
virtual ~propagator_block();
```

## <a name="register_filter"></a><a name="register_filter"></a> register_filter

Registra un metodo di filtro che verrà richiamato in ogni messaggio ricevuto.

```cpp
void register_filter(filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Metodo di filtro.

## <a name="remove_network_links"></a><a name="remove_network_links"></a> remove_network_links

Rimuove tutti i collegamenti di rete di origine e di destinazione da questo `propagator_block` oggetto.

```cpp
void remove_network_links();
```

## <a name="send"></a><a name="send"></a> Invia

Avvia in modo sincrono un messaggio in questo blocco. Chiamato da un `ISource` blocco. Al termine di questa funzione, il messaggio verrà già propagato nel blocco.

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

Questo metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il `_PMessage` parametro o `_PSource` è `NULL` .

## <a name="send_message"></a><a name="send_message"></a> send_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco a questo `propagator_block` oggetto. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo blocco viene restituito a `declined` meno che non venga sottoposto a override da una classe derivata.

## <a name="unlink_source"></a><a name="unlink_source"></a> unlink_source

Scollega un blocco di origine specificato da questo `propagator_block` oggetto.

```cpp
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Puntatore al `ISource` blocco che deve essere scollegato.

## <a name="unlink_sources"></a><a name="unlink_sources"></a> unlink_sources

Scollega tutti i blocchi di origine da questo `propagator_block` oggetto.

```cpp
virtual void unlink_sources();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe source_block](source-block-class.md)<br/>
[Classe ITarget](itarget-class.md)
