---
description: 'Altre informazioni su: message_not_found Class'
title: Classe message_not_found
ms.date: 11/04/2016
f1_keywords:
- message_not_found
- CONCRT/concurrency::message_not_found
- CONCRT/concurrency::message_not_found::message_not_found
helpviewer_keywords:
- message_not_found class
ms.assetid: a96b9995-5ad7-4600-83c8-c15e329ff10e
ms.openlocfilehash: c0b098a530768617b2fa2cf52dfe374dc44a2c12
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169385"
---
# <a name="message_not_found-class"></a>Classe message_not_found

Questa classe descrive un'eccezione generata quando un blocco della messaggistica non è in grado di trovare un messaggio richiesto.

## <a name="syntax"></a>Sintassi

```cpp
class message_not_found : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[message_not_found](#ctor)|Di overload. Costruisce un oggetto `message_not_found`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`message_not_found`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="message_not_found"></a><a name="ctor"></a> message_not_found

Costruisce un oggetto `message_not_found`.

```cpp
explicit _CRTIMP message_not_found(_In_z_ const char* _Message) throw();

message_not_found() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)
