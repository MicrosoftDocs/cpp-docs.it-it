---
title: Errore del compilatore C2274
ms.date: 11/04/2016
f1_keywords:
- C2274
helpviewer_keywords:
- C2274
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
ms.openlocfilehash: 5907664ba367d6e4005698e112d0a19f3a2a26e9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220379"
---
# <a name="compiler-error-c2274"></a>Errore del compilatore C2274

' type ': non valido a destra dell'operatore ' .'

Un tipo viene visualizzato come operando destro di un operatore di accesso ai membri (.).

Questo errore può essere causato dal tentativo di accedere a una conversione di tipo definito dall'utente. Usare la parola chiave **`operator`** tra il punto e `type` .

L'esempio seguente genera l'errore C2286:

```cpp
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
