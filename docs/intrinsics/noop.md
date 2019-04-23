---
title: __noop
ms.date: 11/04/2016
f1_keywords:
- __noop_cpp
- __noop
helpviewer_keywords:
- __noop keyword [C++]
ms.assetid: 81ac6e97-7bf8-496b-b3c4-fd02837573e5
ms.openlocfilehash: 674b5170dd2bba7038dfe11af906e31540acd993
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59030232"
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