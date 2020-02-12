---
title: Classe invalid_link_target
ms.date: 11/04/2016
f1_keywords:
- invalid_link_target
- CONCRT/concurrency::invalid_link_target
- CONCRT/concurrency::invalid_link_target::invalid_link_target
helpviewer_keywords:
- invalid_link_target class
ms.assetid: 33b64885-34d8-4d4e-a893-02e9f19c958e
ms.openlocfilehash: bd3d82c06c174c69c60dec33592110f4de72ac99
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141041"
---
# <a name="invalid_link_target-class"></a>Classe invalid_link_target

Questa classe descrive un'eccezione generata quando il metodo `link_target` di un blocco della messaggistica viene chiamato e tale blocco non è in grado di collegarsi alla destinazione. Può essere il risultato del superamento del numero di collegamenti consentito dal blocco della messaggistica o del tentativo di collegare una destinazione specifica due volte alla stessa origine.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_link_target : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[invalid_link_target](#ctor)|Di overload. Costruisce un oggetto `invalid_link_target`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_link_target`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>invalid_link_target

Costruisce un oggetto `invalid_link_target`.

```cpp
explicit _CRTIMP invalid_link_target(_In_z_ const char* _Message) throw();

invalid_link_target() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)
