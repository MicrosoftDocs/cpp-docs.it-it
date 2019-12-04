---
title: Errore del compilatore C2034
ms.date: 11/04/2016
f1_keywords:
- C2034
helpviewer_keywords:
- C2034
ms.assetid: 953d70fa-bde9-4ce6-a55d-741e7bc63ff4
ms.openlocfilehash: c416c833edf522e4e67cf84aaf7fc945ee8a7972
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755109"
---
# <a name="compiler-error-c2034"></a>Errore del compilatore C2034

' Identifier ': tipo di campo di bit troppo piccolo per numero di bit

Il numero di bit nella dichiarazione di campo di bit supera la dimensione del tipo di base.

L'esempio seguente genera l'C2034:

```cpp
// C2034.cpp
struct A {
   char test : 9;   // C2034, char has 8 bits
};
```

Possibile soluzione:

```cpp
// C2034b.cpp
// compile with: /c
struct A {
   char test : 8;
};
```
