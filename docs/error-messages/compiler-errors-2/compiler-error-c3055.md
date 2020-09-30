---
title: Errore del compilatore C3055
ms.date: 11/04/2016
f1_keywords:
- C3055
helpviewer_keywords:
- C3055
ms.assetid: 60446ee0-18dd-48fc-9059-f0a14229dce8
ms.openlocfilehash: ed0f031fcd0ff0c621556bf73572d720fc2c1352
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91501616"
---
# <a name="compiler-error-c3055"></a>Errore del compilatore C3055

'symbol': impossibile fare riferimento al simbolo prima di utilizzarlo nella direttiva 'threadprivate'

Un simbolo è stato indicato e usato in una clausola [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) . Questa operazione non è consentita.

L'esempio seguente genera l'errore C3055:

```cpp
// C3055.cpp
// compile with: /openmp
int x, y;
int z = x;
#pragma omp threadprivate(x, y)   // C3055

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possibile soluzione:

```cpp
// C3055b.cpp
// compile with: /openmp /LD
int x, y, z;
#pragma omp threadprivate(x, y)

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```
