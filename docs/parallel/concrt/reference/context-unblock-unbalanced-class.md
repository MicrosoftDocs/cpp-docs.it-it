---
title: Classe context_unblock_unbalanced
ms.date: 11/04/2016
f1_keywords:
- context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced::context_unblock_unbalanced
helpviewer_keywords:
- context_unblock_unbalanced class
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
ms.openlocfilehash: 261ec96c1a83fbec423e6dbbfe403c4db53a2962
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77143105"
---
# <a name="context_unblock_unbalanced-class"></a>Classe context_unblock_unbalanced

Questa classe descrive un'eccezione generata quando le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` non sono abbinate correttamente.

## <a name="syntax"></a>Sintassi

```cpp
class context_unblock_unbalanced : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[context_unblock_unbalanced](#ctor)|Di overload. Costruisce un oggetto `context_unblock_unbalanced`.|

## <a name="remarks"></a>Osservazioni

Le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` devono essere sempre abbinate correttamente. Il runtime di concorrenza consente di eseguire le operazioni in qualsiasi ordine. Ad esempio, una chiamata a `Block` può essere seguita da una chiamata a `Unblock` o viceversa. Questa eccezione viene generata se, ad esempio, due chiamate al metodo `Unblock` sono state effettuate in una riga, in un oggetto `Context` che non è stato bloccato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`context_unblock_unbalanced`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>context_unblock_unbalanced

Costruisce un oggetto `context_unblock_unbalanced`.

```cpp
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

context_unblock_unbalanced() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
