---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4997'
title: Avviso del compilatore (livello 1) C4997
ms.date: 11/04/2016
f1_keywords:
- C4997
helpviewer_keywords:
- C4997
ms.assetid: d39678fd-0c1a-4104-8a45-9e3f20de0407
ms.openlocfilehash: a3a0b348c5e6882557d46be5f3db0f3fdaa3aa8b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283615"
---
# <a name="compiler-warning-level-1-c4997"></a>Avviso del compilatore (livello 1) C4997

'class': la coclasse non implementa un'interfaccia COM o una pseudo-interfaccia

Una classe contrassegnata con l'attributo [coclass](../../windows/attributes/coclass.md) non ha implementato un'interfaccia.

L'esempio seguente genera l'errore C4997:

```cpp
// C4997.cpp
// compile with: /WX
// to resolve this C4997, uncomment all code
#include <objbase.h>

[ object ]
__interface I {
   HRESULT func();
};

[ coclass ]
struct C /*: I*/ {
   /*
   HRESULT func() {
      return S_OK;
   }
   */
};   // C4997
```
