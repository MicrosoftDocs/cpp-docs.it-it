---
title: Avviso del compilatore (livello 1) C4717
ms.date: 11/04/2016
f1_keywords:
- C4717
helpviewer_keywords:
- C4717
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
ms.openlocfilehash: 0cf9aef8f68ca5972fd3d7886cd8061b88d043ae
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62221141"
---
# <a name="compiler-warning-level-1-c4717"></a>Avviso del compilatore (livello 1) C4717

'function': funzione ricorsiva su tutti i percorsi di controlli, provocherà un overflow dello stack di runtime

Ogni percorso tramite una funzione contiene una chiamata alla funzione. Poiché non è possibile uscire in modo ricorsivo la funzione senza prima chiamare se stesso, la funzione non terminerà mai.

L'esempio seguente genera l'errore C4717:

```
// C4717.cpp
// compile with: /W1 /c
// C4717 expected
int func(int x) {
   if (x > 1)
      return func(x - 1); // recursive call
   else {
      int y = func(0) + 1; // recursive call
      return y;
   }
}

int main(){
   func(1);
}
```