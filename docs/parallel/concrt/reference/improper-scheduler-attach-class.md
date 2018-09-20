---
title: Classe improper_scheduler_attach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- improper_scheduler_attach
- CONCRT/concurrency::improper_scheduler_attach
- CONCRT/concurrency::improper_scheduler_attach::improper_scheduler_attach
dev_langs:
- C++
helpviewer_keywords:
- improper_scheduler_attach class
ms.assetid: 5a76da0a-091b-4748-8f62-b3a28f674f9e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b51c3d800195f265a0ed0a717c7e8f318434306
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412875"
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

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)
