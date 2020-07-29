---
title: Classe source_block
ms.date: 11/04/2016
f1_keywords:
- source_block
- AGENTS/concurrency::source_block
- AGENTS/concurrency::source_block::source_block
- AGENTS/concurrency::source_block::accept
- AGENTS/concurrency::source_block::acquire_ref
- AGENTS/concurrency::source_block::consume
- AGENTS/concurrency::source_block::link_target
- AGENTS/concurrency::source_block::release
- AGENTS/concurrency::source_block::release_ref
- AGENTS/concurrency::source_block::reserve
- AGENTS/concurrency::source_block::unlink_target
- AGENTS/concurrency::source_block::unlink_targets
- AGENTS/concurrency::source_block::accept_message
- AGENTS/concurrency::source_block::async_send
- AGENTS/concurrency::source_block::consume_message
- AGENTS/concurrency::source_block::enable_batched_processing
- AGENTS/concurrency::source_block::initialize_source
- AGENTS/concurrency::source_block::link_target_notification
- AGENTS/concurrency::source_block::process_input_messages
- AGENTS/concurrency::source_block::propagate_output_messages
- AGENTS/concurrency::source_block::propagate_to_any_targets
- AGENTS/concurrency::source_block::release_message
- AGENTS/concurrency::source_block::remove_targets
- AGENTS/concurrency::source_block::reserve_message
- AGENTS/concurrency::source_block::resume_propagation
- AGENTS/concurrency::source_block::sync_send
- AGENTS/concurrency::source_block::unlink_target_notification
- AGENTS/concurrency::source_block::wait_for_outstanding_async_sends
helpviewer_keywords:
- source_block class
ms.assetid: fbdd4146-e8d0-42e8-b714-fe633f69ffbf
ms.openlocfilehash: 304bc65d969fa677d67bf578021a63f628e0a1f5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228440"
---
# <a name="source_block-class"></a>Classe source_block

La classe `source_block` è una classe base astratta per blocchi di sola origine. La classe fornisce funzionalità di gestione dei collegamenti di base come controlli dell'errore comune.

## <a name="syntax"></a>Sintassi

```cpp
template<class _TargetLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class source_block : public ISource<typename _TargetLinkRegistry::type::type>;
```

### <a name="parameters"></a>Parametri

*_TargetLinkRegistry*<br/>
Collegare il registro di sistema da usare per contenere i collegamenti di destinazione.

