---
title: Classe message_processor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- message_processor
- AGENTS/concurrency::message_processor
- AGENTS/concurrency::message_processor::async_send
- AGENTS/concurrency::message_processor::sync_send
- AGENTS/concurrency::message_processor::wait
- AGENTS/concurrency::message_processor::process_incoming_message
dev_langs:
- C++
helpviewer_keywords:
- message_processor class
ms.assetid: 23afb052-daa7-44ed-bf24-d2513db748da
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3ff478b4471916fb51931ea59712be0d47d2b61
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404033"
---
# <a name="messageprocessor-class"></a>Classe message_processor

La classe `message_processor` rappresenta la classe base astratta per l'elaborazione degli oggetti `message`. Non esiste garanzia sull'ordinamento dei messaggi.

## <a name="syntax"></a>Sintassi

```
template<class T>
class message_processor;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati del payload all'interno di messaggi gestito da questo `message_processor` oggetto.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Un alias del tipo per `T`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[async_send](#async_send)|Quando sottoposto a override in una classe derivata, posiziona i messaggi in modo asincrono nel blocco.|
|[sync_send](#sync_send)|Quando sottoposto a override in una classe derivata, posiziona i messaggi in modo sincrono nel blocco.|
|[wait](#wait)|Quando sottoposto a override in una classe derivata, attende che tutte le operazioni asincrone completare.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[process_incoming_message](#process_incoming_message)|Quando sottoposto a override in una classe derivata, esegue l'elaborazione futura dei messaggi nel blocco. Chiamato una volta ogni volta che viene aggiunto un nuovo messaggio e la coda risulta vuota.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`message_processor`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="async_send"></a> async_send

Quando sottoposto a override in una classe derivata, posiziona i messaggi in modo asincrono nel blocco.

```
virtual void async_send(_Inout_opt_ message<T>* _Msg) = 0;
```

### <a name="parameters"></a>Parametri

*Msg*<br/>
Oggetto `message` oggetto da inviare in modo asincrono.

### <a name="remarks"></a>Note

Le implementazioni del processore devono eseguire l'override di questo metodo.

##  <a name="process_incoming_message"></a> process_incoming_message

Quando sottoposto a override in una classe derivata, esegue l'elaborazione futura dei messaggi nel blocco. Chiamato una volta ogni volta che viene aggiunto un nuovo messaggio e la coda risulta vuota.

```
virtual void process_incoming_message() = 0;
```

### <a name="remarks"></a>Note

Le implementazioni del blocco di messaggio deve eseguire l'override di questo metodo.

##  <a name="sync_send"></a> sync_send

Quando sottoposto a override in una classe derivata, posiziona i messaggi in modo sincrono nel blocco.

```
virtual void sync_send(_Inout_opt_ message<T>* _Msg) = 0;
```

### <a name="parameters"></a>Parametri

*Msg*<br/>
Oggetto `message` oggetto da inviare in modo sincrono.

### <a name="remarks"></a>Note

Le implementazioni del processore devono eseguire l'override di questo metodo.

##  <a name="wait"></a> Attendere

Quando sottoposto a override in una classe derivata, attende che tutte le operazioni asincrone completare.

```
virtual void wait() = 0;
```

### <a name="remarks"></a>Note

Le implementazioni del processore devono eseguire l'override di questo metodo.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ordered_message_processor](ordered-message-processor-class.md)
