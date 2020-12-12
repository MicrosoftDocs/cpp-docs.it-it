---
description: 'Altre informazioni su: errore del compilatore C3017'
title: Errore del compilatore C3017
ms.date: 11/04/2016
f1_keywords:
- C3017
helpviewer_keywords:
- C3017
ms.assetid: 12ab2c2a-d0d2-4900-9cbf-39be0af590dd
ms.openlocfilehash: bbfffbb9d9f9b0c34dbf0dab57c28d7fd6892fd9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97285838"
---
# <a name="compiler-error-c3017"></a>Errore del compilatore C3017

il formato del test di terminazione nell'istruzione 'for' OpenMP non è valido

Un **`for`** ciclo in un'istruzione OpenMP deve essere specificato in modo completo e esplicito.

L'esempio seguente genera l'errore C3017:

```cpp
// C3017.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i; ++i)   // C3017
      // Try the following line instead:
      // for (i = 0; i < 10; ++i)
         ;
   }
}
```
