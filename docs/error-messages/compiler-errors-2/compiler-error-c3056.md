---
title: Errore del compilatore C3056
ms.date: 11/04/2016
f1_keywords:
- C3056
helpviewer_keywords:
- C3056
ms.assetid: 9500173d-870b-49b3-8e88-0ee93586d19a
ms.openlocfilehash: dd000e56d5fc24929e4d06e1bf0100ad9647610a
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91501589"
---
# <a name="compiler-error-c3056"></a>Errore del compilatore C3056

'symbol': il simbolo non si trova nello stesso ambito della direttiva 'threadprivate'

Un simbolo usato in una clausola [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) clausola deve essere nello stesso ambito della clausola `threadprivate` .

L'esempio seguente genera l'errore C3056:

```cpp
// C3056.cpp
// compile with: /openmp
int x, y;
void test() {
   #pragma omp threadprivate(x, y)   // C3056
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possibile soluzione:

```cpp
// C3056b.cpp
// compile with: /openmp /LD
int x, y;
#pragma omp threadprivate(x, y)
void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```
