---
title: Classe missing_wait | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- missing_wait
- CONCRT/concurrency::missing_wait
- CONCRT/concurrency::missing_wait::missing_wait
dev_langs:
- C++
helpviewer_keywords:
- missing_wait class
ms.assetid: ff981875-bd43-47e3-806f-b03c9f418b18
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0363b7dd1e4840b7afb6c013c5d439e64fbbb2ef
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46425899"
---
# <a name="missingwait-class"></a>Classe missing_wait

Questa classe descrive un'eccezione generata quando vi sono attività ancora pianificate per un oggetto `task_group` o `structured_task_group` nel momento di esecuzione del distruttore dell'oggetto. Questa eccezione non sarà mai generata se il distruttore viene raggiunto a causa del processo di rimozione dello stack come risultato di un'eccezione.

## <a name="syntax"></a>Sintassi

```
class missing_wait : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[missing_wait](#ctor)|Di overload. Costruisce un oggetto `missing_wait`.|

## <a name="remarks"></a>Note

Assente flusso dell'eccezione, si è responsabili della chiamata ai `wait` oppure `run_and_wait` metodo di un `task_group` o `structured_task_group` oggetto prima di consentire a tale oggetto da distruggere. Il runtime genera questa eccezione, per indicare che non è stato chiamato il `wait` o `run_and_wait` (metodo).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`missing_wait`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> missing_wait

Costruisce un oggetto `missing_wait`.

```
explicit _CRTIMP missing_wait(_In_z_ const char* _Message) throw();

missing_wait() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[wait](task-group-class.md)<br/>
[run_and_wait](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
