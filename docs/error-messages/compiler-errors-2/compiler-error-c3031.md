---
title: Errore del compilatore C3031
ms.date: 11/04/2016
f1_keywords:
- C3031
helpviewer_keywords:
- C3031
ms.assetid: 7e621e7e-eda7-45b5-8836-29599cd05255
ms.openlocfilehash: 848577239d24df3f6af38438fb42c372ef34b1ce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62265856"
---
# <a name="compiler-error-c3031"></a>Errore del compilatore C3031

'var': la variabile nella clausola 'reduction' deve avere un tipo aritmetico scalare

Una variabile di tipo errato è stata passata a una clausola reduction.

L'esempio seguente genera l'errore C3031:

```
// C3031.cpp
// compile with: /openmp /link vcomps.lib
#include <stdio.h>
#include "omp.h"

typedef struct {
   int n;
} Incomplete;

extern Incomplete inc;
int i = 9;

int main() {
   #pragma omp parallel reduction(+: inc)   // C3031
      ;

   #pragma omp parallel reduction(+: i)     // OK
      ;
}
```