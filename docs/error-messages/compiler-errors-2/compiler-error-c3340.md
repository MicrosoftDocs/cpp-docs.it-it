---
title: Errore del compilatore C3340
ms.date: 11/04/2016
f1_keywords:
- C3340
helpviewer_keywords:
- C3340
ms.assetid: 23b12298-b92a-4717-8380-f165c998cb8a
ms.openlocfilehash: aa52170f2f2a2e1fa8019a451c1322a4b1d8eac3
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91506807"
---
# <a name="compiler-error-c3340"></a>Errore del compilatore C3340

'interface': l'interfaccia non può essere sia 'restricted' che 'default' nella coclasse 'class'

Gli attributi [restricted](../../windows/attributes/restricted.md) e [default](../../windows/attributes/default-cpp.md) si escludono reciprocamente.

L'esempio seguente genera l'errore C3340:

```cpp
// C3340.cpp
#include <windows.h>
[module(name="MyModule")];

[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface
{
   HRESULT f1();
};

[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f),
default(IMyIface),
source(IMyIface),restricted(IMyIface) ]
class CmyClass // C3340
{
};

int main()
{
}
```
