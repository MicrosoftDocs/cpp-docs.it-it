---
title: Avviso del compilatore (livello 1) C4183
ms.date: 11/04/2016
f1_keywords:
- C4183
helpviewer_keywords:
- C4183
ms.assetid: dc48312c-4b34-44dd-80ff-eb5f11d5ca47
ms.openlocfilehash: cff62c18442cd6d55a9444bb86944b691145b9fe
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231923"
---
# <a name="compiler-warning-level-1-c4183"></a>Avviso del compilatore (livello 1) C4183

' Identifier ': tipo restituito mancante; si presuppone che sia una funzione membro che restituisce ' int '

La definizione inline di una funzione membro in una classe o in una struttura non ha un tipo restituito. Si presuppone che questa funzione membro abbia un tipo restituito predefinito **`int`** .

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
