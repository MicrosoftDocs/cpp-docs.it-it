---
title: Classe ITarget
ms.date: 11/04/2016
f1_keywords:
- ITarget
- AGENTS/concurrency::ITarget
- AGENTS/concurrency::ITarget::propagate
- AGENTS/concurrency::ITarget::send
- AGENTS/concurrency::ITarget::supports_anonymous_source
- AGENTS/concurrency::ITarget::link_source
- AGENTS/concurrency::ITarget::unlink_source
- AGENTS/concurrency::ITarget::unlink_sources
helpviewer_keywords:
- ITarget class
ms.assetid: 5678db25-112a-4f72-be13-42e16b67c48b
ms.openlocfilehash: 39aebd9d82f098225c1275ac6f43d64fc1ce3ba8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231715"
---
# <a name="itarget-class"></a>Classe ITarget

La classe `ITarget` corrisponde all'interfaccia per tutti i blocchi di destinazione. I blocchi di destinazione usano messaggi a loro offerti da blocchi `ISource`.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class ITarget;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati del payload all'interno dei messaggi accettati dal blocco di destinazione.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`filter_method`|Firma di qualsiasi metodo utilizzato dal blocco che restituisce un **`bool`** valore per determinare se un messaggio offerto deve essere accettato.|
|`type`|Alias del tipo per `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Distruttore ~ ITarget](#dtor)|Elimina definitivamente l' `ITarget` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[propagare](#propagate)|Quando sottoposto a override in una classe derivata, passa in modo asincrono un messaggio da un blocco di origine a questo blocco di destinazione.|
|[send](#send)|Quando ne viene eseguito l'override in una classe derivata, passa in modo sincrono un messaggio al blocco di destinazione.|
|[supports_anonymous_source](#supports_anonymous_source)|Quando viene sottoposto a override in una classe derivata, restituisce true o false a seconda che il blocco dei messaggi accetti messaggi offerti da un'origine che non è collegata a esso. Se il metodo sottoposto a override restituisce **`true`** , la destinazione non può posticipare un messaggio offerto, in quanto l'utilizzo di un messaggio posticipato in un secondo momento richiede l'identificazione dell'origine nel registro di sistema dei collegamenti di origine.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[link_source](#link_source)|Quando sottoposto a override in una classe derivata, collega un blocco di origine specificato a questo `ITarget` blocco.|
|[unlink_source](#unlink_source)|Quando sottoposto a override in una classe derivata, scollega un blocco di origine specificato da questo `ITarget` blocco.|
|[unlink_sources](#unlink_sources)|Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di origine dal `ITarget` blocco.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="itarget"></a><a name="dtor"></a>~ ITarget

Elimina definitivamente l' `ITarget` oggetto.

```cpp
virtual ~ITarget();
```

## <a name="link_source"></a><a name="link_source"></a>link_source

Quando sottoposto a override in una classe derivata, collega un blocco di origine specificato a questo `ITarget` blocco.

```cpp
virtual void link_source(_Inout_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
`ISource`Blocco collegato a questo `ITarget` blocco.

### <a name="remarks"></a>Osservazioni

Questa funzione non deve essere chiamata direttamente in un `ITarget` blocco. I blocchi devono essere collegati insieme usando il `link_target` metodo sui `ISource` blocchi, che richiameranno il `link_source` Metodo sulla destinazione corrispondente.

## <a name="propagate"></a><a name="propagate"></a>propagare

Quando sottoposto a override in una classe derivata, passa in modo asincrono un messaggio da un blocco di origine a questo blocco di destinazione.

```cpp
virtual message_status propagate(
    _Inout_opt_ message<T>* _PMessage,
    _Inout_opt_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il `_PMessage` parametro o `_PSource` è `NULL` .

## <a name="send"></a><a name="send"></a>Invia

Quando ne viene eseguito l'override in una classe derivata, passa in modo sincrono un messaggio al blocco di destinazione.

```cpp
virtual message_status send(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Puntatore al blocco di origine che offre il messaggio.

### <a name="return-value"></a>Valore restituito

[Message_status](concurrency-namespace-enums.md) indicazione della decisione da parte della destinazione con il messaggio.

### <a name="remarks"></a>Osservazioni

Il metodo genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il `_PMessage` parametro o `_PSource` è `NULL` .

L'utilizzo del `send` metodo al di fuori dell'avvio del messaggio e della propagazione dei messaggi all'interno di una rete è pericoloso e può causare un deadlock.

Quando `send` restituisce, il messaggio è già stato accettato e trasferito nel blocco di destinazione oppure è stato rifiutato dalla destinazione.

## <a name="supports_anonymous_source"></a><a name="supports_anonymous_source"></a>supports_anonymous_source

Quando viene sottoposto a override in una classe derivata, restituisce true o false a seconda che il blocco dei messaggi accetti messaggi offerti da un'origine che non è collegata a esso. Se il metodo sottoposto a override restituisce **`true`** , la destinazione non può posticipare un messaggio offerto, in quanto l'utilizzo di un messaggio posticipato in un secondo momento richiede l'identificazione dell'origine nel registro di collegamento Soure.

```cpp
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il blocco può accettare il messaggio da un'origine non collegata in **`false`** altro modo.

## <a name="unlink_source"></a><a name="unlink_source"></a>unlink_source

Quando sottoposto a override in una classe derivata, scollega un blocco di origine specificato da questo `ITarget` blocco.

```cpp
virtual void unlink_source(_Inout_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
`ISource`Blocco da scollegare dal `ITarget` blocco.

### <a name="remarks"></a>Osservazioni

Questa funzione non deve essere chiamata direttamente in un `ITarget` blocco. I blocchi devono essere disconnessi mediante i `unlink_target` `unlink_targets` metodi o sui `ISource` blocchi, che richiameranno il `unlink_source` Metodo sulla destinazione corrispondente.

## <a name="unlink_sources"></a><a name="unlink_sources"></a>unlink_sources

Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di origine dal `ITarget` blocco.

```cpp
virtual void unlink_sources() = 0;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe ISource](isource-class.md)
