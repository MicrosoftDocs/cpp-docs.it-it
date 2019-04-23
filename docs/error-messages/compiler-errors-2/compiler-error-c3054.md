---
title: Errore del compilatore C3054
ms.date: 11/04/2016
f1_keywords:
- C3054
helpviewer_keywords:
- C3054
ms.assetid: 6f4b7ac5-0d12-474b-b611-76ff26ee41ac
ms.openlocfilehash: 1dd6450d661700d9b2f7f94e625abd9ecc64ed08
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59776223"
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