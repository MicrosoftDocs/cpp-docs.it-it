---
title: Classe improper_lock
ms.date: 11/04/2016
f1_keywords:
- improper_lock
- CONCRT/concurrency::improper_lock
- CONCRT/concurrency::improper_lock::improper_lock
helpviewer_keywords:
- improper_lock class
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
ms.openlocfilehash: de7393c9186a1572040acd18854b5b3046b239f2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552789"
---
# <a name="improperlock-class"></a>Classe improper_lock

Questa classe descrive un'eccezione generata quando un blocco viene acquisito in modo errato.

## <a name="syntax"></a>Sintassi

```
class improper_lock : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[improper_lock](#ctor)|Di overload. Costruisce un oggetto `improper_lock exception`.|

## <a name="remarks"></a>Note

In genere, questa eccezione viene generata quando viene effettuato un tentativo di acquisire un blocco di non rientrante in modo ricorsivo nello stesso contesto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`improper_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> improper_lock

Costruisce un oggetto `improper_lock exception`.

```
explicit _CRTIMP improper_lock(_In_z_ const char* _Message) throw();

improper_lock() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe critical_section](critical-section-class.md)<br/>
[Classe reader_writer_lock](reader-writer-lock-class.md)
