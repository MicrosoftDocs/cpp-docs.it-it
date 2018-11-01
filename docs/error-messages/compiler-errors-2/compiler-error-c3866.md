---
title: Errore del compilatore C3866
ms.date: 11/04/2016
f1_keywords:
- C3866
helpviewer_keywords:
- C3866
ms.assetid: 685870af-2440-4cdf-a6cb-284a5b96ef9d
ms.openlocfilehash: 98014fec77ce47fa4c484645f401e615f1470e2f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50446293"
---
# <a name="compiler-error-c3866"></a>Errore del compilatore C3866

elenco di argomenti della funzione chiamata mancante

All'interno di una funzione membro non statico, una chiamata del distruttore o un finalizzatore non dispone di un elenco di argomenti.

L'esempio seguente genera l'errore C3866:

```
// C3866.cpp
// compile with: /c
class C {
   ~C();
   void f() {
      this->~C;   // C3866
      this->~C();   // OK
   }
};
```