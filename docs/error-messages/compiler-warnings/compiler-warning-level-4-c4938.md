---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4938'
title: Avviso del compilatore (livello 4) C4938
ms.date: 11/04/2016
f1_keywords:
- C4938
helpviewer_keywords:
- C4938
ms.assetid: 6acac81a-9d23-465e-b700-ed4b6e8edcd0
ms.openlocfilehash: 3b327581b0eb790e74d6fddc2bca1e027f40d89e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234592"
---
# <a name="compiler-warning-level-4-c4938"></a>Avviso del compilatore (livello 4) C4938

'var': la variabile di riduzione a virgola mobile può causare risultati incoerenti in /fp:strict o #pragma fenv_access

È consigliabile non usare [/fp:strict](../../build/reference/fp-specify-floating-point-behavior.md) o [fenv_access](../../preprocessor/fenv-access.md) con riduzioni a virgola mobile OpenMP perché la somma viene calcolata in un ordine diverso. I risultati possono quindi essere diversi rispetto ai risultati senza /openmp.

L'esempio seguente genera l'errore C4938:

```cpp
// C4938.cpp
// compile with: /openmp /W4 /fp:strict /c
// #pragma fenv_access(on)
extern double *a;

double test(int first, int last) {
   double sum = 0.0;
   #pragma omp parallel for reduction(+: sum)   // C4938
   for (int i = first ; i <= last ; ++i)
      sum += a[i];
   return sum;
}
```

Senza parallelizzazione esplicita, la somma viene calcolata come segue:

```
sum = a[first] + a[first + 1] + ... + a[last];
```

Con la parallelizzazione esplicita (e due thread), la somma viene calcolata come segue:

```
sum1 = a[first] + ... a[first + last / 2];
sum2 = a[(first + last / 2) + 1] + ... a[last];
sum = sum1 + sum2;
```
