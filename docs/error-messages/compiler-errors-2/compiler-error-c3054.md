---
title: Errore del compilatore C3054
ms.date: 11/04/2016
f1_keywords:
- C3054
helpviewer_keywords:
- C3054
ms.assetid: 6f4b7ac5-0d12-474b-b611-76ff26ee41ac
ms.openlocfilehash: 1dd6450d661700d9b2f7f94e625abd9ecc64ed08
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62265570"
---
# <a name="compiler-error-c3054"></a>Errore del compilatore C3054

'#pragma omp parallel' non è attualmente supportata in una classe o funzione generica

Per altre informazioni, vedere [Generics](../../extensions/generics-cpp-component-extensions.md) e [OpenMP](../../parallel/openmp/openmp-in-visual-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3054.

```
// C3054.cpp
// compile with: /openmp /clr /c
#include <omp.h>

ref struct MyBaseClass {
   // Delete the following 7 lines to resolve.
   generic <class ItemType>
   void Test(ItemType i) {   // C3054
      #pragma omp parallel num_threads(4)
      {
         int i = omp_get_thread_num();
      }
   }

   // OK
   void Test2() {
      #pragma omp parallel num_threads(4)
      {
         int i = omp_get_thread_num();
      }
   }
};
```