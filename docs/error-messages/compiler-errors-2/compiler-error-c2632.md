---
title: Errore del compilatore C2632
ms.date: 11/04/2016
f1_keywords:
- C2632
helpviewer_keywords:
- C2632
ms.assetid: b15a6b1b-42d2-4e1b-8660-e6bfde61052d
ms.openlocfilehash: b92d44bcfd04d4de7b39c5bdab5ee146d9b6693b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50437925"
---
# <a name="compiler-error-c2632"></a>Errore del compilatore C2632

'type1' seguito da 'type2' non è valido

Questo errore può essere causato mancanza di codice tra due identificatori di tipi.

L'esempio seguente genera l'errore C2632:

```
// C2632.cpp
int float i;   // C2632
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003. `bool` è ora un tipo appropriato. Nelle versioni precedenti, `bool` era un typedef, ed era possibile creare identificatori con lo stesso nome.

L'esempio seguente genera l'errore C2632:

```
// C2632_2.cpp
// compile with: /LD
void f(int bool);   // C2632
```

Per risolvere questo errore, in modo che il codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, rinominare l'identificatore.