---
title: Classe source_block | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- source_block class
ms.assetid: fbdd4146-e8d0-42e8-b714-fe633f69ffbf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f4a184e0fee76f3aa5bb8f7729250c03b10b9dfc
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163491"
---
# <a name="sourceblock-class"></a>Classe source_block

La classe `source_block` è una classe base astratta per blocchi di sola origine. La classe fornisce funzionalità di gestione dei collegamenti di base come controlli dell'errore comune.

## <a name="syntax"></a>Sintassi

```
template<class _TargetLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class source_block : public ISource<typename _TargetLinkRegistry::type::type>;
```

#### <a name="parameters"></a>Parametri

*_TargetLinkRegistry*<br/>
Registro di sistema di collegamento da utilizzare per mantenere i collegamenti di destinazione.

*_MessageProcessorType*<br/>
Tipo di processore per l'elaborazione dei messaggi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`target_iterator`|Iteratore da mostrare le destinazioni connesse.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[source_block](#ctor)|Costruisce un oggetto `source_block`.|
|[~ source_block distruttore](#dtor)|Elimina definitivamente il `source_block` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accept](#accept)|Accetta un messaggio in cui è stato offerto da questo `source_block` oggetto, trasferimento di proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Acquisisce un conteggio dei riferimenti su questo `source_block` oggetto, per impedire l'eliminazione.|
|[Utilizzare](#consume)|Utilizza un messaggio offerto in precedenza da questo `source_block` dell'oggetto e riservato correttamente dalla destinazione, trasferimento di proprietà al chiamante.|
|[link_target](#link_target)|Collega un blocco di destinazione a questo `source_block` oggetto.|
|[release](#release)|Rilascia una prenotazione corretta del messaggio precedente.|
|[release_ref](#release_ref)|Rilascia un conteggio dei riferimenti su questo `source_block` oggetto.|
|[reserve](#reserve)|Consente di riservare un messaggio offerto in precedenza da questo `source_block` oggetto.|
|[unlink_target](#unlink_target)|Scollega un blocco di destinazione dal `source_block` oggetto.|
|[unlink_targets](#unlink_targets)|Scollega tutti i blocchi di destinazione dal `source_block` oggetto. (Esegue l'override [ISource:: Unlink_targets](isource-class.md#unlink_targets).)|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[accept_message](#accept_message)|Quando sottoposto a override in una classe derivata, accetta un messaggio offerto dall'origine. Blocchi di messaggi devono eseguire l'override di questo metodo per convalidare il `_MsgId` e restituire un messaggio.|
|[async_send](#async_send)|Mette in coda i messaggi in modo asincrono e avvia un'attività di propagazione, se non è già stato fatto|
|[consume_message](#consume_message)|Quando sottoposto a override in una classe derivata, utilizza un messaggio che è stato riservato in precedenza.|
|[enable_batched_processing](#enable_batched_processing)|Abilita l'elaborazione batch per questo blocco.|
|[initialize_source](#initialize_source)|Inizializza la `message_propagator` all'interno di questo `source_block`.|
|[link_target_notification](#link_target_notification)|Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `source_block` oggetto.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block|
|[propagate_output_messages](#propagate_output_messages)|Propaga messaggi alle destinazioni.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Quando sottoposto a override in una classe derivata, propaga il messaggio specificato a una o tutte le destinazioni collegate. Questa è la routine di propagazione principale per i blocchi di messaggio.|
|[release_message](#release_message)|Quando sottoposto a override in una classe derivata, rilascia una prenotazione messaggio precedente.|
|[remove_targets](#remove_targets)|Rimuove tutti i collegamenti di destinazione per questo blocco di origine. Questo deve essere chiamato dal distruttore.|
|[reserve_message](#reserve_message)|Sottoposto a override in una classe derivata, consente di riservare un messaggio offerto in precedenza da questo `source_block` oggetto.|
|[resume_propagation](#resume_propagation)|Sottoposto a override in una classe derivata, la propagazione viene ripresa dopo il rilascio di una prenotazione.|
|[sync_send](#sync_send)|In modo sincrono mette in coda i messaggi e avvia un'attività di propagazione, se non è già stato fatto.|
|[unlink_target_notification](#unlink_target_notification)|Un callback che invia una notifica che una destinazione sia stata scollegata da questo `source_block` oggetto.|
|[wait_for_outstanding_async_sends](#wait_for_outstanding_async_sends)|Attende che tutte le propagazioni asincrone per il completamento. Questa attesa rotazione propagazione specifica viene usata nei distruttori di blocchi di messaggi per assicurarsi che tutte le propagazioni asincrone hanno tempo per essere completata prima dell'eliminazione del blocco.|

## <a name="remarks"></a>Note

Blocchi di messaggi devono derivare da questo blocco possa sfruttare i vantaggi della gestione dei collegamenti e sincronizzazione forniti da questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

`source_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="accept"></a> Accettare

Accetta un messaggio in cui è stato offerto da questo `source_block` oggetto, trasferimento di proprietà al chiamante.

```
virtual message<_Target_type>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

*PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `accept` (metodo).

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_PTarget` è `NULL`.

Il `accept` metodo viene chiamato da una destinazione, mentre un messaggio viene offerto da questo `ISource` blocco. Il puntatore del messaggio restituito può essere diverso da quello passato il `propagate` metodo del `ITarget` bloccare, se questa origine si decide di creare una copia del messaggio.

##  <a name="accept_message"></a> accept_message

Quando sottoposto a override in una classe derivata, accetta un messaggio offerto dall'origine. Blocchi di messaggi devono eseguire l'override di questo metodo per convalidare il `_MsgId` e restituire un messaggio.

```
virtual message<_Target_type>* accept_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
L'identità dell'oggetto di runtime il `message` oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al messaggio di cui il chiamante può ora la proprietà di.

### <a name="remarks"></a>Note

Per trasferire la proprietà, deve essere restituito il puntatore del messaggio originale. Per mantenere la proprietà, una copia del payload del messaggio deve essere effettuato e restituito.

##  <a name="acquire_ref"></a> acquire_ref

Acquisisce un conteggio dei riferimenti su questo `source_block` oggetto, per impedire l'eliminazione.

```
virtual void acquire_ref(_Inout_ ITarget<_Target_type> *);
```

### <a name="remarks"></a>Note

Questo metodo viene chiamato da un `ITarget` oggetto collegato all'origine durante il `link_target` (metodo).

##  <a name="async_send"></a> async_send

Mette in coda i messaggi in modo asincrono e avvia un'attività di propagazione, se non è già stato fatto

```
virtual void async_send(_Inout_opt_ message<_Target_type>* _Msg);
```

### <a name="parameters"></a>Parametri

*Msg*<br/>
Un puntatore a un `message` oggetto da inviare in modo asincrono.

##  <a name="consume"></a> Utilizzare

Utilizza un messaggio offerto in precedenza da questo `source_block` dell'oggetto e riservato correttamente dalla destinazione, trasferimento di proprietà al chiamante.

```
virtual message<_Target_type>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` riservato `message` oggetto.

*PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `consume` (metodo).

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_PTarget` è `NULL`.

Il metodo genera un [bad_target](bad-target-class.md) eccezione se il parametro `_PTarget` non rappresenta la destinazione che ha chiamato `reserve`.

Il `consume` è simile al metodo `accept`, ma deve essere sempre preceduto da una chiamata a `reserve` che ha restituito **true**.

##  <a name="consume_message"></a> consume_message

Quando sottoposto a override in una classe derivata, utilizza un messaggio che è stato riservato in precedenza.

```
virtual message<_Target_type>* consume_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` consumata dell'oggetto.

### <a name="return-value"></a>Valore restituito

Un puntatore al messaggio di cui il chiamante può ora la proprietà di.

### <a name="remarks"></a>Note

Simile a `accept`, ma viene sempre preceduta da una chiamata a `reserve`.

##  <a name="enable_batched_processing"></a> enable_batched_processing

Abilita l'elaborazione batch per questo blocco.

```
void enable_batched_processing();
```

##  <a name="initialize_source"></a> initialize_source

Inizializza la `message_propagator` all'interno di questo `source_block`.

```
void initialize_source(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
L'utilità di pianificazione da utilizzare per la pianificazione di attività.

*PScheduleGroup*<br/>
Il gruppo di pianificazione da utilizzare per la pianificazione di attività.

##  <a name="link_target"></a> link_target

Collega un blocco di destinazione a questo `source_block` oggetto.

```
virtual void link_target(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Un puntatore a un `ITarget` blocco da collegare a questa `source_block` oggetto.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_PTarget` è `NULL`.

##  <a name="link_target_notification"></a> link_target_notification

Un callback che invia una notifica che una nuova destinazione è stata collegata a questa `source_block` oggetto.

```
virtual void link_target_notification(_Inout_ ITarget<_Target_type> *);
```

##  <a name="process_input_messages"></a> process_input_messages

Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block

```
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore al messaggio che deve essere elaborato.

##  <a name="propagate_output_messages"></a> propagate_output_messages

Propaga messaggi alle destinazioni.

```
virtual void propagate_output_messages();
```

##  <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Quando sottoposto a override in una classe derivata, propaga il messaggio specificato a una o tutte le destinazioni collegate. Questa è la routine di propagazione principale per i blocchi di messaggio.

```
virtual void propagate_to_any_targets(_Inout_opt_ message<_Target_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore al messaggio che deve essere propagata.

##  <a name="release"></a> Versione

Rilascia una prenotazione corretta del messaggio precedente.

```
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` riservato `message` oggetto.

*PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `release` (metodo).

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_PTarget` è `NULL`.

Il metodo genera un [bad_target](bad-target-class.md) eccezione se il parametro `_PTarget` non rappresenta la destinazione che ha chiamato `reserve`.

##  <a name="release_message"></a> release_message

Quando sottoposto a override in una classe derivata, rilascia una prenotazione messaggio precedente.

```
virtual void release_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto rilasciato.

##  <a name="release_ref"></a> release_ref

Rilascia un conteggio dei riferimenti su questo `source_block` oggetto.

```
virtual void release_ref(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Note

Questo metodo viene chiamato da un `ITarget` oggetto che viene viene scollegato da questa origine. Il blocco di origine è autorizzato a rilasciare le risorse riservate per il blocco di destinazione.

##  <a name="remove_targets"></a> remove_targets

Rimuove tutti i collegamenti di destinazione per questo blocco di origine. Questo deve essere chiamato dal distruttore.

```
void remove_targets();
```

##  <a name="reserve"></a> riservare

Consente di riservare un messaggio offerto in precedenza da questo `source_block` oggetto.

```
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

*PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `reserve` (metodo).

### <a name="return-value"></a>Valore restituito

**true** se il messaggio è stato riservato, **false** in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_PTarget` è `NULL`.

Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per richiedere o rilasciare il possesso del messaggio, rispettivamente.

##  <a name="reserve_message"></a> reserve_message

Sottoposto a override in una classe derivata, consente di riservare un messaggio offerto in precedenza da questo `source_block` oggetto.

```
virtual bool reserve_message(runtime_object_identity _MsgId) = 0;
```

### <a name="parameters"></a>Parametri

*MsgId*<br/>
Il `runtime_object_identity` del `message` oggetto riservato.

### <a name="return-value"></a>Valore restituito

**true** se il messaggio è stato riservato, **false** in caso contrario.

### <a name="remarks"></a>Note

Dopo aver `reserve` viene chiamato, se viene restituito **true**, ad esempio `consume` o `release` deve essere chiamato per richiedere o rilasciare la proprietà del messaggio.

##  <a name="resume_propagation"></a> resume_propagation

Sottoposto a override in una classe derivata, la propagazione viene ripresa dopo il rilascio di una prenotazione.

```
virtual void resume_propagation() = 0;
```

##  <a name="ctor"></a> source_block

Costruisce un oggetto `source_block`.

```
source_block();
```

##  <a name="dtor"></a> ~source_block

Elimina definitivamente il `source_block` oggetto.

```
virtual ~source_block();
```

##  <a name="sync_send"></a> sync_send

In modo sincrono mette in coda i messaggi e avvia un'attività di propagazione, se non è già stato fatto.

```
virtual void sync_send(_Inout_opt_ message<_Target_type>* _Msg);
```

### <a name="parameters"></a>Parametri

*Msg*<br/>
Un puntatore a un `message` oggetto da inviare in modo sincrono.

##  <a name="unlink_target"></a> unlink_target

Scollega un blocco di destinazione dal `source_block` oggetto.

```
virtual void unlink_target(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Un puntatore a un `ITarget` scollegare da questo blocco `source_block` oggetto.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_PTarget` è `NULL`.

##  <a name="unlink_target_notification"></a> unlink_target_notification

Un callback che invia una notifica che una destinazione sia stata scollegata da questo `source_block` oggetto.

```
virtual void unlink_target_notification(_Inout_ ITarget<_Target_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*PTarget*<br/>
Il `ITarget` blocco che è stato scollegato.

##  <a name="unlink_targets"></a> unlink_targets

Scollega tutti i blocchi di destinazione dal `source_block` oggetto.

```
virtual void unlink_targets();
```

##  <a name="wait_for_outstanding_async_sends"></a> wait_for_outstanding_async_sends

Attende che tutte le propagazioni asincrone per il completamento. Questa attesa rotazione propagazione specifica viene usata nei distruttori di blocchi di messaggi per assicurarsi che tutte le propagazioni asincrone hanno tempo per essere completata prima dell'eliminazione del blocco.

```
void wait_for_outstanding_async_sends();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ISource](isource-class.md)
