---
description: 'Altre informazioni su: errore del compilatore C3037'
title: Errore del compilatore C3037
ms.date: 11/04/2016
f1_keywords:
- C3037
helpviewer_keywords:
- C3037
ms.assetid: 9ba8a890-d3c7-4cce-93c5-d358e2bfad28
ms.openlocfilehash: f8ccf87ca09aaf90fb07b197279e994eeb27f249
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270056"
---
# <a name="compiler-error-c3037"></a>Errore del compilatore C3037

'var': la variabile nella clausola 'reduction' deve essere condivisa nel contesto di inclusione

Una variabile specificata in una clausola [reduction](../../parallel/openmp/reference/openmp-clauses.md#reduction) potrebbe non essere una variabile privata di ciascun thread nel contesto.

L'esempio seguente genera l'errore C3037:

```cpp
// C3037.cpp
// compile with: /openmp /c
int g_i;

int main() {
   int i;

   #pragma omp parallel private(g_i)
   // try the following line instead
   // #pragma omp parallel
   {
      #pragma omp for reduction(+:g_i)   // C3037
      for (i = 0 ; i < 10 ; ++i) {
         g_i += i;
      }
   }
}
```
