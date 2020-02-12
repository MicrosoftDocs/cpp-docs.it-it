---
title: Classe invalid_oversubscribe_operation
ms.date: 11/04/2016
f1_keywords:
- invalid_oversubscribe_operation
- CONCRT/concurrency::invalid_oversubscribe_operation
- CONCRT/concurrency::invalid_oversubscribe_operation::invalid_oversubscribe_operation
helpviewer_keywords:
- invalid_oversubscribe_operation class
ms.assetid: 0a9c5f08-d5e6-4ad0-90a9-517472b3ac28
ms.openlocfilehash: 7a879fc2da2f963cd4b5ea5fcd7e9506f86ce051
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140842"
---
# <a name="invalid_oversubscribe_operation-class"></a>Classe invalid_oversubscribe_operation

Questa classe descrive un'eccezione generata quando il metodo `Context::Oversubscribe` viene chiamato con il parametro `_BeginOversubscription` impostato su **false** senza una chiamata precedente al metodo `Context::Oversubscribe` con il parametro `_BeginOversubscription` impostato su **true**.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_oversubscribe_operation : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[invalid_oversubscribe_operation](#ctor)|Di overload. Costruisce un oggetto `invalid_oversubscribe_operation`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_oversubscribe_operation`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>invalid_oversubscribe_operation

Costruisce un oggetto `invalid_oversubscribe_operation`.

```cpp
explicit _CRTIMP invalid_oversubscribe_operation(_In_z_ const char* _Message) throw();

invalid_oversubscribe_operation() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
