---
title: Errore del compilatore C3059
ms.date: 11/04/2016
f1_keywords:
- C3059
helpviewer_keywords:
- C3059
ms.assetid: 57220324-8286-4cab-a1ab-45385eb1eae0
ms.openlocfilehash: 9b1efc0969373b6a91b0800ae71477b2371814bb
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91501440"
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
