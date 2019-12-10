---
title: Avviso del compilatore (livello 4) C4680
ms.date: 11/04/2016
f1_keywords:
- C4680
helpviewer_keywords:
- C4680
ms.assetid: 6e043f4c-c601-4b77-8130-920cff1d912e
ms.openlocfilehash: 21ea9bf54a493a72dc24c607812eaed69f9ef71b
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74990465"
---
# <a name="compiler-warning-level-4-c4680"></a>Avviso del compilatore (livello 4) C4680

' Class ': la coclasse non specifica un'interfaccia predefinita

Non è stata specificata un'interfaccia [predefinita](../../windows/default-cpp.md) per una classe contrassegnata con l'attributo [coclass](../../windows/coclass.md) . Affinché un oggetto sia utile, deve implementare un'interfaccia.

L'esempio seguente genera l'C4680:

```cpp
// C4680.cpp
// compile with: /W4
#include <windows.h>
[module(name="MyModule")];

[ object, uuid(373a1a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface1
{
   HRESULT f1();
};

[ object, uuid(37331a4c-469b-11d3-a6b0-00c04f79ae8f) ]
__interface IMyIface2
{
   HRESULT f1();
};

// to resolve C4680, specify a source interface also
// for example, default(IMyIface1, IMyface2)
[ coclass, uuid(373a1a4d-469b-11d3-a6b0-00c04f79ae8f), default(IMyIface1), source(IMyIface1) ]
class CMyClass : public IMyIface1
{   // C4680
};

int main()
{
}
```
