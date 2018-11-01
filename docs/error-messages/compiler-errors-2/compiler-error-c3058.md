---
title: Errore del compilatore C3058
ms.date: 11/04/2016
f1_keywords:
- C3058
helpviewer_keywords:
- C3058
ms.assetid: 669d08c8-0b58-4351-88aa-c6e6e1af481c
ms.openlocfilehash: 5655fe8ebeb8f1b61d7acbba5313c2e3ab2a2b4c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50547238"
---
# <a name="compiler-error-c3058"></a>Errore del compilatore C3058

'symbol': simbolo non dichiarato 'threadprivate' prima dell'utilizzo nella clausola 'copyin'

Un simbolo deve essere dichiarato [threadprivate](../../parallel/openmp/reference/threadprivate.md) prima di poter essere usato in una clausola [copyin](../../parallel/openmp/reference/copyin.md) .

L'esempio seguente genera l'errore C3058:

```
// C3058.cpp
// compile with: /openmp
int x, y, z;
#pragma omp threadprivate(x, z)

void test() {
   #pragma omp parallel copyin(x, y)   // C3058
   {
   }
}
```

Possibile soluzione:

```
// C3058b.cpp
// compile with: /openmp /LD
int x, y, z;
#pragma omp threadprivate(x, y)

void test() {
   #pragma omp parallel copyin(x, y)
   {
   }
}
```