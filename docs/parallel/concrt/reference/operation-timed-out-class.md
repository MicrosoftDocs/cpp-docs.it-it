---
title: Classe operation_timed_out
ms.date: 11/04/2016
f1_keywords:
- operation_timed_out
- CONCRT/concurrency::operation_timed_out
- CONCRT/concurrency::operation_timed_out::operation_timed_out
helpviewer_keywords:
- operation_timed_out class
ms.assetid: 963efe1d-a6e0-477c-9a70-d93d8412c897
ms.openlocfilehash: 2511be4669bc4abf75d5188e3aeabd7863f42dd7
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57276104"
---
# <a name="operationtimedout-class"></a>Classe operation_timed_out

Questa classe descrive un'eccezione generata quando un'operazione è scaduta.

## <a name="syntax"></a>Sintassi

```
class operation_timed_out : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operation_timed_out](#ctor)|Di overload. Costruisce un oggetto `operation_timed_out`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`operation_timed_out`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> operation_timed_out

Costruisce un oggetto `operation_timed_out`.

```
explicit _CRTIMP operation_timed_out(_In_z_ const char* _Message) throw();

operation_timed_out() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
