---
description: 'Altre informazioni su: errore del compilatore C3029'
title: Errore del compilatore C3029
ms.date: 11/04/2016
f1_keywords:
- C3029
helpviewer_keywords:
- C3029
ms.assetid: 655eb04d-504a-468d-8c0c-bda1e5f297b7
ms.openlocfilehash: ec9164c43dd44e4fe69273c2cad7c3e6beead394
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174182"
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
