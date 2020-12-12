---
description: 'Altre informazioni su: operation_timed_out Class'
title: Classe operation_timed_out
ms.date: 11/04/2016
f1_keywords:
- operation_timed_out
- CONCRT/concurrency::operation_timed_out
- CONCRT/concurrency::operation_timed_out::operation_timed_out
helpviewer_keywords:
- operation_timed_out class
ms.assetid: 963efe1d-a6e0-477c-9a70-d93d8412c897
ms.openlocfilehash: 476dfc2d7f29b2769c076ff525f3d0eb1e20a8f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236555"
---
# <a name="operation_timed_out-class"></a>Classe operation_timed_out

Questa classe descrive un'eccezione generata quando un'operazione è scaduta.

## <a name="syntax"></a>Sintassi

```cpp
class operation_timed_out : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[operation_timed_out](#ctor)|Di overload. Costruisce un oggetto `operation_timed_out`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`operation_timed_out`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="operation_timed_out"></a><a name="ctor"></a> operation_timed_out

Costruisce un oggetto `operation_timed_out`.

```cpp
explicit _CRTIMP operation_timed_out(_In_z_ const char* _Message) throw();

operation_timed_out() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
