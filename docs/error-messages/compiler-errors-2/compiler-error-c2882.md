---
title: Errore del compilatore C2882
ms.date: 11/04/2016
f1_keywords:
- C2882
helpviewer_keywords:
- C2882
ms.assetid: 617018ee-5a0d-4b8d-9612-77e8ae52679b
ms.openlocfilehash: e5fd20695f6922ba5832abb1042cce63b7c4f5a2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598498"
---
# <a name="compiler-error-c2882"></a>Errore del compilatore C2882

'name': utilizzo non valido dell'identificatore dello spazio dei nomi nell'espressione

Si è provato a usare il nome di uno spazio dei nomi in un'espressione.

L'esempio seguente genera l'errore C2882:

```
// C2882.cpp
// compile with: /c
namespace A {
   int k;
}

int i = A;   // C2882, can't assign A to i
```