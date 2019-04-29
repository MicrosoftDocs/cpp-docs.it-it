---
title: Errore del compilatore C3040
ms.date: 11/04/2016
f1_keywords:
- C3040
helpviewer_keywords:
- C3040
ms.assetid: 29e857ac-74f0-4ec6-becf-9026e38c160e
ms.openlocfilehash: b0bc4956cfc08ae50026827d78136a70b82d568e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62349997"
---
# <a name="compiler-error-c3040"></a>Errore del compilatore C3040

'var': il tipo di variabile nella clausola 'reduction' incompatibile con l'operatore di riduzione 'operator'

Una variabile in una clausola [reduction](../../parallel/openmp/reference/reduction.md) non può essere usata con l'operatore di riduzione.

L'esempio seguente genera l'errore C3040:

```
// C3040.cpp
// compile with: /openmp /c
#include "omp.h"
double d;

int main() {
   #pragma omp parallel reduction(&:d)   // C3040
      ;

   #pragma omp parallel reduction(-:d)  // OK
      ;
}
```