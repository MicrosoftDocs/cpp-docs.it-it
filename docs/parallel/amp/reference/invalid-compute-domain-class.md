---
title: invalid_compute_domain (classe)
ms.date: 11/04/2016
f1_keywords:
- invalid_compute_domain
- AMPRT/invalid_compute_domain
- AMPRT/Concurrency::invalid_compute_domain::invalid_compute_domain
helpviewer_keywords:
- invalid_compute_domain class
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
ms.openlocfilehash: 3b8179e8e92665fa6482bd092504af71aa0106f0
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126461"
---
# <a name="invalid_compute_domain-class"></a>invalid_compute_domain (classe)

Eccezione generata quando il runtime non è in grado di avviare un kernel utilizzando il dominio di calcolo specificato nel sito di chiamata [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each) .

## <a name="syntax"></a>Sintassi

```cpp
class invalid_compute_domain : public runtime_exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore invalid_compute_domain](#ctor)|Inizializza una nuova istanza della classe `invalid_compute_domain`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`invalid_compute_domain`

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>invalid_compute_domain

Inizializza una nuova istanza della classe.

## <a name="syntax"></a>Sintassi

```cpp
explicit invalid_compute_domain(
    const char * _Message ) throw();

invalid_compute_domain() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

Istanza della classe `invalid_compute_domain`

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
