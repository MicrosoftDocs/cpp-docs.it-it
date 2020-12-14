---
description: 'Altre informazioni su: errore del compilatore C2581'
title: Errore del compilatore C2581
ms.date: 11/04/2016
f1_keywords:
- C2581
helpviewer_keywords:
- C2581
ms.assetid: 24a4e4c1-24d3-4e42-b760-7dcaf9740b16
ms.openlocfilehash: 9de6c48c2ade71af238cc62a0f92e642e1262d3b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282120"
---
# <a name="compiler-error-c2581"></a>Errore del compilatore C2581

' type ': la funzione ' operator =' statica non è valida

L' `=` operatore di assegnazione () è dichiarato erroneamente come **`static`** . Gli operatori di assegnazione non possono essere **`static`** . Per ulteriori informazioni, vedere [operatori definiti dall'utente (C++/CLI)](../../dotnet/user-defined-operators-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2581.

```cpp
// C2581.cpp
// compile with: /clr /c
ref struct Y {
   static Y ^ operator = (Y^ me, int i);   // C2581
   Y^ operator =(int i);   // OK
};
```
