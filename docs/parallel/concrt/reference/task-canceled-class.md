---
title: Classe task_canceled
ms.date: 11/04/2016
f1_keywords:
- task_canceled
- CONCRT/concurrency::task_canceled
- CONCRT/concurrency::task_canceled::task_canceled
helpviewer_keywords:
- task_canceled class
ms.assetid: c3f0b234-2cc1-435f-a48e-995f45b190be
ms.openlocfilehash: b1436f921343843ee2b50888f00b6d470e513329
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142600"
---
# <a name="task_canceled-class"></a>Classe task_canceled

Questa classe descrive un'eccezione generata dal livello di attività PPL per forzare l'annullamento dell'attività corrente. Viene inoltre generata dal metodo `get()` sull' [attività](/visualstudio/extensibility/debugger/task-class-internal-members), per un'attività annullata.

## <a name="syntax"></a>Sintassi

```cpp
class task_canceled : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[task_canceled](#ctor)|Di overload. Costruisce un oggetto `task_canceled`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`task_canceled`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>task_canceled

Costruisce un oggetto `task_canceled`.

```cpp
explicit _CRTIMP task_canceled(_In_z_ const char* _Message) throw();

task_canceled() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
