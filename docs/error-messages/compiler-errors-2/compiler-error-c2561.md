---
title: Errore del compilatore C2561
ms.date: 11/04/2016
f1_keywords:
- C2561
helpviewer_keywords:
- C2561
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
ms.openlocfilehash: 8350c5baf129b88c178be280d2da7fe856c6cf57
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62368422"
---
# <a name="compiler-error-c2561"></a>Errore del compilatore C2561

'identifier': funzione deve restituire un valore

La funzione è stata dichiarata come restituire un valore, ma la definizione di funzione non contiene un `return` istruzione.

Questo errore può essere causato da un prototipo di funzione non corretta:

1. Se la funzione non restituisce un valore, dichiarare la funzione con tipo restituito [void](../../cpp/void-cpp.md).

1. Verificare che tutti i rami possibili della funzione restituiscano il valore del tipo dichiarato nel prototipo.

1. Le funzioni C++ che contiene le routine di assembly inline che archiviano il valore restituito nel `AX` register potrebbe essere necessario un'istruzione return. Copiare il valore in `AX` a una variabile temporanea e restituire tale variabile dalla funzione.

L'esempio seguente genera l'errore C2561:

```
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