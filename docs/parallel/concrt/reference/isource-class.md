---
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
ms.openlocfilehash: a9ef9990db6376536f2f2a15c053b3b1d4ed12cf
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139311"
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

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`source_type`|Alias di tipo per `T`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Distruttore ~ ISource](#dtor)|Elimina definitivamente l'oggetto `ISource`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accettare](#accept)|Quando sottoposto a override in una classe derivata, accetta un messaggio offerto da questo blocco di `ISource`, trasferendo la proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Quando ne viene eseguito l'override in una classe derivata, acquisisce un conteggio di riferimenti in questo blocco di `ISource` per impedire l'eliminazione.|
|[utilizzare](#consume)|Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente offerto dal blocco `ISource` e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|
|[link_target](#link_target)|Quando sottoposto a override in una classe derivata, collega un blocco di destinazione a questo blocco di `ISource`.|
|[release](#release)|Quando sottoposto a override in una classe derivata, rilascia una prenotazione di messaggi precedente riuscita.|
|[release_ref](#release_ref)|Quando sottoposto a override in una classe derivata, rilascia un conteggio di riferimenti in questo blocco `ISource`.|
|[reserve](#reserve)|Quando sottoposto a override in una classe derivata, riserva un messaggio offerto in precedenza dal blocco `ISource`.|
|[unlink_target](#unlink_target)|Quando ne viene eseguito l'override in una classe derivata, scollega un blocco di destinazione da questo blocco di `ISource`, se è stato trovato in precedenza collegato.|
|[unlink_targets](#unlink_targets)|Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal blocco `ISource`.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISource`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="accept"></a>accettare

Quando sottoposto a override in una classe derivata, accetta un messaggio offerto da questo blocco di `ISource`, trasferendo la proprietà al chiamante.

```cpp
virtual message<T>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` dell'oggetto `message` fornito.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il metodo `accept`.

### <a name="return-value"></a>Valore restituito

Puntatore al messaggio di cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Il metodo `accept` viene chiamato da una destinazione mentre un messaggio viene offerto da questo blocco di `ISource`. Il puntatore al messaggio restituito può essere diverso da quello passato nel metodo `propagate` del blocco di `ITarget`, se questa origine decide di eseguire una copia del messaggio.

## <a name="acquire_ref"></a>acquire_ref

Quando ne viene eseguito l'override in una classe derivata, acquisisce un conteggio di riferimenti in questo blocco di `ISource` per impedire l'eliminazione.

```cpp
virtual void acquire_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da un oggetto `ITarget` che viene collegato a questa origine durante il `link_target` metodo.

## <a name="consume"></a>consumare

Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente offerto dal blocco `ISource` e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.

```cpp
virtual message<T>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` dell'oggetto `message` riservato.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il metodo `consume`.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto `message` cui il chiamante è ora proprietario.

### <a name="remarks"></a>Osservazioni

Il metodo `consume` è simile a `accept`, ma deve essere sempre preceduto da una chiamata a `reserve` che ha restituito **true**.

## <a name="dtor"></a>~ ISource

Elimina definitivamente l'oggetto `ISource`.

```cpp
virtual ~ISource();
```

## <a name="link_target"></a>link_target

Quando sottoposto a override in una classe derivata, collega un blocco di destinazione a questo blocco di `ISource`.

```cpp
virtual void link_target(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione collegato a questo blocco `ISource`.

## <a name="release"></a>versione

Quando sottoposto a override in una classe derivata, rilascia una prenotazione di messaggi precedente riuscita.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` dell'oggetto `message` riservato.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il metodo `release`.

## <a name="release_ref"></a>release_ref

Quando sottoposto a override in una classe derivata, rilascia un conteggio di riferimenti in questo blocco `ISource`.

```cpp
virtual void release_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato da un oggetto `ITarget` che viene scollegato da questa origine. Il blocco di origine può rilasciare tutte le risorse riservate per il blocco di destinazione.

## <a name="reserve"></a>riserva

Quando sottoposto a override in una classe derivata, riserva un messaggio offerto in precedenza dal blocco `ISource`.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
`runtime_object_identity` dell'oggetto `message` fornito.

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama il metodo `reserve`.

### <a name="return-value"></a>Valore restituito

**true** se il messaggio è stato riservato correttamente; in caso contrario, **false** . Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Osservazioni

Dopo aver chiamato `reserve`, in caso di esito positivo, è necessario chiamare `consume` o `release` per ottenere o concedere il possesso del messaggio, rispettivamente.

## <a name="unlink_target"></a>unlink_target

Quando ne viene eseguito l'override in una classe derivata, scollega un blocco di destinazione da questo blocco di `ISource`, se è stato trovato in precedenza collegato.

```cpp
virtual void unlink_target(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione da scollegare dal blocco `ISource`.

## <a name="unlink_targets"></a>unlink_targets

Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal blocco `ISource`.

```cpp
virtual void unlink_targets() = 0;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ITarget](itarget-class.md)
