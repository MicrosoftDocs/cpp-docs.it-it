---
title: Errore del compilatore C3039
ms.date: 11/04/2016
f1_keywords:
- C3039
helpviewer_keywords:
- C3039
ms.assetid: 02776f16-f57a-4ffd-b7f7-9c696b633e08
ms.openlocfilehash: 69be1b25254119108e517cee2f1e14368e0163f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50511618"
---
# <a name="compiler-error-c3039"></a>Errore del compilatore C3039

'var': la variabile di indice nell'istruzione 'for' OpenMP non può essere una variabile di riduzione

Una variabile di indice è implicitamente privata, pertanto non può essere usata in una clausola [reduction](../../parallel/openmp/reference/reduction.md) nella direttiva [parallel](../../parallel/openmp/reference/parallel.md) di inclusione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3039:

```
// C3039.cpp
// compile with: /openmp /c
int g_i;

int main() {
   int i;

   #pragma omp parallel reduction(+: i)
   {
      #pragma omp for
      for (i = 0; i < 10; ++i)   // C3039
         g_i += i;
   }
}
```