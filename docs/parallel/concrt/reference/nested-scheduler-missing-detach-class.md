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
ms.openlocfilehash: ff60c5d9486f4c82bd48971c1a511df9a3372e9d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536799"
---
# <a name="nestedschedulermissingdetach-class"></a>Classe nested_scheduler_missing_detach

Questa classe descrive un'eccezione generata quando il runtime di concorrenza rileva che non è stata eseguita la chiamata al metodo `CurrentScheduler::Detach` su un contesto allegato a una seconda utilità di pianificazione mediante il metodo `Attach` dell'oggetto `Scheduler`.

## <a name="syntax"></a>Sintassi

```
class nested_scheduler_missing_detach : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[nested_scheduler_missing_detach](#ctor)|Di overload. Costruisce un oggetto `nested_scheduler_missing_detach`.|

## <a name="remarks"></a>Note

Questa eccezione viene generata solo quando si annida un'utilità di pianificazione in un'altra chiamando il metodo `Attach` di un oggetto `Scheduler` su un contesto che è già di proprietà o è collegato a un'altra utilità di pianificazione. Il Runtime di concorrenza genera questa eccezione in base alle esigenze quando è possibile rilevare lo scenario come ausilio per individuare il problema. Non tutte le istanze di trascurare di chiamare il `CurrentScheduler::Detach` metodo garantisce generano questa eccezione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`nested_scheduler_missing_detach`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> nested_scheduler_missing_detach

Costruisce un oggetto `nested_scheduler_missing_detach`.

```
explicit _CRTIMP nested_scheduler_missing_detach(_In_z_ const char* _Message) throw();

nested_scheduler_missing_detach() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
