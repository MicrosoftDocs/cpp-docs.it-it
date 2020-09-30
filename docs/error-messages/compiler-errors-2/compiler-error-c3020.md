---
title: Errore del compilatore C3020
ms.date: 11/04/2016
f1_keywords:
- C3020
helpviewer_keywords:
- C3020
ms.assetid: f625c7a3-afaa-4bd8-9c1b-51891b832f36
ms.openlocfilehash: cb32ceaf71d0a1c121b6e01e4b49f1db79a84d79
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506499"
---
# <a name="compiler-error-c3020"></a>Errore del compilatore C3020

' var ': Impossibile modificare la variabile di indice del ciclo ' for ' OpenMP nel corpo del ciclo

Un **`for`** ciclo OpenMP non può modificare l'indice (contatore cicli) nel corpo del **`for`** ciclo.

L'esempio seguente genera l'C3020:

```cpp
// C3020.cpp
// compile with: /openmp
int main() {
   int i = 0, n = 3;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i < 10; i += n)
         i *= 2;   // C3020
         // try the following line instead
         // n++;
   }
}
```

Una variabile dichiarata con [lastprivate](../../parallel/openmp/reference/openmp-clauses.md#lastprivate) non può essere usata come indice all'interno di un ciclo parallelo.

Nell'esempio seguente viene fornito C3020 per la seconda lastprivate, in quanto lastprivate attiverà una scrittura idx_a all'interno del ciclo for più esterno. Il primo lastprivate non genera un errore perché lastprivate attiva una scrittura idx_a all'esterno del ciclo for più esterno (tecnicamente, alla fine dell'ultima iterazione). L'esempio seguente genera l'C3020.

```cpp
// C3020b.cpp
// compile with: /openmp /c
float a[100][100];
int idx_a, idx_b;
void test(int first, int last)
{
   #pragma omp parallel for lastprivate(idx_a)
   for (idx_a = first; idx_a <= last; ++idx_a) {
      #pragma omp parallel for lastprivate(idx_a)   // C3020
      for (idx_b = first; idx_b <= last; ++idx_b) {
         a[idx_a][idx_b] += 1.0f;
      }
   }
}
```

L'esempio seguente illustra una possibile soluzione:

```cpp
// C3020c.cpp
// compile with: /openmp /c
float a[100][100];
int idx_a, idx_b;
void test(int first, int last)
{
   #pragma omp parallel for lastprivate(idx_a)
   for (idx_a = first; idx_a <= last; ++idx_a) {
      #pragma omp parallel for lastprivate(idx_b)
      for (idx_b = first; idx_b <= last; ++idx_b) {
         a[idx_a][idx_b] += 1.0f;
      }
   }
}
```
