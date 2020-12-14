---
description: 'Ulteriori informazioni su: classe messaggio'
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
ms.openlocfilehash: 0e15dafd9606e68f7a6ed1bed3795791c0f6870c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202314"
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

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`type`|Alias del tipo per `T` .|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[message](#ctor)|Di overload. Costruisce un oggetto `message`.|
|[~ distruttore messaggi](#dtor)|Elimina definitivamente l' `message` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[add_ref](#add_ref)|Aggiunge al conteggio dei riferimenti per l' `message` oggetto. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.|
|[msg_id](#msg_id)|Restituisce l'ID dell' `message` oggetto.|
|[remove_ref](#remove_ref)|Sottrae dal conteggio dei riferimenti per l' `message` oggetto. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[payload](#payload)|Payload dell' `message` oggetto.|

## <a name="remarks"></a>Commenti

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`message`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="add_ref"></a><a name="add_ref"></a> add_ref

Aggiunge al conteggio dei riferimenti per l' `message` oggetto. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.

```cpp
long add_ref();
```

### <a name="return-value"></a>Valore restituito

Nuovo valore del conteggio dei riferimenti.

## <a name="message"></a><a name="ctor"></a> Messaggio

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
Riferimento o puntatore a un `message` oggetto.

### <a name="remarks"></a>Commenti

Il costruttore che accetta un puntatore a un `message` oggetto come argomento genera un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) se il parametro `_Msg` è `NULL` .

## <a name="message"></a><a name="dtor"></a> messaggio ~

Elimina definitivamente l' `message` oggetto.

```cpp
virtual ~message();
```

## <a name="msg_id"></a><a name="msg_id"></a> msg_id

Restituisce l'ID dell' `message` oggetto.

```cpp
runtime_object_identity msg_id() const;
```

### <a name="return-value"></a>Valore restituito

`runtime_object_identity` dell'oggetto `message`.

## <a name="payload"></a><a name="payload"></a> payload

Payload dell' `message` oggetto.

```cpp
T const payload;
```

## <a name="remove_ref"></a><a name="remove_ref"></a> remove_ref

Sottrae dal conteggio dei riferimenti per l' `message` oggetto. Usato per i blocchi di messaggi che richiedono il conteggio dei riferimenti per determinare la durata dei messaggi.

```cpp
long remove_ref();
```

### <a name="return-value"></a>Valore restituito

Nuovo valore del conteggio dei riferimenti.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
