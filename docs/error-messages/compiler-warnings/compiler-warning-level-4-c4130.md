---
title: Avviso del compilatore (livello 4) C4130
ms.date: 11/04/2016
f1_keywords:
- C4130
helpviewer_keywords:
- C4130
ms.assetid: 45e4c7b2-6b51-41c7-ba5e-941aa5c7d3dc
ms.openlocfilehash: 3bc632bf641fa3944cfd21dc405590c803498d80
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991575"
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
