---
title: Classe task_canceled | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- task_canceled
- CONCRT/concurrency::task_canceled
- CONCRT/concurrency::task_canceled::task_canceled
dev_langs:
- C++
helpviewer_keywords:
- task_canceled class
ms.assetid: c3f0b234-2cc1-435f-a48e-995f45b190be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: da18db2f2dde145c565b6309d9b27cdbcc0744cf
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46437664"
---
# <a name="taskcanceled-class"></a>Classe task_canceled

Questa classe descrive un'eccezione generata dal livello di attività PPL per forzare l'annullamento dell'attività corrente. Viene inoltre generata per il `get()` metodo sul [attività](/visualstudio/extensibility/debugger/task-class-internal-members), per un'attività annullata.

## <a name="syntax"></a>Sintassi

```
class task_canceled : public std::exception;
```

## <a name="members"></a>Membri

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

##  <a name="ctor"></a> task_canceled

Costruisce un oggetto `task_canceled`.

```
explicit _CRTIMP task_canceled(_In_z_ const char* _Message) throw();

task_canceled() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
