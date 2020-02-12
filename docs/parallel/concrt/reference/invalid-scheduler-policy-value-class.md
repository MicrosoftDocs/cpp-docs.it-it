---
title: Classe invalid_scheduler_policy_value
ms.date: 11/04/2016
f1_keywords:
- concrt/concurrency::invalid_scheduler_policy_value
helpviewer_keywords:
- invalid_scheduler_policy_value class
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
ms.openlocfilehash: 6a66b2b303a4b3b0cb8c2c7a3c515ac8cd1b33a0
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142998"
---
# <a name="invalid_scheduler_policy_value-class"></a>Classe invalid_scheduler_policy_value

Questa classe descrive un'eccezione generata quando una chiave dei criteri di un oggetto `SchedulerPolicy` viene impostata su un valore non valido per tale chiave.

## <a name="syntax"></a>Sintassi

```cpp
class invalid_scheduler_policy_value : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[invalid_scheduler_policy_value](invalid-scheduler-policy-thread-specification-class.md#ctor|Di overload. Costruisce un oggetto `invalid_scheduler_policy_value`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`invalid_scheduler_policy_value`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>invalid_scheduler_policy_value

Costruisce un oggetto `invalid_scheduler_policy_value`.

```cpp
explicit _CRTIMP invalid_scheduler_policy_value(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_value() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe SchedulerPolicy](schedulerpolicy-class.md)
