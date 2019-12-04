---
title: Errore del compilatore C3015
ms.date: 11/04/2016
f1_keywords:
- C3015
helpviewer_keywords:
- C3015
ms.assetid: d5e8e50b-7542-4b2d-8665-1b22072a5bc6
ms.openlocfilehash: f83da313c71ff081ecd5d4339014b66f98578dc1
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74742223"
---
# <a name="compiler-error-c3015"></a>Errore del compilatore C3015

l'inizializzazione nell'istruzione 'for' OpenMP non ha un formato valido

È necessario che sia specificato in modo completo ed esplicito un ciclo `for` in un'istruzione OpenMP.

L'esempio seguente genera l'errore C3015:

```cpp
// C3015.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (; i < 0; i += j)   // C3015
      // Try the following line instead:
      // for (i = 0; i < 0; i++)
         --j;
   }
}
```
