---
title: Avviso del compilatore (livello 4) C4682
ms.date: 11/04/2016
f1_keywords:
- C4682
helpviewer_keywords:
- C4682
ms.assetid: 858ea157-1244-4a61-85df-97b3de43d418
ms.openlocfilehash: 6566c27999f218b7a214e32dde96bd1cf96fbb12
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395274"
---
# <a name="compiler-warning-level-4-c4682"></a>Avviso del compilatore (livello 4) C4682

'parameter': non sono stati specificati attributi di parametro direzionali. Verrà usato [in]

Un metodo per un parametro in un'interfaccia con attributi non contiene uno degli attributi direzionali: [in](../../windows/in-cpp.md) o [out](../../windows/out-cpp.md). Il parametro viene impostato sul valore predefinito in.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4682:

```
// C4682.cpp
// compile with: /W4
#pragma warning(default : 4682)
#include <windows.h>
[module(name="MyModule")];

[ library_block, object, uuid("c54ad59d-d516-41dd-9acd-afda17565c2b") ]
__interface IMyIface : IUnknown
{
   HRESULT f1(int i, int *pi); // C4682
   // try the following line
   // HRESULT f1([in] int i, [in] int *pi);
};

int main()
{
}
```