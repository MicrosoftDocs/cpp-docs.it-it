---
title: Avviso del compilatore (livelli 1 e 4) C4949
ms.date: 11/04/2016
f1_keywords:
- C4949
helpviewer_keywords:
- C4949
ms.assetid: 34f45a05-c115-49cb-9f67-0bd4f0735d9b
ms.openlocfilehash: 8050edbd7a653776d046bc7b4155fd43094d9a5d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50515932"
---
# <a name="compiler-warning-level-1-and-level-4-c4949"></a>Avviso del compilatore (livelli 1 e 4) C4949

pragma 'managed' e 'unmanaged' sono significativi solo quando viene compilato con ' / /CLR [: opzione]'

Il compilatore ignora la [managed](../../preprocessor/managed-unmanaged.md) e non gestiti pragma se il codice sorgente non viene compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md). Si tratta di un avviso informativo.

L'esempio seguente genera l'errore C4949:

```
// C4949.cpp
// compile with: /LD /W1
#pragma managed   // C4949
```

Quando **#pragma unmanaged** viene usato senza **/clr**, C4949 è un avviso di livello 4.

L'esempio seguente genera l'errore C4949:

```
// C4949b.cpp
// compile with: /LD /W4
#pragma unmanaged   // C4949
```