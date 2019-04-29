---
title: Errore del compilatore C2013
ms.date: 11/04/2016
f1_keywords:
- C2013
helpviewer_keywords:
- C2013
ms.assetid: 6b5c955c-53da-48ee-8533-64ef5b905173
ms.openlocfilehash: b279202b8b32197a99d230040207aa50bc100495
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62351131"
---
# <a name="compiler-error-c2013"></a>Errore del compilatore C2013

'>' mancante

In una direttiva `#include` manca una parentesi uncinata chiusa. Aggiungere la parentesi quadra di chiusura per risolvere l'errore.

L'esempio seguente genera l'errore C2013:

```
// C2013.cpp
#include <stdio.h    // C2013
```

Possibile soluzione:

```
// C2013b.cpp
// compile with: /c
#include <stdio.h>
```