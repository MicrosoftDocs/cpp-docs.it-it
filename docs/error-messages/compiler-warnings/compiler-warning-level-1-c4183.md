---
title: Avviso del compilatore (livello 1) C4183
ms.date: 11/04/2016
f1_keywords:
- C4183
helpviewer_keywords:
- C4183
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
ms.openlocfilehash: 4c2c7ce23cfaea5ebf31e78d84b7ff7fbdbf4c85
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175935"
---
# <a name="compiler-warning-level-1-c4183"></a>Avviso del compilatore (livello 1) C4183

' Identifier ': tipo restituito mancante; si presuppone che sia una funzione membro che restituisce ' int '

La definizione inline di una funzione membro in una classe o in una struttura non ha un tipo restituito. Si presuppone che questa funzione membro disponga di un tipo restituito predefinito `int`.

L'esempio seguente genera l'C4183:

```cpp
// C4183.cpp
// compile with: /W1 /c
#pragma warning(disable : 4430)
class MyClass1;
class MyClass2 {
   MyClass1() {};   // C4183
};
```
