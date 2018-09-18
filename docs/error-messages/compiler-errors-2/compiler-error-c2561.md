---
title: Errore del compilatore C2561 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2561
dev_langs:
- C++
helpviewer_keywords:
- C2561
ms.assetid: 0abe955b-53a6-4a3c-8362-b1a8eb40e8d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8611af23ab884a853fc751ae82c636753993495b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46070704"
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