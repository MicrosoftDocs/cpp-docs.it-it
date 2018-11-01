---
title: Compilatore Warning (level 1) C4096
ms.date: 11/04/2016
f1_keywords:
- C4096
helpviewer_keywords:
- C4096
ms.assetid: abf3cca2-2f21-45d8-b025-6b513b00681e
ms.openlocfilehash: 287465e9a3f5681f459f0823a4409b0906309a55
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50436550"
---
# <a name="compiler-warning-level-1-c4096"></a>Compilatore Warning (level 1) C4096

'a': non è un'interfaccia COM; non verrà inviata all'IDL

Una definizione di interfaccia che è possibile che sia previsto come un'interfaccia COM non è stata definita come un'interfaccia COM e pertanto non verrà creata per il file IDL.

Visualizzare [attributi di interfaccia](../../windows/attributes/interface-attributes.md) per un elenco degli attributi che indicano che un'interfaccia è un'interfaccia COM.

L'esempio seguente genera l'errore C4096:

```
// C4096.cpp
// compile with: /W1 /LD
#include "windows.h"
[module(name="xx")];

// [object, uuid("00000000-0000-0000-0000-000000000001")]
__interface a
{
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
struct b : a
{
};   // C4096, remove coclass or uncomment object
```