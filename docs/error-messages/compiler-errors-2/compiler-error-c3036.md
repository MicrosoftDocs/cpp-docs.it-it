---
title: Errore del compilatore C3036
ms.date: 11/04/2016
f1_keywords:
- C3036
helpviewer_keywords:
- C3036
ms.assetid: 10c6993e-bc42-4a07-85c7-cdc34ac30906
ms.openlocfilehash: c1dc060a5d198b78e652a1b6b239655439209f66
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613746"
---
# <a name="compiler-error-c3036"></a>Errore del compilatore C3036

'operator': token di operatore non valido nella clausola 'reduction' OpenMP

Una clausola [reduction](../../parallel/openmp/reference/reduction.md) non è stata specificata correttamente.

L'esempio seguente genera l'errore C3036:

```
// C3036.cpp
// compile with: /openmp
static float a[1000], b[1000], c[1000];
void test1(int first, int last) {
   static float dp = 0.0f;
   #pragma omp for nowait reduction(.:dp)   // C3036
   // try the following line instead
   // #pragma omp for nowait reduction(+: dp)
   for (int i = first ; i <= last ; ++i)
      dp += a[i] * b[i];
}
```