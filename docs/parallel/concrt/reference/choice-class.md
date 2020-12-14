---
description: 'Altre informazioni su: classe choice'
title: Classe choice
ms.date: 11/04/2016
f1_keywords:
- choice
- AGENTS/concurrency::choice
- AGENTS/concurrency::choice::choice
- AGENTS/concurrency::choice::accept
- AGENTS/concurrency::choice::acquire_ref
- AGENTS/concurrency::choice::consume
- AGENTS/concurrency::choice::has_value
- AGENTS/concurrency::choice::index
- AGENTS/concurrency::choice::link_target
- AGENTS/concurrency::choice::release
- AGENTS/concurrency::choice::release_ref
- AGENTS/concurrency::choice::reserve
- AGENTS/concurrency::choice::unlink_target
- AGENTS/concurrency::choice::unlink_targets
- AGENTS/concurrency::choice::value
helpviewer_keywords:
- choice class
ms.assetid: 4157a539-d5c2-4161-b1ab-536ce2888397
ms.openlocfilehash: a7597a3bd530185e316cdc42ebbc4696162d498f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254469"
---
# <a name="choice-class"></a>Classe choice

Un blocco della messaggistica `choice` è un blocco multi-origine a destinazione singola che rappresenta un'interazione del flusso di controllo con un set di origini. Il blocco choice attenderà che una qualsiasi delle molteplici origini produca un messaggio e propagherà l'indice dell'origine che ha prodotto il messaggio.

## <a name="syntax"></a>Sintassi

