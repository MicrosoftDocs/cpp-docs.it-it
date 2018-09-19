---
title: Errore del compilatore C2004 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2004
dev_langs:
- C++
helpviewer_keywords:
- C2004
ms.assetid: d81526dd-3a00-4593-87b0-d910d3d29bca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b560ef96c4fadcb7c5ce57ece13647032ca9e902
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118752"
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