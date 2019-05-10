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
ms.openlocfilehash: 451318bfbcfb9c5e002677556944e3499c0ed5fb
ms.sourcegitcommit: 00e26915924869cd7eb3c971a7d0604388abd316
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2019
ms.locfileid: "65525421"
---
# <a name="unsupportedfeature-class"></a>Classe unsupported_feature

Eccezione generata quando viene utilizzata una funzionalità non supportata.

## <a name="syntax"></a>Sintassi

```
class unsupported_feature : public runtime_exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore unsupported_feature](#unsupported_feature)|Costruisce una nuova istanza di `unsupported_feature` eccezione.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`runtime_exception`

`unsupported_feature`

## <a name="unsupported_feature"></a> unsupported_feature

  Costruisce una nuova istanza di `unsupported_feature` eccezione.

### <a name="syntax"></a>Sintassi

```
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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
