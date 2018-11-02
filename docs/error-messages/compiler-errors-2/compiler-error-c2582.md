---
title: Errore del compilatore C2582
ms.date: 11/04/2016
f1_keywords:
- C2582
helpviewer_keywords:
- C2582
ms.assetid: ee1b9378-8bcd-4792-b87e-6d7a466d29ed
ms.openlocfilehash: 2becaf3cf955a9ed8dbbc22cbf11728bcc5bec34
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50521263"
---
# <a name="compiler-error-c2582"></a>Errore del compilatore C2582

la funzione 'function' non è disponibile in 'type'

È stato effettuato il tentativo di assegnare a un oggetto che non dispone di un operatore di assegnazione.

L'esempio seguente genera l'errore C2582:

```
// C2582.cpp
// compile with: /clr
using namespace System;

struct N {};
ref struct O {};
ref struct R {
   property O prop;   // C2582
   property O ^ prop2;   // OK
};

int main() {
   String ^ st1 = gcnew String("");
   ^st1 = gcnew String("");   // C2582
   st1 = "xxx";   // OK
}
```