---
title: Classe improper_scheduler_attach
ms.date: 11/04/2016
f1_keywords:
- improper_scheduler_attach
- CONCRT/concurrency::improper_scheduler_attach
- CONCRT/concurrency::improper_scheduler_attach::improper_scheduler_attach
helpviewer_keywords:
- improper_scheduler_attach class
ms.assetid: 5a76da0a-091b-4748-8f62-b3a28f674f9e
ms.openlocfilehash: 2d6a7b53269d305c976bcc596fe85dc018442332
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57271541"
---
# <a name="improperschedulerattach-class"></a>Classe improper_scheduler_attach

Questa classe descrive un'eccezione generata quando il metodo `Attach` viene chiamato su un oggetto `Scheduler` già allegato al contesto corrente.

## <a name="syntax"></a>Sintassi

```
class improper_scheduler_attach : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[improper_scheduler_attach](#ctor)|Di overload. Costruisce un oggetto `improper_scheduler_attach`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`improper_scheduler_attach`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> improper_scheduler_attach

Costruisce un oggetto `improper_scheduler_attach`.

```
explicit _CRTIMP improper_scheduler_attach(_In_z_ const char* _Message) throw();

improper_scheduler_attach() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
