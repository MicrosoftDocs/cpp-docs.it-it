---
title: Errore del compilatore C3015 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3015
dev_langs:
- C++
helpviewer_keywords:
- C3015
ms.assetid: d5e8e50b-7542-4b2d-8665-1b22072a5bc6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fa6b6d102f78de7d834a0c7d9fc16cfb85833fd1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46023970"
---
# <a name="compiler-error-c3015"></a>Errore del compilatore C3015

l'inizializzazione nell'istruzione 'for' OpenMP non ha un formato valido

È necessario che sia specificato in modo completo ed esplicito un ciclo `for` in un'istruzione OpenMP.

L'esempio seguente genera l'errore C3015:

```
// C3015.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (; i < 0; i += j)   // C3015
      // Try the following line instead:
      // for (i = 0; i < 0; i++)
         --j;
   }
}
```