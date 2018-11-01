---
title: Errore del compilatore C2148
ms.date: 11/04/2016
f1_keywords:
- C2148
helpviewer_keywords:
- C2148
ms.assetid: e510c2c9-7b57-4ce8-be03-ba363e2cc5d9
ms.openlocfilehash: 893f1f029b2ea1aaf7ff53a5ee5cee7fcbe36e7c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440352"
---
# <a name="compiler-error-c2148"></a>Errore del compilatore C2148

dimensione totale della matrice non deve superare 0x7fffffff byte

Una matrice supera il limite. Ridurre le dimensioni della matrice.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2148:

```
// C2148.cpp
#include <stdio.h>
#include <stdlib.h>

int main( ) {
   char MyArray[0x7ffffffff];   // C2148
   char * MyArray2 = (char *)malloc(0x7fffffff);

   if (MyArray2)
      printf_s("It worked!");
   else
      printf_s("It didn't work.");
}
```