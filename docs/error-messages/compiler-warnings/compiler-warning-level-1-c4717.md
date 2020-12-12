---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4717'
title: Avviso del compilatore (livello 1) C4717
ms.date: 11/04/2016
f1_keywords:
- C4717
helpviewer_keywords:
- C4717
ms.assetid: 5ef3c6c7-8599-4714-a973-0f5b69cdab3c
ms.openlocfilehash: 7a23469539dd809ea4905701bd1f8064f26a8036
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328131"
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
