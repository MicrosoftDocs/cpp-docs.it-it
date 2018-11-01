---
title: Errore del compilatore C3008
ms.date: 11/04/2016
f1_keywords:
- C3008
helpviewer_keywords:
- C3008
ms.assetid: 04d93201-28e5-4be0-945c-aad616376f4b
ms.openlocfilehash: 4f3b0e8ec935a4425977ea89993677704681a9e0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50437895"
---
# <a name="compiler-error-c3008"></a>Errore del compilatore C3008

'arg': nell'argomento manca il carattere ')' di chiusura nella direttiva 'directive' OpenMP

Una direttiva OpenMP che accetta un argomento non contiene una parentesi di chiusura.

L'esempio seguente genera l'errore C3008:

```
// C3008.c
// compile with: /openmp
int main()
{
   int x, y, z;
   #pragma omp parallel shared(x   // C3008
   // Try the following line instead:
   #pragma omp parallel shared(x)
   {
   }
}
```