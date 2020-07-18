---
title: Avviso del compilatore (livello 1) C4293
description: Vengono descritte le cause dell'avviso C4293 del compilatore MSVC e viene illustrato come risolverlo.
ms.date: 07/15/2020
f1_keywords:
- C4293
helpviewer_keywords:
- C4293
ms.assetid: babecd96-eb51-41a5-9835-462c7a46dbad
ms.openlocfilehash: 3b5a05d4a744b084f1cc34210a5374962064e85d
ms.sourcegitcommit: e15b46ea7888dbdd7e0bb47da76aeed680c3c1f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2020
ms.locfileid: "86446476"
---
# <a name="compiler-warning-level-1-c4293"></a>Avviso del compilatore (livello 1) C4293

> '*operator*': conteggio di spostamento negativo o troppo grande, comportamento non definito

Se un conteggio dello spostamento è negativo o troppo grande, il comportamento dell'immagine risultante non è definito.

## <a name="remarks"></a>Commenti

Per risolvere questo problema, è possibile utilizzare un cast sul primo operando per espanderlo alla dimensione del tipo di risultato.

## <a name="example"></a>Esempio

L'esempio seguente genera C4293 e Mostra i modi per correggerlo:

```cpp
// C4293.cpp
// compile with: /c /W1
unsigned __int64 combine (unsigned lo, unsigned hi)
{
   return (hi << 32) | lo;   // C4293

   // In C, try the following line instead:
   // return ( (unsigned __int64)hi << 32) | lo;
   // In C++, try this line instead:
   // return (static_cast<unsigned __int64>(hi) << 32) | lo;
}
```
