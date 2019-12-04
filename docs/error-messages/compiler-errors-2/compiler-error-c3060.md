---
title: Errore del compilatore C3060
ms.date: 11/04/2016
f1_keywords:
- C3060
helpviewer_keywords:
- C3060
ms.assetid: 6282bb92-0546-4b59-9435-d3840bf93bdb
ms.openlocfilehash: 6eba6264caf3e9f443e1b614a62b53708688ab95
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74749555"
---
# <a name="compiler-error-c3060"></a>Errore del compilatore C3060

'member': una funzione Friend non può essere definita all'interno di una classe con un nome completo (può solo essere dichiarata)

Una funzione Friend è stata definita usando un nome completo, ma questo non è consentito.

L'esempio seguente genera l'errore C3060:

```cpp
// C3060.cpp
class A {
public:
   void func();
};

class C {
public:
   friend void A::func() { }   // C3060
   // Try the following line and the out of class definition:
   // friend void A::func();
};

// void A::func(){}
```
