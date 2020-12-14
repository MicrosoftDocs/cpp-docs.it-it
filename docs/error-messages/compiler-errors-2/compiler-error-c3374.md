---
description: 'Altre informazioni su: errore del compilatore C3374'
title: Errore del compilatore C3374
ms.date: 11/04/2016
f1_keywords:
- C3374
helpviewer_keywords:
- C3374
ms.assetid: 41431299-bd20-47d4-a0c8-1334dd79018b
ms.openlocfilehash: b3ec1a18433c41f8c1e1a4b704b6ab03dae7572d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245174"
---
# <a name="compiler-error-c3374"></a>Errore del compilatore C3374

Impossibile accettare l'indirizzo di 'funzione' se non si crea l'istanza del delegato

L'indirizzo di una funzione è stato acquisito in un contesto diverso dalla creazione di un'istanza del delegato.

Il seguente codice di esempio genera l'errore C3374:

```cpp
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

## <a name="see-also"></a>Vedi anche

[Procedura: definire e utilizzare delegati (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md)
