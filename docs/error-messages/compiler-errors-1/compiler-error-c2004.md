---
title: Errore del compilatore C2004
ms.date: 11/04/2016
f1_keywords:
- C2004
helpviewer_keywords:
- C2004
ms.assetid: d81526dd-3a00-4593-87b0-d910d3d29bca
ms.openlocfilehash: b781e9f81342f35d66eca222bd338252b739096c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737491"
---
# <a name="compiler-error-c2004"></a>Errore del compilatore C2004

previsto 'defined(id)'

Dopo la parola chiave preprocessore deve essere presente un identificatore tra parentesi.

Questo errore può verificarsi anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: parentesi mancante nella direttiva del preprocessore. Se in una direttiva del preprocessore manca la parentesi di chiusura, il compilatore genera un errore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2004:

```cpp
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

```cpp
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
