---
description: 'Altre informazioni su: errore del compilatore C3059'
title: Errore del compilatore C3059
ms.date: 11/04/2016
f1_keywords:
- C3059
helpviewer_keywords:
- C3059
ms.assetid: 57220324-8286-4cab-a1ab-45385eb1eae0
ms.openlocfilehash: 82629fb77a0cf589f4e311d951fcf1540e0b7c8f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281756"
---
# <a name="compiler-error-c3059"></a>Errore del compilatore C3059

'var': impossibile utilizzare il simbolo 'threadprivate' nella clausola 'clause'

Un simbolo [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) è stato usato in una clausola.

L'esempio seguente genera l'errore C3059:

```cpp
// C3059.cpp
// compile with: /openmp
#include "omp.h"
int x, y;
#pragma omp threadprivate(x, y)

int main() {
   #pragma omp parallel private(x, y)   // C3059
   {
      x = y;
   }
}
```

Possibile soluzione:

```cpp
// C3059b.cpp
// compile with: /openmp
#include "omp.h"
int x = 0, y = 0;

int main() {
   #pragma omp parallel firstprivate(y) private(x)
   {
      x = y;
   }
}
```
