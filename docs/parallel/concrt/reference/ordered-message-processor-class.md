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
ms.openlocfilehash: c6e09ff862f0725cc508e3e390dbfa3cc12f7daa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50545964"
---
# <a name="orderedmessageprocessor-class"></a>Classe ordered_message_processor

Un `ordered_message_processor` è un `message_processor` che consente ai blocchi del messaggio di elaborare messaggi nell'ordine in cui vengono ricevuti.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ordered_message_processor : public message_processor<T>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di payload dei messaggi gestiti da parte del processore.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Un alias del tipo per `T`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[ordered_message_processor](#ctor)|Costruisce un oggetto `ordered_message_processor`.|
|[~ ordered_message_processor distruttore](#dtor)|Elimina definitivamente il `ordered_message_processor` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[async_send](#async_send)|Mette in coda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto in modo asincrono. (Esegue l'override [message_processor:: async_send](message-processor-class.md#async_send).)|
|[inizializzare](#initialize)|Inizializza il `ordered_message_processor` oggetto con il gruppo di funzione, utilità di pianificazione e la pianificazione di callback appropriati.|
|[initialize_batched_processing](#initialize_batched_processing)|Inizializza l'elaborazione batch dei messaggi|
|[sync_send](#sync_send)|In modo sincrono mette in coda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto. (Esegue l'override [message_processor:: sync_send](message-processor-class.md#sync_send).)|
|[wait](#wait)|Un'attesa di rotazione specifico del processore utilizzata nei distruttori di blocchi di messaggi per verificare che tutte le attività di elaborazione asincrona sia completata prima del blocco di eliminazione definitiva. (Esegue l'override [message_processor:: Wait](message-processor-class.md#wait).)|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[process_incoming_message](#process_incoming_message)|La funzione di elaborazione che viene chiamata in modo asincrono. Rimuove dalla coda dei messaggi e ne avvia l'elaborazione. (Esegue l'override [message_processor:: process_incoming_message](message-processor-class.md#process_incoming_message).)|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[message_processor](message-processor-class.md)

`ordered_message_processor`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="async_send"></a> async_send

Mette in coda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto in modo asincrono.

```
virtual void async_send(_Inout_opt_ message<T>* _Msg);
```

### <a name="parameters"></a>Parametri

*Msg*<br/>
Un puntatore a un messaggio.

##  <a name="initialize"></a> inizializzare

Inizializza il `ordered_message_processor` oggetto con il gruppo di funzione, utilità di pianificazione e la pianificazione di callback appropriati.

```
void initialize(
    _Inout_opt_ Scheduler* _PScheduler,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup,
    _Handler_method const& _Handler);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
Un puntatore all'utilità di pianificazione da utilizzare per la pianificazione delle attività leggera.

*PScheduleGroup*<br/>
Un puntatore per il gruppo di pianificazione da utilizzare per la pianificazione delle attività leggera.

*Handler*<br/>
Il funtore gestore richiamato durante il callback.

##  <a name="initialize_batched_processing"></a> initialize_batched_processing

Inizializza l'elaborazione batch dei messaggi

```
virtual void initialize_batched_processing(
    _Handler_method const& _Processor,
    _Propagator_method const& _Propagator);
```

### <a name="parameters"></a>Parametri

*_Processor*<br/>
Il funtore processore richiamato durante il callback.

*_Propagator*<br/>
Il funtore propagazione richiamato durante il callback.

##  <a name="ctor"></a> ordered_message_processor

Costruisce un oggetto `ordered_message_processor`.

```
ordered_message_processor();
```

### <a name="remarks"></a>Note

Ciò `ordered_message_processor` non verrà pianificata gestori asincroni o sincroni finché il `initialize` funzione viene chiamata.

##  <a name="dtor"></a> ~ordered_message_processor

Elimina definitivamente il `ordered_message_processor` oggetto.

```
virtual ~ordered_message_processor();
```

### <a name="remarks"></a>Note

Attende che tutte le operazioni asincrone in sospeso prima di eliminarlo definitivamente il processore.

##  <a name="process_incoming_message"></a> process_incoming_message

La funzione di elaborazione che viene chiamata in modo asincrono. Rimuove dalla coda dei messaggi e ne avvia l'elaborazione.

```
virtual void process_incoming_message();
```

##  <a name="sync_send"></a> sync_send

In modo sincrono mette in coda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto.

```
virtual void sync_send(_Inout_opt_ message<T>* _Msg);
```

### <a name="parameters"></a>Parametri

*Msg*<br/>
Un puntatore a un messaggio.

##  <a name="wait"></a> Attendere

Un'attesa di rotazione specifico del processore utilizzata nei distruttori di blocchi di messaggi per verificare che tutte le attività di elaborazione asincrona sia completata prima del blocco di eliminazione definitiva.

```
virtual void wait();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
