---
title: Classe invalid_scheduler_policy_value | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- concrt/concurrency::invalid_scheduler_policy_value
dev_langs:
- C++
helpviewer_keywords:
- invalid_scheduler_policy_value class
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0bc8f0d34a49cf8392fec13f956f4577a67248e3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46402746"
---
# <a name="invalidschedulerpolicyvalue-class"></a>Classe invalid_scheduler_policy_value

Questa classe descrive un'eccezione generata quando una chiave dei criteri di un oggetto `SchedulerPolicy` viene impostata su un valore non valido per tale chiave.

## <a name="syntax"></a>Sintassi

```
class invalid_scheduler_policy_value : public std::exception;
```

## <a name="members"></a>Membri

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

##  <a name="ctor"></a> invalid_scheduler_policy_value

Costruisce un oggetto `invalid_scheduler_policy_value`.

```
explicit _CRTIMP invalid_scheduler_policy_value(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_value() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe SchedulerPolicy](schedulerpolicy-class.md)
