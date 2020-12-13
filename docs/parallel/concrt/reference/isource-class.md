---
description: 'Altre informazioni su: Classe ISource'
title: Classe ISource
ms.date: 11/04/2016
f1_keywords:
- ISource
- AGENTS/concurrency::ISource
- AGENTS/concurrency::ISource::accept
- AGENTS/concurrency::ISource::acquire_ref
- AGENTS/concurrency::ISource::consume
- AGENTS/concurrency::ISource::link_target
- AGENTS/concurrency::ISource::release
- AGENTS/concurrency::ISource::release_ref
- AGENTS/concurrency::ISource::reserve
- AGENTS/concurrency::ISource::unlink_target
- AGENTS/concurrency::ISource::unlink_targets
helpviewer_keywords:
- ISource class
ms.assetid: c7b73463-42f6-4dcc-801a-81379b12d35a
ms.openlocfilehash: 86a55c9ca056c0aebb98e00c12518293b316bcb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334434"
---
# <a name="isource-class"></a>Classe ISource

La classe `ISource` corrisponde all'interfaccia per tutti i blocchi di origine. I blocchi di origine propagano messaggi ai blocchi `ITarget`.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class ISource;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati del payload all'interno dei messaggi prodotti dal blocco di origine.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`source_type`|Alias del tipo per `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Distruttore ~ ISource](#dtor)|Elimina definitivamente l' `ISource` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[accettare](#accept)|Quando sottoposto a override in una classe derivata, accetta un messaggio offerto da questo `ISource` blocco, trasferendo la proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Quando sottoposto a override in una classe derivata, acquisisce un conteggio di riferimenti in questo `ISource` blocco per impedire l'eliminazione.|
|[consumare](#consume)|Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente offerto da questo `ISource` blocco e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target](#link_target)|Quando sottoposto a override in una classe derivata, collega un blocco di destinazione a questo `ISource` blocco.|
|[versione](#release)|Quando sottoposto a override in una classe derivata, rilascia una prenotazione di messaggi precedente riuscita.|
|[release_ref](#release_ref)|Quando sottoposto a override in una classe derivata, rilascia un conteggio di riferimenti in questo `ISource` blocco.|
|[riserva](#reserve)|Quando sottoposto a override in una classe derivata, riserva un messaggio offerto in precedenza dal `ISource` blocco.|
|[unlink_target](#unlink_target)|Quando ne viene eseguito l'override in una classe derivata, scollega un blocco di destinazione da questo `ISource` blocco, se è stato trovato in precedenza collegato.|
|[unlink_targets](#unlink_targets)|Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal `ISource` blocco.|

## <a name="remarks"></a>Commenti

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISource`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept"></a><a name="accept"></a> accettare

Quando sottoposto a override in una classe derivata, accetta un messaggio offerto da questo `ISource` blocco, trasferendo la proprietà al chiamante.

```cpp
virtual message<T>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `accept` metodo.

### <a name="return-value"></a>Valore restituito

Puntatore al messaggio di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Commenti

Il `accept` metodo viene chiamato da una destinazione mentre un messaggio viene offerto dal `ISource` blocco. Il puntatore al messaggio restituito può essere diverso da quello passato nel `propagate` metodo del `ITarget` blocco, se questa origine decide di eseguire una copia del messaggio.

## <a name="acquire_ref"></a><a name="acquire_ref"></a> acquire_ref

Quando sottoposto a override in una classe derivata, acquisisce un conteggio di riferimenti in questo `ISource` blocco per impedire l'eliminazione.

```cpp
virtual void acquire_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato da un `ITarget` oggetto che viene collegato a questa origine durante il `link_target` metodo.

## <a name="consume"></a><a name="consume"></a> consumare

Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente offerto da questo `ISource` blocco e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<T>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
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

## <a name="isource"></a><a name="dtor"></a> ~ ISource

Elimina definitivamente l' `ISource` oggetto.

```cpp
virtual ~ISource();
```

## <a name="link_target"></a><a name="link_target"></a> link_target

Quando sottoposto a override in una classe derivata, collega un blocco di destinazione a questo `ISource` blocco.

```cpp
virtual void link_target(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione collegato a questo `ISource` blocco.

## <a name="release"></a><a name="release"></a> versione

Quando sottoposto a override in una classe derivata, rilascia una prenotazione di messaggi precedente riuscita.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto riservato `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `release` metodo.

## <a name="release_ref"></a><a name="release_ref"></a> release_ref

Quando sottoposto a override in una classe derivata, rilascia un conteggio di riferimenti in questo `ISource` blocco.

```cpp
virtual void release_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato da un `ITarget` oggetto che viene scollegato da questa origine. Il blocco di origine può rilasciare tutte le risorse riservate per il blocco di destinazione.

## <a name="reserve"></a><a name="reserve"></a> riserva

Quando sottoposto a override in una classe derivata, riserva un messaggio offerto in precedenza dal `ISource` blocco.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity`Oggetto dell'oggetto fornito `message` .

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il `reserve` metodo.

### <a name="return-value"></a>Valore restituito

**`true`** Se il messaggio è stato riservato correttamente; **`false`** in caso contrario,. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Commenti

Dopo aver chiamato `reserve` , in caso di esito positivo, è necessario chiamare o per ottenere `consume` `release` o concedere il possesso del messaggio, rispettivamente.

## <a name="unlink_target"></a><a name="unlink_target"></a> unlink_target

Quando ne viene eseguito l'override in una classe derivata, scollega un blocco di destinazione da questo `ISource` blocco, se è stato trovato in precedenza collegato.

```cpp
virtual void unlink_target(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione da scollegare dal `ISource` blocco.

## <a name="unlink_targets"></a><a name="unlink_targets"></a> unlink_targets

Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal `ISource` blocco.

```cpp
virtual void unlink_targets() = 0;
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe ITarget](itarget-class.md)
