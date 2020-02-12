---
title: Classe invalid_operation
ms.date: 11/04/2016
f1_keywords:
- invalid_operation
- CONCRT/concurrency::invalid_operation
- CONCRT/concurrency::invalid_operation::invalid_operation
helpviewer_keywords:
- invalid_operation class
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
ms.openlocfilehash: e17d530569d16ba0084a58bf0be00d4a8423b7f6
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140876"
---
# <a name="invalid_operation-class"></a>Classe invalid_operation

Questa classe descrive un'eccezione generata quando viene eseguita un'operazione non valida non più descritta in maniera accurata da un altro tipo di eccezione generata dal runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_operation : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[invalid_operation](#ctor)|Di overload. Costruisce un oggetto `invalid_operation`.|

## <a name="remarks"></a>Osservazioni

Nei vari metodi che generano tale eccezione vengono di solito documentate le circostanze nelle quali verrà generata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_operation`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>invalid_operation

Costruisce un oggetto `invalid_operation`.

```cpp
explicit _CRTIMP invalid_operation(_In_z_ const char* _Message) throw();

invalid_operation() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
