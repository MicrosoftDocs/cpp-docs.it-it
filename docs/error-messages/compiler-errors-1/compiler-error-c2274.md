---
title: Errore del compilatore C2274
ms.date: 11/04/2016
f1_keywords:
- C2274
helpviewer_keywords:
- C2274
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
ms.openlocfilehash: fd807dedb6c300860611d07212b8fc8952a90a65
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758671"
---
# <a name="compiler-error-c2274"></a>Errore del compilatore C2274

' type ': non valido a destra dell'operatore ' .'

Un tipo viene visualizzato come operando destro di un operatore di accesso ai membri (.).

Questo errore può essere causato dal tentativo di accedere a una conversione di tipo definito dall'utente. Usare la parola chiave `operator` tra il punto e il `type`.

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
