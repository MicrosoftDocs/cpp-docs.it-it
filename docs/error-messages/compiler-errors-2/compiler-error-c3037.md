---
title: Errore del compilatore C3037
ms.date: 11/04/2016
f1_keywords:
- C3037
helpviewer_keywords:
- C3037
ms.assetid: 9ba8a890-d3c7-4cce-93c5-d358e2bfad28
ms.openlocfilehash: d11f1419fdaac5e2283d0ae53a1ed068214e437e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754992"
---
# <a name="compiler-error-c3037"></a>Errore del compilatore C3037

'var': la variabile nella clausola 'reduction' deve essere condivisa nel contesto di inclusione

Una variabile specificata in una clausola [reduction](../../parallel/openmp/reference/reduction.md) potrebbe non essere una variabile privata di ciascun thread nel contesto.

L'esempio seguente genera l'errore C3037:

```cpp
// C3037.cpp
// compile with: /openmp /c
int g_i;

int main() {
   int i;

   #pragma omp parallel private(g_i)
   // try the following line instead
   // #pragma omp parallel
   {
      #pragma omp for reduction(+:g_i)   // C3037
      for (i = 0 ; i < 10 ; ++i) {
         g_i += i;
      }
   }
}
```
