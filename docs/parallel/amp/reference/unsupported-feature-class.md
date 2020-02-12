---
title: Classe unsupported_feature
ms.date: 03/27/2019
f1_keywords:
- unsupported_feature
- AMPRT/unsupported_feature
- AMPRT/Concurrency::unsupported_feature
helpviewer_keywords:
- unsupported_feature class
ms.assetid: 6b1ab917-df13-48c7-9648-7cb2465a0ff5
ms.openlocfilehash: 561f0a258943f6d7e1c0f1b5cae716592c931fbc
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127712"
---
# <a name="unsupported_feature-class"></a>Classe unsupported_feature

Eccezione generata quando viene utilizzata una funzionalità non supportata.

## <a name="syntax"></a>Sintassi

```cpp
class unsupported_feature : public runtime_exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore unsupported_feature](#unsupported_feature)|Costruisce una nuova istanza dell'eccezione `unsupported_feature`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`unsupported_feature`

## <a name="unsupported_feature"></a>unsupported_feature

  Costruisce una nuova istanza dell'eccezione `unsupported_feature`.

### <a name="syntax"></a>Sintassi

```cpp
explicit unsupported_feature(
    const char * _Message ) throw();

unsupported_feature() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Descrizione dell'errore.

### <a name="return-value"></a>Valore restituito

Oggetto `unsupported_feature`.

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
