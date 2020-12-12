---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4703'
title: Avviso del compilatore (livello 4) C4703
ms.date: 11/04/2016
f1_keywords:
- C4703
helpviewer_keywords:
- C4703
ms.assetid: 5dad454e-69e3-4931-9168-050a861c05f8
ms.openlocfilehash: 8c31ed9be7dc271f9de4471792ccd6517091cab6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97133783"
---
# <a name="compiler-warning-level-4-c4703"></a>Avviso del compilatore (livello 4) C4703

utilizzata variabile puntatore locale non inizializzata 'nome'

È possibile che sia stato usato il *nome* della variabile puntatore locale senza che sia stato assegnato un valore. Questo può causare risultati imprevedibili.

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

int main()
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

int main()
{
    func(9);
}
```

## <a name="see-also"></a>Vedi anche

[Avviso del compilatore (livello 4) C4701](../../error-messages/compiler-warnings/compiler-warning-level-4-c4701.md)<br/>
[Avvisi,/SDL e miglioramento del rilevamento di variabili non inizializzate](https://www.microsoft.com/security/blog/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/)
