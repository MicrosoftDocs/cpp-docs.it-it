---
title: Avviso del compilatore (livello 1) C4096
ms.date: 11/04/2016
f1_keywords:
- C4096
helpviewer_keywords:
- C4096
ms.assetid: abf3cca2-2f21-45d8-b025-6b513b00681e
ms.openlocfilehash: 4f5a45339673b57f946f206e1eaff0d23ec6fee9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80163936"
---
# <a name="compiler-warning-level-1-c4096"></a>Avviso del compilatore (livello 1) C4096

' a': l'interfaccia non è un'interfaccia COM; non verrà emesso in IDL

Una definizione di interfaccia che potrebbe essere stata progettata come interfaccia COM non è stata definita come interfaccia COM e pertanto non verrà emessa nel file IDL.

Vedere [attributi di interfaccia](../../windows/attributes/interface-attributes.md) per gli attributi di un elenco che indicano che un'interfaccia è un'interfaccia com.

L'esempio seguente genera l'C4096:

```cpp
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
