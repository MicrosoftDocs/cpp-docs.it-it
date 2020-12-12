---
description: 'Altre informazioni su: errore del compilatore C2876'
title: Errore del compilatore C2876
ms.date: 11/04/2016
f1_keywords:
- C2876
helpviewer_keywords:
- C2876
ms.assetid: 8b674bf1-f9f4-4a8e-8127-e884c1d1708f
ms.openlocfilehash: 5d83c1dd57c074354d3643452a1a2189bcbd860e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320499"
---
# <a name="compiler-error-c2876"></a>Errore del compilatore C2876

' Class:: symbol ': non tutti gli overload sono accessibili

Tutte le forme di overload di una funzione in una classe base devono essere accessibili alla classe derivata.

L'esempio seguente genera l'C2876:

```cpp
// C2876.cpp
// compile with: /c
class A {
public:
   double a(double);
private:
   int a(int);
};

class B : public A {
   using A::a;   // C2876 one overload is private in base class
};
```
