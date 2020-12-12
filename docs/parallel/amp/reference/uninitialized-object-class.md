---
description: 'Altre informazioni su: uninitialized_object Class'
title: uninitialized_object (classe)
ms.date: 03/27/2019
f1_keywords:
- uninitialized_object
- AMPRT/uninitialized_object
- AMPRT/Concurrency::uninitialized_object
helpviewer_keywords:
- uninitialized_object class
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
ms.openlocfilehash: 4929de9e865492c9fb468f5fac336f67fb307efb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326390"
---
# <a name="uninitialized_object-class"></a>uninitialized_object (classe)

Eccezione generata quando viene utilizzato un oggetto non inizializzato.

## <a name="syntax"></a>Sintassi

```cpp
class uninitialized_object : public runtime_exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore uninitialized_object](#uninitialized_object)|Inizializza una nuova istanza della classe `uninitialized_object`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`uninitialized_object`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concorrenza

## <a name="uninitialized_object"></a><a name="uninitialized_object"></a> uninitialized_object

Costruisce una nuova istanza dell' `uninitialized_object` eccezione.

### <a name="syntax"></a>Sintassi

```cpp
explicit uninitialized_object(
    const char * _Message ) throw();

uninitialized_object() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

`uninitialized_object`Oggetto eccezione.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
