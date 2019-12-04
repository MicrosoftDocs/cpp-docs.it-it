---
title: Errore del compilatore C2561
ms.date: 11/04/2016
f1_keywords:
- C2561
helpviewer_keywords:
- C2561
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
ms.openlocfilehash: b4a14be9cd32c752e2ab889417494e80b935e31b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755564"
---
# <a name="compiler-error-c2561"></a>Errore del compilatore C2561

' Identifier ': la funzione deve restituire un valore

La funzione è stata dichiarata come la restituzione di un valore, ma la definizione della funzione non contiene un'istruzione `return`.

Questo errore può essere causato da un prototipo di funzione errato:

1. Se la funzione non restituisce un valore, dichiarare la funzione con il tipo restituito [void](../../cpp/void-cpp.md).

1. Verificare che tutti i rami possibili della funzione restituiscano un valore del tipo dichiarato nel prototipo.

1. C++le funzioni contenenti routine di assembly inline che archiviano il valore restituito nel registro `AX` possono richiedere un'istruzione return. Copiare il valore di `AX` in una variabile temporanea e restituire la variabile dalla funzione.

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
