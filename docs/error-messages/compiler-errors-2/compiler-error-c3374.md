---
title: Errore del compilatore C3374
ms.date: 11/04/2016
f1_keywords:
- C3374
helpviewer_keywords:
- C3374
ms.assetid: 41431299-bd20-47d4-a0c8-1334dd79018b
ms.openlocfilehash: c9ee9130d77e844ab435ecc34dcf53e12449abba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50474932"
---
# <a name="compiler-error-c3374"></a>Errore del compilatore C3374

Impossibile accettare l'indirizzo di 'funzione' se non si crea l'istanza del delegato

L'indirizzo di una funzione è stato acquisito in un contesto diverso dalla creazione di un'istanza del delegato.

Il seguente codice di esempio genera l'errore C3374:

```
// C3374.cpp
// compile with: /clr
public delegate void MyDel(int i);

ref class A {
public:
   void func1(int i) {
      System::Console::WriteLine("in func1 {0}", i);
   }
};

int main() {
   &A::func1;   // C3374

   // OK
   A ^ a = gcnew A;
   MyDel ^ StaticDelInst = gcnew MyDel(a, &A::func1);
}
```

## <a name="see-also"></a>Vedere anche

[Procedura: Definire e usare delegati (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md)