---
description: 'Altre informazioni su: missing_wait Class'
title: Classe missing_wait
ms.date: 11/04/2016
f1_keywords:
- missing_wait
- CONCRT/concurrency::missing_wait
- CONCRT/concurrency::missing_wait::missing_wait
helpviewer_keywords:
- missing_wait class
ms.assetid: ff981875-bd43-47e3-806f-b03c9f418b18
ms.openlocfilehash: bfbfdf4c2a52573d08c048bac278386aed1dc5a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202184"
---
# <a name="missing_wait-class"></a>Classe missing_wait

Questa classe descrive un'eccezione generata quando vi sono attività ancora pianificate per un oggetto `task_group` o `structured_task_group` nel momento di esecuzione del distruttore dell'oggetto. Questa eccezione non sarà mai generata se il distruttore viene raggiunto a causa del processo di rimozione dello stack come risultato di un'eccezione.

## <a name="syntax"></a>Sintassi

```cpp
class missing_wait : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[missing_wait](#ctor)|Di overload. Costruisce un oggetto `missing_wait`.|

## <a name="remarks"></a>Commenti

Flusso di eccezioni assente, si è responsabili della chiamata `wait` al `run_and_wait` metodo o di `task_group` un `structured_task_group` oggetto o prima di consentire l'oggetto da distruggere. Il runtime genera questa eccezione come indicazione che è stato dimenticato di chiamare il `wait` `run_and_wait` metodo o.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`missing_wait`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="missing_wait"></a><a name="ctor"></a> missing_wait

Costruisce un oggetto `missing_wait`.

```cpp
explicit _CRTIMP missing_wait(_In_z_ const char* _Message) throw();

missing_wait() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[attendere](task-group-class.md)<br/>
[run_and_wait](task-group-class.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)
