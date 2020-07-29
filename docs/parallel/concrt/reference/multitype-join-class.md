---
title: Classe multitype_join
ms.date: 11/04/2016
f1_keywords:
- multitype_join
- AGENTS/concurrency::multitype_join
- AGENTS/concurrency::multitype_join::multitype_join
- AGENTS/concurrency::multitype_join::accept
- AGENTS/concurrency::multitype_join::acquire_ref
- AGENTS/concurrency::multitype_join::consume
- AGENTS/concurrency::multitype_join::link_target
- AGENTS/concurrency::multitype_join::release
- AGENTS/concurrency::multitype_join::release_ref
- AGENTS/concurrency::multitype_join::reserve
- AGENTS/concurrency::multitype_join::unlink_target
- AGENTS/concurrency::multitype_join::unlink_targets
helpviewer_keywords:
- multitype_join class
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
ms.openlocfilehash: c648e77e404cf39eab281a93e03d8b427da375f8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87205860"
---
# <a name="multitype_join-class"></a>Classe multitype_join

Un blocco della messaggistica `multitype_join` è un blocco multi-origine, a destinazione singola, che combina messaggi di diverso tipo da ciascuna delle sue origini e offre una tupla dei messaggi combinati alle sue destinazioni.

## <a name="syntax"></a>Sintassi

```cpp
template<
    typename T,
    join_type _Jtype = non_greedy
>
class multitype_join: public ISource<typename _Unwrap<T>::type>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
`tuple`Tipo di payload dei messaggi aggiunti e propagati dal blocco.

*_Jtype*<br/>
Il tipo di `join` blocco è, `greedy` o`non_greedy`

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Alias del tipo per `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[multitype_join](#ctor)|Di overload. Costruisce un blocco della messaggistica `multitype_join` .|
|[Distruttore ~ multitype_join](#dtor)|Elimina definitivamente il `multitype_join` blocco della messaggistica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accettare](#accept)|Accetta un messaggio offerto da questo `multitype_join` blocco, trasferendo la proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Acquisisce un conteggio di riferimenti in questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.|
|[consumare](#consume)|Utilizza un messaggio precedentemente offerto dal blocco della `multitype_join` messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target](#link_target)|Collega un blocco di destinazione a questo `multitype_join` blocco di messaggistica.|
|[versione](#release)|Rilascia una prenotazione di messaggio precedente riuscita.|
|[release_ref](#release_ref)|Rilascia un conteggio di riferimenti in questo `multiple_join` blocco di messaggistica.|
|[riserva](#reserve)|Riserva un messaggio offerto in precedenza dal `multitype_join` blocco della messaggistica.|
|[unlink_target](#unlink_target)|Scollega un blocco di destinazione da questo `multitype_join` blocco di messaggistica.|
|[unlink_targets](#unlink_targets)|Scollega tutte le destinazioni da questo `multitype_join` blocco di messaggistica. Esegue l'override di [ISource:: unlink_targets](isource-class.md#unlink_targets).|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

`multitype_join`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept"></a><a name="accept"></a>accettare

Accetta un messaggio offerto da questo `multitype_join` blocco, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Destination_type>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `accept` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore al messaggio di cui il chiamante è ora proprietario.

## <a name="acquire_ref"></a><a name="acquire_ref"></a>acquire_ref

Acquisisce un conteggio di riferimenti in questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.

```cpp
virtual void acquire_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da un `ITarget` oggetto che viene collegato a questa origine durante il `link_target` metodo.

## <a name="consume"></a><a name="consume"></a>consumare

Utilizza un messaggio precedentemente offerto dal blocco della `multitype_join` messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<_Destination_type>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto riservato `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `consume` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore all' `message` oggetto di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Il `consume` metodo è simile a `accept` , ma deve essere sempre preceduto da una chiamata a `reserve` che ha restituito **`true`** .

## <a name="link_target"></a><a name="link_target"></a>link_target

Collega un blocco di destinazione a questo `multitype_join` blocco di messaggistica.

```cpp
virtual void link_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore a un `ITarget` blocco da collegare a questo `multitype_join` blocco di messaggistica.

## <a name="multitype_join"></a><a name="ctor"></a>multitype_join

Costruisce un blocco della messaggistica `multitype_join` .

```cpp
explicit multitype_join(
    T _Tuple);

multitype_join(
    Scheduler& _PScheduler,
    T _Tuple);

multitype_join(
    ScheduleGroup& _PScheduleGroup,
    T _Tuple);

multitype_join(
    multitype_join&& _Join);
```

### <a name="parameters"></a>Parametri

*_Tuple*<br/>
Oggetto `tuple` delle origini per questo blocco della messaggistica `multitype_join` .

*_PScheduler*<br/>
Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `multitype_join` .

*_PScheduleGroup*<br/>
Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `multitype_join` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

*_Join*<br/>
Blocco della messaggistica `multitype_join` da cui copiare. Si noti che l'oggetto originale è orfano, si tratta quindi di un costruttore di spostamento.

### <a name="remarks"></a>Osservazioni

Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.

Il costruttore di spostamento non viene eseguito durante un blocco. Ciò significa che l'utente deve assicurarsi che non ci siano attività leggere in corso al momento dello spostamento. In caso contrario, possono verificarsi situazioni di race condition che possono portare a eccezioni oppure a uno stato incoerente.

## <a name="multitype_join"></a><a name="dtor"></a>~ multitype_join

Elimina definitivamente il `multitype_join` blocco della messaggistica.

```cpp
~multitype_join();
```

## <a name="release"></a><a name="release"></a>versione

Rilascia una prenotazione di messaggio precedente riuscita.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` `message` Oggetto dell'oggetto da rilasciare.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `release` metodo.

## <a name="release_ref"></a><a name="release_ref"></a>release_ref

Rilascia un conteggio di riferimenti in questo `multiple_join` blocco di messaggistica.

```cpp
virtual void release_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da un `ITarget` oggetto che viene scollegato da questa origine. Il blocco di origine può rilasciare tutte le risorse riservate per il blocco di destinazione.

## <a name="reserve"></a><a name="reserve"></a>riserva

Riserva un messaggio offerto in precedenza dal `multitype_join` blocco della messaggistica.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Dell' `message` oggetto riservato.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `reserve` metodo.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Osservazioni

Dopo aver chiamato `reserve` , in caso di esito positivo, è necessario chiamare o per ottenere `consume` `release` o concedere il possesso del messaggio, rispettivamente.

## <a name="unlink_target"></a><a name="unlink_target"></a>unlink_target

Scollega un blocco di destinazione da questo `multitype_join` blocco di messaggistica.

```cpp
virtual void unlink_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore a un `ITarget` blocco da scollegare da questo blocco di `multitype_join` messaggistica.

## <a name="unlink_targets"></a><a name="unlink_targets"></a>unlink_targets

Scollega tutte le destinazioni da questo `multitype_join` blocco di messaggistica.

```cpp
virtual void unlink_targets();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe choice](choice-class.md)<br/>
[Classe join](join-class.md)
