---
title: Errore del compilatore C3136
ms.date: 10/03/2018
f1_keywords:
- C3136
helpviewer_keywords:
- C3136
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
ms.openlocfilehash: 75862f3b80d617b607a7b3e735cb3e16e9a40bb7
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757384"
---
# <a name="compiler-error-c3136"></a>Errore del compilatore C3136

' Interface ': un'interfaccia COM può ereditare solo da un'altra interfaccia COM,' Interface ' non è un'interfaccia COM

Un'interfaccia a cui è stato applicato un [attributo di interfaccia](../../windows/attributes/interface-attributes.md) eredita da un'interfaccia che non è un'interfaccia com. Un'interfaccia COM eredita infine da `IUnknown`. Qualsiasi interfaccia preceduta da un attributo di interfaccia è un'interfaccia COM.

L'esempio seguente genera l'C3136:

```cpp
// C3136.cpp
#include "unknwn.h"

__interface A   // C3136
// try the following line instead
// _interface A : IUnknown
{
   int a();
};

[object]
__interface B : A
{
   int aa();
};
```
