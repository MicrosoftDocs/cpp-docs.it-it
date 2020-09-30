---
title: Errore del compilatore C3042
ms.date: 11/04/2016
f1_keywords:
- C3042
helpviewer_keywords:
- C3042
ms.assetid: bf73f61e-5bd2-40a8-9b06-6244e6a15a41
ms.openlocfilehash: 8cd27f492a72277c383afa5ca335a073b1a0519c
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506397"
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
