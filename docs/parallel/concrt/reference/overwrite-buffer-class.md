---
title: Classe overwrite_buffer
ms.date: 11/04/2016
f1_keywords:
- overwrite_buffer
- AGENTS/concurrency::overwrite_buffer
- AGENTS/concurrency::overwrite_buffer::overwrite_buffer
- AGENTS/concurrency::overwrite_buffer::has_value
- AGENTS/concurrency::overwrite_buffer::value
- AGENTS/concurrency::overwrite_buffer::accept_message
- AGENTS/concurrency::overwrite_buffer::consume_message
- AGENTS/concurrency::overwrite_buffer::link_target_notification
- AGENTS/concurrency::overwrite_buffer::propagate_message
- AGENTS/concurrency::overwrite_buffer::propagate_to_any_targets
- AGENTS/concurrency::overwrite_buffer::release_message
- AGENTS/concurrency::overwrite_buffer::reserve_message
- AGENTS/concurrency::overwrite_buffer::resume_propagation
- AGENTS/concurrency::overwrite_buffer::send_message
- AGENTS/concurrency::overwrite_buffer::supports_anonymous_source
helpviewer_keywords:
- overwrite_buffer class
ms.assetid: 5cc428fe-3697-419c-9fb2-78f6181c9293
ms.openlocfilehash: 7579ee4b9c650b0fe707eccb0f8c2b67a3efac14
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231689"
---
# <a name="overwrite_buffer-class"></a>Classe overwrite_buffer

