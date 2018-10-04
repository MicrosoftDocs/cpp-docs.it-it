---
title: Errore del compilatore C3136 | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3136
dev_langs:
- C++
helpviewer_keywords:
- C3136
ms.assetid: c77103cd-00f7-408e-b74b-4f8562039d31
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 082a89b69092a8320f6bb4b930d01a7fd2de10c8
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48788383"
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