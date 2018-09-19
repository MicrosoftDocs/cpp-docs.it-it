---
title: Errore irreversibile C1017 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1017
dev_langs:
- C++
helpviewer_keywords:
- C1017
ms.assetid: 5542e604-599d-4e36-8f83-1d454c5753c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc2cb8ef9c7c9fe8eea7c506e55c49878b9bd809
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108535"
---
# <a name="fatal-error-c1017"></a>Errore irreversibile C1017

espressione costante integer non valida

L'espressione in un `#if` direttiva non esiste o non sono state valutate su una costante.

Le costanti definite usando `#define` deve avere i valori che restituiscono una costante integer se vengono usati un' `#if`, `#elif`, o `#else` direttiva.

L'esempio seguente genera l'errore C1017:

```
// C1017.cpp
#define CONSTANT_NAME "YES"
#if CONSTANT_NAME   // C1017
#endif
```

Possibile soluzione:

```
// C1017b.cpp
// compile with: /c
#define CONSTANT_NAME 1
#if CONSTANT_NAME
#endif
```

In quanto `CONSTANT_NAME` restituisce una stringa e non un numero intero, il `#if` direttiva genera l'errore irreversibile C1017.

In altri casi, il preprocessore restituisce una costante undefined come zero. Ciò può causare risultati imprevisti, come illustrato nell'esempio seguente. `YES` non è definito, in modo che restituisce zero. L'espressione `#if` `CONSTANT_NAME` restituisce false e il codice da utilizzare su `YES` viene rimosso dal preprocessore. `NO` è anche definito (zero), pertanto `#elif` `CONSTANT_NAME==NO` restituisce true (`0 == 0`), causando al preprocessore di lasciare il codice nel `#elif` parte dell'istruzione, ovvero esattamente l'opposto del comportamento previsto.

```
// C1017c.cpp
// compile with: /c
#define CONSTANT_NAME YES
#if CONSTANT_NAME
   // Code to use on YES...
#elif CONSTANT_NAME==NO
   // Code to use on NO...
#endif
```

Per visualizzare esattamente come il compilatore gestisce le direttive del preprocessore, usare [/P](../../build/reference/p-preprocess-to-a-file.md), [/E](../../build/reference/e-preprocess-to-stdout.md), o [/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md).