```cpp
template<
    class T
>
class choice: public ISource<size_t>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
`tuple`Tipo basato su che rappresenta i payload delle origini di input.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`type`|Alias del tipo per `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[choice](#ctor)|Di overload. Costruisce un blocco della messaggistica `choice` .|
|[distruttore ~ Choice](#dtor)|Elimina definitivamente il `choice` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[accettare](#accept)|Accetta un messaggio offerto da questo `choice` blocco, trasferendo la proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Acquisisce un conteggio di riferimenti in questo `choice` blocco della messaggistica, per evitare l'eliminazione.|
|[consumare](#consume)|Utilizza un messaggio precedentemente offerto dal `choice` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|
|[has_value](#has_value)|Verifica se il `choice` blocco della messaggistica è stato ancora inizializzato con un valore.|
|[index](#index)|Restituisce un indice nell'oggetto `tuple` che rappresenta l'elemento selezionato dal `choice` blocco della messaggistica.|
|[link_target](#link_target)|Collega un blocco di destinazione a questo `choice` blocco di messaggistica.|
|[versione](#release)|Rilascia una prenotazione di messaggio precedente riuscita.|
|[release_ref](#release_ref)|Rilascia un conteggio di riferimenti in questo `choice` blocco di messaggistica.|
|[riserva](#reserve)|Riserva un messaggio offerto in precedenza dal `choice` blocco della messaggistica.|
|[unlink_target](#unlink_target)|Scollega un blocco di destinazione da questo `choice` blocco di messaggistica.|
|[unlink_targets](#unlink_targets)|Scollega tutte le destinazioni da questo `choice` blocco di messaggistica. Esegue l'override di [ISource:: unlink_targets](isource-class.md#unlink_targets).|
|[value](#value)|Ottiene il messaggio il cui indice è stato selezionato dal `choice` blocco della messaggistica.|

## <a name="remarks"></a>Commenti

Il blocco choice garantisce che venga utilizzato solo uno dei messaggi in ingresso.

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

`choice`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept"></a><a name="accept"></a> accettare

Accetta un messaggio offerto da questo `choice` blocco, trasferendo la proprietà al chiamante.

```cpp
virtual message<size_t>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `accept` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore al messaggio di cui il chiamante è ora proprietario.

## <a name="acquire_ref"></a><a name="acquire_ref"></a> acquire_ref

Acquisisce un conteggio di riferimenti in questo `choice` blocco della messaggistica, per evitare l'eliminazione.

```cpp
virtual void acquire_ref(_Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato da un `ITarget` oggetto che viene collegato a questa origine durante il `link_target` metodo.

## <a name="choice"></a><a name="ctor"></a> scelta

Costruisce un blocco della messaggistica `choice` .

```cpp
explicit choice(
    T _Tuple);

choice(
    Scheduler& _PScheduler,
    T _Tuple);

choice(
    ScheduleGroup& _PScheduleGroup,
    T _Tuple);

choice(
    choice&& _Choice);
```

### <a name="parameters"></a>Parametri

*_Tuple*<br/>
Oggetto `tuple` delle origini per choice.

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `choice` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `choice` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

*_Choice*<br/>
Blocco della messaggistica `choice` da cui copiare. Si noti che l'oggetto originale è orfano, si tratta quindi di un costruttore di spostamento.

### <a name="remarks"></a>Commenti

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il costruttore di spostamento non viene eseguito durante un blocco. Ciò significa che l'utente deve assicurarsi che non ci siano attività leggere in corso al momento dello spostamento. In caso contrario, possono verificarsi situazioni di race condition che possono portare a eccezioni oppure a uno stato incoerente.

## <a name="choice"></a><a name="dtor"></a> ~ Choice

Elimina definitivamente il `choice` blocco della messaggistica.

```cpp
~choice();
```

## <a name="consume"></a><a name="consume"></a> consumare

Utilizza un messaggio precedentemente offerto dal `choice` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<size_t>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto riservato `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `consume` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Commenti

Il `consume` metodo è simile a `accept` , ma deve essere sempre preceduto da una chiamata a `reserve` che ha restituito **`true`** .

## <a name="has_value"></a><a name="has_value"></a> has_value

Verifica se il `choice` blocco della messaggistica è stato ancora inizializzato con un valore.

```cpp
bool has_value() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco ha ricevuto un valore; **`false`** in caso contrario,.

## <a name="index"></a><a name="index"></a> Indice

Restituisce un indice nell'oggetto `tuple` che rappresenta l'elemento selezionato dal `choice` blocco della messaggistica.

```cpp
size_t index();
```

### <a name="return-value"></a>Valore restituito

Indice del messaggio.

### <a name="remarks"></a>Commenti

Il payload del messaggio può essere estratto usando il `get` metodo.

## <a name="link_target"></a><a name="link_target"></a> link_target

Collega un blocco di destinazione a questo `choice` blocco di messaggistica.

```cpp
virtual void link_target(_Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore a un `ITarget` blocco da collegare a questo `choice` blocco di messaggistica.

## <a name="release"></a><a name="release"></a> versione

Rilascia una prenotazione di messaggio precedente riuscita.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `release` metodo.

## <a name="release_ref"></a><a name="release_ref"></a> release_ref

Rilascia un conteggio di riferimenti in questo `choice` blocco di messaggistica.

```cpp
virtual void release_ref(_Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato da un `ITarget` oggetto che viene scollegato da questa origine. Il blocco di origine può rilasciare tutte le risorse riservate per il blocco di destinazione.

## <a name="reserve"></a><a name="reserve"></a> riserva

Riserva un messaggio offerto in precedenza dal `choice` blocco della messaggistica.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Dell' `message` oggetto riservato.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `reserve` metodo.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Commenti

Dopo aver chiamato `reserve` , in caso di esito positivo, è necessario chiamare o per ottenere `consume` `release` o concedere il possesso del messaggio, rispettivamente.

## <a name="unlink_target"></a><a name="unlink_target"></a> unlink_target

Scollega un blocco di destinazione da questo `choice` blocco di messaggistica.

```cpp
virtual void unlink_target(_Inout_ ITarget<size_t>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore a un `ITarget` blocco da scollegare da questo blocco di `choice` messaggistica.

## <a name="unlink_targets"></a><a name="unlink_targets"></a> unlink_targets

Scollega tutte le destinazioni da questo `choice` blocco di messaggistica.

```cpp
virtual void unlink_targets();
```

### <a name="remarks"></a>Commenti

Questo metodo non deve essere chiamato dal distruttore perché il distruttore del `single_assignment` blocco interno verrà scollegato correttamente.

## <a name="value"></a>Valore della proprietà <a name="value"></a>

Ottiene il messaggio il cui indice è stato selezionato dal `choice` blocco della messaggistica.

```cpp
template <
    typename _Payload_type
>
_Payload_type const& value();
```

### <a name="parameters"></a>Parametri

*_Payload_type*<br/>
Tipo di payload del messaggio.

### <a name="return-value"></a>Valore restituito

Payload del messaggio.

### <a name="remarks"></a>Commenti

Poiché un blocco di messaggistica `choice` può accettare input con tipi diversi di payload, è necessario specificare il tipo del payload al momento del recupero. È possibile determinare il tipo in base al risultato del `index` metodo.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe join](join-class.md)<br/>
[Classe single_assignment](single-assignment-class.md)
