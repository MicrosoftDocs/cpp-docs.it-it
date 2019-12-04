---
title: Errore del compilatore C2888
ms.date: 11/04/2016
f1_keywords:
- C2888
helpviewer_keywords:
- C2888
ms.assetid: 244f593e-ff25-4dad-b31f-84dafa3bc84a
ms.openlocfilehash: 93fe37c72a04e8c942f910ed3a631e5ba2a542bc
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760915"
---
# <a name="compiler-error-c2888"></a>Errore del compilatore C2888

' Identifier ': Impossibile definire il simbolo nello spazio dei nomi ' namespace '

Un simbolo appartenente allo spazio dei nomi A deve essere definito in uno spazio dei nomi che include un oggetto.

L'esempio seguente genera l'C2888:

```cpp
// C2888.cpp
// compile with: /c
namespace M {
   namespace N {
      void f1();
      void f2();
   }

   void N::f1() {}   // OK: namspace M encloses N
}

namespace O {
   void M::N::f2() {}   // C2888 namespace O does not enclose M
}
```
