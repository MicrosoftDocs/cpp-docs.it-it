---
title: Classe join
ms.date: 11/04/2016
f1_keywords:
- join
- AGENTS/concurrency::join
- AGENTS/concurrency::join::join
- AGENTS/concurrency::join::accept_message
- AGENTS/concurrency::join::consume_message
- AGENTS/concurrency::join::link_target_notification
- AGENTS/concurrency::join::propagate_message
- AGENTS/concurrency::join::propagate_to_any_targets
- AGENTS/concurrency::join::release_message
- AGENTS/concurrency::join::reserve_message
- AGENTS/concurrency::join::resume_propagation
helpviewer_keywords:
- join class
ms.assetid: d2217119-70a1-40b6-809f-c1c13a571c3f
ms.openlocfilehash: 23fc005a0c679576507c3a39ae37ce6c4545036b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668254"
---
# <a name="join-class"></a>Classe join

Un blocco della messaggistica `join` è un `propagator_block` multi-origine, a destinazione singola, che combina insieme messaggi di tipo `T` da ognuna delle origini.

## <a name="syntax"></a>Sintassi

```
template<class T,
    join_type _Jtype = non_greedy>
class join : public propagator_block<single_link_registry<ITarget<std::vector<T>>>,
    multi_link_registry<ISource<T>>>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di payload dei messaggi aggiunto e propagate dal blocco.

*_Jtype*<br/>
Il tipo della `join` blocco è `greedy` o `non_greedy`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[join](#ctor)|Di overload. Costruisce un blocco della messaggistica `join` .|
|[~ join distruttore](#dtor)|Elimina definitivamente il `join` blocco.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio in cui è stato offerto da questo `join` blocco della messaggistica, trasferimento di proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza dal `join` blocco della messaggistica e riservate dalla destinazione, trasferimento di proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `join` blocco della messaggistica.|
|[propagate_message](#propagate_message)|Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `join` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Costruisce un messaggio di output che contiene un messaggio di input da ogni origine quando sono tutti propagato un messaggio. Invia questo messaggio di output per ognuna delle relative destinazioni.|
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Consente di riservare un messaggio offerto in precedenza da questo `join` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo il rilascio di una prenotazione. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`join`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="accept_message"></a> accept_message

Accetta un messaggio in cui è stato offerto da questo `join` blocco della messaggistica, trasferimento di proprietà al chiamante.

```
virtual message<_OutputType>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

##  <a name="consume_message"></a> consume_message

Utilizza un messaggio offerto in precedenza dal `join` blocco della messaggistica e riservate dalla destinazione, trasferimento di proprietà al chiamante.

```
virtual message<_OutputType>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` consumata dell'oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Simile a `accept`, ma viene sempre preceduta da una chiamata a `reserve`.

##  <a name="ctor"></a> join

Costruisce un blocco della messaggistica `join` .

```
join(
    size_t _NumInputs);

join(
    size_t _NumInputs,
    filter_method const& _Filter);

join(
    Scheduler& _PScheduler,
    size_t _NumInputs);

join(
    Scheduler& _PScheduler,
    size_t _NumInputs,
    filter_method const& _Filter);

join(
    ScheduleGroup& _PScheduleGroup,
    size_t _NumInputs);

join(
    ScheduleGroup& _PScheduleGroup,
    size_t _NumInputs,
    filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_NumInputs*<br/>
Il numero di input si `join` blocco sarà consentito.

*Filtro*<br/>
Una funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `join` .

*PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `join` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Note

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `join` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.

##  <a name="dtor"></a> ~join

Elimina definitivamente il `join` blocco.

```
~join();
```

##  <a name="link_target_notification"></a> link_target_notification

Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `join` blocco della messaggistica.

```
virtual void link_target_notification(_Inout_ ITarget<std::vector<T>> *);
```

##  <a name="propagate_message"></a> propagate_message

Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `join` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

```
message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore all'oggetto `message`.

*PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

##  <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Costruisce un messaggio di output che contiene un messaggio di input da ogni origine quando sono tutti propagato un messaggio. Invia questo messaggio di output per ognuna delle relative destinazioni.

```
void propagate_to_any_targets(_Inout_opt_ message<_OutputType> *);
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

Consente di riservare un messaggio offerto in precedenza da questo `join` blocco della messaggistica.

```
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

### <a name="return-value"></a>Valore restituito

**true** se il messaggio è stato riservato, **false** in caso contrario.

### <a name="remarks"></a>Note

Dopo aver `reserve` viene chiamato, se viene restituito **true**, ad esempio `consume` o `release` deve essere chiamato per richiedere o rilasciare la proprietà del messaggio.

##  <a name="resume_propagation"></a> resume_propagation

Riprende la propagazione dopo il rilascio di una prenotazione.

```
virtual void resume_propagation();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe choice](choice-class.md)<br/>
[Classe multitype_join](multitype-join-class.md)
