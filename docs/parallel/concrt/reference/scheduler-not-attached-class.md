---
title: Classe scheduler_not_attached | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- scheduler_not_attached
- CONCRT/concurrency::scheduler_not_attached
- CONCRT/concurrency::scheduler_not_attached::scheduler_not_attached
dev_langs:
- C++
helpviewer_keywords:
- scheduler_not_attached class
ms.assetid: 26001970-b400-463b-be3d-8623359c399a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 410cb7f1af100a2740309c919989896fb7964b19
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401719"
---
# <a name="schedulernotattached-class"></a>Classe scheduler_not_attached

Questa classe descrive un'eccezione generata quando viene eseguita un'operazione che richiede un'utilità di pianificazione da allegare al contesto corrente e non lo è.

## <a name="syntax"></a>Sintassi

```
class scheduler_not_attached : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_not_attached](#ctor)|Di overload. Costruisce un oggetto `scheduler_not_attached`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`scheduler_not_attached`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> scheduler_not_attached

Costruisce un oggetto `scheduler_not_attached`.

```
explicit _CRTIMP scheduler_not_attached(_In_z_ const char* _Message) throw();

scheduler_not_attached() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
