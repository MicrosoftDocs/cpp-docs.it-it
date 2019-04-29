---
title: Avviso del compilatore (livello 4) C4701
ms.date: 11/04/2016
f1_keywords:
- C4701
helpviewer_keywords:
- C4701
ms.assetid: d7c76c66-1f3f-4d3c-abe4-5d94c84a5a1f
ms.openlocfilehash: cbe70de39d2306edd50bb936ac5bbb4ad14af0e5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395287"
---
# <a name="compiler-warning-level-4-c4701"></a>Avviso del compilatore (livello 4) C4701

variabile locale potenzialmente non inizializzata 'nome' utilizzato

La variabile locale *nome* potrebbe essere stato usato senza essere assegnato un valore. Questo potrebbe causare risultati imprevisti.

## <a name="example"></a>Esempio

Nel codice seguente vengono generati gli errori C4701 e C4703.

```cpp
#include <malloc.h>

void func(int size)
{
    void* p;
    if (size < 256) {
        p = malloc(size);
    }

    if (p != nullptr) // C4701 and C4703
        free(p);
}

void main()
{
    func(9);
}
```

```Output
c:\src\test.cpp(10) : warning C4701: potentially uninitialized local variable 'p' used
c:\src\test.cpp(10) : warning C4703: potentially uninitialized local pointer variable 'p' used
```

Per risolvere il problema, inizializzare la variabile come indicato nel codice seguente:

```cpp
#include <malloc.h>

void func(int size)
{
    void* p = nullptr;
    if (size < 256) {
        p = malloc(size);
    }

    if (p != nullptr)
        free(p);
}

void main()
{
    func(9);
}
```

## <a name="see-also"></a>Vedere anche

[Avviso del compilatore (livello 4) C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)<br/>
[Gli avvisi, /sdl e miglioramento del rilevamento della variabile non inizializzato](https://www.microsoft.com/security/blog/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/)