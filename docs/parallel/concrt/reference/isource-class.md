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
ms.openlocfilehash: 5b0704f3d666eca08bafb33f9236709478d347d8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62301877"
---
# <a name="isource-class"></a>Classe ISource

La classe `ISource` corrisponde all'interfaccia per tutti i blocchi di origine. I blocchi di origine propagano messaggi ai blocchi `ITarget`.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ISource;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati del payload all'interno di messaggi generati dal blocco di origine.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`source_type`|Un alias del tipo per `T`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[~ Distruttore ISource](#dtor)|Elimina definitivamente il `ISource` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[accept](#accept)|Quando sottoposto a override in una classe derivata, accetta un messaggio in cui è stato offerto da questo `ISource` blocco, trasferendo la proprietà al chiamante.|
|[acquire_ref](#acquire_ref)|Quando sottoposto a override in una classe derivata, acquisisce un conteggio dei riferimenti su questo `ISource` blocco, per impedire l'eliminazione.|
|[consume](#consume)|Quando sottoposto a override in una classe derivata, utilizza un messaggio offerto in precedenza da questo `ISource` block e riservato correttamente dalla destinazione, trasferimento di proprietà al chiamante.|
|[link_target](#link_target)|Quando sottoposto a override in una classe derivata, è possibile collegare un blocco di destinazione a questo `ISource` blocco.|
|[release](#release)|Quando sottoposto a override in una classe derivata, rilascia una prenotazione corretta del messaggio precedente.|
|[release_ref](#release_ref)|Quando sottoposto a override in una classe derivata, rilascia un conteggio dei riferimenti su questo `ISource` blocco.|
|[reserve](#reserve)|Sottoposto a override in una classe derivata, consente di riservare un messaggio offerto in precedenza da questo `ISource` blocco.|
|[unlink_target](#unlink_target)|Quando sottoposto a override in una classe derivata, consente di scollegare un blocco di destinazione da questo `ISource` bloccare, se trovato in precedenza da collegare.|
|[unlink_targets](#unlink_targets)|Quando sottoposto a override in una classe derivata, consente di scollegare tutti i blocchi di destinazione dal `ISource` blocco.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ISource`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="accept"></a> Accettare

Quando sottoposto a override in una classe derivata, accetta un messaggio in cui è stato offerto da questo `ISource` blocco, trasferendo la proprietà al chiamante.

```
virtual message<T>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

*_PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `accept` (metodo).

### <a name="return-value"></a>Valore restituito

Un puntatore al messaggio di cui il chiamante può ora la proprietà di.

### <a name="remarks"></a>Note

Il `accept` metodo viene chiamato da una destinazione, mentre un messaggio viene offerto da questo `ISource` blocco. Il puntatore del messaggio restituito può essere diverso da quello passato il `propagate` metodo del `ITarget` bloccare, se questa origine si decide di creare una copia del messaggio.

##  <a name="acquire_ref"></a> acquire_ref

Quando sottoposto a override in una classe derivata, acquisisce un conteggio dei riferimenti su questo `ISource` blocco, per impedire l'eliminazione.

```
virtual void acquire_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Note

Questo metodo viene chiamato da un `ITarget` oggetto collegato all'origine durante il `link_target` (metodo).

##  <a name="consume"></a> Utilizzare

Quando sottoposto a override in una classe derivata, utilizza un messaggio offerto in precedenza da questo `ISource` block e riservato correttamente dalla destinazione, trasferimento di proprietà al chiamante.

```
virtual message<T>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` riservato `message` oggetto.

*_PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `consume` (metodo).

### <a name="return-value"></a>Valore restituito

Un puntatore al `message` che il chiamante ora possiede la proprietà dell'oggetto.

### <a name="remarks"></a>Note

Il `consume` è simile al metodo `accept`, ma deve essere sempre preceduto da una chiamata a `reserve` che ha restituito **true**.

##  <a name="dtor"></a> ~ISource

Elimina definitivamente il `ISource` oggetto.

```
virtual ~ISource();
```

##  <a name="link_target"></a> link_target

Quando sottoposto a override in una classe derivata, è possibile collegare un blocco di destinazione a questo `ISource` blocco.

```
virtual void link_target(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Un puntatore al blocco di destinazione da collegare a questa `ISource` blocco.

##  <a name="release"></a> Versione

Quando sottoposto a override in una classe derivata, rilascia una prenotazione corretta del messaggio precedente.

```
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` riservato `message` oggetto.

*_PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `release` (metodo).

##  <a name="release_ref"></a> release_ref

Quando sottoposto a override in una classe derivata, rilascia un conteggio dei riferimenti su questo `ISource` blocco.

```
virtual void release_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Puntatore al blocco di destinazione che chiama questo metodo.

### <a name="remarks"></a>Note

Questo metodo viene chiamato da un `ITarget` oggetto che viene viene scollegato da questa origine. Il blocco di origine è autorizzato a rilasciare le risorse riservate per il blocco di destinazione.

##  <a name="reserve"></a> riservare

Sottoposto a override in una classe derivata, consente di riservare un messaggio offerto in precedenza da questo `ISource` blocco.

```
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_MsgId*<br/>
Il `runtime_object_identity` proposto `message` oggetto.

*_PTarget*<br/>
Un puntatore al blocco di destinazione che chiama il `reserve` (metodo).

### <a name="return-value"></a>Valore restituito

**true** se il messaggio è stato riservato, **false** in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.

### <a name="remarks"></a>Note

Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per richiedere o rilasciare il possesso del messaggio, rispettivamente.

##  <a name="unlink_target"></a> unlink_target

Quando sottoposto a override in una classe derivata, consente di scollegare un blocco di destinazione da questo `ISource` bloccare, se trovato in precedenza da collegare.

```
virtual void unlink_target(_Inout_ ITarget<T>* _PTarget) = 0;
```

### <a name="parameters"></a>Parametri

*_PTarget*<br/>
Un puntatore al blocco di destinazione da scollegare dal `ISource` blocco.

##  <a name="unlink_targets"></a> unlink_targets

Quando sottoposto a override in una classe derivata, consente di scollegare tutti i blocchi di destinazione dal `ISource` blocco.

```
virtual void unlink_targets() = 0;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ITarget](itarget-class.md)
