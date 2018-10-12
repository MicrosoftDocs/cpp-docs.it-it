---
title: Classe Transformer | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- transformer class
ms.assetid: eea71925-7043-4a92-bfd4-dbc0ece5d081
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8e5c6b9d15ef2ca456fd91dbd7829d94e33e2c0a
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49162230"
---
# <a name="transformer-class"></a>Classe transformer

Un blocco della messaggistica `transformer` è un `propagator_block` multi-origine, a destinazione singola, che può accettare messaggi di un tipo ed è in grado di archiviare un numero non associato di messaggi di un tipo diverso.

## <a name="syntax"></a>Sintassi

```
template<class _Input, class _Output>
class transformer : public propagator_block<single_link_registry<ITarget<_Output>>,
    multi_link_registry<ISource<_Input>>>;
```

#### <a name="parameters"></a>Parametri

*Input*<br/>
Il tipo di payload dei messaggi accettate dal buffer.

*Output*<br/>
Il tipo di payload dei messaggi archiviati e propagata dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[transformer](#ctor)|Di overload. Costruisce un blocco della messaggistica `transformer` .|
|[~ transformer distruttore](#dtor)|Elimina definitivamente il `transformer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio in cui è stato offerto da questo `transformer` blocco della messaggistica, trasferimento di proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza dal `transformer` e riservati dalla destinazione, trasferimento di proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `transformer` blocco della messaggistica.|
|[propagate_message](#propagate_message)|Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `transformer` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Esegue la funzione del trasformatore nei messaggi di input.|
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Consente di riservare un messaggio offerto in precedenza da questo `transformer` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo il rilascio di una prenotazione. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|
|[send_message](#send_message)|Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `transformer` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. (Esegue l'override [ITarget:: Supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|

## <a name="remarks"></a>Note

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

##  <a name="accept_message"></a> accept_message

Accetta un messaggio in cui è stato offerto da questo `transformer` blocco della messaggistica, trasferimento di proprietà al chiamante.

```
virtual message<_Output>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

##  <a name="consume_message"></a> consume_message

Utilizza un messaggio offerto in precedenza dal `transformer` e riservati dalla destinazione, trasferimento di proprietà al chiamante.

```
virtual message<_Output>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` consumata dell'oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Simile a `accept`, ma viene sempre preceduta da una chiamata a `reserve`.

##  <a name="link_target_notification"></a> link_target_notification

Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `transformer` blocco della messaggistica.

```
virtual void link_target_notification(_Inout_ ITarget<_Output> *);
```

##  <a name="propagate_message"></a> propagate_message

Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `transformer` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status propagate_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore all'oggetto `message`.

*PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

##  <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Esegue la funzione del trasformatore nei messaggi di input.

```
virtual void propagate_to_any_targets(_Inout_opt_ message<_Output> *);
```

##  <a name="release_message"></a> release_message

Rilascia una prenotazione messaggio precedente.

```
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto rilasciato.

##  <a name="reserve_message"></a> reserve_message

Consente di riservare un messaggio offerto in precedenza da questo `transformer` blocco della messaggistica.

```
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto riservato.

### <a name="return-value"></a>Valore restituito

**true** se il messaggio è stato riservato, **false** in caso contrario.

### <a name="remarks"></a>Note

Dopo aver `reserve` viene chiamato, se viene restituito **true**, ad esempio `consume` o `release` deve essere chiamato per richiedere o rilasciare la proprietà del messaggio.

##  <a name="resume_propagation"></a> resume_propagation

Riprende la propagazione dopo il rilascio di una prenotazione.

```
virtual void resume_propagation();
```

##  <a name="send_message"></a> send_message

Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `transformer` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status send_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore all'oggetto `message`.

*PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

##  <a name="supports_anonymous_source"></a> supports_anonymous_source

Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata.

```
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**true** perché il blocco non vengono posticipati i messaggi offerti.

##  <a name="ctor"></a> classe Transformer

Costruisce un blocco della messaggistica `transformer` .

```
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

*Func*<br/>
Una funzione che verrà richiamata per ogni messaggio accettato.

*PTarget*<br/>
Puntatore a un blocco di destinazione a cui collegare il trasformatore.

*Filtro*<br/>
Una funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `transformer` .

*PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `transformer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Note

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `_Transform_method` è un funtore con firma `_Output (_Input const &)` che viene richiamato da questo `transformer` blocco della messaggistica per elaborare un messaggio.

Il tipo `filter_method` è un funtore con firma `bool (_Input const &)` che viene richiamato da questo `transformer` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.

##  <a name="dtor"></a> ~transformer

Elimina definitivamente il `transformer` blocco della messaggistica.

```
~transformer();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe call](call-class.md)
