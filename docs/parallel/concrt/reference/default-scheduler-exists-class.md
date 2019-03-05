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
ms.openlocfilehash: 326a2dfc6837665adb4d46a6aaa8780052ad2b22
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57275278"
---
# <a name="defaultschedulerexists-class"></a>Classe default_scheduler_exists

Questa classe descrive un'eccezione generata quando il metodo `Scheduler::SetDefaultSchedulerPolicy` viene chiamato quando esiste già un'utilità di pianificazione predefinita all'interno del processo.

## <a name="syntax"></a>Sintassi

```
class default_scheduler_exists : public std::exception;
```

## <a name="members"></a>Membri

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

##  <a name="ctor"></a> default_scheduler_exists

Costruisce un oggetto `default_scheduler_exists`.

```
explicit _CRTIMP default_scheduler_exists(_In_z_ const char* _Message) throw();

default_scheduler_exists() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
