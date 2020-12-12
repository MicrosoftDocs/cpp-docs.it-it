---
description: 'Altre informazioni su: errore del compilatore C2571'
title: Errore del compilatore C2571
ms.date: 11/04/2016
f1_keywords:
- C2571
helpviewer_keywords:
- C2571
ms.assetid: c6522616-dee9-4d7d-9bf8-30a7e1deaadf
ms.openlocfilehash: 773cab05204e15a22a4412364bd8f89cddfd92ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97208970"
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
