---
title: Avviso del compilatore (livello 1) C4925
ms.date: 11/04/2016
f1_keywords:
- C4925
helpviewer_keywords:
- C4925
ms.assetid: a4b206c0-016a-4f28-873a-bb8bb41bad50
ms.openlocfilehash: cb7b416fe15380dc914bd57152e8a0ce3618ee85
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614565"
---
# <a name="compiler-warning-level-1-c4925"></a>Avviso del compilatore (livello 1) C4925

'method': impossibile chiamare il metodo dell'interfaccia dispatch tramite script

I linguaggi di script non possono creare un parametro 'in' VT_BYREF, possono creare solo parametri 'out' VT_BYREF.

Per risolvere il problema è anche possibile non rendere il parametro (nella definizione e nell'implementazione) un tipo di puntatore.

L'esempio seguente genera l'avviso C4925:

```
// C4925.cpp
// compile with: /LD /W1
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
[ module(name="Test")];

[ dispinterface, uuid("00000000-0000-0000-0000-000000000001") ]
__interface IDisp {
   [id(9)] void f([in] int*);
};

[ coclass, uuid("00000000-0000-0000-0000-000000000002")  ]
struct CDisp : IDisp {   // C4925
   void f(int*) {}
};
```