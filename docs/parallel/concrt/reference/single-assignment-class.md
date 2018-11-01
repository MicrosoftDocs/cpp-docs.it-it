---
title: Classe single_assignment
ms.date: 11/04/2016
f1_keywords:
- single_assignment
- AGENTS/concurrency::single_assignment
- AGENTS/concurrency::single_assignment::single_assignment
- AGENTS/concurrency::single_assignment::has_value
- AGENTS/concurrency::single_assignment::value
- AGENTS/concurrency::single_assignment::accept_message
- AGENTS/concurrency::single_assignment::consume_message
- AGENTS/concurrency::single_assignment::link_target_notification
- AGENTS/concurrency::single_assignment::propagate_message
- AGENTS/concurrency::single_assignment::propagate_to_any_targets
- AGENTS/concurrency::single_assignment::release_message
- AGENTS/concurrency::single_assignment::reserve_message
- AGENTS/concurrency::single_assignment::resume_propagation
- AGENTS/concurrency::single_assignment::send_message
helpviewer_keywords:
- single_assignment class
ms.assetid: ccc34728-8de9-4e07-b83d-a36a58d9d2b9
ms.openlocfilehash: 5a27fb6cdc13fbbd3ceb8a85adacf5491ddc3ce1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50593479"
---
# <a name="singleassignment-class"></a>Classe single_assignment

Un blocco della messaggistica `single_assignment` è un `propagator_block` multi-origine, a destinazione singola, in grado di archiviare un unico `message` scrivibile una volta.

## <a name="syntax"></a>Sintassi

```
template<class T>
class single_assignment : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di payload del messaggio archiviato e propagati dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[single_assignment](#ctor)|Di overload. Costruisce un blocco della messaggistica `single_assignment` .|
|[~ single_assignment distruttore](#dtor)|Elimina definitivamente il `single_assignment` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[has_value](#has_value)|Controlla se questo `single_assignment` blocco della messaggistica è ancora stato inizializzato con un valore.|
|[valore](#value)|Ottiene un riferimento al payload del messaggio viene archiviato corrente il `single_assignment` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio in cui è stato offerto da questo `single_assignment` blocco della messaggistica, la restituzione di una copia del messaggio al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza dal `single_assignment` e riservati dalla destinazione, la restituzione di una copia del messaggio al chiamante.|
|[link_target_notification](#link_target_notification)|Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `single_assignment` blocco della messaggistica.|
|[propagate_message](#propagate_message)|Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `single_assignment` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Decimali di `message _PMessage` in questo `single_assignment` blocco della messaggistica e metterlo a tutte le destinazioni collegate.|
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Consente di riservare un messaggio offerto in precedenza da questo `single_assignment` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo il rilascio di una prenotazione. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|
|[send_message](#send_message)|Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `single_assignment` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.|

## <a name="remarks"></a>Note

Oggetto `single_assignment` blocco della messaggistica propaga copie del messaggio per ogni destinazione.

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`single_assignment`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="accept_message"></a> accept_message

Accetta un messaggio in cui è stato offerto da questo `single_assignment` blocco della messaggistica, la restituzione di una copia del messaggio al chiamante.

```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Il `single_assignment` blocco restituisce copie del messaggio alle sue destinazioni di messaggistica, anziché trasferire la proprietà del messaggio attualmente a disposizione.

##  <a name="consume_message"></a> consume_message

Utilizza un messaggio offerto in precedenza dal `single_assignment` e riservati dalla destinazione, la restituzione di una copia del messaggio al chiamante.

```
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` consumata dell'oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Simile a `accept`, ma viene sempre preceduta da una chiamata a `reserve`.

##  <a name="has_value"></a> has_value

Controlla se questo `single_assignment` blocco della messaggistica è ancora stato inizializzato con un valore.

```
bool has_value() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il blocco ha ricevuto un valore **false** in caso contrario.

##  <a name="link_target_notification"></a> link_target_notification

Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `single_assignment` blocco della messaggistica.

```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Puntatore alla destinazione appena collegato.

##  <a name="propagate_message"></a> propagate_message

Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `single_assignment` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status propagate_message(
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

Decimali di `message` `_PMessage` in questo `single_assignment` blocco della messaggistica e metterlo a tutte le destinazioni collegate.

```
virtual void propagate_to_any_targets(_Inout_opt_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Un puntatore a un `message` da questo `single_assignment` blocco della messaggistica ha assunto la proprietà.

##  <a name="release_message"></a> release_message

Rilascia una prenotazione messaggio precedente.

```
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto rilasciato.

##  <a name="reserve_message"></a> reserve_message

Consente di riservare un messaggio offerto in precedenza da questo `single_assignment` blocco della messaggistica.

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

Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `single_assignment` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status send_message(
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

##  <a name="ctor"></a> single_assignment

Costruisce un blocco della messaggistica `single_assignment` .

```
single_assignment();

single_assignment(
    filter_method const& _Filter);

single_assignment(
    Scheduler& _PScheduler);

single_assignment(
    Scheduler& _PScheduler,
    filter_method const& _Filter);

single_assignment(
    ScheduleGroup& _PScheduleGroup);

single_assignment(
    ScheduleGroup& _PScheduleGroup,
    filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*Filtro*<br/>
Una funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `single_assignment` .

*PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `single_assignment` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Note

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `single_assignment` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.

##  <a name="dtor"></a> ~ single_assignment

Elimina definitivamente il `single_assignment` blocco della messaggistica.

```
~single_assignment();
```

##  <a name="value"></a> Valore

Ottiene un riferimento al payload del messaggio viene archiviato corrente il `single_assignment` blocco della messaggistica.

```
T const& value();
```

### <a name="return-value"></a>Valore restituito

Il payload del messaggio archiviato.

### <a name="remarks"></a>Note

Questo metodo attende fino a quando non arriva un messaggio se nessun messaggio attualmente archiviato nella `single_assignment` blocco della messaggistica.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe overwrite_buffer](overwrite-buffer-class.md)<br/>
[Classe unbounded_buffer](unbounded-buffer-class.md)

