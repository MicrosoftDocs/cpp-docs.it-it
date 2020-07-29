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
ms.openlocfilehash: 0c95d234fee412c1dacb014dd135ca56fc73bf5e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87193965"
---
# <a name="invalid_oversubscribe_operation-class"></a>Classe invalid_oversubscribe_operation

Questa classe descrive un'eccezione generata quando il `Context::Oversubscribe` metodo viene chiamato con il `_BeginOversubscription` parametro impostato su **`false`** senza una chiamata precedente al `Context::Oversubscribe` metodo con il `_BeginOversubscription` parametro impostato su **`true`** .

## <a name="syntax"></a>Sintassi

```cpp
class invalid_oversubscribe_operation : public std::exception;
```

## <a name="members"></a>Membri

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

## <a name="invalid_oversubscribe_operation"></a><a name="ctor"></a>invalid_oversubscribe_operation

Costruisce un oggetto `invalid_oversubscribe_operation`.

```cpp
explicit _CRTIMP invalid_oversubscribe_operation(_In_z_ const char* _Message) throw();

invalid_oversubscribe_operation() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
