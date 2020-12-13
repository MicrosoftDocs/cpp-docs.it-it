---
description: 'Altre informazioni su: improper_scheduler_detach Class'
title: Classe improper_scheduler_detach
ms.date: 11/04/2016
f1_keywords:
- improper_scheduler_detach
- CONCRT/concurrency::improper_scheduler_detach
- CONCRT/concurrency::improper_scheduler_detach::improper_scheduler_detach
helpviewer_keywords:
- improper_scheduler_detach class
ms.assetid: 30132102-c900-4951-a470-b63b4e3aa2d2
ms.openlocfilehash: 62def23a4a3459c4cb8268b3b0f4df4a77025668
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334614"
---
# <a name="improper_scheduler_detach-class"></a>Classe improper_scheduler_detach

Questa classe descrive un'eccezione generata quando il metodo `CurrentScheduler::Detach` viene chiamato su un contesto che non è stato allegato ad alcuna unità di pianificazione tramite il metodo `Attach` di un oggetto `Scheduler`.

## <a name="syntax"></a>Sintassi

```cpp
class improper_scheduler_detach : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[improper_scheduler_detach](#ctor)|Di overload. Costruisce un oggetto `improper_scheduler_detach`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`improper_scheduler_detach`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="improper_scheduler_detach"></a><a name="ctor"></a> improper_scheduler_detach

Costruisce un oggetto `improper_scheduler_detach`.

```cpp
explicit _CRTIMP improper_scheduler_detach(_In_z_ const char* _Message) throw();

improper_scheduler_detach() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
