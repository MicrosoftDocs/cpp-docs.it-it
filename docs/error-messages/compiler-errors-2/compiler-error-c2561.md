---
title: Errore del compilatore C2561
ms.date: 11/04/2016
f1_keywords:
- C2561
helpviewer_keywords:
- C2561
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
ms.openlocfilehash: 9c42a2da662a286f3e6887f6a1dba381687136bf
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87206965"
---
# <a name="compiler-error-c2561"></a>Errore del compilatore C2561

' Identifier ': la funzione deve restituire un valore

La funzione è stata dichiarata come la restituzione di un valore, ma la definizione di funzione non contiene un' **`return`** istruzione.

Questo errore può essere causato da un prototipo di funzione errato:

1. Se la funzione non restituisce un valore, dichiarare la funzione con il tipo restituito [void](../../cpp/void-cpp.md).

1. Verificare che tutti i rami possibili della funzione restituiscano un valore del tipo dichiarato nel prototipo.

1. Le funzioni C++ contenenti routine di assembly inline che archiviano il valore restituito nel `AX` registro potrebbero richiedere un'istruzione return. Copiare il valore in `AX` una variabile temporanea e restituire la variabile dalla funzione.

L'esempio seguente genera l'C2561:

```cpp
// C2561.cpp
int Test(int x) {
   if (x) {
      return;   // C2561
      // try the following line instead
      // return 1;
   }
   return 0;
}

int main() {
   Test(1);
}
```
