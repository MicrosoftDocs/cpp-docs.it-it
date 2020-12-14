---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4374'
title: Avviso del compilatore (livello 1) C4374
ms.date: 11/04/2016
f1_keywords:
- C4374
helpviewer_keywords:
- C4374
ms.assetid: 4ac9aaec-d815-4b6e-825f-fa872092dd3b
ms.openlocfilehash: 0b1d8eef5f168f12cc41f1108fcea24040f806ad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311337"
---
# <a name="compiler-warning-level-1-c4374"></a>Avviso del compilatore (livello 1) C4374

' funzione1': il metodo di interfaccia non verrà implementato dal metodo non virtuale ' funzione2'

Il compilatore prevede di trovare la parola chiave [Virtual](../../cpp/virtual-specifier.md) nella definizione di un metodo.

L'esempio seguente genera l'C4374:

```cpp
// C4374.cpp
// compile with: /clr /W1 /c /WX
public interface class I {
   void f();
};

public ref struct B {
   void f() {
      System::Console::WriteLine("B::f()");
   }
};

public ref struct C {
   virtual void f() {
      System::Console::WriteLine("C::f()");
   }
};

public ref struct D : B, I {};   // C4374
public ref struct E : C, I {};   // OK
```
