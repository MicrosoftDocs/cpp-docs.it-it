---
title: Errore del compilatore C3909
ms.date: 11/04/2016
f1_keywords:
- C3909
helpviewer_keywords:
- C3909
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
ms.openlocfilehash: 435288ba657bd22ba29c6681014ae15baa051cec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636462"
---
# <a name="compiler-error-c3909"></a>Errore del compilatore C3909

dichiarazione di evento gestito o aWinRT deve verificarsi in un tipo gestito o WinRT

Un evento Windows Runtime o gestito è stato dichiarato in un tipo nativo. Per correggere l'errore, dichiarare gli eventi nei tipi Windows Runtime o nei tipi gestiti.

Per altre informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3909 e mostra come risolverlo:

```
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