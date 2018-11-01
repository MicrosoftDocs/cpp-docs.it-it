---
title: Errore del compilatore C3910
ms.date: 11/04/2016
f1_keywords:
- C3910
helpviewer_keywords:
- C3910
ms.assetid: cfcbe620-b463-463b-95ea-2d60ad33ebb5
ms.openlocfilehash: b9194149c532044f6c8a1eab84729f7896f1352b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50568545"
---
# <a name="compiler-error-c3910"></a>Errore del compilatore C3910

'event': deve definire il membro 'metodo'

Un evento è stato definito, ma non contiene il metodo della funzione di accesso specificato, obbligatorio.

Per altre informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).

L'esempio seguente genera l'errore C3910:

```
// C3910.cpp
// compile with: /clr /c
delegate void H();
ref class X {
   event H^ E {
      // uncomment the following lines
      // void add(H^) {}
      // void remove( H^ h ) {}
      // void raise( ) {}
   };   // C3910

   event H^ E2; // OK data member
};
```