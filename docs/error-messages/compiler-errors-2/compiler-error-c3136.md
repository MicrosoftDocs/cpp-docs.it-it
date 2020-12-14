---
description: 'Altre informazioni su: errore del compilatore C3136'
title: Errore del compilatore C3136
ms.date: 10/03/2018
f1_keywords:
- C3136
helpviewer_keywords:
- C3136
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
ms.openlocfilehash: 4203eaa1f41603075bbb8162b7156783c8f2680a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97239376"
---
# <a name="compiler-error-c3136"></a>Errore del compilatore C3136

' Interface ': un'interfaccia COM può ereditare solo da un'altra interfaccia COM,' Interface ' non è un'interfaccia COM

Un'interfaccia a cui è stato applicato un [attributo di interfaccia](../../windows/attributes/interface-attributes.md) eredita da un'interfaccia che non è un'interfaccia com. Un'interfaccia COM eredita infine da `IUnknown` . Qualsiasi interfaccia preceduta da un attributo di interfaccia è un'interfaccia COM.

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
