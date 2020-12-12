---
description: 'Altre informazioni su: unsupported_feature Class'
title: Classe unsupported_feature
ms.date: 03/27/2019
f1_keywords:
- unsupported_feature
- AMPRT/unsupported_feature
- AMPRT/Concurrency::unsupported_feature
helpviewer_keywords:
- unsupported_feature class
ms.assetid: 6b1ab917-df13-48c7-9648-7cb2465a0ff5
ms.openlocfilehash: 22cbc193de2a42e76ead4097d1e39351693ef706
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314503"
---
# <a name="unsupported_feature-class"></a>Classe unsupported_feature

Eccezione generata quando viene utilizzata una funzionalità non supportata.

## <a name="syntax"></a>Sintassi

```cpp
class unsupported_feature : public runtime_exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore unsupported_feature](#unsupported_feature)|Costruisce una nuova istanza dell' `unsupported_feature` eccezione.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`unsupported_feature`

## <a name="unsupported_feature"></a><a name="unsupported_feature"></a> unsupported_feature

  Costruisce una nuova istanza dell' `unsupported_feature` eccezione.

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

**Spazio dei nomi:** Concorrenza

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
