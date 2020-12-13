---
description: 'Altre informazioni su: errore del compilatore C2004'
title: Errore del compilatore C2004
ms.date: 11/04/2016
f1_keywords:
- C2004
helpviewer_keywords:
- C2004
ms.assetid: d81526dd-3a00-4593-87b0-d910d3d29bca
ms.openlocfilehash: f418d2c2c372b228cc50b82237d8ebc56321e2c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340385"
---
# <a name="compiler-error-c2004"></a>Errore del compilatore C2004

previsto 'defined(id)'

Dopo la parola chiave preprocessore deve essere presente un identificatore tra parentesi.

Questo errore può verificarsi anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: parentesi mancante nella direttiva del preprocessore. Se in una direttiva del preprocessore manca la parentesi di chiusura, il compilatore genera un errore.

## <a name="examples"></a>Esempio

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
