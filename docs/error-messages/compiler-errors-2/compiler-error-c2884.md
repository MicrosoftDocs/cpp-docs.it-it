---
title: Errore del compilatore C2884
ms.date: 11/04/2016
f1_keywords:
- C2884
helpviewer_keywords:
- C2884
ms.assetid: 8b4d43e3-3fb5-4360-86c8-de59d8736d4f
ms.openlocfilehash: d0e283c7cd6116655a56f8df67ab4eecf9923b68
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760941"
---
# <a name="compiler-error-c2884"></a>Errore del compilatore C2884

' name ': introdotto dalla dichiarazione using in conflitto con la funzione locale ' Function '

Si è tentato di definire una funzione più di una volta. La prima definizione è una definizione locale. Il secondo è da uno spazio dei nomi con una dichiarazione `using`.

L'esempio seguente genera l'C2884:

```cpp
// C2884.cpp
namespace A {
   void z(int);
}

void f() {
   void z(int);
   using A::z;   // C2884 z is already defined
}
```
