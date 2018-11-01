---
title: Errore del compilatore C3136
ms.date: 10/03/2018
f1_keywords:
- C3136
helpviewer_keywords:
- C3136
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
ms.openlocfilehash: e32ffca067c3b25120301527e7a708d53001d541
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50501090"
---
# <a name="compiler-error-c3136"></a>Errore del compilatore C3136

'interface': un'interfaccia COM può ereditare solo da un'altra interfaccia COM, 'interface' non è un'interfaccia COM

Un'interfaccia a cui è applicato un [interface (attributo)](../../windows/attributes/interface-attributes.md) eredita da un'interfaccia che non è un'interfaccia COM. Un'interfaccia COM sua volta eredita da `IUnknown`. Qualsiasi interfaccia preceduto da un attributo di interfaccia è un'interfaccia COM.

Nell'esempio seguente genera l'errore C3136:

```
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