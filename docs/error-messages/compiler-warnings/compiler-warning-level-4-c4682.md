---
title: Avviso del compilatore (livello 4) C4682
ms.date: 11/04/2016
f1_keywords:
- C4682
helpviewer_keywords:
- C4682
ms.assetid: 858ea157-1244-4a61-85df-97b3de43d418
ms.openlocfilehash: d9ab62d82c231a36a866597c1fad000eb616d835
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91510012"
---
# <a name="compiler-warning-level-4-c4682"></a>Avviso del compilatore (livello 4) C4682

'parameter': non sono stati specificati attributi di parametro direzionali. Verrà usato [in]

Un metodo su un parametro in un'interfaccia con attributi non ha uno degli attributi direzionali: [in](../../windows/attributes/in-cpp.md) o [out](../../windows/attributes/out-cpp.md). Il valore predefinito del parametro è in.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4682:

```cpp
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
