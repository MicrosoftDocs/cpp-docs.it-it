---
title: Errore del compilatore C2556
ms.date: 11/04/2016
f1_keywords:
- C2556
helpviewer_keywords:
- C2556
ms.assetid: fc4399ad-45b3-49fd-be1f-0b13956a595a
ms.openlocfilehash: 4a2b4dc9dcd71d518845651dee97c566b778eb0a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50484149"
---
# <a name="compiler-error-c2556"></a>Errore del compilatore C2556

'identifier': le funzioni in overload si differenziano solo per il tipo restituito

Le funzioni in overload hanno tipi restituiti diversi ma lo stesso elenco di parametri. Ogni funzione in overload deve avere un elenco di parametri formali distinti.

L'esempio seguente genera l'errore C2556:

```
// C2556.cpp
// compile with: /c
class C {
   int func();
   double func();   // C2556
   int func(int i);   // ok parameter lists differ
};
```