---
title: Errore del compilatore C2632
ms.date: 11/04/2016
f1_keywords:
- C2632
helpviewer_keywords:
- C2632
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
ms.openlocfilehash: 8ea3a106e8819bf067203f220ca51e17b87bfe46
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225462"
---
# <a name="compiler-error-c2632"></a>Errore del compilatore C2632

' tipo1' seguito da' tipo2' non è valido

Questo errore può essere causato dal mancato codice tra due identificatori di tipo.

L'esempio seguente genera l'C2632:

```cpp
// C2632.cpp
int float i;   // C2632
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003. **`bool`** è ora un tipo appropriato. Nelle versioni precedenti, **`bool`** era un typedef ed è possibile creare identificatori con tale nome.

L'esempio seguente genera l'C2632:

```cpp
// C2632_2.cpp
// compile with: /LD
void f(int bool);   // C2632
```

Per correggere l'errore in modo che il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rinominare l'identificatore.
