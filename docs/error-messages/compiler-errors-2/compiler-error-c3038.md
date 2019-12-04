---
title: Errore del compilatore C3038
ms.date: 11/04/2016
f1_keywords:
- C3038
helpviewer_keywords:
- C3038
ms.assetid: 140ada3e-5636-43ef-a4ee-22a9f66a771f
ms.openlocfilehash: 26fee4f5d636ac56ae01499f6b600d38f56bbe46
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754966"
---
# <a name="compiler-error-c3038"></a>Errore del compilatore C3038

'var': la variabile nella clausola 'private' non può essere una variabile di riduzione nel contesto di inclusione

Le variabili incluse nella clausola [reduction](../../parallel/openmp/reference/reduction.md) di una direttiva parallela non possono essere specificate in una clausola [private](../../parallel/openmp/reference/private-openmp.md) in una direttiva per la condivisione del lavoro associata a un costrutto parallelo.

L'esempio seguente genera l'errore C3038:

```cpp
// C3038.cpp
// compile with: /openmp /c
int g_i, g_i2;

int main() {
   int i;

   #pragma omp parallel reduction(+: g_i)
   {
      #pragma omp for private(g_i)   // C3038
      // try the following line instead
      // #pragma omp for private(g_i2)
      for (i = 0; i < 10; ++i)
         g_i += i;
   }
}
```