*_MessageProcessorType*<br/>
Tipo di processore per l'elaborazione dei messaggi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`target_iterator`|Iteratore per esaminare le destinazioni connesse.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[source_block](#ctor)|Costruisce un oggetto `source_block`.|
|[distruttore ~ source_block](#dtor)|Elimina definitivamente l' `source_block` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accettare](#accept)|Accetta un messaggio offerto da questo `source_block` oggetto, trasferendo la proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Acquisisce un conteggio di riferimenti su questo `source_block` oggetto per evitare l'eliminazione.|
|[consumare](#consume)|Utilizza un messaggio precedentemente offerto da questo `source_block` oggetto e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target](#link_target)|Collega un blocco di destinazione a questo `source_block` oggetto.|
|[versione](#release)|Rilascia una prenotazione di messaggio precedente riuscita.|
|[release_ref](#release_ref)|Rilascia un conteggio di riferimenti per questo `source_block` oggetto.|
|[riserva](#reserve)|Riserva un messaggio precedentemente offerto da questo `source_block` oggetto.|
|[unlink_target](#unlink_target)|Scollega un blocco di destinazione da questo `source_block` oggetto.|
|[unlink_targets](#unlink_targets)|Scollega tutti i blocchi di destinazione da questo `source_block` oggetto. Esegue l'override di [ISource:: unlink_targets](isource-class.md#unlink_targets).|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Quando sottoposto a override in una classe derivata, accetta un messaggio offerto dall'origine. I blocchi di messaggi devono eseguire l'override di questo metodo per convalidare `_MsgId` e restituire un messaggio.|
|[async_send](#async_send)|Accoda i messaggi in modo asincrono e avvia un'attività di propagazione, se non è già stata eseguita|
|[consume_message](#consume_message)|Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente riservato.|
|[enable_batched_processing](#enable_batched_processing)|Abilita l'elaborazione batch per questo blocco.|
|[initialize_source](#initialize_source)|Inizializza l'oggetto `message_propagator` all'interno di questo oggetto `source_block` .|
|[link_target_notification](#link_target_notification)|Callback che notifica che una nuova destinazione è stata collegata a questo `source_block` oggetto.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block|
|[propagate_output_messages](#propagate_output_messages)|Propaga messaggi alle destinazioni.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Quando sottoposto a override in una classe derivata, propaga il messaggio specificato a una o a tutte le destinazioni collegate. Si tratta della routine di propagazione principale per i blocchi di messaggi.|
|[release_message](#release_message)|Quando sottoposto a override in una classe derivata, rilascia una prenotazione di messaggio precedente.|
|[remove_targets](#remove_targets)|Rimuove tutti i collegamenti di destinazione per questo blocco di origine. Questa operazione deve essere chiamata dal distruttore.|
|[reserve_message](#reserve_message)|Quando sottoposto a override in una classe derivata, riserva un messaggio precedentemente offerto da questo `source_block` oggetto.|
|[resume_propagation](#resume_propagation)|Quando ne viene eseguito l'override in una classe derivata, riprende la propagazione dopo che è stata rilasciata una prenotazione.|
|[sync_send](#sync_send)|Accoda i messaggi in modo sincrono e avvia un'attività di propagazione, se questa operazione non è già stata eseguita.|
|[unlink_target_notification](#unlink_target_notification)|Callback che notifica che una destinazione è stata scollegata da questo `source_block` oggetto.|
|[wait_for_outstanding_async_sends](#wait_for_outstanding_async_sends)|Attende il completamento di tutte le propagazioni asincrone. Questo tipo di attesa specifico del propagatore viene usato nei distruttori dei blocchi di messaggi per assicurarsi che tutte le propagazioni asincrone abbiano tempo di completamento prima di eliminare definitivamente il blocco.|

## <a name="remarks"></a>Osservazioni

I blocchi di messaggi devono derivare da questo blocco per sfruttare la gestione dei collegamenti e la sincronizzazione fornita da questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

`source_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept"></a><a name="accept"></a>accettare

Accetta un messaggio offerto da questo `source_block` oggetto, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Target_type>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `accept` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PTarget` è `NULL` .

Il `accept` metodo viene chiamato da una destinazione mentre un messaggio viene offerto dal `ISource` blocco. Il puntatore al messaggio restituito può essere diverso da quello passato nel `propagate` metodo del `ITarget` blocco, se questa origine decide di eseguire una copia del messaggio.

## <a name="accept_message"></a><a name="accept_message"></a>accept_message

Quando sottoposto a override in una classe derivata, accetta un messaggio offerto dall'origine. I blocchi di messaggi devono eseguire l'override di questo metodo per convalidare `_MsgId` e restituire un messaggio.

```cpp
virtual message<_Target_type>* accept_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Identità dell'oggetto di runtime dell' `message` oggetto.

### <a name="return-value"></a>Valore restituito

Puntatore al messaggio di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Per trasferire la proprietà, deve essere restituito il puntatore del messaggio originale. Per mantenere la proprietà, è necessario che venga eseguita e restituita una copia del payload del messaggio.

## <a name="acquire_ref"></a><a name="acquire_ref"></a>acquire_ref

Acquisisce un conteggio di riferimenti su questo `source_block` oggetto per evitare l'eliminazione.

```cpp
virtual void acquire_ref(_Inout_ ITarget<_Target_type> *);
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da un `ITarget` oggetto che viene collegato a questa origine durante il `link_target` metodo.

## <a name="async_send"></a><a name="async_send"></a>async_send

Accoda i messaggi in modo asincrono e avvia un'attività di propagazione, se non è già stata eseguita

```cpp
virtual void async_send(_Inout_opt_ message<_Target_type>* _Msg);
```

### <a name="parameters"></a>Parametri

*_Msg*<br/>
Puntatore a un `message` oggetto da inviare in modo asincrono.

## <a name="consume"></a><a name="consume"></a>consumare

Utilizza un messaggio precedentemente offerto da questo `source_block` oggetto e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Target_type>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto riservato `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `consume` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PTarget` è `NULL` .

Il metodo genera un'eccezione [bad_target](bad-target-class.md) se il parametro non `_PTarget` rappresenta la destinazione che ha chiamato `reserve` .

Il `consume` metodo è simile a `accept` , ma deve essere sempre preceduto da una chiamata a `reserve` che ha restituito **`true`** .

## <a name="consume_message"></a><a name="consume_message"></a>consume_message

Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente riservato.

```cpp
virtual message<_Target_type>* consume_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto utilizzato.

### <a name="return-value"></a>Valore restituito

Puntatore al messaggio di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Simile a `accept` , ma è sempre preceduto da una chiamata a `reserve` .

## <a name="enable_batched_processing"></a><a name="enable_batched_processing"></a>enable_batched_processing

Abilita l'elaborazione batch per questo blocco.

```cpp
void enable_batched_processing();
```

## <a name="initialize_source"></a><a name="initialize_source"></a>initialize_source

Inizializza l'oggetto `message_propagator` all'interno di questo oggetto `source_block` .

```cpp
void initialize_source(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
Utilità di pianificazione da utilizzare per la pianificazione delle attività.

*_PScheduleGroup*<br/>
Gruppo di pianificazione da utilizzare per la pianificazione delle attività.

## <a name="link_target"></a><a name="link_target"></a>link_target

Collega un blocco di destinazione a questo `source_block` oggetto.

```cpp
virtual void link_target(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore a un `ITarget` blocco da collegare all' `source_block` oggetto.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PTarget` è `NULL` .

## <a name="link_target_notification"></a><a name="link_target_notification"></a>link_target_notification

Callback che notifica che una nuova destinazione è stata collegata a questo `source_block` oggetto.

```cpp
virtual void link_target_notification(_Inout_ ITarget<_Target_type> *);
```

## <a name="process_input_messages"></a><a name="process_input_messages"></a>process_input_messages

Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block

```cpp
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da elaborare.

## <a name="propagate_output_messages"></a><a name="propagate_output_messages"></a>propagate_output_messages

Propaga messaggi alle destinazioni.

```cpp
virtual void propagate_output_messages();
```

## <a name="propagate_to_any_targets"></a><a name="propagate_to_any_targets"></a>propagate_to_any_targets

Quando sottoposto a override in una classe derivata, propaga il messaggio specificato a una o a tutte le destinazioni collegate. Si tratta della routine di propagazione principale per i blocchi di messaggi.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<_Target_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio da propagare.

## <a name="release"></a><a name="release"></a>versione

Rilascia una prenotazione di messaggio precedente riuscita.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto riservato `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `release` metodo.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PTarget` è `NULL` .

Il metodo genera un'eccezione [bad_target](bad-target-class.md) se il parametro non `_PTarget` rappresenta la destinazione che ha chiamato `reserve` .

## <a name="release_message"></a><a name="release_message"></a>release_message

Quando sottoposto a override in una classe derivata, rilascia una prenotazione di messaggio precedente.

```cpp
virtual void release_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

## <a name="release_ref"></a><a name="release_ref"></a>release_ref

Rilascia un conteggio di riferimenti per questo `source_block` oggetto.

```cpp
virtual void release_ref(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da un `ITarget` oggetto che viene scollegato da questa origine. Il blocco di origine può rilasciare tutte le risorse riservate per il blocco di destinazione.

## <a name="remove_targets"></a><a name="remove_targets"></a>remove_targets

Rimuove tutti i collegamenti di destinazione per questo blocco di origine. Questa operazione deve essere chiamata dal distruttore.

```cpp
void remove_targets();
```

## <a name="reserve"></a><a name="reserve"></a>riserva

Riserva un messaggio precedentemente offerto da questo `source_block` oggetto.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `reserve` metodo.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PTarget` è `NULL` .

Dopo aver chiamato `reserve` , in caso di esito positivo, è necessario chiamare o per ottenere `consume` `release` o concedere il possesso del messaggio, rispettivamente.

## <a name="reserve_message"></a><a name="reserve_message"></a>reserve_message

Quando sottoposto a override in una classe derivata, riserva un messaggio precedentemente offerto da questo `source_block` oggetto.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Dell' `message` oggetto riservato.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,.

### <a name="remarks"></a>Osservazioni

Dopo `reserve` la chiamata a, se restituisce **`true`** , è `consume` `release` necessario chiamare o per prendere o rilasciare la proprietà del messaggio.

## <a name="resume_propagation"></a><a name="resume_propagation"></a>resume_propagation

Quando ne viene eseguito l'override in una classe derivata, riprende la propagazione dopo che è stata rilasciata una prenotazione.

```cpp
virtual void resume_propagation() = 0;
```

## <a name="source_block"></a><a name="ctor"></a>source_block

Costruisce un oggetto `source_block`.

```cpp
source_block();
```

## <a name="source_block"></a><a name="dtor"></a>~ source_block

Elimina definitivamente l' `source_block` oggetto.

```cpp
virtual ~source_block();
```

## <a name="sync_send"></a><a name="sync_send"></a>sync_send

Accoda i messaggi in modo sincrono e avvia un'attività di propagazione, se questa operazione non è già stata eseguita.

```cpp
virtual void sync_send(_Inout_opt_ message<_Target_type>* _Msg);
```

### <a name="parameters"></a>Parametri

*_Msg*<br/>
Puntatore a un `message` oggetto da inviare in modo sincrono.

## <a name="unlink_target"></a><a name="unlink_target"></a>unlink_target

Scollega un blocco di destinazione da questo `source_block` oggetto.

```cpp
virtual void unlink_target(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore a un `ITarget` blocco da scollegare da questo `source_block` oggetto.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_PTarget` è `NULL` .

## <a name="unlink_target_notification"></a><a name="unlink_target_notification"></a>unlink_target_notification

Callback che notifica che una destinazione è stata scollegata da questo `source_block` oggetto.

```cpp
virtual void unlink_target_notification(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
`ITarget`Blocco che è stato scollegato.

## <a name="unlink_targets"></a><a name="unlink_targets"></a>unlink_targets

Scollega tutti i blocchi di destinazione da questo `source_block` oggetto.

```cpp
virtual void unlink_targets();
```

## <a name="wait_for_outstanding_async_sends"></a><a name="wait_for_outstanding_async_sends"></a>wait_for_outstanding_async_sends

Attende il completamento di tutte le propagazioni asincrone. Questo tipo di attesa specifico del propagatore viene usato nei distruttori dei blocchi di messaggi per assicurarsi che tutte le propagazioni asincrone abbiano tempo di completamento prima di eliminare definitivamente il blocco.

```cpp
void wait_for_outstanding_async_sends();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe ISource](isource-class.md)
