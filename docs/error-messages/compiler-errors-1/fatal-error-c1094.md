---
title: Errore irreversibile C1094
ms.date: 11/04/2016
f1_keywords:
- C1094
helpviewer_keywords:
- C1094
ms.assetid: 9e1193b2-cb95-44f9-bf6f-019e0d41dd97
ms.openlocfilehash: 23891a783a018f6d84ea820af98992f61632984c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62366498"
---
# <a name="fatal-error-c1094"></a>Errore irreversibile C1094

'-Zmvalore1 ': opzione della riga di comando non coerente con il valore usato per compilare l'intestazione precompilata ('-Zmvalore2 ')

Il valore passato a [/Yc](../../build/reference/yc-create-precompiled-header-file.md) deve essere lo stesso valore passato al [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (**/Zm** valori devono essere uguale in tutte le compilazioni che utilizzano o creano lo stesso precompilato file di intestazione).

L'esempio seguente genera l'errore C1094:

```
// C1094.h
int func1();
```

E quindi,

```
// C1094.cpp
// compile with: /Yc"C1094.h" /Zm200
int u;
int main() {
   int sd = 32;
}
#include "C1094.h"
```

E quindi,

```
// C1094b.cpp
// compile with: /Yu"C1094.h" /Zm300 /c
#include "C1094.h"   // C1094 compile with /Zm200
void Test() {}
```