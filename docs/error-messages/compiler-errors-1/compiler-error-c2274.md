---
title: Errore del compilatore C2274
ms.date: 11/04/2016
f1_keywords:
- C2274
helpviewer_keywords:
- C2274
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
ms.openlocfilehash: f2fcb75098f18ad113ba68959035b37d9cddd6e9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667025"
---
# <a name="compiler-error-c2274"></a>Errore del compilatore C2274

'type': non valido a destra di '.' operatore

Viene visualizzato un tipo come operando destro dell'operatore di accesso ai membri (.).

Questo errore può essere causato dal tentativo di accedere a una conversione del tipo definito dall'utente. Usare la parola chiave `operator` tra la durata e `type`.

L'esempio seguente genera l'errore C2286:

```
// C2274.cpp
struct MyClass {
   operator int() {
      return 0;
   }
};

int main() {
   MyClass ClassName;
   int i = ClassName.int();   // C2274
   int j = ClassName.operator int();   // OK
}
```