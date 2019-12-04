---
title: Errore del compilatore C2380
ms.date: 11/04/2016
f1_keywords:
- C2380
helpviewer_keywords:
- C2380
ms.assetid: 717b1e6e-ddfe-4bac-a5f3-7f9a4dcb1572
ms.openlocfilehash: ca249bc592bd66c2e461a37fdc18204077f51db2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74745434"
---
# <a name="compiler-error-c2380"></a>Errore del compilatore C2380

i tipi che precedono ' Identifier ' (costruttore con tipo restituito o ridefinizione non valida del nome di classe corrente?)

Un costruttore restituisce un valore o ridefinisce il nome della classe.

L'esempio seguente genera l'errore C2326:

```cpp
// C2380.cpp
// compile with: /c
class C {
public:
   int C();   // C2380, specifies an int return
   int C;   // C2380, redefinition of i
   C();   // OK
};
```
