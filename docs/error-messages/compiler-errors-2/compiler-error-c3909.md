---
title: Errore del compilatore C3909
ms.date: 11/04/2016
f1_keywords:
- C3909
helpviewer_keywords:
- C3909
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
ms.openlocfilehash: 95de97a27fc42e98247675b1b48325593ff3c21e
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59779375"
---
# <a name="compiler-error-c3909"></a>Errore del compilatore C3909

dichiarazione di evento gestito o aWinRT deve verificarsi in un tipo gestito o WinRT

Un evento Windows Runtime o gestito è stato dichiarato in un tipo nativo. Per correggere l'errore, dichiarare gli eventi nei tipi Windows Runtime o nei tipi gestiti.

Per altre informazioni, vedere [evento](../../extensions/event-cpp-component-extensions.md).

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