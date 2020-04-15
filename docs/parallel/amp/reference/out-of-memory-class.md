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
ms.openlocfilehash: e716d4952bdb9634cc0d195285d3a65c5c06b0a1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336809"
---
# <a name="out_of_memory-class"></a>out_of_memory (classe)

Eccezione generata quando un metodo non riesce a causa della mancanza di memoria del sistema o del dispositivo.

## <a name="syntax"></a>Sintassi

```cpp
class out_of_memory : public runtime_exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Out_of_memory Costruttore](#ctor)|Inizializza una nuova istanza della classe `out_of_memory`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`out_of_memory`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt.h

**Spazio dei nomi:** Concorrenza

## <a name="out_of_memory"></a><a name="ctor"></a>out_of_memory

Inizializza una nuova istanza della classe.

### <a name="syntax"></a>Sintassi

```cpp
explicit out_of_memory(
    const char * _Message ) throw();

out_of_memory () throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

Nuova istanza della classe `out_of_memory`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (AMP)](concurrency-namespace-cpp-amp.md)
