---
title: Errore del compilatore C2460
ms.date: 11/04/2016
f1_keywords:
- C2460
helpviewer_keywords:
- C2460
ms.assetid: d969fca9-3ac5-4e4e-88fc-df05510e2093
ms.openlocfilehash: 414b6e53cf1610a55db984a1127bfc884102494f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50589592"
---
# <a name="compiler-error-c2460"></a>Errore del compilatore C2460

'identifier1': utilizza 'identifier2', che viene definito

Una classe o struttura (`identifier2`) viene dichiarato come un membro di se stesso (`identifier1`). Ricorsivo definizioni delle classi e strutture non sono consentite.

L'esempio seguente genera l'errore C2460:

```
// C2460.cpp
class C {
   C aC;    // C2460
};
```

Usare invece un riferimento a un puntatore nella classe.

```
// C2460.cpp
class C {
   C * aC;    // OK
};
```