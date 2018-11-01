---
title: Errore del compilatore C2109
ms.date: 11/04/2016
f1_keywords:
- C2109
helpviewer_keywords:
- C2109
ms.assetid: 2d1ac79d-a985-4904-a38b-b270578d664d
ms.openlocfilehash: 6592f36b29fe643e088669089b1af1b69b7b2125
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452052"
---
# <a name="compiler-error-c2109"></a>Errore del compilatore C2109

indice richiede il tipo di puntatore o matrice

L'indice è stato usato in una variabile che non è stato in una matrice.

L'esempio seguente genera l'errore C2109:

```
// C2109.cpp
int main() {
   int a, b[10] = {0};
   a[0] = 1;   // C2109
   b[0] = 1;   // OK
}
```