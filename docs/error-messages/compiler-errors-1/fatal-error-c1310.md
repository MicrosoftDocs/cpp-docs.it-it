---
description: 'Altre informazioni su: errore irreversibile C1310'
title: Errore irreversibile C1310
ms.date: 11/04/2016
f1_keywords:
- C1310
helpviewer_keywords:
- C1310
ms.assetid: ac48aa51-8023-42fe-b844-3f8bf228fbef
ms.openlocfilehash: edd4cb75c77ec272ddd3f985b4bfefac93e04e83
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177757"
---
# <a name="fatal-error-c1310"></a>Errore irreversibile C1310

ottimizzazione PGO non disponibile con OpenMP

Non sarà possibile collegare a [/LTCG:PGI](../../build/reference/ltcg-link-time-code-generation.md) qualsiasi modulo compilato con [/GL](../../build/reference/gl-whole-program-optimization.md).

L'esempio seguente genera l'errore C1310:

```cpp
// C1310.cpp
// compile with: /openmp /GL /link /LTCG:PGI
// C1310 expected
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i < 0; i++)
         --j;
   }
}
```
