---
title: Errore del compilatore C3743
ms.date: 11/04/2016
f1_keywords:
- C3743
helpviewer_keywords:
- C3743
ms.assetid: 7ca9a76e-7b60-46d1-ab8b-18600cf1a306
ms.openlocfilehash: b4bb198ae883e53e7947ce7f123bb0d3f092aaf3
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91500395"
---
# <a name="compiler-error-c3743"></a>Errore del compilatore C3743

può solo collegare o scollegare un'intera interfaccia quando il parametro ' layout_dependent ' di event_receiver è true

La funzione [__unhook](../../cpp/unhook.md) varia in base al numero di parametri accettati in base al valore passato al `layout_dependent` parametro nella classe [event_receiver](../../windows/attributes/event-receiver.md) .

L'esempio seguente genera l'C3743:

```cpp
// C3743.cpp
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
[module(name="xx")];
[object] __interface I { HRESULT f(); };

[event_receiver(com, layout_dependent=true), coclass]
struct R : I {
        HRESULT f() {
      return 0;
   }
        R() {
   }

   R(I* a) {
      __hook(I, a, &R::f);   // C3743
      // The following line resolves the error.
      // __hook(I, a);
   }
};
```
