---
title: Errore del compilatore C3052
ms.date: 11/04/2016
f1_keywords:
- C3052
helpviewer_keywords:
- C3052
ms.assetid: 87480c42-1ceb-4775-8d20-88c54a7bb6a6
ms.openlocfilehash: 40857432e07baffea69d8201cc3e0241698c93da
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506199"
---
# <a name="compiler-error-c3052"></a>Errore del compilatore C3052

'var': la variabile non appare in una clausola di condivisione dati in una clausola default(none)

Se viene usato [default(none)](../../parallel/openmp/reference/openmp-clauses.md#default-openmp) , qualsiasi variabile usata nel blocco strutturato deve essere specificata in modo esplicito come [shared](../../parallel/openmp/reference/openmp-clauses.md#shared-openmp) o [private](../../parallel/openmp/reference/openmp-clauses.md#private-openmp).

L'esempio seguente genera l'errore C3052:

```cpp
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
