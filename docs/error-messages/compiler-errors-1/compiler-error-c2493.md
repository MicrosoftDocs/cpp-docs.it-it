---
title: Errore del compilatore C2493
ms.date: 11/04/2016
f1_keywords:
- C2493
helpviewer_keywords:
- C2493
ms.assetid: 68316cd5-682b-49c3-b6ea-23c4e5d296cf
ms.openlocfilehash: e3c38167ff2b6d2b2f78a1357a9450a70cb421cc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216193"
---
# <a name="compiler-error-c2493"></a>Errore del compilatore C2493

forma non valida di __based

Un' **`__based`** espressione deve essere basata su un puntatore.

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
