---
title: Errore del compilatore C2571
ms.date: 11/04/2016
f1_keywords:
- C2571
helpviewer_keywords:
- C2571
ms.assetid: c6522616-dee9-4d7d-9bf8-30a7e1deaadf
ms.openlocfilehash: 7bd87f0732e1a632b8c86cc57fab1a0f104b2c77
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755499"
---
# <a name="compiler-error-c2571"></a>Errore del compilatore C2571

' Function ': la funzione virtuale non può essere nell'Unione ' Union '

Un'Unione è dichiarata con una funzione virtuale. È possibile dichiarare una funzione virtuale solo in una classe o una struttura.  Di seguito vengono riportate alcune soluzioni possibili:

1. Modificare l'Unione in una classe o una struttura.

1. Rendere la funzione non virtuale.

L'esempio seguente genera l'C2571:

```cpp
// C2571.cpp
// compile with: /c
union A {
   virtual void func1();   // C2571
   void func2();   // OK
};
```
