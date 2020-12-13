---
description: 'Altre informazioni su: improper_lock Class'
title: Classe improper_lock
ms.date: 11/04/2016
f1_keywords:
- improper_lock
- CONCRT/concurrency::improper_lock
- CONCRT/concurrency::improper_lock::improper_lock
helpviewer_keywords:
- improper_lock class
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
ms.openlocfilehash: 8e29172ad171bbd3f95b3079840fb50b91dfe577
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334642"
---
# <a name="improper_lock-class"></a>Classe improper_lock

Questa classe descrive un'eccezione generata quando un blocco viene acquisito in modo errato.

## <a name="syntax"></a>Sintassi

```cpp
class improper_lock : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[improper_lock](#ctor)|Di overload. Costruisce un oggetto `improper_lock exception`.|

## <a name="remarks"></a>Commenti

In genere, questa eccezione viene generata quando viene eseguito un tentativo di acquisire un blocco non rientrante in modo ricorsivo nello stesso contesto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`improper_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="improper_lock"></a><a name="ctor"></a> improper_lock

Costruisce un oggetto `improper_lock exception`.

```cpp
explicit _CRTIMP improper_lock(_In_z_ const char* _Message) throw();

improper_lock() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe critical_section](critical-section-class.md)<br/>
[Classe reader_writer_lock](reader-writer-lock-class.md)
