---
title: Errore del compilatore C3029
ms.date: 11/04/2016
f1_keywords:
- C3029
helpviewer_keywords:
- C3029
ms.assetid: 655eb04d-504a-468d-8c0c-bda1e5f297b7
ms.openlocfilehash: 12c06757ed6ec7560f7dd647e241ddd08a0484d5
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74736750"
---
# <a name="compiler-error-c3029"></a>Errore del compilatore C3029

'simbolo': può apparire solo una volta nelle clausole di condivisione dati di una direttiva OpenMP

Un simbolo è stato usato più volte in una o più clausole di una direttiva. Il simbolo può essere usato solo una volta nella direttiva.

L'esempio seguente genera l'errore C3029:

```cpp
// C3029.cpp
// compile with: /openmp /link vcomps.lib
#include "omp.h"

int g_i;

int main() {
   int i, x;

   #pragma omp parallel reduction(+ : x, x)   // C3029
      ;

   #pragma omp parallel reduction(+ : x)   // OK
      ;

   #pragma omp parallel private(x) reduction(+ : x)   // C3029
      ;

   #pragma omp parallel reduction(+ : x)   // OK
      ;
}
```
