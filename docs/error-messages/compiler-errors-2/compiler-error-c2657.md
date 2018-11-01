---
title: Errore del compilatore C2657
ms.date: 11/04/2016
f1_keywords:
- C2657
helpviewer_keywords:
- C2657
ms.assetid: f7cf29a9-684a-4605-9469-ecfee9ba4b03
ms.openlocfilehash: 4e2816092b3c0c210ae2c544e9bf9a823a9c5d18
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661136"
---
# <a name="compiler-error-c2657"></a>Errore del compilatore C2657

' classe:: *' trovata all'inizio di un'istruzione (si è omesso di specificare un tipo di?)

La riga inizia con un identificatore di puntatore a membro.

Questo errore può essere causato da un identificatore di tipo mancante nella dichiarazione di un puntatore a un membro.

L'esempio seguente genera l'errore C2657:

```
// C2657.cpp
class C {};
int main() {
   C::* pmc1;        // C2657
   int C::* pmc2;   // OK
}
```