---
description: 'Altre informazioni su: __noop'
title: __noop
ms.date: 09/02/2019
f1_keywords:
- __noop_cpp
- __noop
helpviewer_keywords:
- __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
ms.openlocfilehash: 4b140141e0f773f01cd666dd67f77244d7aef8a5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222463"
---
# <a name="__noop"></a>__noop

**Specifico di Microsoft**

La **`__noop`** funzione intrinseca specifica che una funzione deve essere ignorata. L'elenco di argomenti viene analizzato, ma non viene generato alcun codice per gli argomenti. È destinata all'uso in funzioni di debug globali che accettano un numero variabile di argomenti.

Il compilatore converte l'oggetto **`__noop`** intrinseco in 0 in fase di compilazione.

## <a name="example"></a>Esempio

Il codice seguente illustra come usare **`__noop`** .

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
