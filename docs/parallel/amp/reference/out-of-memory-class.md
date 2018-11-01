---
title: out_of_memory (classe)
ms.date: 11/04/2016
f1_keywords:
- out_of_memory
- AMPRT/out_of_memory
- AMPRT/Concurrency::out_of_memory::out_of_memory
helpviewer_keywords:
- out_of_memory class
ms.assetid: 3aa7e682-8f13-4ae6-9188-31fb423956e4
ms.openlocfilehash: 2d5d028739bdf1b1ac31fafe3719b7f3a98fbb07
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591894"
---
# <a name="outofmemory-class"></a>out_of_memory (classe)

Eccezione generata quando un metodo ha esito negativo a causa della mancanza di memoria di sistema o dispositivo.

## <a name="syntax"></a>Sintassi

```
class out_of_memory : public runtime_exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore out_of_memory](#ctor)|Inizializza una nuova istanza della classe `out_of_memory`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`out_of_memory`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency
## <a name="ctor"></a> out_of_memory

Inizializza una nuova istanza della classe.

### <a name="syntax"></a>Sintassi

```
explicit out_of_memory(
    const char * _Message ) throw();

out_of_memory () throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

Nuova istanza della classe `out_of_memory`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
