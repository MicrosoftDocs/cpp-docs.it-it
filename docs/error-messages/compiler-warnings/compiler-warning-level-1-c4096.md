---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4096'
title: Avviso del compilatore (livello 1) C4096
ms.date: 11/04/2016
f1_keywords:
- C4096
helpviewer_keywords:
- C4096
ms.assetid: abf3cca2-2f21-45d8-b025-6b513b00681e
ms.openlocfilehash: 2d787a2de5974b16fb962c17530532480d993fd6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278038"
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
