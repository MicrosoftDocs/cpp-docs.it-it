---
title: Classe message
ms.date: 11/04/2016
f1_keywords:
- message
- AGENTS/concurrency::message
- AGENTS/concurrency::message::message
- AGENTS/concurrency::message::add_ref
- AGENTS/concurrency::message::msg_id
- AGENTS/concurrency::message::remove_ref
- AGENTS/concurrency::message::payload
helpviewer_keywords:
- message class
ms.assetid: 3e1f3505-6c0c-486c-8191-666d0880ec62
ms.openlocfilehash: 700d052b6f22c970387a3ab45d299538a5b74e1b
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139538"
---
# <a name="message-class"></a>Classe message

Busta del messaggio di base contenente il payload dei dati passati tra blocchi della messaggistica.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class message : public ::Concurrency::details::_Runtime_object;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati del payload all'interno del messaggio.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Alias di tipo per `T`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[message](#ctor)|Di overload. Costruisce un oggetto `message`.|
|[~ distruttore messaggi](#dtor)|Elimina definitivamente l'oggetto `message`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[add_ref](#add_ref)|Aggiunge al conteggio dei riferimenti per l'oggetto `message`. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.|
|[msg_id](#msg_id)|Restituisce l'ID dell'oggetto `message`.|
|[remove_ref](#remove_ref)|Sottrae dal conteggio dei riferimenti per l'oggetto `message`. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[payload](#payload)|Payload dell'oggetto `message`.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`message`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add_ref"></a>add_ref

Aggiunge al conteggio dei riferimenti per l'oggetto `message`. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.

```cpp
long add_ref();
```

### <a name="return-value"></a>Valore restituito

Nuovo valore del conteggio dei riferimenti.

## <a name="ctor"></a>Messaggio

Costruisce un oggetto `message`.

```cpp
message(
    T const& _P);

message(
    T const& _P,
    runtime_object_identity _Id);

message(
    message const& _Msg);

message(
    _In_ message const* _Msg);
```

### <a name="parameters"></a>Parametri

*_P*<br/>
Payload del messaggio.

*_Id*<br/>
ID univoco di questo messaggio.

*_Msg*<br/>
Riferimento o puntatore a un oggetto `message`.

### <a name="remarks"></a>Osservazioni

Il costruttore che accetta un puntatore a un oggetto `message` come argomento genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_Msg` è `NULL`.

## <a name="dtor"></a>messaggio ~

Elimina definitivamente l'oggetto `message`.

```cpp
virtual ~message();
```

## <a name="msg_id"></a>msg_id

Restituisce l'ID dell'oggetto `message`.

```cpp
runtime_object_identity msg_id() const;
```

### <a name="return-value"></a>Valore restituito

`runtime_object_identity` dell'oggetto `message`.

## <a name="payload"></a>payload

Payload dell'oggetto `message`.

```cpp
T const payload;
```

## <a name="remove_ref"></a>remove_ref

Sottrae dal conteggio dei riferimenti per l'oggetto `message`. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.

```cpp
long remove_ref();
```

### <a name="return-value"></a>Valore restituito

Nuovo valore del conteggio dei riferimenti.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
