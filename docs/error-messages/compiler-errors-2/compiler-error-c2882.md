---
description: 'Altre informazioni su: errore del compilatore C2882'
title: Errore del compilatore C2882
ms.date: 11/04/2016
f1_keywords:
- C2882
helpviewer_keywords:
- C2882
ms.assetid: 617018ee-5a0d-4b8d-9612-77e8ae52679b
ms.openlocfilehash: b060fbc741bc768c2f27625c25345f5e8ed1a484
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332363"
---
# <a name="compiler-error-c2882"></a>Errore del compilatore C2882

' name ': utilizzo non valido dell'identificatore dello spazio dei nomi nell'espressione

Si è provato a usare il nome di uno spazio dei nomi in un'espressione.

L'esempio seguente genera l'C2882:

```cpp
// C2882.cpp
// compile with: /c
namespace A {
   int k;
}

int i = A;   // C2882, can't assign A to i
```
