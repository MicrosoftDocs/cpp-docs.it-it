---
description: 'Scopri di più su Microsoft C/C++ Intrinsic: __noop'
title: __noop
ms.date: 12/16/2020
f1_keywords:
- __noop_cpp
- __noop
helpviewer_keywords:
- __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
ms.openlocfilehash: 5fd300ca8d68305a12e6b5540be05aa60a042a44
ms.sourcegitcommit: 387ce22a3b0137f99cbb856a772b5a910c9eba99
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/17/2020
ms.locfileid: "97645085"
---
# `__noop`

Il valore intrinseco **specifico di Microsoft** **`__noop`** specifica che una funzione deve essere ignorata. L'elenco di argomenti viene analizzato, ma non viene generato alcun codice per gli argomenti. Il compilatore considera gli argomenti come a cui viene fatto riferimento ai fini dell'avviso del compilatore C4100 e di un'analisi simile. La `__noop` funzione intrinseca è destinata all'uso in funzioni di debug globali che accettano un numero variabile di argomenti.

Il compilatore converte l'oggetto **`__noop`** intrinseco in 0 in fase di compilazione.

## <a name="example"></a>Esempio

Il codice seguente illustra come usare **`__noop`** .

```cpp
// compiler_intrinsics__noop.cpp
// compile using: cl /EHsc /W4 compiler_intrinsics__noop.cpp
// compile with or without /DDEBUG
#include <stdio.h>

#if DEBUG
   #define PRINT   printf_s
#else
   #define PRINT   __noop
#endif

#define IGNORE(x) { __noop(x); }

int main(int argv, char ** argc)
{
   IGNORE(argv);
   IGNORE(argc);
   PRINT("\nDEBUG is defined\n");
}
```

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
