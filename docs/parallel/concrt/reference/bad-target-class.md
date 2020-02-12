---
title: Classe bad_target
ms.date: 11/04/2016
f1_keywords:
- bad_target
- CONCRT/concurrency::bad_target
- CONCRT/concurrency::bad_target::bad_target
helpviewer_keywords:
- bad_target class
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
ms.openlocfilehash: 023607ff142b7fa39165cc9b5280a8e9345a3645
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142853"
---
# <a name="bad_target-class"></a>Classe bad_target

Questa classe descrive un'eccezione generata quando un blocco della messaggistica riceve un puntatore a una destinazione non valida per l'operazione eseguita.

## <a name="syntax"></a>Sintassi

```cpp
class bad_target : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[bad_target](#ctor)|Di overload. Costruisce un oggetto `bad_target`.|

## <a name="remarks"></a>Osservazioni

Questa eccezione viene in genere generata per motivi quali un tentativo di utilizzo di un messaggio riservato a una destinazione diversa o il rilascio di una prenotazione non contenuta.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`bad_target`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>bad_target

Costruisce un oggetto `bad_target`.

```cpp
explicit _CRTIMP bad_target(_In_z_ const char* _Message) throw();

bad_target() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)
