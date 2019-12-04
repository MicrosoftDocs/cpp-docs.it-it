---
title: Errore del compilatore C3039
ms.date: 11/04/2016
f1_keywords:
- C3039
helpviewer_keywords:
- C3039
ms.assetid: 02776f16-f57a-4ffd-b7f7-9c696b633e08
ms.openlocfilehash: 344fd32e66881c2529ddb1f9185c25752f0a736c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754979"
---
# <a name="compiler-error-c3039"></a>Errore del compilatore C3039

'var': la variabile di indice nell'istruzione 'for' OpenMP non può essere una variabile di riduzione

Una variabile di indice è implicitamente privata, pertanto non può essere usata in una clausola [reduction](../../parallel/openmp/reference/reduction.md) nella direttiva [parallel](../../parallel/openmp/reference/parallel.md) di inclusione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3039:

```cpp
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
