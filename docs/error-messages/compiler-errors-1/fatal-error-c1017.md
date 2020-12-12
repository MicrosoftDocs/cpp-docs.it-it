---
description: 'Altre informazioni su: errore irreversibile C1017'
title: Errore irreversibile C1017
ms.date: 11/04/2016
f1_keywords:
- C1017
helpviewer_keywords:
- C1017
ms.assetid: 5542e604-599d-4e36-8f83-1d454c5753c9
ms.openlocfilehash: a36a5cb11b10ca3ecca00d0379595060918d6a45
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97262386"
---
# <a name="fatal-error-c1017"></a>Errore irreversibile C1017

espressione costante integer non valida

Espressione in una `#if` direttiva inesistente o non restituita a una costante.

Le costanti definite utilizzando `#define` devono includere valori che restituiscono una costante Integer se vengono utilizzati in una `#if` direttiva, `#elif` o `#else` .

L'esempio seguente genera l'C1017:

```cpp
// C1017.cpp
#define CONSTANT_NAME "YES"
#if CONSTANT_NAME   // C1017
#endif
```

Possibile soluzione:

```cpp
// C1017b.cpp
// compile with: /c
#define CONSTANT_NAME 1
#if CONSTANT_NAME
#endif
```

Poiché `CONSTANT_NAME` restituisce una stringa e non un Integer, la `#if` direttiva genera un errore irreversibile C1017.

In altri casi, il preprocessore valuta una costante non definita come zero. Questo può causare risultati imprevisti, come illustrato nell'esempio seguente. `YES` è undefined, quindi restituisce zero. L'espressione `#if` `CONSTANT_NAME` restituisce false e il codice da utilizzare `YES` viene rimosso dal preprocessore. `NO` è inoltre undefined (zero), quindi `#elif` `CONSTANT_NAME==NO` restituisce true ( `0 == 0` ), facendo sì che il preprocessore lasci il codice nella `#elif` parte dell'istruzione, esattamente l'opposto del comportamento previsto.

```cpp
// C1017c.cpp
// compile with: /c
#define CONSTANT_NAME YES
#if CONSTANT_NAME
   // Code to use on YES...
#elif CONSTANT_NAME==NO
   // Code to use on NO...
#endif
```

Per visualizzare esattamente il modo in cui il compilatore gestisce le direttive per il preprocessore, usare [/p](../../build/reference/p-preprocess-to-a-file.md), [/e](../../build/reference/e-preprocess-to-stdout.md)o [/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md).
