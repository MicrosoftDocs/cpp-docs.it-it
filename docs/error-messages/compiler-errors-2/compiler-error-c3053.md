---
description: 'Altre informazioni su: errore del compilatore C3053'
title: Errore del compilatore C3053
ms.date: 11/04/2016
f1_keywords:
- C3053
helpviewer_keywords:
- C3053
ms.assetid: ab9a25f3-e341-4f6e-8e69-069b4a963a64
ms.openlocfilehash: 8f42d3301ae5980942d33cefc90c74a5a0d39b16
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269627"
---
# <a name="compiler-error-c3053"></a>Errore del compilatore C3053

'symbol': 'threadprivate' è valido solo per elementi di dati globali o statici

I simboli passati a [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) devono essere globali o statici.

L'esempio seguente genera l'errore C3053:

```cpp
// C3053.cpp
// compile with: /openmp
void Test() {
   int x, y;
   #pragma omp threadprivate(x, y)   // C3053
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possibile soluzione:

```cpp
// C3053b.cpp
// compile with: /openmp /LD
int x, y;
#pragma omp threadprivate(x, y)

void Test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```
