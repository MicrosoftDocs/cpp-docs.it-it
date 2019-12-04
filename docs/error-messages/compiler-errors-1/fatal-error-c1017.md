---
title: Errore irreversibile C1017
ms.date: 11/04/2016
f1_keywords:
- C1017
helpviewer_keywords:
- C1017
ms.assetid: 5542e604-599d-4e36-8f83-1d454c5753c9
ms.openlocfilehash: 0feda3bc4c3729d3101be356220aa0124ba85190
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756942"
---
# <a name="fatal-error-c1017"></a>Errore irreversibile C1017

espressione costante integer non valida

L'espressione in una direttiva `#if` non esiste o non ha restituito una costante.

Le costanti definite utilizzando `#define` devono contenere valori che restituiscono una costante Integer se vengono utilizzate in una direttiva `#if`, `#elif`o `#else`.

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

Poiché `CONSTANT_NAME` restituisce una stringa e non un Integer, la direttiva `#if` genera un errore irreversibile C1017.

In altri casi, il preprocessore valuta una costante non definita come zero. Questo può causare risultati imprevisti, come illustrato nell'esempio seguente. `YES` non è definito, quindi restituisce zero. L'espressione `#if` `CONSTANT_NAME` restituisce false e il codice da utilizzare in `YES` viene rimosso dal preprocessore. anche `NO` non è definito (zero), quindi `#elif` `CONSTANT_NAME==NO` restituisce true (`0 == 0`), causando il preprocessore per lasciare il codice nella parte `#elif` dell'istruzione, esattamente l'opposto del comportamento previsto.

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
