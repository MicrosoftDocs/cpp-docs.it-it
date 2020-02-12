---
title: Classe invalid_multiple_scheduling
ms.date: 11/04/2016
f1_keywords:
- invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling
helpviewer_keywords:
- invalid_multiple_scheduling class
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
ms.openlocfilehash: a8b2a045ce94562dcba0019bc03aaa90c4d384a9
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140897"
---
# <a name="invalid_multiple_scheduling-class"></a>Classe invalid_multiple_scheduling

Questa classe descrive un'eccezione generata quando un oggetto `task_handle` è pianificato più volte usando il metodo `run` di un oggetto `task_group` o `structured_task_group` senza una chiamata intermedia a uno dei metodi `wait` o `run_and_wait`.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_multiple_scheduling : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[invalid_multiple_scheduling](#ctor)|Di overload. Costruisce un oggetto `invalid_multiple_scheduling`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_multiple_scheduling`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>invalid_multiple_scheduling

Costruisce un oggetto `invalid_multiple_scheduling`.

```cpp
explicit _CRTIMP invalid_multiple_scheduling(_In_z_ const char* _Message) throw();

invalid_multiple_scheduling() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe task_handle](task-handle-class.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[run](task-group-class.md)<br/>
[attendere](task-group-class.md)<br/>
[run_and_wait](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
