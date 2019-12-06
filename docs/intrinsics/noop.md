---
title: __noop
ms.date: 09/02/2019
f1_keywords:
- __noop_cpp
- __noop
helpviewer_keywords:
- __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
ms.openlocfilehash: aec4df98413bf34ac1e2966d012bb905edd4775e
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857931"
---
# <a name="__noop"></a>__noop

**Sezione specifica Microsoft**

Il `__noop` intrinseco specifica che una funzione deve essere ignorata. L'elenco di argomenti viene analizzato, ma non viene generato alcun codice per gli argomenti. È destinata all'uso in funzioni di debug globali che accettano un numero variabile di argomenti.

Il compilatore converte il `__noop` intrinseco in 0 in fase di compilazione.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare `__noop`.

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
