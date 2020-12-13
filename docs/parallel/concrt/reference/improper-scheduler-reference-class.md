---
description: 'Altre informazioni su: improper_scheduler_reference Class'
title: Classe improper_scheduler_reference
ms.date: 11/04/2016
f1_keywords:
- improper_scheduler_reference
- CONCRT/concurrency::improper_scheduler_reference
- CONCRT/concurrency::improper_scheduler_reference::improper_scheduler_reference
helpviewer_keywords:
- improper_scheduler_reference class
ms.assetid: 434a7512-7796-4255-92a7-f3bf71c6a7a7
ms.openlocfilehash: 4857418e14908b2d085d52249236d6395284b98a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334606"
---
# <a name="improper_scheduler_reference-class"></a>Classe improper_scheduler_reference

Questa classe descrive un'eccezione generata quando il metodo `Reference` viene chiamato su un oggetto `Scheduler` che si sta chiudendo, da un contesto che non fa parte dell'unità di pianificazione.

## <a name="syntax"></a>Sintassi

```cpp
class improper_scheduler_reference : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[improper_scheduler_reference](#ctor)|Di overload. Costruisce un oggetto `improper_scheduler_reference`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`improper_scheduler_reference`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="improper_scheduler_reference"></a><a name="ctor"></a> improper_scheduler_reference

Costruisce un oggetto `improper_scheduler_reference`.

```cpp
explicit _CRTIMP improper_scheduler_reference(_In_z_ const char* _Message) throw();

improper_scheduler_reference() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
