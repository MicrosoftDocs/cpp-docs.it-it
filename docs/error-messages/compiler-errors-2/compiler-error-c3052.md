---
title: Errore del compilatore C3052
ms.date: 11/04/2016
f1_keywords:
- C3052
helpviewer_keywords:
- C3052
ms.assetid: 87480c42-1ceb-4775-8d20-88c54a7bb6a6
ms.openlocfilehash: ed9c27e1602f9372cb9137615ef66932a8df960c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441834"
---
# <a name="compiler-error-c3052"></a>Errore del compilatore C3052

'var': la variabile non appare in una clausola di condivisione dati in una clausola default(none)

Se viene usato [default(none)](../../parallel/openmp/reference/default-openmp.md) , qualsiasi variabile usata nel blocco strutturato deve essere specificata in modo esplicito come [shared](../../parallel/openmp/reference/shared-openmp.md) o [private](../../parallel/openmp/reference/private-openmp.md).

L'esempio seguente genera l'errore C3052:

```
// C3052.cpp
// compile with: /openmp /c
int main() {
   int n1 = 1;

   #pragma omp parallel default(none) // shared(n1) private(n1)
   {
      n1 = 0;   // C3052 use either a shared or private clause
   }
}
```