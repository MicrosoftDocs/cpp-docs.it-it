---
title: Classe context_unblock_unbalanced | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced::context_unblock_unbalanced
dev_langs:
- C++
helpviewer_keywords:
- context_unblock_unbalanced class
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8cd35b53db37d51a9feec567fe66c53b1381b4d9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431333"
---
# <a name="contextunblockunbalanced-class"></a>Classe context_unblock_unbalanced

Questa classe descrive un'eccezione generata quando le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` non sono abbinate correttamente.

## <a name="syntax"></a>Sintassi

```
class context_unblock_unbalanced : public std::exception;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[context_unblock_unbalanced](#ctor)|Di overload. Costruisce un oggetto `context_unblock_unbalanced`.|

## <a name="remarks"></a>Note

Le chiamate al `Block` e `Unblock` metodi di un `Context` oggetto deve sempre essere abbinato correttamente. Il Runtime di concorrenza consente le operazioni a verificarsi in qualsiasi ordine. Ad esempio, una chiamata a `Block` può essere seguita da una chiamata a `Unblock` o viceversa. Questa eccezione viene generata se, ad esempio, due chiamate al `Unblock` metodo sono stati eseguiti in una riga, in un `Context` oggetto che non è stato bloccato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`exception`

`context_unblock_unbalanced`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> context_unblock_unbalanced

Costruisce un oggetto `context_unblock_unbalanced`.

```
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

context_unblock_unbalanced() throw();
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
Messaggio descrittivo dell'errore.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
