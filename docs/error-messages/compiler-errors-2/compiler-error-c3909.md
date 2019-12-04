---
title: Errore del compilatore C3909
ms.date: 11/04/2016
f1_keywords:
- C3909
helpviewer_keywords:
- C3909
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
ms.openlocfilehash: 69613a1058bd5178ea4c03931664dd00bad7a101
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74748996"
---
# <a name="compiler-error-c3909"></a>Errore del compilatore C3909

la dichiarazione di evento gestito o aWinRT deve essere eseguita in un tipo gestito o WinRT

Un evento Windows Runtime o gestito è stato dichiarato in un tipo nativo. Per correggere l'errore, dichiarare gli eventi nei tipi Windows Runtime o nei tipi gestiti.

Per ulteriori informazioni, vedere [evento](../../extensions/event-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3909 e mostra come risolverlo:

```cpp
// C3909.cpp
// compile with: /clr /c
delegate void H();
class X {
   event H^ E;   // C3909 - use ref class X instead
};

ref class Y {
   static event H^ E {
      void add(H^) {}
      void remove( H^ h ) {}
      void raise( ) {}
   }
};
```
