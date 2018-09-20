---
title: A.31 funzioni di blocco Thread-Safe | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 3ad89eb8-076c-405a-be5e-88d3d707a832
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c25e88b115cb1f82268040a8d17e0dc9eaed3fee
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408972"
---
# <a name="a31---thread-safe-lock-functions"></a>A.31   Funzioni di blocco thread-safe

L'esempio C++ seguente illustra come inizializzare una matrice di blocchi in un'area parallela usando `omp_init_lock` ([sezione 3.2.1](../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) nella pagina 42).

## <a name="example"></a>Esempio

### <a name="code"></a>Codice

```
// A_13_omp_init_lock.cpp
// compile with: /openmp
#include <omp.h>

omp_lock_t *new_locks() {
   int i;
   omp_lock_t *lock = new omp_lock_t[1000];
   #pragma omp parallel for private(i)
   for (i = 0 ; i < 1000 ; i++)
      omp_init_lock(&lock[i]);

   return lock;
}

int main () {}
```