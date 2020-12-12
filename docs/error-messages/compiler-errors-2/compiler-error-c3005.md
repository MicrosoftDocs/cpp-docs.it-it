---
description: 'Altre informazioni su: errore del compilatore C3005'
title: Errore del compilatore C3005
ms.date: 11/04/2016
f1_keywords:
- C3005
helpviewer_keywords:
- C3005
ms.assetid: 30bad565-e79f-4c3f-82cb-a74bd0baab8f
ms.openlocfilehash: df9e0c94aa0ba47e1c2f63858419c15881f9bd74
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272422"
---
# <a name="compiler-error-c3005"></a>Errore del compilatore C3005

'error_text': rilevato token imprevisto nella direttiva 'directive' OpenMP

Una direttiva OpenMP non è stata creata nel formato corretto.

L'esempio seguente genera l'errore C3005:

```c
// C3005.c
// compile with: /openmp
int main()
{
   #pragma omp parallel + for   // C3005
}
```

C3005 può verificarsi anche se si inserisce una parentesi graffa di apertura nella stessa riga del pragma.

```c
// C3005b.c
// compile with: /openmp
int main() {
   #pragma omp parallel {   // C3005 put open brace on next line
   lbl2:;
   }
   goto lbl2;
}
```
