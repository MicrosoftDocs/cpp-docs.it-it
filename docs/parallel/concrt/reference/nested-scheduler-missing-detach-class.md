---
title: Classe nested_scheduler_missing_detach
ms.date: 11/04/2016
f1_keywords:
- nested_scheduler_missing_detach
- CONCRT/concurrency::nested_scheduler_missing_detach
- CONCRT/concurrency::nested_scheduler_missing_detach::nested_scheduler_missing_detach
helpviewer_keywords:
- nested_scheduler_missing_detach class
ms.assetid: 65d3f277-6d43-4160-97ef-caf8b26c1641
ms.openlocfilehash: 8c9553b036890c4ce28f1060bfe2f58ee1904935
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77138863"
---
# <a name="nested_scheduler_missing_detach-class"></a>Classe nested_scheduler_missing_detach

Questa classe descrive un'eccezione generata quando il runtime di concorrenza rileva che non è stata eseguita la chiamata al metodo `CurrentScheduler::Detach` su un contesto allegato a una seconda utilità di pianificazione mediante il metodo `Attach` dell'oggetto `Scheduler`.

## <a name="syntax"></a>Sintassi

```cpp
class nested_scheduler_missing_detach : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[nested_scheduler_missing_detach](#ctor)|Di overload. Costruisce un oggetto `nested_scheduler_missing_detach`.|

## <a name="remarks"></a>Osservazioni

Questa eccezione viene generata solo quando si annida un'utilità di pianificazione in un'altra chiamando il metodo `Attach` di un oggetto `Scheduler` su un contesto che è già di proprietà o è collegato a un'altra utilità di pianificazione. Il runtime di concorrenza genera questa eccezione opportunisticamente quando è in grado di rilevare lo scenario come supporto per individuare il problema. Non tutte le istanze di che trascurano la chiamata al metodo `CurrentScheduler::Detach` è garantita la generazione di questa eccezione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`nested_scheduler_missing_detach`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>nested_scheduler_missing_detach

Costruisce un oggetto `nested_scheduler_missing_detach`.

```cpp
explicit _CRTIMP nested_scheduler_missing_detach(_In_z_ const char* _Message) throw();

nested_scheduler_missing_detach() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
