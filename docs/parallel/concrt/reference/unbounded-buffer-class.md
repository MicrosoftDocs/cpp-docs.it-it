---
description: 'Altre informazioni su: unbounded_buffer Class'
title: Classe unbounded_buffer
ms.date: 11/04/2016
f1_keywords:
- unbounded_buffer
- AGENTS/concurrency::unbounded_buffer
- AGENTS/concurrency::unbounded_buffer::unbounded_buffer
- AGENTS/concurrency::unbounded_buffer::dequeue
- AGENTS/concurrency::unbounded_buffer::enqueue
- AGENTS/concurrency::unbounded_buffer::accept_message
- AGENTS/concurrency::unbounded_buffer::consume_message
- AGENTS/concurrency::unbounded_buffer::link_target_notification
- AGENTS/concurrency::unbounded_buffer::process_input_messages
- AGENTS/concurrency::unbounded_buffer::propagate_message
- AGENTS/concurrency::unbounded_buffer::propagate_output_messages
- AGENTS/concurrency::unbounded_buffer::release_message
- AGENTS/concurrency::unbounded_buffer::reserve_message
- AGENTS/concurrency::unbounded_buffer::resume_propagation
- AGENTS/concurrency::unbounded_buffer::send_message
- AGENTS/concurrency::unbounded_buffer::supports_anonymous_source
ms.assetid: 6b1a939a-1819-4385-b1d8-708f83d4ec47
ms.openlocfilehash: c9cd31209831dc915ae7a4aacaad5cddc0203176
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188105"
---
# <a name="unbounded_buffer-class"></a>Classe unbounded_buffer

Un blocco della messaggistica `unbounded_buffer` è un `propagator_block` multi-origine a destinazione singola, in grado di archiviare un numero non associato di messaggi di un tipo diverso.

## <a name="syntax"></a>Sintassi

```cpp
template<
   class             _Type
>
class unbounded_buffer : public propagator_block<multi_link_registry<ITarget<            _Type>>, multi_link_registry<ISource<            _Type>>>;
```

### <a name="parameters"></a>Parametri

