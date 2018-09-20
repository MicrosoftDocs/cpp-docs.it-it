---
title: uninitialized_object (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- uninitialized_object
- AMPRT/uninitialized_object
- AMPRT/Concurrency::uninitialized_object
dev_langs:
- C++
helpviewer_keywords:
- uninitialized_object class
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fada1f3c4c9372e7a979868f60ac559ecc14a79
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416253"
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
|[uninitialized_object, costruttore](#ctor)|Inizializza una nuova istanza della classe `uninitialized_object`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`uninitialized_object`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency
## <a name="uninitialized_object__ctor"></a> unsupported_feature

Costruisce una nuova istanza dell'eccezione unsupported_feature.

### <a name="syntax"></a>Sintassi

```
explicit unsupported_feature(
    const char * _Message ) throw();

unsupported_feature() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

Oggetto `unsupported_feature`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
