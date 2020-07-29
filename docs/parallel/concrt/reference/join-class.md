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
ms.openlocfilehash: c65eed8abafe424fa27c5b9a72d3c73b7127b68e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219586"
---
# <a name="join-class"></a>Classe join

Un blocco della messaggistica `join` è un `propagator_block` multi-origine, a destinazione singola, che combina insieme messaggi di tipo `T` da ognuna delle origini.

## <a name="syntax"></a>Sintassi

```cpp
template<class T,
    join_type _Jtype = non_greedy>
class join : public propagator_block<single_link_registry<ITarget<std::vector<T>>>,
    multi_link_registry<ISource<T>>>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di payload dei messaggi aggiunti e propagati dal blocco.

*_Jtype*<br/>
Il tipo di `join` blocco è, `greedy` o`non_greedy`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[join](#ctor)|Di overload. Costruisce un blocco della messaggistica `join` .|
|[Distruttore ~ join](#dtor)|Elimina definitivamente il `join` blocco.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio offerto dal `join` blocco della messaggistica, trasferendo la proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto dal blocco della `join` messaggistica e riservato dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `join` messaggistica.|
|[propagate_message](#propagate_message)|Passa in modo asincrono un messaggio da un `ISource` blocco a questo `join` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Costruisce un messaggio di output contenente un messaggio di input da ogni origine quando tutti hanno propagato un messaggio. Invia il messaggio di output a ogni destinazione.|
|[release_message](#release_message)|Rilascia una prenotazione del messaggio precedente. Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).|
|[reserve_message](#reserve_message)|Riserva un messaggio offerto in precedenza dal `join` blocco della messaggistica. Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo che una prenotazione è stata rilasciata. Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).|

## <a name="remarks"></a>Osservazioni

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

## <a name="accept_message"></a><a name="accept_message"></a>accept_message

Accetta un messaggio offerto dal `join` blocco della messaggistica, trasferendo la proprietà al chiamante.

```cpp
virtual message<_OutputType>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

## <a name="consume_message"></a><a name="consume_message"></a>consume_message

Utilizza un messaggio precedentemente offerto dal blocco della `join` messaggistica e riservato dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<_OutputType>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto utilizzato.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Simile a `accept` , ma è sempre preceduto da una chiamata a `reserve` .

## <a name="join"></a><a name="ctor"></a>Join

Costruisce un blocco della messaggistica `join` .

```cpp
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
Numero di input `join` consentiti per questo blocco.

*_Filter*<br/>
Funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `join` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `join` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Osservazioni

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un functor con la firma `bool (T const &)` richiamata da questo `join` blocco di messaggistica per determinare se deve accettare o meno un messaggio offerto.

## <a name="join"></a><a name="dtor"></a>~ Join

Elimina definitivamente il `join` blocco.

```cpp
~join();
```

## <a name="link_target_notification"></a><a name="link_target_notification"></a>link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `join` messaggistica.

```cpp
virtual void link_target_notification(_Inout_ ITarget<std::vector<T>> *);
```

## <a name="propagate_message"></a><a name="propagate_message"></a>propagate_message

Passa in modo asincrono un messaggio da un `ISource` blocco a questo `join` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

```cpp
message_status propagate_message(
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

Costruisce un messaggio di output contenente un messaggio di input da ogni origine quando tutti hanno propagato un messaggio. Invia il messaggio di output a ogni destinazione.

```cpp
void propagate_to_any_targets(_Inout_opt_ message<_OutputType> *);
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

Riserva un messaggio offerto in precedenza dal `join` blocco della messaggistica.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,.

### <a name="remarks"></a>Osservazioni

Dopo `reserve` la chiamata a, se restituisce **`true`** , è `consume` `release` necessario chiamare o per prendere o rilasciare la proprietà del messaggio.

## <a name="resume_propagation"></a><a name="resume_propagation"></a>resume_propagation

Riprende la propagazione dopo che una prenotazione è stata rilasciata.

```cpp
virtual void resume_propagation();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe choice](choice-class.md)<br/>
[Classe multitype_join](multitype-join-class.md)
