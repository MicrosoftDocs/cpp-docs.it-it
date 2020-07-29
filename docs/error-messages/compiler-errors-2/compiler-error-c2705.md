---
title: Errore del compilatore C2705
ms.date: 11/04/2016
f1_keywords:
- C2705
helpviewer_keywords:
- C2705
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
ms.openlocfilehash: 65d9ed2458f43e6c9a697be02ffc9b831259624c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225436"
---
# <a name="compiler-error-c2705"></a>Errore del compilatore C2705

' label ': salto non valido nell'ambito del blocco del gestore eccezioni

L'esecuzione passa a un'etichetta all'interno di un **`try`** / **`catch`** `__try` / **`__except`** blocco,, `__try` / **`__finally`** . Per altre informazioni, vedere [Gestione delle eccezioni](../../cpp/exception-handling-in-visual-cpp.md).

L'esempio seguente genera l'C2705:

```cpp
// C2705.cpp
int main() {
goto trouble;
   __try {
      trouble: ;   // C2705
   }
   __finally {}

   // try the following line instead
   // trouble: ;
}
```
