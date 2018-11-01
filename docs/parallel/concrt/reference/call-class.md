---
title: Classe call
ms.date: 11/04/2016
f1_keywords:
- call
- AGENTS/concurrency::call
- AGENTS/concurrency::call::call
- AGENTS/concurrency::call::process_input_messages
- AGENTS/concurrency::call::process_message
- AGENTS/concurrency::call::propagate_message
- AGENTS/concurrency::call::send_message
- AGENTS/concurrency::call::supports_anonymous_source
helpviewer_keywords:
- call class
ms.assetid: 1521970a-1e9c-4b0c-a681-d18e40976f49
ms.openlocfilehash: 5164d2787c86e6c909418f353c15c876d1397afe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50566101"
---
# <a name="call-class"></a>Classe call

Un blocco della messaggistica `call` è un oggetto `target_block` multi-origine ordinato che richiama una funzione specificata quando riceve un messaggio.

## <a name="syntax"></a>Sintassi

```
template<class T, class _FunctorType = std::function<void(T const&)>>
class call : public target_block<multi_link_registry<ISource<T>>>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di payload dei messaggi propagati da questo blocco.

*_FunctorType*<br/>
La firma delle funzioni che questo blocco può accettare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[call](#ctor)|Di overload. Costruisce un blocco della messaggistica `call` .|
|[~ chiamare distruttore](#dtor)|Elimina definitivamente il `call` blocco della messaggistica.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[process_input_messages](#process_input_messages)|Esegue la chiamata di funzione nei messaggi di input.|
|[process_message](#process_message)|Elabora un messaggio che è stato accettato da questo `call` blocco della messaggistica.|
|[propagate_message](#propagate_message)|Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `call` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[send_message](#send_message)|Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `call` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. (Esegue l'override [ITarget:: Supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ITarget](itarget-class.md)

[target_block](target-block-class.md)

`call`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> Chiamata

Costruisce un blocco della messaggistica `call` .

```
call(
    _Call_method const& _Func);

call(
    _Call_method const& _Func,
    filter_method const& _Filter);

call(
    Scheduler& _PScheduler,
    _Call_method const& _Func);

call(
    Scheduler& _PScheduler,
    _Call_method const& _Func,
    filter_method const& _Filter);

call(
    ScheduleGroup& _PScheduleGroup,
    _Call_method const& _Func);

call(
    ScheduleGroup& _PScheduleGroup,
    _Call_method const& _Func,
    filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*Func*<br/>
Una funzione che verrà richiamata per ogni messaggio accettato.

*Filtro*<br/>
Una funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `call` .

*PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `call` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Note

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `_Call_method` è un funtore con firma `void (T const &)` che viene richiamato da questo `call` blocco della messaggistica per elaborare un messaggio.

Il tipo `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `call` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.

##  <a name="dtor"></a> ~call

Elimina definitivamente il `call` blocco della messaggistica.

```
~call();
```

##  <a name="process_input_messages"></a> process_input_messages

Esegue la chiamata di funzione nei messaggi di input.

```
virtual void process_input_messages(_Inout_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore al messaggio che deve essere gestito.

##  <a name="process_message"></a> process_message

Elabora un messaggio che è stato accettato da questo `call` blocco della messaggistica.

```
virtual void process_message(_Inout_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore al messaggio che deve essere gestito.

##  <a name="propagate_message"></a> propagate_message

Consente di passare in modo asincrono un messaggio da un `ISource` a questo blocco `call` blocco della messaggistica. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

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

##  <a name="send_message"></a> send_message

Consente di passare in modo sincrono un messaggio da un `ISource` a questo blocco `call` blocco della messaggistica. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.

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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe transformer](transformer-class.md)
