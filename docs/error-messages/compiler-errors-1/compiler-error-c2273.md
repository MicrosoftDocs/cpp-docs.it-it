---
title: Errore del compilatore C2273
ms.date: 11/04/2016
f1_keywords:
- C2273
helpviewer_keywords:
- C2273
ms.assetid: 3c682c66-97bf-4a23-a22c-d9a26a92bf95
ms.openlocfilehash: f2ed5c49a9f8243fd5c9c302caf2876493c26bc3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50526392"
---
# <a name="compiler-error-c2273"></a>Errore del compilatore C2273

'type': non valido a destra dell'operatore '->'

Viene visualizzato un tipo come operando destro di un `->` operatore.

Questo errore può essere causato dal tentativo di accedere a una conversione del tipo definito dall'utente. Utilizzare la parola chiave `operator` tra -> e `type`.

L'esempio seguente genera l'errore C2273:

```
// C2273.cpp
struct MyClass {
   operator int() {
      return 0;
   }
};
int main() {
   MyClass * ClassPtr = new MyClass;
   int i = ClassPtr->int();   // C2273
   int j = ClassPtr-> operator int();   // OK
}
```