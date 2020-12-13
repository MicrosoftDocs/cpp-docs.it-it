---
description: 'Altre informazioni su: invalid_operation Class'
title: Classe invalid_operation
ms.date: 11/04/2016
f1_keywords:
- invalid_operation
- CONCRT/concurrency::invalid_operation
- CONCRT/concurrency::invalid_operation::invalid_operation
helpviewer_keywords:
- invalid_operation class
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
ms.openlocfilehash: f3050d487f2c374f66f264b6e568fce5244d25ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334536"
---
# <a name="invalid_operation-class"></a>Classe invalid_operation

Questa classe descrive un'eccezione generata quando viene eseguita un'operazione non valida non più descritta in maniera accurata da un altro tipo di eccezione generata dal runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_operation : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[invalid_operation](#ctor)|Di overload. Costruisce un oggetto `invalid_operation`.|

## <a name="remarks"></a>Commenti

Nei vari metodi che generano tale eccezione vengono di solito documentate le circostanze nelle quali verrà generata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_operation`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="invalid_operation"></a><a name="ctor"></a> invalid_operation

Costruisce un oggetto `invalid_operation`.

```cpp
explicit _CRTIMP invalid_operation(_In_z_ const char* _Message) throw();

invalid_operation() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
