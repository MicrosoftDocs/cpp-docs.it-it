---
description: 'Altre informazioni su: unsupported_os Class'
title: Classe unsupported_os
ms.date: 11/04/2016
f1_keywords:
- unsupported_os
- CONCRT/concurrency::unsupported_os
- CONCRT/concurrency::unsupported_os::unsupported_os
helpviewer_keywords:
- unsupported_os class
ms.assetid: 6fa57636-341b-4b51-84cc-261d283ff736
ms.openlocfilehash: 1f9ee74db42d2b34c1b4e24a1951d84a442224bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188092"
---
# <a name="unsupported_os-class"></a>Classe unsupported_os

Tramite questa classe viene descritta un'eccezione generata quando viene utilizzato un sistema operativo non supportato.

## <a name="syntax"></a>Sintassi

```cpp
class unsupported_os : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[unsupported_os](#ctor)|Di overload. Costruisce un oggetto `unsupported_os`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`unsupported_os`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="unsupported_os"></a><a name="ctor"></a> unsupported_os

Costruisce un oggetto `unsupported_os`.

### <a name="syntax"></a>Sintassi

```cpp
explicit _CRTIMP unsupported_os(_In_z_ const char* _Message) throw();

unsupported_os() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
