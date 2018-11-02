---
title: Errore del compilatore C3020
ms.date: 11/04/2016
f1_keywords:
- C3020
helpviewer_keywords:
- C3020
ms.assetid: f625c7a3-afaa-4bd8-9c1b-51891b832f36
ms.openlocfilehash: 0e2d8e70dcc9b23c56a321487cd4b933a1086387
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50491273"
---
# <a name="compiler-error-c3020"></a>Errore del compilatore C3020

'var': variabile di indice di OpenMP 'ciclo for' non può essere modificata nel corpo del ciclo

Una OpenMP `for` ciclo non può modificare l'indice (contatore di cicli) nel corpo del `for` ciclo.

L'esempio seguente genera l'errore C3020:

```
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

Una variabile dichiarata con [lastprivate](../../parallel/openmp/reference/lastprivate.md) non può essere utilizzato come indice all'interno di un ciclo parallelo.

L'esempio seguente verrà C3020 per la seconda lastprivate perché tale lastprivate attiverà una scrittura idx_a entro più esterna per il ciclo. Il primo lastprivate non offre un errore perché attiva la scrittura in idx_a esterno più esterna per il ciclo (tecnicamente, alla fine dell'ultima iterazione). L'esempio seguente genera l'errore C3020.

```
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

```
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