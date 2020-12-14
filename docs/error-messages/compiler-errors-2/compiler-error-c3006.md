---
description: 'Altre informazioni su: errore del compilatore C3006'
title: Errore del compilatore C3006
ms.date: 11/04/2016
f1_keywords:
- C3006
helpviewer_keywords:
- C3006
ms.assetid: 449082ec-fd45-4c47-8ab3-ba6a719e4dc4
ms.openlocfilehash: e2c6372b86f7677f3beeaed5335798f10e01c82e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274554"
---
# <a name="compiler-error-c3006"></a>Errore del compilatore C3006

'clause': nella clausola nella direttiva 'directive' OpenMP manca un argomento previsto

Una direttiva OpenMP non contiene un argomento previsto.

L'esempio seguente genera l'errore C3006:

```c
// C3006.c
// compile with: /openmp
int main()
{
   #pragma omp parallel shared   // C3006
   // Try the following line instead:
   // #pragma omp parallel shared(x) {}

}
```
