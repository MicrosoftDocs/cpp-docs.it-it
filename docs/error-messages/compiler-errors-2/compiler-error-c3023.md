---
title: Errore del compilatore C3023
ms.date: 11/04/2016
f1_keywords:
- C3023
helpviewer_keywords:
- C3023
ms.assetid: 89dcce98-3cd7-4931-a50f-87df1d2ebc9b
ms.openlocfilehash: 546f8bafb4e30919600dfce84d6c84ffa819367e
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74742041"
---
# <a name="compiler-error-c3023"></a>Errore del compilatore C3023

'value': rilevato token imprevisto nell'argomento della clausola 'clause' OpenMP

I valori passati a una clausola non erano validi.

L'esempio seguente genera l'errore C3023:

```cpp
// C3023.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

int main() {
   int i;

   #pragma omp parallel for schedule(dynamic 10)   // C3023
   for (i = 0; i < 10; ++i) ;

   #pragma omp parallel for schedule(dynamic;10)   // C3023
   for (i = 0; i < 10; ++i) ;

   // OK
   #pragma omp parallel for schedule(dynamic, 10)
   for (i = 0; i < 10; ++i)
   ;
}
```
