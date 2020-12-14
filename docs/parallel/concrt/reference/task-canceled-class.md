---
description: 'Altre informazioni su: task_canceled Class'
title: Classe task_canceled
ms.date: 11/04/2016
f1_keywords:
- task_canceled
- CONCRT/concurrency::task_canceled
- CONCRT/concurrency::task_canceled::task_canceled
helpviewer_keywords:
- task_canceled class
ms.assetid: c3f0b234-2cc1-435f-a48e-995f45b190be
ms.openlocfilehash: 223a1168464e312c272f770247b3574311ff97ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188404"
---
# <a name="task_canceled-class"></a>Classe task_canceled

Questa classe descrive un'eccezione generata dal livello di attività PPL per forzare l'annullamento dell'attività corrente. Viene inoltre generata dal `get()` metodo nell' [attività](/visualstudio/extensibility/debugger/task-class-internal-members)per un'attività annullata.

## <a name="syntax"></a>Sintassi

```cpp
class task_canceled : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[task_canceled](#ctor)|Di overload. Costruisce un oggetto `task_canceled`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`task_canceled`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="task_canceled"></a><a name="ctor"></a> task_canceled

Costruisce un oggetto `task_canceled`.

```cpp
explicit _CRTIMP task_canceled(_In_z_ const char* _Message) throw();

task_canceled() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
