---
description: 'Altre informazioni su: errore del compilatore C3909'
title: Errore del compilatore C3909
ms.date: 11/04/2016
f1_keywords:
- C3909
helpviewer_keywords:
- C3909
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
ms.openlocfilehash: a85e0201e192caae1e4f170a12544177cbb2d7f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144157"
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
