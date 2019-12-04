---
title: Errore del compilatore C2292
ms.date: 11/04/2016
f1_keywords:
- C2292
helpviewer_keywords:
- C2292
ms.assetid: 256b392f-2b8f-4162-b578-e7633984e162
ms.openlocfilehash: 82d381fddc4cafd364bc0e45e70e5fb5c1cb3d84
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759113"
---
# <a name="compiler-error-c2292"></a>Errore del compilatore C2292

' Identifier ': rappresentazione di ereditarietà del caso migliore:' representation1' dichiarato ma obbligatorio ' representation2'

La compilazione del codice seguente con la rappresentazione "Best-case Always" di [/VMB](../../build/reference/vmb-vmg-representation-method.md) causa C2292.

```cpp
// C2292.cpp
// compile with: /vmb
class __single_inheritance X;

struct A { };
struct B { };
struct X : A, B { };  // C2292, X uses multiple inheritance
```
