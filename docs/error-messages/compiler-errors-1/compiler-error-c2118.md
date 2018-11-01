---
title: Errore del compilatore C2118
ms.date: 11/04/2016
f1_keywords:
- C2118
helpviewer_keywords:
- C2118
ms.assetid: bf4315d0-f085-4323-b813-96ee61a13bde
ms.openlocfilehash: 71b8273aaee52420f8a9c9c2dd2d015bea72ddf6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465936"
---
# <a name="compiler-error-c2118"></a>Errore del compilatore C2118

indice negativo

Il valore che definisce la dimensione della matrice è minore di zero o maggiore della dimensione massima della matrice.

L'esempio seguente genera l'errore C2118:

```
// C2118.cpp
int main() {
   int array1[-1];   // C2118
   int array2[3];   // OK
}
```