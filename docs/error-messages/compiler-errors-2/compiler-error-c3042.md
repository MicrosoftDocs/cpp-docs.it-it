---
description: 'Altre informazioni su: errore del compilatore C3042'
title: Errore del compilatore C3042
ms.date: 11/04/2016
f1_keywords:
- C3042
helpviewer_keywords:
- C3042
ms.assetid: bf73f61e-5bd2-40a8-9b06-6244e6a15a41
ms.openlocfilehash: 04c4366e574f158234653d32b4b6e01bfceaaa27
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269913"
---
# <a name="compiler-error-c3042"></a>Errore del compilatore C3042

le clausole 'copyprivate' e 'nowait' non possono apparire contemporaneamente nella direttiva 'directive' OpenMP

Le clausole [copyprivate](../../parallel/openmp/reference/openmp-clauses.md#copyprivate) e [nowait](../../parallel/openmp/reference/openmp-clauses.md#nowait) si escludono a vicenda nella direttiva specificata. Per correggere questo errore, rimuovere una o entrambe le clausole `copyprivate` e `nowait` .

L'esempio seguente genera l'errore C3042:

```cpp
// C3042.cpp
// compile with: /openmp /c
#include <stdio.h>
#include "omp.h"

double d;

int main() {
    #pragma omp parallel private(d)
   {
      #pragma omp single copyprivate(d) nowait   // C3042
      {
      }
   }
}
```
