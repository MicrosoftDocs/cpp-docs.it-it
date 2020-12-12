---
description: 'Altre informazioni su: errore del compilatore C3350'
title: Errore del compilatore C3350
ms.date: 11/04/2016
f1_keywords:
- C3350
helpviewer_keywords:
- C3350
ms.assetid: cfbbc338-92b5-4f34-999e-aa2d2376bc70
ms.openlocfilehash: edda71fdf8f1160d17099a7cee228a053ddd881b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326014"
---
# <a name="compiler-error-c3350"></a>Errore del compilatore C3350

'delegato': un costruttore di delegato richiede numero argomento/i

Quando si crea un'istanza di un delegato, è necessario passare due argomenti: un'istanza del tipo contenente la funzione di delegato e la funzione stessa.

L'esempio seguente genera l'errore C3350:

```cpp
// C3350.cpp
// compile with: /clr
delegate void SumDelegate();

public ref class X {
public:
   void F() {}
   static void F2() {}
};

int main() {
   X ^ MyX = gcnew X();
   SumDelegate ^ pSD = gcnew SumDelegate();   // C3350
   SumDelegate ^ pSD1 = gcnew SumDelegate(MyX, &X::F);
   SumDelegate ^ pSD2 = gcnew SumDelegate(&X::F2);
}
```
