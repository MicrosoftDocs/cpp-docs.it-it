---
title: Errore del compilatore C2883
ms.date: 11/04/2016
f1_keywords:
- C2883
helpviewer_keywords:
- C2883
ms.assetid: 5c6d689d-ed42-41ad-b5c0-e9c2e0b8c356
ms.openlocfilehash: cb6b1043d976cfeb8cb92c8780c5b84ea9700b8b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760954"
---
# <a name="compiler-error-c2883"></a>Errore del compilatore C2883

' name ': la dichiarazione di funzione è in conflitto con ' Identifier ' introdotta dalla dichiarazione using

Si è tentato di definire una funzione più di una volta. La prima definizione è stata eseguita da uno spazio dei nomi con una dichiarazione `using`. Il secondo è una definizione locale.

L'esempio seguente genera l'C2883:

```cpp
// C2883.cpp
namespace A {
   void z(int);
}

int main() {
   using A::z;
   void z(int);   // C2883  z is already defined
}
```
