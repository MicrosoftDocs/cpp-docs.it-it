---
description: 'Altre informazioni su: context_unblock_unbalanced Class'
title: Classe context_unblock_unbalanced
ms.date: 11/04/2016
f1_keywords:
- context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced::context_unblock_unbalanced
helpviewer_keywords:
- context_unblock_unbalanced class
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
ms.openlocfilehash: d262ff52a675935f95664d2f7ddd69aa159aa0bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188963"
---
# <a name="context_unblock_unbalanced-class"></a>Classe context_unblock_unbalanced

Questa classe descrive un'eccezione generata quando le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` non sono abbinate correttamente.

## <a name="syntax"></a>Sintassi

```cpp
class context_unblock_unbalanced : public std::exception;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[context_unblock_unbalanced](#ctor)|Di overload. Costruisce un oggetto `context_unblock_unbalanced`.|

## <a name="remarks"></a>Commenti

Le chiamate ai `Block` `Unblock` metodi e di un `Context` oggetto devono essere sempre abbinate correttamente. Il runtime di concorrenza consente di eseguire le operazioni in qualsiasi ordine. Ad esempio, una chiamata a `Block` può essere seguita da una chiamata a `Unblock` o viceversa. Questa eccezione viene generata se, ad esempio, due chiamate al `Unblock` metodo sono state effettuate in una riga, in un `Context` oggetto che non è stato bloccato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`context_unblock_unbalanced`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="context_unblock_unbalanced"></a><a name="ctor"></a> context_unblock_unbalanced

Costruisce un oggetto `context_unblock_unbalanced`.

```cpp
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

context_unblock_unbalanced() throw();
```

### <a name="parameters"></a>Parametri

*_Message*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
