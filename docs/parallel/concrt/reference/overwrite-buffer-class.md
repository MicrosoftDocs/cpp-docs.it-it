---
title: Classe overwrite_buffer | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- overwrite_buffer class
ms.assetid: 5cc428fe-3697-419c-9fb2-78f6181c9293
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 82266e387bcba3e4e7f2e377c666ce890d258e0f
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49162113"
---
# <a name="overwritebuffer-class"></a>Classe overwrite_buffer

Un blocco della messaggistica `overwrite_buffer` è un `propagator_block` multi-origine a destinazione singola, in grado di archiviare un unico messaggio alla volta. I nuovi messaggi sovrascrivono i precedenti.

## <a name="syntax"></a>Sintassi

```
template<class T>
class overwrite_buffer : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di payload dei messaggi archiviati e propagati dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[overwrite_buffer](#ctor)|Di overload. Costruisce un `overwrite_buffer` blocco della messaggistica.|
|[~ overwrite_buffer distruttore](#dtor)|Elimina definitivamente il `overwrite_buffer` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[has_value](#has_value)|Controlla se questo `overwrite_buffer` blocco della messaggistica dispone già di un valore.|
|[valore](#value)|Ottiene un riferimento al payload del messaggio viene archiviato corrente il `overwrite_buffer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio in cui è stato offerto da questo `overwrite_buffer` blocco della messaggistica, la restituzione di una copia del messaggio al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza dal `overwrite_buffer` blocco della messaggistica e riservate dalla destinazione, la restituzione di una copia del messaggio al chiamante.|
|[link_target_notification](#link_target_notification)|Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `overwrite_buffer` blocco della messaggistica.|
|[propagate_message](#propagate_message)|Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Decimali di `message _PMessage` in questo `overwrite_buffer` blocco della messaggistica e metterlo a tutte le destinazioni collegate.|
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Consente di riservare un messaggio offerto in precedenza da questo `overwrite_buffer` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo il rilascio di una prenotazione. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|
|[send_message](#send_message)|Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. (Esegue l'override [ITarget:: Supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|

## <a name="remarks"></a>Note

Un `overwrite_buffer` blocco della messaggistica propaga copie del suo messaggio archiviato a ciascuna delle relative destinazioni.

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

##  <a name="accept_message"></a> accept_message

Accetta un messaggio in cui è stato offerto da questo `overwrite_buffer` blocco della messaggistica, la restituzione di una copia del messaggio al chiamante.

```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Il `overwrite_buffer` blocco restituisce copie del messaggio alle sue destinazioni di messaggistica, anziché trasferire la proprietà del messaggio attualmente a disposizione.

##  <a name="consume_message"></a> consume_message

Utilizza un messaggio offerto in precedenza dal `overwrite_buffer` blocco della messaggistica e riservate dalla destinazione, la restituzione di una copia del messaggio al chiamante.

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

Controlla se questo `overwrite_buffer` blocco della messaggistica dispone già di un valore.

```
bool has_value() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il blocco ha ricevuto un valore **false** in caso contrario.

##  <a name="link_target_notification"></a> link_target_notification

Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `overwrite_buffer` blocco della messaggistica.

```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Puntatore alla destinazione appena collegato.

##  <a name="dtor"></a> ~overwrite_buffer

Elimina definitivamente il `overwrite_buffer` blocco della messaggistica.

```
~overwrite_buffer();
```

##  <a name="ctor"></a> overwrite_buffer

Costruisce un `overwrite_buffer` blocco della messaggistica.

```
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

*Filtro*<br/>
Una funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `overwrite_buffer` .

*PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `overwrite_buffer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Note

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `overwrite_buffer` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.

##  <a name="propagate_message"></a> propagate_message

Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

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

Decimali di `message _PMessage` in questo `overwrite_buffer` blocco della messaggistica e metterlo a tutte le destinazioni collegate.

```
virtual void propagate_to_any_targets(_Inout_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Un puntatore a un `message` oggetto che questo `overwrite_buffer` ha assunto la proprietà.

### <a name="remarks"></a>Note

Questo metodo lo sovrascrive il messaggio corrente nella `overwrite_buffer` con il messaggio appena accettato `_PMessage`.

##  <a name="send_message"></a> send_message

Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.

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

##  <a name="supports_anonymous_source"></a> supports_anonymous_source

Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata.

```
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**true** perché il blocco non vengono posticipati i messaggi offerti.

##  <a name="release_message"></a> release_message

Rilascia una prenotazione messaggio precedente.

```
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto rilasciato.

##  <a name="reserve_message"></a> reserve_message

Consente di riservare un messaggio offerto in precedenza da questo `overwrite_buffer` blocco della messaggistica.

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

##  <a name="value"></a> Valore

Ottiene un riferimento al payload del messaggio viene archiviato corrente il `overwrite_buffer` blocco della messaggistica.

```
T value();
```

### <a name="return-value"></a>Valore restituito

Il payload del messaggio attualmente archiviato.

### <a name="remarks"></a>Note

Il valore archiviato nel `overwrite_buffer` potrebbe cambiare immediatamente dopo questo metodo viene restituito. Questo metodo attende fino a quando non arriva un messaggio se nessun messaggio attualmente archiviato nella `overwrite_buffer`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe unbounded_buffer](unbounded-buffer-class.md)<br/>
[Classe single_assignment](single-assignment-class.md)
