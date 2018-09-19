---
title: Errore irreversibile C1094 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1094
dev_langs:
- C++
helpviewer_keywords:
- C1094
ms.assetid: 9e1193b2-cb95-44f9-bf6f-019e0d41dd97
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 15e722c6a74490a5fbb26e4e367f7f1b4cbcc932
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109249"
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