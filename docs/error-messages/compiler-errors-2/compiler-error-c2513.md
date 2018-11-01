---
title: Errore del compilatore C2513
ms.date: 11/04/2016
f1_keywords:
- C2513
helpviewer_keywords:
- C2513
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
ms.openlocfilehash: 13840246a5dc6a1c1bdbcb55dc47f212ee353d81
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50561200"
---
# <a name="compiler-error-c2513"></a>Errore del compilatore C2513

'type': nessuna variabile dichiarata prima '='

L'identificatore di tipo presente nella dichiarazione senza identificatore della variabile.

L'esempio seguente genera l'errore C2513:

```
// C2513.cpp
int main() {
   int = 9;   // C2513
   int i = 9;   // OK
}
```

Questo errore può anche essere generato come risultato un lavoro conformità del compilatore eseguita per Visual Studio .NET 2003: inizializzazione di un typedef non è più consentito. L'inizializzazione di un typedef non è consentita dallo standard e genera ora un errore del compilatore.

```
// C2513b.cpp
// compile with: /c
typedef struct S {
   int m_i;
} S = { 1 };   // C2513
// try the following line instead
// } S;
```

In alternativa, è possibile eliminare `typedef` per definire una variabile con un elenco di inizializzatori di aggregazione, ma ciò non è consigliato perché verrà creare una variabile con lo stesso nome del tipo e nascondere il nome del tipo.