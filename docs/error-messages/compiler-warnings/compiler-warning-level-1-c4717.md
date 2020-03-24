---
title: Avviso del compilatore (livello 1) C4717
ms.date: 11/04/2016
f1_keywords:
- C4717
helpviewer_keywords:
- C4717
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
ms.openlocfilehash: 40897e54601793431671bc14f855db43e905c656
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175288"
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
