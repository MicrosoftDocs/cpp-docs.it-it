---
title: Compilatore avviso (livello 1) C4374 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4374
dev_langs:
- C++
helpviewer_keywords:
- C4374
ms.assetid: 4ac9aaec-d815-4b6e-825f-fa872092dd3b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fa4a1372e6a9608781b4f57a10b57641efd02a89
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116061"
---
# <a name="compiler-warning-level-1-c4374"></a>Avviso del compilatore (livello 1) C4374

'function1': metodo di interfaccia non verrà implementato dal metodo non virtuale 'ereditato funzione2'

Il compilatore prevedeva trovare le [virtuale](../../cpp/virtual-specifier.md) parola chiave in una definizione di metodo.

L'esempio seguente genera l'errore C4374:

```
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