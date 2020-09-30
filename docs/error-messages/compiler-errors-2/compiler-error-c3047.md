---
title: Errore del compilatore C3047
ms.date: 11/04/2016
f1_keywords:
- C3047
helpviewer_keywords:
- C3047
ms.assetid: 91c14566-5958-433d-8549-0e8bc3196f76
ms.openlocfilehash: 41312e09996e2fe007cdc13c0369b5154e720841
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506217"
---
# <a name="compiler-error-c3047"></a>Errore del compilatore C3047

Un blocco strutturato in un'area 'sections' OpenMP deve essere preceduto da '#pragma omp section'

Qualsiasi codice in un blocco di codice introdotto da una direttiva [sections](../../parallel/openmp/reference/openmp-directives.md#sections-openmp) deve trovarsi in un blocco di codice introdotto da una direttiva `section` .

L'esempio seguente genera l'errore C3047:

```cpp
// C3047.cpp
// compile with: /openmp /c
#include "omp.h"

int main() {
   int n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {

         #pragma omp section
         {
            ++n3;
         }

         ++n2;   // C3047 not enclosed in #pragma omp section
      }
   }
}
```
