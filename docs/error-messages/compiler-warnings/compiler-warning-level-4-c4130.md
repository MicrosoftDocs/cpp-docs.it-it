---
title: Avviso del compilatore (livello 4) C4130
ms.date: 11/04/2016
f1_keywords:
- C4130
helpviewer_keywords:
- C4130
ms.assetid: 45e4c7b2-6b51-41c7-ba5e-941aa5c7d3dc
ms.openlocfilehash: b55594608eccc5d1e5e764bffb73ecb3787af1e4
ms.sourcegitcommit: 3ee06ec53153cf21910fc8cfef78a4f25f9633f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/26/2019
ms.locfileid: "74541589"
---
# <a name="compiler-warning-level-4-c4130"></a>Avviso del compilatore (livello 4) C4130

'operator': operazione logica su indirizzo di costante di stringa

Se si usa l'operatore con l'indirizzo di un valore letterale stringa viene prodotto codice imprevisto.

L'esempio seguente genera l'errore C4130:

```cpp
// C4130.cpp
// compile with: /W4
int main()
{
   char *pc;
   pc = "Hello";
   if (pc == "Hello") // C4130
   {
   }
}
```

L'istruzione **if** confronta il valore archiviato nel puntatore `pc` con l'indirizzo della stringa "Hello", che viene allocata separatamente ogni volta che la stringa è presente nel codice. L'istruzione **if** non confronta la stringa a cui punta `pc` con la stringa "Hello".

Per confrontare le stringhe, usare la funzione `strcmp` .