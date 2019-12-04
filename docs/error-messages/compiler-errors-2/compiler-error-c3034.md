---
title: Errore del compilatore C3034
ms.date: 11/04/2016
f1_keywords:
- C3034
helpviewer_keywords:
- C3034
ms.assetid: 49db8bac-2720-4622-94e3-7988f1603fa3
ms.openlocfilehash: 56ae2ddf35148fe263e406f48526cd68c4f91352
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74748294"
---
# <a name="compiler-error-c3034"></a>Errore del compilatore C3034

impossibile annidare la direttiva OpenMP 'direttiva1' direttamente nella direttiva 'direttiva2'

Alcune direttive non possono essere annidate. Per correggere questo errore, è possibile unire le istruzioni di entrambe le direttive nel blocco di una direttiva oppure creare direttive consecutive.

L'esempio seguente genera l'errore C3034:

```cpp
// C3034.cpp
// compile with: /openmp /link vcomps.lib
int main() {

   #pragma omp single
   {
      #pragma omp single   // C3034
      {
      ;
      }
   }

   // Two consecutive single clauses are OK.
   #pragma omp single
   {
   }

   #pragma omp single
   {
   }
}
```
