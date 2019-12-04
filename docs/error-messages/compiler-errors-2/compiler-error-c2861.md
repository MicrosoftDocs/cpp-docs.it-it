---
title: Errore del compilatore C2861
ms.date: 11/04/2016
f1_keywords:
- C2861
helpviewer_keywords:
- C2861
ms.assetid: 012bb44d-6c9b-4def-b54e-b19f1f8ddd1b
ms.openlocfilehash: 3d6cab186d4acf229a32620f33c9c86e807459dd
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751989"
---
# <a name="compiler-error-c2861"></a>Errore del compilatore C2861

' function name ': Impossibile definire una funzione membro di interfaccia

Il compilatore ha rilevato la parola chiave Interface o ha dedotto uno struct come interfaccia ma ha quindi trovato una definizione di funzione membro.  Un'interfaccia non può contenere una definizione per una funzione membro.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2861:

```cpp
// C2861.cpp
// compile with: /c
#include <objbase.h>   // required for IUnknown definition
[ object, uuid("00000000-0000-0000-0000-000000000001") ]
__interface IMyInterface : IUnknown {
   HRESULT mf(int a);
};

HRESULT IMyInterface::mf(int a) {}   // C2861
```
