---
description: 'Altre informazioni su: errore del compilatore C2245'
title: Errore del compilatore C2245
ms.date: 11/04/2016
f1_keywords:
- C2245
helpviewer_keywords:
- C2245
ms.assetid: 08aaeadf-10ec-485a-b2a6-6e775289082b
ms.openlocfilehash: b304fa30164576ed9d2c1f3fcf21dfe2f8e2cbc2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302217"
---
# <a name="compiler-error-c2245"></a>Errore del compilatore C2245

funzione membro 'function' non esistente specificata come friend (la firma della funzione membro non corrisponde ad alcun overload)

Una funzione specificata come friend non è stata trovata dal compilatore.

L'esempio seguente genera l'errore C2245:

```cpp
// C2245.cpp
// compile with: /c
class B {
   void f(int i);
};

class A {
   int m_i;
   friend void B::f(char);   // C2245
   // try the following line instead
   // friend void B::f(int);
};

void B::f(int i) {
   A a;
   a.m_i = 0;
}
```
