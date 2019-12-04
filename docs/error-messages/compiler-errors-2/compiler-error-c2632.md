---
title: Errore del compilatore C2632
ms.date: 11/04/2016
f1_keywords:
- C2632
helpviewer_keywords:
- C2632
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
ms.openlocfilehash: f69d43bf50f5f13957e49d1e9ffa798a3db5a7b3
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754693"
---
# <a name="compiler-error-c2632"></a>Errore del compilatore C2632

' tipo1' seguito da' tipo2' non è valido

Questo errore può essere causato dal mancato codice tra due identificatori di tipo.

L'esempio seguente genera l'C2632:

```cpp
// C2632.cpp
int float i;   // C2632
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003. `bool` è ora un tipo appropriato. Nelle versioni precedenti, `bool` era un typedef ed è possibile creare identificatori con tale nome.

L'esempio seguente genera l'C2632:

```cpp
// C2632_2.cpp
// compile with: /LD
void f(int bool);   // C2632
```

Per correggere l'errore in modo che il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di C++Visual Studio, rinominare l'identificatore.
