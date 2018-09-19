---
title: Compilatore avviso (livello 1) C4358 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4358
dev_langs:
- C++
helpviewer_keywords:
- C4358
ms.assetid: a9848f84-14b3-405e-81bf-ee3e91a51511
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8ac1e9740f8e6129b4d3c71ad10f8c5a48f801c2
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054207"
---
# <a name="compiler-warning-level-1-c4358"></a>Avviso del compilatore (livello 1) C4358

'operator': il tipo restituito di delegati combinati non 'void'; valore restituito è indefinito

Sono stati combinati due delegati e il valore restituito non void. Se si combinano due delegati con i valori restituiti non void, il compilatore non sarà in grado di eseguire un'assegnazione corretta, se viene usato il valore restituito del delegato.

L'esempio seguente genera l'errore C4358:

```
// C4358.cpp
// compile with: /clr /W1
delegate int D();
delegate void E();

ref class X {
   int i;
public:
   X(int ii) : i(ii) {}
   int f() {
      return i;
   }
};

ref class Y {
   int i;
public:
   Y() {}
   void g() {}
};

int main() {
   D^ d = gcnew D(gcnew X(1), &X::f);
   D^ d2 = gcnew D(gcnew X(2), &X::f);

   d += d2;   // C4358
   int j = d();   // return value indeterminate

   E^ e = gcnew E(gcnew Y, &Y::g);
   E^ e2 = gcnew E(gcnew Y, &Y::g);
   e += e2;   // OK
}
```