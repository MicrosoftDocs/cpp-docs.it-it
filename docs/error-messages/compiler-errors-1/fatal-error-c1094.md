---
description: 'Altre informazioni su: errore irreversibile C1094'
title: Errore irreversibile C1094
ms.date: 11/04/2016
f1_keywords:
- C1094
helpviewer_keywords:
- C1094
ms.assetid: 9e1193b2-cb95-44f9-bf6f-019e0d41dd97
ms.openlocfilehash: af83c6fa80a6e1b115146ad05513539fea7d348c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145093"
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
