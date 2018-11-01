---
title: Errore del compilatore C3042
ms.date: 11/04/2016
f1_keywords:
- C3042
helpviewer_keywords:
- C3042
ms.assetid: bf73f61e-5bd2-40a8-9b06-6244e6a15a41
ms.openlocfilehash: deb3b8d6251316bceb71ce03f2bda88520bbb9b3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50626798"
---
# <a name="compiler-error-c3042"></a>Errore del compilatore C3042

le clausole 'copyprivate' e 'nowait' non possono apparire contemporaneamente nella direttiva 'directive' OpenMP

Le clausole [copyprivate](../../parallel/openmp/reference/copyprivate.md) e [nowait](../../parallel/openmp/reference/nowait.md) si escludono a vicenda nella direttiva specificata. Per correggere questo errore, rimuovere una o entrambe le clausole `copyprivate` e `nowait` .

L'esempio seguente genera l'errore C3042:

```
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