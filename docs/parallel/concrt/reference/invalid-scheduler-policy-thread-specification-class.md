---
description: 'Altre informazioni su: invalid_scheduler_policy_thread_specification Class'
title: Classe invalid_scheduler_policy_thread_specification
ms.date: 11/04/2016
f1_keywords:
- concrt/concurrency::invalid_scheduler_policy_thread_specification
helpviewer_keywords:
- invalid_scheduler_policy_thread_specification class
ms.assetid: 2d0fafb2-18f8-4284-8040-3db640d33303
ms.openlocfilehash: 97a3910fc83e741c54ece51ed8e20686bbd6c66b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334499"
---
# <a name="invalid_scheduler_policy_thread_specification-class"></a>Classe invalid_scheduler_policy_thread_specification

Questa classe descrive un'eccezione generata quando si tenta di impostare i limiti di concorrenza di un oggetto `SchedulerPolicy` in modo che il valore della chiave `MinConcurrency` sia inferiore a quella della chiave `MaxConcurrency`.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_scheduler_policy_thread_specification : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[invalid_scheduler_policy_thread_specification] (non valido-Scheduler-Policy-value-class. MD # ctor|Di overload. Costruisce un oggetto `invalid_scheduler_policy_value`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_scheduler_policy_thread_specification`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="invalid_scheduler_policy_thread_specification"></a><a name="ctor"></a> invalid_scheduler_policy_thread_specification

Costruisce un oggetto `invalid_scheduler_policy_value`.

```cpp
explicit _CRTIMP invalid_scheduler_policy_thread_specification(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_thread_specification() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe SchedulerPolicy](schedulerpolicy-class.md)
