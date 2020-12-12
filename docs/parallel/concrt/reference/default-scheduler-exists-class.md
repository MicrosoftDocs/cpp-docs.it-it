---
description: 'Altre informazioni su: default_scheduler_exists Class'
title: Classe default_scheduler_exists
ms.date: 11/04/2016
f1_keywords:
- default_scheduler_exists
- CONCRT/concurrency::default_scheduler_exists
- CONCRT/concurrency::default_scheduler_exists::default_scheduler_exists
helpviewer_keywords:
- default_scheduler_exists class
ms.assetid: f6e575e2-4e0f-455a-9e06-54f462ce0c1c
ms.openlocfilehash: 6921f7bd820271cf590707c2e56cefa9f576cefe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97284850"
---
# <a name="default_scheduler_exists-class"></a>Classe default_scheduler_exists

Questa classe descrive un'eccezione generata quando il metodo `Scheduler::SetDefaultSchedulerPolicy` viene chiamato quando esiste già un'utilità di pianificazione predefinita all'interno del processo.

## <a name="syntax"></a>Sintassi

```cpp
class default_scheduler_exists : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[default_scheduler_exists](#ctor)|Di overload. Costruisce un oggetto `default_scheduler_exists`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`default_scheduler_exists`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="default_scheduler_exists"></a><a name="ctor"></a> default_scheduler_exists

Costruisce un oggetto `default_scheduler_exists`.

```cpp
explicit _CRTIMP default_scheduler_exists(_In_z_ const char* _Message) throw();

default_scheduler_exists() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
