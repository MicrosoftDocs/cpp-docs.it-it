---
description: 'Altre informazioni su: errore del compilatore C3001'
title: Errore del compilatore C3001
ms.date: 11/04/2016
f1_keywords:
- C3001
helpviewer_keywords:
- C3001
ms.assetid: d0e03478-1b44-47e5-8f5b-70415fa1f8bc
ms.openlocfilehash: cf8acec3fb95553787e14968b9ce3e608da83916
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253598"
---
# <a name="compiler-error-c3001"></a>Errore del compilatore C3001

'error_text': previsto un nome di direttiva OpenMP

Il pragma `omp` deve essere seguito da una direttiva.

L'esempio seguente genera l'errore C3001:

```c
// C3001.c
// compile with: /openmp
int main()
{
   #pragma omp   // C3001 missing token
}
```
