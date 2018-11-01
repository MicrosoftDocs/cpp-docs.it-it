---
title: __noop
ms.date: 11/04/2016
f1_keywords:
- __noop_cpp
- __noop
helpviewer_keywords:
- __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
ms.openlocfilehash: 074ab4c6ea51c8b3a2543d9b43248a8da37567cf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613009"
---
# <a name="noop"></a>__noop

**Sezione specifica Microsoft**

Il `__noop` intrinseco specifica che una funzione deve essere ignorata e analizzare l'elenco di argomenti, ma nessun codice generato per gli argomenti. Si tratta per l'uso nelle funzioni globali di debug che accettano un numero variabile di argomenti.

Il compilatore converte il `__noop` intrinseci su 0 in fase di compilazione.

## <a name="example"></a>Esempio

Il codice seguente illustra come è possibile usare `__noop`.

```
// compiler_intrinsics__noop.cpp
// compile with or without /DDEBUG
#include <stdio.h>

#if DEBUG
   #define PRINT   printf_s
#else
   #define PRINT   __noop
#endif

int main() {
   PRINT("\nhello\n");
}
```

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)