---
title: Classe missing_wait
ms.date: 11/04/2016
f1_keywords:
- missing_wait
- CONCRT/concurrency::missing_wait
- CONCRT/concurrency::missing_wait::missing_wait
helpviewer_keywords:
- missing_wait class
ms.assetid: ff981875-bd43-47e3-806f-b03c9f418b18
ms.openlocfilehash: 7e515a33bfa827bba5329182cd3b79764495d728
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50531118"
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
