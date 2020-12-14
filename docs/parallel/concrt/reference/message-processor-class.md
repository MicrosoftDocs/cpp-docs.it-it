---
description: 'Altre informazioni su: message_processor Class'
title: Classe message_processor
ms.date: 11/04/2016
f1_keywords:
- message_processor
- AGENTS/concurrency::message_processor
- AGENTS/concurrency::message_processor::async_send
- AGENTS/concurrency::message_processor::sync_send
- AGENTS/concurrency::message_processor::wait
- AGENTS/concurrency::message_processor::process_incoming_message
helpviewer_keywords:
- message_processor class
ms.assetid: 23afb052-daa7-44ed-bf24-d2513db748da
ms.openlocfilehash: f74314bde6e12ea8b00bfc7bfd2567ca15864f75
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202197"
---
# <a name="message_processor-class"></a>Classe message_processor

La classe `message_processor` rappresenta la classe base astratta per l'elaborazione degli oggetti `message`. Non esiste garanzia sull'ordinamento dei messaggi.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class message_processor;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di dati del payload all'interno dei messaggi gestiti da questo `message_processor` oggetto.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`type`|Alias del tipo per `T` .|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[async_send](#async_send)|Quando sottoposto a override in una classe derivata, inserisce i messaggi nel blocco in modo asincrono.|
|[sync_send](#sync_send)|Quando sottoposto a override in una classe derivata, inserisce i messaggi nel blocco in modo sincrono.|
|[attendere](#wait)|Quando sottoposto a override in una classe derivata, attende il completamento di tutte le operazioni asincrone.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[process_incoming_message](#process_incoming_message)|Quando sottoposto a override in una classe derivata, esegue l'elaborazione diretta dei messaggi nel blocco. Viene chiamato una volta ogni volta che viene aggiunto un nuovo messaggio e la coda risulta vuota.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`message_processor`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="async_send"></a><a name="async_send"></a> async_send

Quando sottoposto a override in una classe derivata, inserisce i messaggi nel blocco in modo asincrono.

```cpp
virtual void async_send(_Inout_opt_ message<T>* _Msg) = 0;
```

### <a name="parameters"></a>Parametri

*_Msg*<br/>
`message`Oggetto da inviare in modo asincrono.

### <a name="remarks"></a>Commenti

Le implementazioni del processore devono eseguire l'override di questo metodo.

## <a name="process_incoming_message"></a><a name="process_incoming_message"></a> process_incoming_message

Quando sottoposto a override in una classe derivata, esegue l'elaborazione diretta dei messaggi nel blocco. Viene chiamato una volta ogni volta che viene aggiunto un nuovo messaggio e la coda risulta vuota.

```cpp
virtual void process_incoming_message() = 0;
```

### <a name="remarks"></a>Commenti

Le implementazioni del blocco di messaggi devono eseguire l'override di questo metodo.

## <a name="sync_send"></a><a name="sync_send"></a> sync_send

Quando sottoposto a override in una classe derivata, inserisce i messaggi nel blocco in modo sincrono.

```cpp
virtual void sync_send(_Inout_opt_ message<T>* _Msg) = 0;
```

### <a name="parameters"></a>Parametri

*_Msg*<br/>
`message`Oggetto da inviare in modo sincrono.

### <a name="remarks"></a>Commenti

Le implementazioni del processore devono eseguire l'override di questo metodo.

## <a name="wait"></a><a name="wait"></a> attendere

Quando sottoposto a override in una classe derivata, attende il completamento di tutte le operazioni asincrone.

```cpp
virtual void wait() = 0;
```

### <a name="remarks"></a>Commenti

Le implementazioni del processore devono eseguire l'override di questo metodo.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe ordered_message_processor](ordered-message-processor-class.md)
