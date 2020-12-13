---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4280'
title: Avviso del compilatore (livello 3) C4280
ms.date: 11/04/2016
f1_keywords:
- C4280
helpviewer_keywords:
- C4280
ms.assetid: 153fb639-3ee1-4fee-baf9-71420abcf3f6
ms.openlocfilehash: e2ef8d4961bf4046d2501d5724ff487bb1526ce2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344133"
---
# <a name="compiler-warning-level-3-c4280"></a>Avviso del compilatore (livello 3) C4280

' operator->' è ricorsivo autonomo tramite il tipo ' type '

Il codice consente in modo non corretto a **operator->** di chiamare se stesso.

L'esempio seguente genera l'C4280:

```cpp
// C4280.cpp
// compile with: /W3 /WX
struct A
{
   int z;
   A& operator ->();
};

void f(A y)
{
   int i = y->z; // C4280
}
```
