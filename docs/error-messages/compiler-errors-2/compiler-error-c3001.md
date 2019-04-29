---
title: Errore del compilatore C3001
ms.date: 11/04/2016
f1_keywords:
- C3001
helpviewer_keywords:
- C3001
ms.assetid: d0e03478-1b44-47e5-8f5b-70415fa1f8bc
ms.openlocfilehash: 1eaf34b0830722b5eae61ec24b54a9edf6cea24c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393584"
---
# <a name="compiler-error-c3001"></a>Errore del compilatore C3001

'error_text': previsto un nome di direttiva OpenMP

Il pragma `omp` deve essere seguito da una direttiva.

L'esempio seguente genera l'errore C3001:

```
// C3001.c
// compile with: /openmp
int main()
{
   #pragma omp   // C3001 missing token
}
```