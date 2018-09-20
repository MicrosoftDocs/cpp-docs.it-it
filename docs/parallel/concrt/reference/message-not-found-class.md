---
title: Classe message_not_found | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- message_not_found
- CONCRT/concurrency::message_not_found
- CONCRT/concurrency::message_not_found::message_not_found
dev_langs:
- C++
helpviewer_keywords:
- message_not_found class
ms.assetid: a96b9995-5ad7-4600-83c8-c15e329ff10e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e73a33817ef39d8998173dacc282e6ee9477944
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46445609"
---
# <a name="messagenotfound-class"></a>Classe message_not_found

Questa classe descrive un'eccezione generata quando un blocco della messaggistica non è in grado di trovare un messaggio richiesto.

## <a name="syntax"></a>Sintassi

```
class message_not_found : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[message_not_found](#ctor)|Di overload. Costruisce un oggetto `message_not_found`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`message_not_found`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> message_not_found

Costruisce un oggetto `message_not_found`.

```
explicit _CRTIMP message_not_found(_In_z_ const char* _Message) throw();

message_not_found() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)