Un blocco della messaggistica `overwrite_buffer` è un `propagator_block` multi-origine a destinazione singola, in grado di archiviare un unico messaggio alla volta. I nuovi messaggi sovrascrivono i precedenti.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class overwrite_buffer : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di payload dei messaggi archiviati e propagati dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[overwrite_buffer](#ctor)|Di overload. Costruisce un `overwrite_buffer` blocco della messaggistica.|
|[distruttore ~ overwrite_buffer](#dtor)|Elimina definitivamente il `overwrite_buffer` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[has_value](#has_value)|Verifica se il `overwrite_buffer` blocco della messaggistica ha ancora un valore.|
|[value](#value)|Ottiene un riferimento al payload corrente del messaggio archiviato nel `overwrite_buffer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio offerto dal `overwrite_buffer` blocco della messaggistica, restituendo una copia del messaggio al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto dal blocco della `overwrite_buffer` messaggistica e riservato dalla destinazione, restituendo una copia del messaggio al chiamante.|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `overwrite_buffer` messaggistica.|
|[propagate_message](#propagate_message)|Passa in modo asincrono un messaggio da un `ISource` blocco a questo `overwrite_buffer` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Inserisce `message _PMessage` in questo `overwrite_buffer` blocco di messaggistica e lo offre a tutte le destinazioni collegate.|
|[release_message](#release_message)|Rilascia una prenotazione del messaggio precedente. Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).|
|[reserve_message](#reserve_message)|Riserva un messaggio offerto in precedenza dal `overwrite_buffer` blocco della messaggistica. Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo che una prenotazione è stata rilasciata. Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).|
|[send_message](#send_message)|Passa in modo sincrono un messaggio da un `ISource` blocco a questo `overwrite_buffer` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. Esegue l'override di [ITarget:: supports_anonymous_source](itarget-class.md#supports_anonymous_source).|

## <a name="remarks"></a>Osservazioni

Un `overwrite_buffer` blocco di messaggistica propaga copie del messaggio archiviato in ognuna delle relative destinazioni.

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`overwrite_buffer`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept_message"></a><a name="accept_message"></a>accept_message

Accetta un messaggio offerto dal `overwrite_buffer` blocco della messaggistica, restituendo una copia del messaggio al chiamante.

```cpp
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Il `overwrite_buffer` blocco della messaggistica restituisce le copie del messaggio alle relative destinazioni, anziché trasferire la proprietà del messaggio attualmente mantenuto.

## <a name="consume_message"></a><a name="consume_message"></a>consume_message

Utilizza un messaggio precedentemente offerto dal blocco della `overwrite_buffer` messaggistica e riservato dalla destinazione, restituendo una copia del messaggio al chiamante.

```cpp
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto utilizzato.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Simile a `accept` , ma è sempre preceduto da una chiamata a `reserve` .

## <a name="has_value"></a><a name="has_value"></a>has_value

Verifica se il `overwrite_buffer` blocco della messaggistica ha ancora un valore.

```cpp
bool has_value() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco ha ricevuto un valore; **`false`** in caso contrario,.

## <a name="link_target_notification"></a><a name="link_target_notification"></a>link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `overwrite_buffer` messaggistica.

```cpp
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore alla destinazione appena collegata.

## <a name="overwrite_buffer"></a><a name="dtor"></a>~ overwrite_buffer

Elimina definitivamente il `overwrite_buffer` blocco della messaggistica.

```cpp
~overwrite_buffer();
```

## <a name="overwrite_buffer"></a><a name="ctor"></a>overwrite_buffer

Costruisce un `overwrite_buffer` blocco della messaggistica.

```cpp
overwrite_buffer();

overwrite_buffer(
    filter_method const& _Filter);

overwrite_buffer(
    Scheduler& _PScheduler);

overwrite_buffer(
    Scheduler& _PScheduler,
    filter_method const& _Filter);

overwrite_buffer(
    ScheduleGroup& _PScheduleGroup);

overwrite_buffer(
    ScheduleGroup& _PScheduleGroup,
    filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `overwrite_buffer` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `overwrite_buffer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Osservazioni

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un functor con la firma `bool (T const &)` richiamata da questo `overwrite_buffer` blocco di messaggistica per determinare se deve accettare o meno un messaggio offerto.

## <a name="propagate_message"></a><a name="propagate_message"></a>propagate_message

Passa in modo asincrono un messaggio da un `ISource` blocco a questo `overwrite_buffer` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

## <a name="propagate_to_any_targets"></a><a name="propagate_to_any_targets"></a>propagate_to_any_targets

Inserisce `message _PMessage` in questo `overwrite_buffer` blocco di messaggistica e lo offre a tutte le destinazioni collegate.

```cpp
virtual void propagate_to_any_targets(_Inout_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore a un `message` oggetto `overwrite_buffer` di cui ha assunto la proprietà.

### <a name="remarks"></a>Osservazioni

Questo metodo sovrascrive il messaggio corrente in `overwrite_buffer` con il nuovo messaggio accettato `_PMessage` .

## <a name="send_message"></a><a name="send_message"></a>send_message

Passa in modo sincrono un messaggio da un `ISource` blocco a questo `overwrite_buffer` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status send_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

## <a name="supports_anonymous_source"></a><a name="supports_anonymous_source"></a>supports_anonymous_source

Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata.

```cpp
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**`true`** Poiché il blocco non posticipa i messaggi offerti.

## <a name="release_message"></a><a name="release_message"></a>release_message

Rilascia una prenotazione del messaggio precedente.

```cpp
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

## <a name="reserve_message"></a><a name="reserve_message"></a>reserve_message

Riserva un messaggio offerto in precedenza dal `overwrite_buffer` blocco della messaggistica.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Dell' `message` oggetto riservato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,.

### <a name="remarks"></a>Osservazioni

Dopo `reserve` la chiamata a, se restituisce **`true`** , è `consume` `release` necessario chiamare o per prendere o rilasciare la proprietà del messaggio.

## <a name="resume_propagation"></a><a name="resume_propagation"></a>resume_propagation

Riprende la propagazione dopo che una prenotazione è stata rilasciata.

```cpp
virtual void resume_propagation();
```

## <a name="value"></a>Valore della proprietà <a name="value"></a>

Ottiene un riferimento al payload corrente del messaggio archiviato nel `overwrite_buffer` blocco della messaggistica.

```cpp
T value();
```

### <a name="return-value"></a>Valore restituito

Payload del messaggio attualmente archiviato.

### <a name="remarks"></a>Osservazioni

Il valore archiviato in `overwrite_buffer` può cambiare immediatamente dopo la restituzione di questo metodo. Questo metodo attenderà l'arrivo di un messaggio se nessun messaggio è attualmente archiviato in `overwrite_buffer` .

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe unbounded_buffer](unbounded-buffer-class.md)<br/>
[Classe single_assignment](single-assignment-class.md)
