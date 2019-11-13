---
title: Avviso del compilatore (livello 1) C4717
ms.date: 11/04/2016
f1_keywords:
- C4717
helpviewer_keywords:
- C4717
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
ms.openlocfilehash: 0bc95cc770914a1c02a7a40f9754415c2f013d63
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051352"
---
# <a name="compiler-warning-level-1-c4717"></a>Avviso del compilatore (livello 1) C4717

' Function ': ricorsivo su tutti i percorsi di controllo. la funzione provocherà un overflow dello stack di runtime

Ogni percorso tramite una funzione contiene una chiamata alla funzione. Poiché non è possibile uscire dalla funzione senza prima chiamare in modo ricorsivo, la funzione non verrà mai chiusa.

L'esempio seguente genera l'C4717:

```cpp
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