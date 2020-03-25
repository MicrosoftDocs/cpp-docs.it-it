---
title: Avviso del compilatore (livello 1) C4374
ms.date: 11/04/2016
f1_keywords:
- C4374
helpviewer_keywords:
- C4374
ms.assetid: 4ac9aaec-d815-4b6e-825f-fa872092dd3b
ms.openlocfilehash: a0dbfbe931ec30c0bde2e82718e0817dcfa243b7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187037"
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
