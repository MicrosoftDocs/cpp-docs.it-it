---
title: Errore del compilatore C2004
ms.date: 11/04/2016
f1_keywords:
- C2004
helpviewer_keywords:
- C2004
ms.assetid: d81526dd-3a00-4593-87b0-d910d3d29bca
ms.openlocfilehash: fb100d977188cd3a7d5b0ebbb3e29b53942871dc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208945"
---
# <a name="compiler-error-c2004"></a>Errore del compilatore C2004

previsto 'defined(id)'

Dopo la parola chiave preprocessore deve essere presente un identificatore tra parentesi.

Questo errore può verificarsi anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: parentesi mancante nella direttiva del preprocessore. Se in una direttiva del preprocessore manca la parentesi di chiusura, il compilatore genera un errore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2004:

```
// C2004.cpp
// compile with: /DDEBUG
#include <stdio.h>

int main()
{
    #if defined(DEBUG   // C2004
        printf_s("DEBUG defined\n");
    #endif
}
```

## <a name="example"></a>Esempio

Possibile soluzione:

```
// C2004b.cpp
// compile with: /DDEBUG
#include <stdio.h>

int main()
{
    #if defined(DEBUG)
        printf_s("DEBUG defined\n");
    #endif
}
```