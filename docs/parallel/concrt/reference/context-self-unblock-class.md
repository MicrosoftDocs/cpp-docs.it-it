---
description: 'Altre informazioni su: context_self_unblock Class'
title: Classe context_self_unblock
ms.date: 11/04/2016
f1_keywords:
- context_self_unblock
- CONCRT/concurrency::context_self_unblock
- CONCRT/concurrency::context_self_unblock::context_self_unblock
helpviewer_keywords:
- context_self_unblock class
ms.assetid: 9601cd28-4f40-4c2e-89ab-747068956331
ms.openlocfilehash: 51fae67530e2836b92a6ab7a13e2b136f1d438c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188976"
---
# <a name="context_self_unblock-class"></a>Classe context_self_unblock

Questa classe descrive un'eccezione generata quando il metodo `Unblock` di un oggetto `Context` viene chiamato dallo stesso contesto. Potrebbe indicare un tentativo da parte di un contesto specificato di sbloccarsi.

## <a name="syntax"></a>Sintassi

```cpp
class context_self_unblock : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[context_self_unblock](#ctor)|Di overload. Costruisce un oggetto `context_self_unblock`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`context_self_unblock`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="context_self_unblock"></a><a name="ctor"></a> context_self_unblock

Costruisce un oggetto `context_self_unblock`.

```cpp
explicit _CRTIMP context_self_unblock(_In_z_ const char* _Message) throw();

context_self_unblock() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
