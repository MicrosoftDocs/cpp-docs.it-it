---
description: 'Altre informazioni su: errore del compilatore C3047'
title: Errore del compilatore C3047
ms.date: 11/04/2016
f1_keywords:
- C3047
helpviewer_keywords:
- C3047
ms.assetid: 91c14566-5958-433d-8549-0e8bc3196f76
ms.openlocfilehash: 471f85f6a73e911ea9c308a3de9d2afbe800f750
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269783"
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
