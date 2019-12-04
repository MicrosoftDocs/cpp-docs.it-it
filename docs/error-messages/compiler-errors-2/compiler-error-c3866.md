---
title: Errore del compilatore C3866
ms.date: 11/04/2016
f1_keywords:
- C3866
helpviewer_keywords:
- C3866
ms.assetid: 685870af-2440-4cdf-a6cb-284a5b96ef9d
ms.openlocfilehash: 907e435b31a825021b03946f08f7307c5e1ed708
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761457"
---
# <a name="compiler-error-c3866"></a>Errore del compilatore C3866

chiamata di funzione mancante elenco di argomenti

All'interno di una funzione membro non statica, una chiamata a un distruttore o un finalizzatore non ha un elenco di argomenti.

L'esempio seguente genera l'C3866:

```cpp
// C3866.cpp
// compile with: /c
class C {
   ~C();
   void f() {
      this->~C;   // C3866
      this->~C();   // OK
   }
};
```
