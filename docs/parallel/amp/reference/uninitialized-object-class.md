---
title: uninitialized_object (classe)
ms.date: 03/27/2019
f1_keywords:
- uninitialized_object
- AMPRT/uninitialized_object
- AMPRT/Concurrency::uninitialized_object
helpviewer_keywords:
- uninitialized_object class
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
ms.openlocfilehash: 05c24672531d50fa9bc31587e6c6733fdff21f29
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405456"
---
# <a name="uninitializedobject-class"></a>uninitialized_object (classe)

Eccezione generata quando viene utilizzato un oggetto non inizializzato.

## <a name="syntax"></a>Sintassi

```
class uninitialized_object : public runtime_exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[uninitialized_object, costruttore](#uninitialized_object)|Inizializza una nuova istanza della classe `uninitialized_object`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`uninitialized_object`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concorrenza

## <a name="uninitializedobject"></a>uninitialized_object

Costruisce una nuova istanza di `uninitialized_object` eccezione.

### <a name="syntax"></a>Sintassi

```
explicit uninitialized_object(
    const char * _Message ) throw();

uninitialized_object() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

Il `uninitialized_object` oggetto eccezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
