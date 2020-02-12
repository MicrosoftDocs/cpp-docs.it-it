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
ms.openlocfilehash: 445e368ced9d9c8faf30351ecaeecc4e1b8a59f2
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142844"
---
# <a name="call-class"></a>Classe call

Un blocco della messaggistica `call` è un oggetto `target_block` multi-origine ordinato che richiama una funzione specificata quando riceve un messaggio.

## <a name="syntax"></a>Sintassi

```cpp
template<class T, class _FunctorType = std::function<void(T const&)>>
class call : public target_block<multi_link_registry<ISource<T>>>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di payload dei messaggi propagati in questo blocco.

*_FunctorType*<br/>
Firma delle funzioni che questo blocco può accettare.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[chiamare](#ctor)|Di overload. Costruisce un blocco della messaggistica `call` .|
|[~ distruttore di chiamate](#dtor)|Elimina definitivamente il blocco della messaggistica `call`.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[process_input_messages](#process_input_messages)|Esegue la funzione di chiamata sui messaggi di input.|
|[process_message](#process_message)|Elabora un messaggio accettato da questo blocco di messaggistica `call`.|
|[propagate_message](#propagate_message)|Passa in modo asincrono un messaggio da un blocco `ISource` a questo blocco della messaggistica `call`. Viene richiamato dal metodo `propagate`, quando viene chiamato da un blocco di origine.|
|[send_message](#send_message)|Passa in modo sincrono un messaggio da un blocco `ISource` a questo blocco della messaggistica `call`. Viene richiamato dal metodo `send`, quando viene chiamato da un blocco di origine.|
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. Esegue l'override di [ITarget:: supports_anonymous_source](itarget-class.md#supports_anonymous_source).|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ITarget](itarget-class.md)

[target_block](target-block-class.md)

`call`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>chiamare

Costruisce un blocco della messaggistica `call` .

```cpp
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

*_Func*<br/>
Funzione che verrà richiamata per ogni messaggio accettato.

*_Filter*<br/>
Funzione di filtro che determina se i messaggi offerti devono essere accettati.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `call` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `call` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Osservazioni

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il tipo `_Call_method` è un functor con `void (T const &)` di firma richiamato da questo blocco di messaggistica `call` per elaborare un messaggio.

Il tipo `filter_method` è un functor con `bool (T const &)` di firma richiamato da questo blocco di messaggistica `call` per determinare se deve accettare o meno un messaggio offerto.

## <a name="dtor"></a>~ chiamata

Elimina definitivamente il blocco della messaggistica `call`.

```cpp
~call();
```

## <a name="process_input_messages"></a>process_input_messages

Esegue la funzione di chiamata sui messaggi di input.

```cpp
virtual void process_input_messages(_Inout_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da gestire.

## <a name="process_message"></a>process_message

Elabora un messaggio accettato da questo blocco di messaggistica `call`.

```cpp
virtual void process_message(_Inout_ message<T>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da gestire.

## <a name="propagate_message"></a>propagate_message

Passa in modo asincrono un messaggio da un blocco `ISource` a questo blocco della messaggistica `call`. Viene richiamato dal metodo `propagate`, quando viene chiamato da un blocco di origine.

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

## <a name="send_message"></a>send_message

Passa in modo sincrono un messaggio da un blocco `ISource` a questo blocco della messaggistica `call`. Viene richiamato dal metodo `send`, quando viene chiamato da un blocco di origine.

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

## <a name="supports_anonymous_source"></a>supports_anonymous_source

Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata.

```cpp
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**true** perché il blocco non posticipa i messaggi offerti.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe transformer](transformer-class.md)
