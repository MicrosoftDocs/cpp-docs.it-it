---
title: Errore del compilatore C2010
ms.date: 11/04/2016
f1_keywords:
- C2010
helpviewer_keywords:
- C2010
ms.assetid: 5795ed1d-e206-410b-b7b4-528d125c67b4
ms.openlocfilehash: 71cb0012f5e7bda3a0f1409fe71649a5bd0944b8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50434225"
---
# <a name="compiler-error-c2010"></a>Errore del compilatore C2010

'character': imprevisto nell'elenco di parametri formali di macro

Il carattere viene usato in modo non corretto nell'elenco di parametri formali della definizione di una macro. Rimuovere il carattere per risolvere l'errore.

L'esempio seguente genera l'errore C2010:

```
// C2010.cpp
// compile with: /c
#define mymacro(a|) (2*a)   // C2010
#define mymacro(a) (2*a)   // OK
```