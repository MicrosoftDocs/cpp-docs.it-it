---
description: 'Altre informazioni su: errore del compilatore C3044'
title: Errore del compilatore C3044
ms.date: 11/04/2016
f1_keywords:
- C3044
helpviewer_keywords:
- C3044
ms.assetid: 9f3e25b2-4676-49ab-97bf-6c88cd0fa377
ms.openlocfilehash: e206a30457e5ef31d4d17886f30b928ceb42816f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269874"
---
# <a name="compiler-error-c3044"></a>Errore del compilatore C3044

'section': consentita solo se annidata direttamente in una direttiva 'sections' OpenMP

Il compilatore ha trovato una direttiva `section` usata in modo non corretto. Per altre informazioni, vedere [sections](../../parallel/openmp/reference/openmp-directives.md#sections-openmp).

L'esempio seguente genera l'errore C3044:

```cpp
// C3044.cpp
// compile with: /openmp /c
#include "omp.h"
int main() {
   int n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {
         ++n2;
      }

      #pragma omp section   // C3044
      {
         ++n3;
      }
   }

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
      {
         #pragma omp section   // OK
         {
            ++n3;
         }
      }
   }
}
```
