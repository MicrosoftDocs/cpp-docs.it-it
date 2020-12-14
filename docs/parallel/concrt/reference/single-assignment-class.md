---
description: 'Altre informazioni su: single_assignment Class'
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
ms.openlocfilehash: d01426843f2e9fe1106f7cb68c103c392cdf1ebd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188657"
---
# <a name="single_assignment-class"></a>Classe single_assignment

Un blocco della messaggistica `single_assignment` è un `propagator_block` multi-origine, a destinazione singola, in grado di archiviare un unico `message` scrivibile una volta.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class single_assignment : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di payload del messaggio archiviato e propagato dal buffer.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[single_assignment](#ctor)|Di overload. Costruisce un blocco della messaggistica `single_assignment` .|
|[distruttore ~ single_assignment](#dtor)|Elimina definitivamente il `single_assignment` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[has_value](#has_value)|Verifica se il `single_assignment` blocco della messaggistica è stato ancora inizializzato con un valore.|
|[value](#value)|Ottiene un riferimento al payload corrente del messaggio archiviato nel `single_assignment` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio offerto dal `single_assignment` blocco della messaggistica, restituendo una copia del messaggio al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto da `single_assignment` e riservato dalla destinazione, restituendo una copia del messaggio al chiamante.|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `single_assignment` messaggistica.|
|[propagate_message](#propagate_message)|Passa in modo asincrono un messaggio da un `ISource` blocco a questo `single_assignment` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Inserisce `message _PMessage` in questo `single_assignment` blocco di messaggistica e lo offre a tutte le destinazioni collegate.|
|[release_message](#release_message)|Rilascia una prenotazione del messaggio precedente. Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).|
|[reserve_message](#reserve_message)|Riserva un messaggio offerto in precedenza dal `single_assignment` blocco della messaggistica. Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo che una prenotazione è stata rilasciata. Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).|
|[send_message](#send_message)|Passa in modo sincrono un messaggio da un `ISource` blocco a questo `single_assignment` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|

## <a name="remarks"></a>Commenti

Un `single_assignment` blocco di messaggistica propaga le copie del messaggio a ogni destinazione.

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

## <a name="accept_message"></a><a name="accept_message"></a> accept_message

Accetta un messaggio offerto dal `single_assignment` blocco della messaggistica, restituendo una copia del messaggio al chiamante.

```cpp
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Commenti

Il `single_assignment` blocco della messaggistica restituisce le copie del messaggio alle relative destinazioni, anziché trasferire la proprietà del messaggio attualmente mantenuto.

## <a name="consume_message"></a><a name="consume_message"></a> consume_message

Utilizza un messaggio precedentemente offerto da `single_assignment` e riservato dalla destinazione, restituendo una copia del messaggio al chiamante.

```cpp
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto utilizzato.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Commenti

Simile a `accept` , ma è sempre preceduto da una chiamata a `reserve` .

## <a name="has_value"></a><a name="has_value"></a> has_value

Verifica se il `single_assignment` blocco della messaggistica è stato ancora inizializzato con un valore.

```cpp
bool has_value() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco ha ricevuto un valore; **`false`** in caso contrario,.

## <a name="link_target_notification"></a><a name="link_target_notification"></a> link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `single_assignment` messaggistica.

```cpp
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore alla destinazione appena collegata.

## <a name="propagate_message"></a><a name="propagate_message"></a> propagate_message

Passa in modo asincrono un messaggio da un `ISource` blocco a questo `single_assignment` blocco di messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.

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

## <a name="propagate_to_any_targets"></a><a name="propagate_to_any_targets"></a> propagate_to_any_targets

Inserisce `message` `_PMessage` in questo `single_assignment` blocco di messaggistica e lo offre a tutte le destinazioni collegate.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore a un oggetto `message` di cui questo `single_assignment` blocco di messaggistica ha assunto la proprietà.

## <a name="release_message"></a><a name="release_message"></a> release_message

Rilascia una prenotazione del messaggio precedente.

```cpp
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

## <a name="reserve_message"></a><a name="reserve_message"></a> reserve_message

Riserva un messaggio offerto in precedenza dal `single_assignment` blocco della messaggistica.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId);
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

Passa in modo sincrono un messaggio da un `ISource` blocco a questo `single_assignment` blocco di messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.

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

## <a name="single_assignment"></a><a name="ctor"></a> single_assignment

Costruisce un blocco della messaggistica `single_assignment` .

```cpp
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

*_Filter*<br/>
Funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `single_assignment` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `single_assignment` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Commenti

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `filter_method` è un functor con la firma `bool (T const &)` richiamata da questo `single_assignment` blocco di messaggistica per determinare se deve accettare o meno un messaggio offerto.

## <a name="single_assignment"></a><a name="dtor"></a> ~ single_assignment

Elimina definitivamente il `single_assignment` blocco della messaggistica.

```cpp
~single_assignment();
```

## <a name="value"></a>Valore della proprietà <a name="value"></a>

Ottiene un riferimento al payload corrente del messaggio archiviato nel `single_assignment` blocco della messaggistica.

```cpp
T const& value();
```

### <a name="return-value"></a>Valore restituito

Payload del messaggio archiviato.

### <a name="remarks"></a>Commenti

Questo metodo attenderà l'arrivo di un messaggio se nessun messaggio è attualmente archiviato nel `single_assignment` blocco della messaggistica.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe overwrite_buffer](overwrite-buffer-class.md)<br/>
[Classe unbounded_buffer](unbounded-buffer-class.md)
