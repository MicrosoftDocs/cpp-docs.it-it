---
description: 'Altre informazioni su: errore del compilatore C2274'
title: Errore del compilatore C2274
ms.date: 11/04/2016
f1_keywords:
- C2274
helpviewer_keywords:
- C2274
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
ms.openlocfilehash: 31b9d63b9cf87114ce2d1d79f1f38fff97d4ebbb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268353"
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
