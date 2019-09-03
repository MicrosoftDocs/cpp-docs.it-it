---
title: __noop
ms.date: 09/02/2019
f1_keywords:
- __noop_cpp
- __noop
helpviewer_keywords:
- __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
ms.openlocfilehash: 24ba85b1fbbba4491c03d5a81afae345228db3bd
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217188"
---
# <a name="__noop"></a>__noop

**Sezione specifica Microsoft**

La `__noop` funzione intrinseca specifica che una funzione deve essere ignorata. L'elenco di argomenti viene analizzato, ma non viene generato alcun codice per gli argomenti. È destinata all'uso in funzioni di debug globali che accettano un numero variabile di argomenti.

Il compilatore converte l' `__noop` oggetto intrinseco in 0 in fase di compilazione.

## <a name="example"></a>Esempio

Il codice seguente illustra come usare `__noop`.

```cpp
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

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
