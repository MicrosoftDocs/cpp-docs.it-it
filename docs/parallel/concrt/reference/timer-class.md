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
ms.openlocfilehash: e36441f53c9b53c9826ee92b2892142a522d7243
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298152"
---
# <a name="timer-class"></a>Classe timer

Un blocco della messaggistica `timer` è un `source_block` a destinazione singola in grado di inviare un messaggio alla sua destinazione dopo che è trascorso un determinato periodo di tempo oppure ad intervalli specifici.

## <a name="syntax"></a>Sintassi

```
template<class T>
class timer : public Concurrency::details::_Timer, public source_block<single_link_registry<ITarget<T>>>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di payload dei messaggi di output di questo blocco.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[timer](#ctor)|Di overload. Costruisce un `timer` blocco della messaggistica che verrà generato un determinato messaggio dopo un intervallo specificato.|
|[~ timer distruttore](#dtor)|Elimina definitivamente un `timer` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[pause](#pause)|Arresta il `timer` blocco della messaggistica. Se si tratta di una ripetizione `timer` blocco della messaggistica, può essere riavviato con una successiva `start()` chiamare. Per non ripetuto timer, questo ha lo stesso effetto un `stop` chiamare.|
|[start](#start)|Avvia il `timer` blocco della messaggistica. Il numero specificato di millisecondi dopo la chiamata, il valore specificato verrà propagato a valle come un `message`.|
|[stop](#stop)|Arresta il `timer` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Accetta un messaggio in cui è stato offerto da questo `timer` blocco della messaggistica, trasferimento di proprietà al chiamante.|
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza dal `timer` e riservati dalla destinazione, trasferimento di proprietà al chiamante.|
|[link_target_notification](#link_target_notification)|Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `timer` blocco della messaggistica.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Tenta di offrire il messaggio generato dal `timer` blocco per tutte le destinazioni collegate.|
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Consente di riservare un messaggio offerto in precedenza da questo `timer` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo il rilascio di una prenotazione. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[source_block](source-block-class.md)

`timer`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="accept_message"></a> accept_message

Accetta un messaggio in cui è stato offerto da questo `timer` blocco della messaggistica, trasferimento di proprietà al chiamante.

```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

##  <a name="consume_message"></a> consume_message

Utilizza un messaggio offerto in precedenza dal `timer` e riservati dalla destinazione, trasferimento di proprietà al chiamante.

```
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` del `message` consumata dell'oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Simile a `accept`, ma viene sempre preceduta da una chiamata a `reserve`.

##  <a name="link_target_notification"></a> link_target_notification

Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `timer` blocco della messaggistica.

```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore alla destinazione appena collegato.

##  <a name="pause"></a> Sospendi

Arresta il `timer` blocco della messaggistica. Se si tratta di una ripetizione `timer` blocco della messaggistica, può essere riavviato con una successiva `start()` chiamare. Per non ripetuto timer, questo ha lo stesso effetto un `stop` chiamare.

```
void pause();
```

##  <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Tenta di offrire il messaggio generato dal `timer` blocco per tutte le destinazioni collegate.

```
virtual void propagate_to_any_targets(_Inout_opt_ message<T> *);
```

##  <a name="release_message"></a> release_message

Rilascia una prenotazione messaggio precedente.

```
virtual void release_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto rilasciato.

##  <a name="reserve_message"></a> reserve_message

Consente di riservare un messaggio offerto in precedenza da questo `timer` blocco della messaggistica.

```
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
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

##  <a name="start"></a> start

Avvia il `timer` blocco della messaggistica. Il numero specificato di millisecondi dopo la chiamata, il valore specificato verrà propagato a valle come un `message`.

```
void start();
```

##  <a name="stop"></a> stop

Arresta il `timer` blocco della messaggistica.

```
void stop();
```

##  <a name="ctor"></a> Timer

Costruisce un `timer` blocco della messaggistica che verrà generato un determinato messaggio dopo un intervallo specificato.

```
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
Il numero di millisecondi che deve trascorrere dopo la chiamata a start per il messaggio specificato da propagare a valle.

*value*<br/>
Il valore che verrà propagato a valle quando il timer scade.

*_PTarget*<br/>
La destinazione a cui il timer verrà propagato il relativo messaggio.

*_Repeating*<br/>
Se true, indica che il timer verrà generato periodicamente ogni `_Ms` millisecondi.

*_Scheduler*<br/>
Il `Scheduler` oggetto all'interno del quale la propagazione di attività per il `timer` blocco della messaggistica è pianificata è pianificata.

*_ScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `timer` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Note

Se non si specificano i parametri `_Scheduler` o `_ScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

##  <a name="dtor"></a> ~timer

Elimina definitivamente un `timer` blocco della messaggistica.

```
~timer();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
