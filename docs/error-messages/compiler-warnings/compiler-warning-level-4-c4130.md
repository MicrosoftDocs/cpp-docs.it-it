---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4130'
title: Avviso del compilatore (livello 4) C4130
ms.date: 11/04/2016
f1_keywords:
- C4130
helpviewer_keywords:
- C4130
ms.assetid: 45e4c7b2-6b51-41c7-ba5e-941aa5c7d3dc
ms.openlocfilehash: e7096f471405b0b22bcb0a825dd9ccd0de4e3510
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261814"
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
