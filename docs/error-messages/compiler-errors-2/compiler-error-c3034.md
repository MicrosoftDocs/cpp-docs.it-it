---
description: 'Altre informazioni su: errore del compilatore C3034'
title: Errore del compilatore C3034
ms.date: 11/04/2016
f1_keywords:
- C3034
helpviewer_keywords:
- C3034
ms.assetid: 49db8bac-2720-4622-94e3-7988f1603fa3
ms.openlocfilehash: 379fedfe3af65b2def83d737daeccac670838c2d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270173"
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