*_Type*<br/>
Tipo di payload dei messaggi archiviati e propagati dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[unbounded_buffer](#ctor)|Di overload. Costruisce un `unbounded_buffer` blocco della messaggistica.|
|[Distruttore ~ unbounded_buffer](#dtor)|Elimina definitivamente il `unbounded_buffer` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[rimuovere dalla coda](#dequeue)|Rimuove un elemento dal `unbounded_buffer` blocco della messaggistica.|
|[accodare](#enqueue)|Aggiunge un elemento al `unbounded_buffer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio offerto dal `unbounded_buffer` blocco della messaggistica, trasferendo la proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto dal blocco della `unbounded_buffer` messaggistica e riservato dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `unbounded_buffer` messaggistica.|
|[process_input_messages](#process_input_messages)|Inserisce `message` `_PMessage` in questo `unbounded_buffer` blocco di messaggistica e tenta di offrirlo a tutte le destinazioni collegate.|
|[propagate_message](#propagate_message)|Passa in modo asincrono un messaggio da un `ISource` blocco a questo `unbounded_buffer` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_output_messages](#propagate_output_messages)|Inserisce `message` `_PMessage` in questo `unbounded_buffer` blocco di messaggistica e tenta di offrirlo a tutte le destinazioni collegate. (Esegue l'override di [source_block::p ropagate_output_messages](source-block-class.md#propagate_output_messages).)|
|[release_message](#release_message)|Rilascia una prenotazione del messaggio precedente. Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).|
|[reserve_message](#reserve_message)|Riserva un messaggio offerto in precedenza dal `unbounded_buffer` blocco della messaggistica. Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo che una prenotazione è stata rilasciata. Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).|
|[send_message](#send_message)|Passa in modo sincrono un messaggio da un `ISource` blocco a questo `unbounded_buffer` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. Esegue l'override di [ITarget:: supports_anonymous_source](itarget-class.md#supports_anonymous_source).|

Per altre informazioni, vedere [blocchi di messaggi asincroni](../asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`unbounded_buffer`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept_message"></a><a name="accept_message"></a> accept_message

Accetta un messaggio offerto dal `unbounded_buffer` blocco della messaggistica, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Type> * accept_message(
   runtime_object_identity                 _MsgId
);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

## <a name="consume_message"></a><a name="consume_message"></a> consume_message

Utilizza un messaggio precedentemente offerto dal blocco della `unbounded_buffer` messaggistica e riservato dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Type> * consume_message(
   runtime_object_identity                 _MsgId
);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto utilizzato.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Commenti

Simile a `accept` , ma è sempre preceduto da una chiamata a `reserve` .

## <a name="dequeue"></a><a name="dequeue"></a> Dequeue

Rimuove un elemento dal `unbounded_buffer` blocco della messaggistica.

```cpp
_Type dequeue();
```

### <a name="return-value"></a>Valore restituito

Payload del messaggio rimosso dall'oggetto `unbounded_buffer` .

## <a name="enqueue"></a><a name="enqueue"></a> Accodamento

Aggiunge un elemento al `unbounded_buffer` blocco della messaggistica.

```cpp
bool enqueue(
   _Type const&                 _Item
);
```

### <a name="parameters"></a>Parametri

*_Item*<br/>
Elemento da aggiungere.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'elemento è stato accettato; **`false`** in caso contrario,.

## <a name="link_target_notification"></a><a name="link_target_notification"></a> link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `unbounded_buffer` messaggistica.

```cpp
virtual void link_target_notification(
   _Inout_ ITarget<_Type> *                 _PTarget
);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore alla destinazione appena collegata.

## <a name="propagate_message"></a><a name="propagate_message"></a> propagate_message

Passa in modo asincrono un messaggio da un `ISource` blocco a questo `unbounded_buffer` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status propagate_message(
   _Inout_ message<_Type> *                 _PMessage,
   _Inout_ ISource<_Type> *                 _PSource
);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md#message_status) indicazione della decisione da parte della destinazione con il messaggio.

## <a name="propagate_output_messages"></a><a name="propagate_output_messages"></a> propagate_output_messages

Inserisce `message` `_PMessage` in questo `unbounded_buffer` blocco di messaggistica e tenta di offrirlo a tutte le destinazioni collegate.

```cpp
virtual void propagate_output_messages();
```

### <a name="remarks"></a>Commenti

Se un altro messaggio è già avanti rispetto a questo in `unbounded_buffer` , la propagazione alle destinazioni collegate non verrà eseguita fino a quando non vengono accettati o utilizzati messaggi precedenti. La prima destinazione collegata viene eseguita correttamente `accept` o `consume` il messaggio diventa proprietario e nessun'altra destinazione può quindi ottenere il messaggio.

## <a name="process_input_messages"></a><a name="process_input_messages"></a> process_input_messages

Inserisce `message` `_PMessage` in questo `unbounded_buffer` blocco di messaggistica e tenta di offrirlo a tutte le destinazioni collegate.

```cpp
virtual void process_input_messages(
   _Inout_ message<_Type> *                 _PMessage
);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da elaborare.

## <a name="release_message"></a><a name="release_message"></a> release_message

Rilascia una prenotazione del messaggio precedente.

```cpp
virtual void release_message(
   runtime_object_identity                 _MsgId
);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

## <a name="reserve_message"></a><a name="reserve_message"></a> reserve_message

Riserva un messaggio offerto in precedenza dal `unbounded_buffer` blocco della messaggistica.

```cpp
virtual bool reserve_message(
   runtime_object_identity                 _MsgId
);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Dell' `message` oggetto riservato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,.

### <a name="remarks"></a>Commenti

Dopo `reserve` la chiamata a, se restituisce **`true`** , è `consume` `release` necessario chiamare o per prendere o rilasciare la proprietà del messaggio.

## <a name="resume_propagation"></a><a name="resume_propagation"></a> resume_propagation

Riprende la propagazione dopo che una prenotazione è stata rilasciata.

```cpp
virtual void resume_propagation();
```

## <a name="send_message"></a><a name="send_message"></a> send_message

Passa in modo sincrono un messaggio da un `ISource` blocco a questo `unbounded_buffer` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status send_message(
   _Inout_ message<_Type> *                 _PMessage,
   _Inout_ ISource<_Type> *                 _PSource
);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md#message_status) indicazione della decisione da parte della destinazione con il messaggio.

## <a name="supports_anonymous_source"></a><a name="supports_anonymous_source"></a> supports_anonymous_source

Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata.

```cpp
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**`true`** Poiché il blocco non posticipa i messaggi offerti.

## <a name="unbounded_buffer"></a><a name="ctor"></a> unbounded_buffer

Costruisce un `unbounded_buffer` blocco della messaggistica.

```cpp
unbounded_buffer();

unbounded_buffer(
   filter_method const&                 _Filter
);

unbounded_buffer(
   Scheduler&                 _PScheduler
);

unbounded_buffer(
   Scheduler&                 _PScheduler,
   filter_method const&                 _Filter
);

unbounded_buffer(
   ScheduleGroup&                 _PScheduleGroup
);

unbounded_buffer(
   ScheduleGroup&                 _PScheduleGroup,
   filter_method const&                 _Filter
);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `unbounded_buffer` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `unbounded_buffer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Commenti

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un functor con la firma `bool (_Type const &)` richiamata da questo `unbounded_buffer` blocco di messaggistica per determinare se deve accettare o meno un messaggio offerto.

## <a name="unbounded_buffer"></a><a name="dtor"></a> ~ unbounded_buffer

Elimina definitivamente il `unbounded_buffer` blocco della messaggistica.

```cpp
~unbounded_buffer();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe overwrite_buffer](overwrite-buffer-class.md)<br/>
[Classe single_assignment](single-assignment-class.md)
