---
title: Classe default_scheduler_exists
ms.date: 11/04/2016
f1_keywords:
- default_scheduler_exists
- CONCRT/concurrency::default_scheduler_exists
- CONCRT/concurrency::default_scheduler_exists::default_scheduler_exists
helpviewer_keywords:
- default_scheduler_exists class
ms.assetid: f6e575e2-4e0f-455a-9e06-54f462ce0c1c
ms.openlocfilehash: eed5dd242beb4c4cd481f22635e0d5f71c28d7e6
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139182"
---
# <a name="default_scheduler_exists-class"></a>Classe default_scheduler_exists

Questa classe descrive un'eccezione generata quando il metodo `Scheduler::SetDefaultSchedulerPolicy` viene chiamato quando esiste già un'utilità di pianificazione predefinita all'interno del processo.

## <a name="syntax"></a>Sintassi

```cpp
class default_scheduler_exists : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[default_scheduler_exists](#ctor)|Di overload. Costruisce un oggetto `default_scheduler_exists`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`default_scheduler_exists`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>default_scheduler_exists

Costruisce un oggetto `default_scheduler_exists`.

```cpp
explicit _CRTIMP default_scheduler_exists(_In_z_ const char* _Message) throw();

default_scheduler_exists() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
