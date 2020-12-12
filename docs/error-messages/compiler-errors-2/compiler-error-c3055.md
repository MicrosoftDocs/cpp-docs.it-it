---
description: 'Altre informazioni su: errore del compilatore C3055'
title: Errore del compilatore C3055
ms.date: 11/04/2016
f1_keywords:
- C3055
helpviewer_keywords:
- C3055
ms.assetid: 60446ee0-18dd-48fc-9059-f0a14229dce8
ms.openlocfilehash: 6c75d476abf7535499c74705e4a0ec77d80dc772
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269575"
---
# <a name="compiler-error-c3055"></a>Errore del compilatore C3055

'symbol': impossibile fare riferimento al simbolo prima di utilizzarlo nella direttiva 'threadprivate'

Un simbolo è stato indicato e usato in una clausola [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) . Questa operazione non è consentita.

L'esempio seguente genera l'errore C3055:

```cpp
// C3055.cpp
// compile with: /openmp
int x, y;
int z = x;
#pragma omp threadprivate(x, y)   // C3055

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possibile soluzione:

```cpp
// C3055b.cpp
// compile with: /openmp /LD
int x, y, z;
#pragma omp threadprivate(x, y)

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```
