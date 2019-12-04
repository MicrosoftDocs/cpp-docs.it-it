---
title: Errore irreversibile C1094
ms.date: 11/04/2016
f1_keywords:
- C1094
helpviewer_keywords:
- C1094
ms.assetid: 9e1193b2-cb95-44f9-bf6f-019e0d41dd97
ms.openlocfilehash: 99bfeea47ff46b6dadac9b32fa61306d54520d0f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747397"
---
# <a name="fatal-error-c1094"></a>Errore irreversibile C1094

'-Zmvalore1': opzione della riga di comando non coerente con il valore usato per compilare l'intestazione precompilata ('-Zmvalore2')

Il valore passato a [/YC](../../build/reference/yc-create-precompiled-header-file.md) deve essere uguale a quello passato a [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (i valori **/ZM** devono essere uguali in tutte le compilazioni che usano o creano lo stesso file di intestazione precompilata).

L'esempio seguente genera l'C1094:

```
// C1094.h
int func1();
```

E quindi,

```cpp
// C1094.cpp
// compile with: /Yc"C1094.h" /Zm200
int u;
int main() {
   int sd = 32;
}
#include "C1094.h"
```

E quindi,

```cpp
// C1094b.cpp
// compile with: /Yu"C1094.h" /Zm300 /c
#include "C1094.h"   // C1094 compile with /Zm200
void Test() {}
```
