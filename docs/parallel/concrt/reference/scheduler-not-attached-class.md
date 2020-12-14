---
description: 'Altre informazioni su: scheduler_not_attached Class'
title: Classe scheduler_not_attached
ms.date: 11/04/2016
f1_keywords:
- scheduler_not_attached
- CONCRT/concurrency::scheduler_not_attached
- CONCRT/concurrency::scheduler_not_attached::scheduler_not_attached
helpviewer_keywords:
- scheduler_not_attached class
ms.assetid: 26001970-b400-463b-be3d-8623359c399a
ms.openlocfilehash: 1d412ffecea288d4ecad1d0c2949e7444adfd913
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188859"
---
# <a name="scheduler_not_attached-class"></a>Classe scheduler_not_attached

Questa classe descrive un'eccezione generata quando viene eseguita un'operazione che richiede un'utilità di pianificazione da allegare al contesto corrente e non lo è.

## <a name="syntax"></a>Sintassi

```cpp
class scheduler_not_attached : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[scheduler_not_attached](#ctor)|Di overload. Costruisce un oggetto `scheduler_not_attached`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`scheduler_not_attached`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="scheduler_not_attached"></a><a name="ctor"></a> scheduler_not_attached

Costruisce un oggetto `scheduler_not_attached`.

```cpp
explicit _CRTIMP scheduler_not_attached(_In_z_ const char* _Message) throw();

scheduler_not_attached() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
