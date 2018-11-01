---
title: Compilatore Warning (level 1) C4183
ms.date: 11/04/2016
f1_keywords:
- C4183
helpviewer_keywords:
- C4183
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
ms.openlocfilehash: 0d947a0f6d777a5ed3191d6d232a604028be2003
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50477454"
---
# <a name="compiler-warning-level-1-c4183"></a>Compilatore Warning (level 1) C4183

'identifier': tipo restituito mancante. si presuppone che sia una funzione membro che restituisce 'int'

La definizione inline di una funzione membro in una classe o una struttura non è un tipo restituito. Si presuppone che questa funzione membro hanno un valore predefinito di tipo restituito di `int`.

L'esempio seguente genera l'errore C4183:

```
// C4183.cpp
// compile with: /W1 /c
#pragma warning(disable : 4430)
class MyClass1;
class MyClass2 {
   MyClass1() {};   // C4183
};
```