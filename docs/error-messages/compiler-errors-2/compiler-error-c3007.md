---
description: 'Altre informazioni su: errore del compilatore C3007'
title: Errore del compilatore C3007
ms.date: 11/04/2016
f1_keywords:
- C3007
helpviewer_keywords:
- C3007
ms.assetid: e415ef42-bdc9-4f32-8198-5e25b289a089
ms.openlocfilehash: 5203dd3d81d2e255f13e21e66cd961413db11a18
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305351"
---
# <a name="compiler-error-c3007"></a>Errore del compilatore C3007

'arg': la clausola nella direttiva 'directive' OpenMP non accetta un argomento

È stato specificato un argomento in una direttiva OpenMP che non accetta argomenti.

L'esempio seguente genera l'errore C3007:

```c
// C3007.c
// compile with: /openmp
int main()
{
   #pragma omp parallel for ordered(2)   // C3007
}
```
