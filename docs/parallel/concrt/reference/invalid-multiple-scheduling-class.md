---
description: 'Altre informazioni su: invalid_multiple_scheduling Class'
title: Classe invalid_multiple_scheduling
ms.date: 11/04/2016
f1_keywords:
- invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling
helpviewer_keywords:
- invalid_multiple_scheduling class
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
ms.openlocfilehash: 23d89d93c953a3c01a6e0e698cfa7489effd2986
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334556"
---
# <a name="invalid_multiple_scheduling-class"></a>Classe invalid_multiple_scheduling

Questa classe descrive un'eccezione generata quando un oggetto `task_handle` è pianificato più volte usando il metodo `run` di un oggetto `task_group` o `structured_task_group` senza una chiamata intermedia a uno dei metodi `wait` o `run_and_wait`.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_multiple_scheduling : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[invalid_multiple_scheduling](#ctor)|Di overload. Costruisce un oggetto `invalid_multiple_scheduling`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_multiple_scheduling`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="invalid_multiple_scheduling"></a><a name="ctor"></a> invalid_multiple_scheduling

Costruisce un oggetto `invalid_multiple_scheduling`.

```cpp
explicit _CRTIMP invalid_multiple_scheduling(_In_z_ const char* _Message) throw();

invalid_multiple_scheduling() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe task_handle](task-handle-class.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[Correre](task-group-class.md)<br/>
[attendere](task-group-class.md)<br/>
[run_and_wait](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
