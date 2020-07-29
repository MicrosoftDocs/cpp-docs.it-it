---
title: Avviso del compilatore (livello 4) C4130
ms.date: 11/04/2016
f1_keywords:
- C4130
helpviewer_keywords:
- C4130
ms.assetid: 45e4c7b2-6b51-41c7-ba5e-941aa5c7d3dc
ms.openlocfilehash: 7b2fbccfd3b124220d6e310c01adace1d3e112c1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219963"
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

L' **`if`** istruzione confronta il valore archiviato nel puntatore `pc` con l'indirizzo della stringa "Hello", che viene allocato separatamente ogni volta che la stringa viene eseguita nel codice. L' **`if`** istruzione non confronta la stringa a cui punta `pc` con la stringa "Hello".

Per confrontare le stringhe, usare la funzione `strcmp` .
