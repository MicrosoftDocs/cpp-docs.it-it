---
title: Classe transformer
ms.date: 11/04/2016
f1_keywords:
- transformer
- AGENTS/concurrency::transformer
- AGENTS/concurrency::transformer::transformer
- AGENTS/concurrency::transformer::accept_message
- AGENTS/concurrency::transformer::consume_message
- AGENTS/concurrency::transformer::link_target_notification
- AGENTS/concurrency::transformer::propagate_message
- AGENTS/concurrency::transformer::propagate_to_any_targets
- AGENTS/concurrency::transformer::release_message
- AGENTS/concurrency::transformer::reserve_message
- AGENTS/concurrency::transformer::resume_propagation
- AGENTS/concurrency::transformer::send_message
- AGENTS/concurrency::transformer::supports_anonymous_source
helpviewer_keywords:
- transformer class
ms.assetid: eea71925-7043-4a92-bfd4-dbc0ece5d081
ms.openlocfilehash: adc83ab2d8268460b3a35be44f5733c8b6fa1c43
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217896"
---
# <a name="transformer-class"></a>Classe transformer

Un blocco della messaggistica `transformer` è un `propagator_block` multi-origine, a destinazione singola, che può accettare messaggi di un tipo ed è in grado di archiviare un numero non associato di messaggi di un tipo diverso.

## <a name="syntax"></a>Sintassi

```cpp
template<class _Input, class _Output>
class transformer : public propagator_block<single_link_registry<ITarget<_Output>>,
    multi_link_registry<ISource<_Input>>>;
```

### <a name="parameters"></a>Parametri

*_Input*<br/>
Tipo di payload dei messaggi accettati dal buffer.

*_Output*<br/>
Tipo di payload dei messaggi archiviati e propagati dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[trasformatore](#ctor)|Di overload. Costruisce un blocco della messaggistica `transformer` .|
|[~ distruttore del trasformatore](#dtor)|Elimina definitivamente il `transformer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio offerto dal `transformer` blocco della messaggistica, trasferendo la proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto da `transformer` e riservato dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `transformer` messaggistica.|
|[propagate_message](#propagate_message)|Passa in modo asincrono un messaggio da un `ISource` blocco a questo `transformer` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Esegue la funzione del trasformatore nei messaggi di input.|
|[release_message](#release_message)|Rilascia una prenotazione del messaggio precedente. Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).|
|[reserve_message](#reserve_message)|Riserva un messaggio offerto in precedenza dal `transformer` blocco della messaggistica. Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo che una prenotazione è stata rilasciata. Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).|
|[send_message](#send_message)|Passa in modo sincrono un messaggio da un `ISource` blocco a questo `transformer` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. Esegue l'override di [ITarget:: supports_anonymous_source](itarget-class.md#supports_anonymous_source).|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`transformer`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept_message"></a><a name="accept_message"></a>accept_message

Accetta un messaggio offerto dal `transformer` blocco della messaggistica, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Output>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

## <a name="consume_message"></a><a name="consume_message"></a>consume_message

Utilizza un messaggio precedentemente offerto da `transformer` e riservato dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Output>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto utilizzato.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Simile a `accept` , ma è sempre preceduto da una chiamata a `reserve` .

## <a name="link_target_notification"></a><a name="link_target_notification"></a>link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `transformer` messaggistica.

```cpp
virtual void link_target_notification(_Inout_ ITarget<_Output> *);
```

## <a name="propagate_message"></a><a name="propagate_message"></a>propagate_message

Passa in modo asincrono un messaggio da un `ISource` blocco a questo `transformer` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status propagate_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

## <a name="propagate_to_any_targets"></a><a name="propagate_to_any_targets"></a>propagate_to_any_targets

Esegue la funzione del trasformatore nei messaggi di input.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<_Output> *);
```

## <a name="release_message"></a><a name="release_message"></a>release_message

Rilascia una prenotazione del messaggio precedente.

```cpp
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

## <a name="reserve_message"></a><a name="reserve_message"></a>reserve_message

Riserva un messaggio offerto in precedenza dal `transformer` blocco della messaggistica.

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

## <a name="send_message"></a><a name="send_message"></a>send_message

Passa in modo sincrono un messaggio da un `ISource` blocco a questo `transformer` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.

```cpp
virtual message_status send_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
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

## <a name="transformer"></a><a name="ctor"></a>trasformatore

Costruisce un blocco della messaggistica `transformer` .

```cpp
transformer(
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);

transformer(
    Scheduler& _PScheduler,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    Scheduler& _PScheduler,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);

transformer(
    ScheduleGroup& _PScheduleGroup,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    ScheduleGroup& _PScheduleGroup,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Func*<br/>
Funzione che verrà richiamata per ogni messaggio accettato.

*_PTarget*<br/>
Puntatore a un blocco di destinazione da collegare al trasformatore.

*_Filter*<br/>
Funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `transformer` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `transformer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Osservazioni

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `_Transform_method` è un functor con la firma `_Output (_Input const &)` che viene richiamato da questo `transformer` blocco di messaggistica per elaborare un messaggio.

Il tipo `filter_method` è un functor con la firma `bool (_Input const &)` richiamata da questo `transformer` blocco di messaggistica per determinare se deve accettare o meno un messaggio offerto.

## <a name="transformer"></a><a name="dtor"></a>~ Transformer

Elimina definitivamente il `transformer` blocco della messaggistica.

```cpp
~transformer();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe call](call-class.md)
