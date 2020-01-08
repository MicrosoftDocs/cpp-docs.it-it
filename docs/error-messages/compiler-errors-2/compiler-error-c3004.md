---
title: Errore del compilatore C3004
ms.date: 11/04/2016
f1_keywords:
- C3004
helpviewer_keywords:
- C3004
ms.assetid: 819c2b57-8366-4ca7-9135-1f0c5e5b6bb6
ms.openlocfilehash: cb5fe5572774c77d4f9f982e271dce8c2d986300
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302289"
---
# <a name="compiler-error-c3004"></a>Errore del compilatore C3004

'clause': clausola non valida nella direttiva 'directive' OpenMP

Una clausola OpenMP è stata usata in una direttiva per la quale non è abilitata.

L'esempio seguente genera l'errore C3004:

```c
// C3004.c
// compile with: /openmp
int main()
{
   int x, y, z;

   // Shared clause not allowed for 'single' directive.
   #pragma omp single shared(x, y)   // C3004

   x = y;
}
```
