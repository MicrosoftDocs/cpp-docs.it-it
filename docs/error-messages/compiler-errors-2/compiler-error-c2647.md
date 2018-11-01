---
title: Errore del compilatore C2647
ms.date: 11/04/2016
f1_keywords:
- C2647
helpviewer_keywords:
- C2647
ms.assetid: 1034589e-bc3e-41a6-831f-2a1a4b8a2500
ms.openlocfilehash: ac69dbb4de23be05d375126947fe003ef75fb85e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591867"
---
# <a name="compiler-error-c2647"></a>Errore del compilatore C2647

'operator': impossibile dereferenziare un 'tipo1' a 'type2'

L'operando sinistro degli operatori puntatore a membro ( `->*` o `.*` ) non può essere convertito implicitamente in un tipo correlato all'operatore di destra.

L'esempio seguente genera l'errore C2647:

```
// C2647.cpp
class C {};
class D {};

int main() {
   D d, *pd;
   C c, *pc = 0;
   int C::*pmc = 0;
   pd->*pmc = 0;   // C2647
   d.*pmc = 0;   // C2647

   // OK
   pc->*pmc = 0;
   c.*pmc = 0;
}
```