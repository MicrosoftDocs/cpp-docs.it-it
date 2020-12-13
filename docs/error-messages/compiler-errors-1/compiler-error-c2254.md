---
description: 'Altre informazioni su: errore del compilatore C2254'
title: Errore del compilatore C2254
ms.date: 11/04/2016
f1_keywords:
- C2254
helpviewer_keywords:
- C2254
ms.assetid: 49bb3d7e-3bdf-4af6-937c-fa627be412a9
ms.openlocfilehash: f649bcf46af3830881893e2520fabd3a4c2308ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134797"
---
# <a name="compiler-error-c2254"></a>Errore del compilatore C2254

' Function ': identificatore pure o identificatore di override abstract non consentito per la funzione Friend

Una **`friend`** funzione viene specificata come pure **`virtual`** .

L'esempio seguente genera l'C2254:

```cpp
// C2254.cpp
// compile with: /c
class A {
public:
   friend void func1() = 0;   // C2254, func1 is friend
   void virtual func2() = 0;   // OK, pure virtual
   friend void func3();   // OK, friend not virtual nor pure
};

void func1() {};
void func3() {};
```
