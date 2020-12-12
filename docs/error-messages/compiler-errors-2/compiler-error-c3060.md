---
description: 'Altre informazioni su: errore del compilatore C3060'
title: Errore del compilatore C3060
ms.date: 11/04/2016
f1_keywords:
- C3060
helpviewer_keywords:
- C3060
ms.assetid: 6282bb92-0546-4b59-9435-d3840bf93bdb
ms.openlocfilehash: a1efe037e75251ef452b0164a2b4e01ea4c38a1f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281730"
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
