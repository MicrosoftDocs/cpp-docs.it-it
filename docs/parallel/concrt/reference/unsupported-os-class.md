---
title: Classe unsupported_os
ms.date: 11/04/2016
f1_keywords:
- unsupported_os
- CONCRT/concurrency::unsupported_os
- CONCRT/concurrency::unsupported_os::unsupported_os
helpviewer_keywords:
- unsupported_os class
ms.assetid: 6fa57636-341b-4b51-84cc-261d283ff736
ms.openlocfilehash: 253cd76182e1b6f85be3701663bd10c86c10e6ba
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142349"
---
# <a name="unsupported_os-class"></a>Classe unsupported_os

Tramite questa classe viene descritta un'eccezione generata quando viene utilizzato un sistema operativo non supportato.

## <a name="syntax"></a>Sintassi

```cpp
class unsupported_os : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[unsupported_os](#ctor)|Di overload. Costruisce un oggetto `unsupported_os`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`unsupported_os`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>unsupported_os

Costruisce un oggetto `unsupported_os`.

### <a name="syntax"></a>Sintassi

```cpp
explicit _CRTIMP unsupported_os(_In_z_ const char* _Message) throw();

unsupported_os() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
