---
title: Errore del compilatore C2493
ms.date: 11/04/2016
f1_keywords:
- C2493
helpviewer_keywords:
- C2493
ms.assetid: 68316cd5-682b-49c3-b6ea-23c4e5d296cf
ms.openlocfilehash: 17cee561a0ebb642de95a6fce5426871030e5606
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757046"
---
# <a name="compiler-error-c2493"></a>Errore del compilatore C2493

forma non valida di __based

Un'espressione `__based` deve essere basata su un puntatore.

L'esempio seguente genera l'C2493:

```cpp
// C2493.cpp
// compile with: /c
char mybase;
int __based(mybase) ptr;   // C2493

// OK
char * mybase;
int __based(mybase) * ptr;
```
