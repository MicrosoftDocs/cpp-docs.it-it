---
title: Errore del compilatore C2273
ms.date: 11/04/2016
f1_keywords:
- C2273
helpviewer_keywords:
- C2273
ms.assetid: 3c682c66-97bf-4a23-a22c-d9a26a92bf95
ms.openlocfilehash: f5780c299eb4da03ece3611ee55062ee7ebcdaae
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212787"
---
# <a name="compiler-error-c2273"></a>Errore del compilatore C2273

' type ': non valido a destra dell'operatore '->'

Un tipo viene visualizzato come operando destro di un `->` operatore.

Questo errore può essere causato dal tentativo di accedere a una conversione di tipo definito dall'utente. Usare la parola chiave **`operator`** tra-> e `type` .

L'esempio seguente genera l'C2273:

```cpp
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
