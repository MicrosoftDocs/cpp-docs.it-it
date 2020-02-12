---
title: Classe ordered_message_processor
ms.date: 11/04/2016
f1_keywords:
- ordered_message_processor
- AGENTS/concurrency::ordered_message_processor
- AGENTS/concurrency::ordered_message_processor::ordered_message_processor
- AGENTS/concurrency::ordered_message_processor::async_send
- AGENTS/concurrency::ordered_message_processor::initialize
- AGENTS/concurrency::ordered_message_processor::initialize_batched_processing
- AGENTS/concurrency::ordered_message_processor::sync_send
- AGENTS/concurrency::ordered_message_processor::wait
- AGENTS/concurrency::ordered_message_processor::process_incoming_message
helpviewer_keywords:
- ordered_message_processor class
ms.assetid: 787adfb7-7f79-4a70-864a-80e3b64088cd
ms.openlocfilehash: ea9ca799f36cac0d843a578eb7cef9c1e9c5cda6
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77138788"
---
# <a name="ordered_message_processor-class"></a>Classe ordered_message_processor

Un `ordered_message_processor` è un `message_processor` che consente ai blocchi del messaggio di elaborare messaggi nell'ordine in cui vengono ricevuti.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class ordered_message_processor : public message_processor<T>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di payload dei messaggi gestiti dal processore.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Alias di tipo per `T`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ordered_message_processor](#ctor)|Costruisce un oggetto `ordered_message_processor`.|
|[distruttore ~ ordered_message_processor](#dtor)|Elimina definitivamente l'oggetto `ordered_message_processor`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[async_send](#async_send)|Accoda i messaggi in modo asincrono e avvia un'attività di elaborazione, se questa operazione non è già stata eseguita. Esegue l'override di [message_processor:: async_send](message-processor-class.md#async_send).|
|[inizializzare](#initialize)|Inizializza l'oggetto `ordered_message_processor` con la funzione di callback, l'utilità di pianificazione e il gruppo di pianificazione appropriati.|
|[initialize_batched_processing](#initialize_batched_processing)|Inizializza l'elaborazione batch dei messaggi|
|[sync_send](#sync_send)|Accoda i messaggi in modo sincrono e avvia un'attività di elaborazione, se questa operazione non è già stata eseguita. Esegue l'override di [message_processor:: sync_send](message-processor-class.md#sync_send).|
|[attendere](#wait)|Attesa di rotazione specifica del processore utilizzata nei distruttori dei blocchi di messaggi per assicurarsi che tutte le attività di elaborazione asincrone abbiano tempo di completamento prima di eliminare definitivamente il blocco. (Esegue l'override di [message_processor:: wait](message-processor-class.md#wait).)|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[process_incoming_message](#process_incoming_message)|Funzione di elaborazione chiamata in modo asincrono. Rimuove la coda dei messaggi e inizia l'elaborazione. (Esegue l'override di [message_processor::p rocess_incoming_message](message-processor-class.md#process_incoming_message).)|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[message_processor](message-processor-class.md)

`ordered_message_processor`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="async_send"></a>async_send

Accoda i messaggi in modo asincrono e avvia un'attività di elaborazione, se questa operazione non è già stata eseguita.

```cpp
virtual void async_send(_Inout_opt_ message<T>* _Msg);
```

### <a name="parameters"></a>Parametri

*_Msg*<br/>
Puntatore a un messaggio.

## <a name="initialize"></a>inizializzare

Inizializza l'oggetto `ordered_message_processor` con la funzione di callback, l'utilità di pianificazione e il gruppo di pianificazione appropriati.

```cpp
void initialize(
    _Inout_opt_ Scheduler* _PScheduler,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup,
    _Handler_method const& _Handler);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
Puntatore all'utilità di pianificazione da utilizzare per la pianificazione di attività leggere.

*_PScheduleGroup*<br/>
Puntatore al gruppo di pianificazione da utilizzare per la pianificazione di attività leggere.

*_Handler*<br/>
Functor del gestore richiamato durante il callback.

## <a name="initialize_batched_processing"></a>initialize_batched_processing

Inizializza l'elaborazione batch dei messaggi

```cpp
virtual void initialize_batched_processing(
    _Handler_method const& _Processor,
    _Propagator_method const& _Propagator);
```

### <a name="parameters"></a>Parametri

*_Processor*<br/>
Functor del processore richiamato durante il callback.

*_Propagator*<br/>
Functor del propagatore richiamato durante il callback.

## <a name="ctor"></a>ordered_message_processor

Costruisce un oggetto `ordered_message_processor`.

```cpp
ordered_message_processor();
```

### <a name="remarks"></a>Osservazioni

In questo `ordered_message_processor` non verrà pianificato alcun gestore asincrono o sincrono finché non viene chiamata la funzione di `initialize`.

## <a name="dtor"></a>~ ordered_message_processor

Elimina definitivamente l'oggetto `ordered_message_processor`.

```cpp
virtual ~ordered_message_processor();
```

### <a name="remarks"></a>Osservazioni

Attende tutte le operazioni asincrone in attesa prima di eliminare definitivamente il processore.

## <a name="process_incoming_message"></a>process_incoming_message

Funzione di elaborazione chiamata in modo asincrono. Rimuove la coda dei messaggi e inizia l'elaborazione.

```cpp
virtual void process_incoming_message();
```

## <a name="sync_send"></a>sync_send

Accoda i messaggi in modo sincrono e avvia un'attività di elaborazione, se questa operazione non è già stata eseguita.

```cpp
virtual void sync_send(_Inout_opt_ message<T>* _Msg);
```

### <a name="parameters"></a>Parametri

*_Msg*<br/>
Puntatore a un messaggio.

## <a name="wait"></a>attendere

Attesa di rotazione specifica del processore utilizzata nei distruttori dei blocchi di messaggi per assicurarsi che tutte le attività di elaborazione asincrone abbiano tempo di completamento prima di eliminare definitivamente il blocco.

```cpp
virtual void wait();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
