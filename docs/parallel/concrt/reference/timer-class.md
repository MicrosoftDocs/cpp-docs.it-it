---
title: Classe timer
ms.date: 11/04/2016
f1_keywords:
- timer
- AGENTS/concurrency::timer
- AGENTS/concurrency::timer::timer
- AGENTS/concurrency::timer::pause
- AGENTS/concurrency::timer::start
- AGENTS/concurrency::timer::stop
- AGENTS/concurrency::timer::accept_message
- AGENTS/concurrency::timer::consume_message
- AGENTS/concurrency::timer::link_target_notification
- AGENTS/concurrency::timer::propagate_to_any_targets
- AGENTS/concurrency::timer::release_message
- AGENTS/concurrency::timer::reserve_message
- AGENTS/concurrency::timer::resume_propagation
helpviewer_keywords:
- timer class
ms.assetid: 4f4dea51-de9f-40f9-93f5-dd724c567b49
ms.openlocfilehash: 026aef03bb813585decb206c1691835330a4dd05
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224942"
---
# <a name="timer-class"></a>Classe timer

Un blocco della messaggistica `timer` è un `source_block` a destinazione singola in grado di inviare un messaggio alla sua destinazione dopo che è trascorso un determinato periodo di tempo oppure ad intervalli specifici.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class timer : public Concurrency::details::_Timer, public source_block<single_link_registry<ITarget<T>>>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di payload dei messaggi di output del blocco.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[timer](#ctor)|Di overload. Costruisce un `timer` blocco di messaggistica che genererà un determinato messaggio dopo un intervallo specificato.|
|[distruttore ~ timer](#dtor)|Elimina un `timer` blocco di messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[pause](#pause)|Arresta il `timer` blocco della messaggistica. Se si tratta di un `timer` blocco di messaggistica ripetuto, può essere riavviato con una `start()` chiamata successiva. Per i timer non ripetuti, questo ha lo stesso effetto di una `stop` chiamata.|
|[start](#start)|Avvia il `timer` blocco della messaggistica. Il numero di millisecondi specificato dopo la chiamata al metodo, il valore specificato verrà propagato a valle come `message` .|
|[stop](#stop)|Arresta il `timer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio offerto dal `timer` blocco della messaggistica, trasferendo la proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto da `timer` e riservato dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `timer` messaggistica.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Tenta di offrire il messaggio prodotto dal `timer` blocco a tutte le destinazioni collegate.|
|[release_message](#release_message)|Rilascia una prenotazione del messaggio precedente. Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).|
|[reserve_message](#reserve_message)|Riserva un messaggio offerto in precedenza dal `timer` blocco della messaggistica. Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo che una prenotazione è stata rilasciata. Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[source_block](source-block-class.md)

`timer`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept_message"></a><a name="accept_message"></a>accept_message

Accetta un messaggio offerto dal `timer` blocco della messaggistica, trasferendo la proprietà al chiamante.

```cpp
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

## <a name="consume_message"></a><a name="consume_message"></a>consume_message

Utilizza un messaggio precedentemente offerto da `timer` e riservato dalla destinazione, trasferendo la proprietà al chiamante.

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

## <a name="link_target_notification"></a><a name="link_target_notification"></a>link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo blocco di `timer` messaggistica.

```cpp
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore alla destinazione appena collegata.

## <a name="pause"></a><a name="pause"></a>sospendere

Arresta il `timer` blocco della messaggistica. Se si tratta di un `timer` blocco di messaggistica ripetuto, può essere riavviato con una `start()` chiamata successiva. Per i timer non ripetuti, questo ha lo stesso effetto di una `stop` chiamata.

```cpp
void pause();
```

## <a name="propagate_to_any_targets"></a><a name="propagate_to_any_targets"></a>propagate_to_any_targets

Tenta di offrire il messaggio prodotto dal `timer` blocco a tutte le destinazioni collegate.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<T> *);
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

Riserva un messaggio offerto in precedenza dal `timer` blocco della messaggistica.

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

## <a name="start"></a><a name="start"></a>iniziare

Avvia il `timer` blocco della messaggistica. Il numero di millisecondi specificato dopo la chiamata al metodo, il valore specificato verrà propagato a valle come `message` .

```cpp
void start();
```

## <a name="stop"></a><a name="stop"></a>arrestare

Arresta il `timer` blocco della messaggistica.

```cpp
void stop();
```

## <a name="timer"></a><a name="ctor"></a>timer

Costruisce un `timer` blocco di messaggistica che genererà un determinato messaggio dopo un intervallo specificato.

```cpp
timer(
    unsigned int _Ms,
    T const& value,
    ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);

timer(
    Scheduler& _Scheduler,
    unsigned int _Ms,
    T const& value,
    _Inout_opt_ ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);

timer(
    ScheduleGroup& _ScheduleGroup,
    unsigned int _Ms,
    T const& value,
    _Inout_opt_ ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);
```

### <a name="parameters"></a>Parametri

*_Ms*<br/>
Numero di millisecondi che devono trascorrere dopo la chiamata a Start per la propagazione del messaggio specificato a valle.

*value*<br/>
Valore che verrà propagato a valle al termine del timer.

*_PTarget*<br/>
Destinazione per la propagazione del messaggio da parte del timer.

*_Repeating*<br/>
Se true, indica che il timer viene attivato periodicamente ogni `_Ms` millisecondi.

*_Scheduler*<br/>
`Scheduler`È stato pianificato l'oggetto all'interno del quale è pianificata l'attività di propagazione per il `timer` blocco della messaggistica.

*_ScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `timer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Osservazioni

Se non si specificano i parametri `_Scheduler` o `_ScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

## <a name="timer"></a><a name="dtor"></a>~ timer

Elimina un `timer` blocco di messaggistica.

```cpp
~timer();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
