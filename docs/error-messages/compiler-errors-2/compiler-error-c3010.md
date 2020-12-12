---
description: 'Altre informazioni su: errore del compilatore C3010'
title: Errore del compilatore C3010
ms.date: 11/04/2016
f1_keywords:
- C3010
helpviewer_keywords:
- C3010
ms.assetid: e959d038-bba6-432a-9c0a-0470474de7d9
ms.openlocfilehash: 50467ad1cb03255cbb5ef008e2ac2897de4a6a5c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305312"
---
# <a name="compiler-error-c3010"></a>Errore del compilatore C3010

'label': salto dal blocco strutturato OpenMP non consentito

Il codice non può passare all'interno o all'esterno di un blocco OpenMP.

L'esempio seguente genera l'errore C3010:

```c
// C3010.c
// compile with: /openmp
int main() {
   #pragma omp parallel
   {
      #pragma omp parallel
      {
         goto lbl3;
      }
   }
   lbl3:;   // C3010
}
```
