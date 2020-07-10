---
title: Avviso del compilatore (livello 1) C4750
description: Descrive il C4750 di avviso del compilatore MSVC su un possibile overflow dello stack.
ms.date: 07/08/2020
f1_keywords:
- C4750
helpviewer_keywords:
- C4750
ms.assetid: b0b2c938-7d2a-4c36-8270-7daee15ffee3
ms.openlocfilehash: 9a22bdda407b02b8723b7198d62289d39f62792d
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180968"
---
# <a name="compiler-warning-level-1-c4750"></a>Avviso del compilatore (livello 1) C4750

> '*Identifier*': funzione con _alloca () inline in un ciclo

## <a name="remarks"></a>Osservazioni

La funzione '*Identifier*' impone l'espansione inline della [`_alloca`](../../c-runtime-library/reference/alloca.md) funzione all'interno di un ciclo, che potrebbe causare un overflow dello stack quando il ciclo viene eseguito.

### <a name="to-correct-this-error"></a>Per correggere l'errore

1. Verificare che la funzione '*Identifier*' non venga modificata con l' [`__forceinline`](../../cpp/inline-functions-cpp.md) identificatore.

1. Verificare che la funzione '*Identifier*' non contenga una [`_alloca`](../../c-runtime-library/reference/alloca.md) funzione contenuta in un ciclo.

1. Non specificare l' [`/O1`](../../build/reference/o1-o2-minimize-size-maximize-speed.md) opzione di compilazione,, [`/O2`](../../build/reference/o1-o2-minimize-size-maximize-speed.md) [`/Ox`](../../build/reference/ox-full-optimization.md) o [`/Og`](../../build/reference/og-global-optimizations.md) .

1. Inserire la [`_alloca`](../../c-runtime-library/reference/alloca.md) funzione in un' [istruzione try-except](../../cpp/try-except-statement.md) che rileverà un overflow dello stack.

## <a name="example"></a>Esempio

Nell'esempio di codice seguente viene chiamato `MyFunction` in un ciclo e `MyFunction` chiama la funzione `_alloca` . Il modificatore `__forceinline` provoca l'espansione inline della funzione `_alloca` .

```cpp
// c4750.cpp
// compile with: /O2 /W1 /c
#include <intrin.h>

char * volatile newstr;

__forceinline void myFunction(void) // C4750 warning
{
// The _alloca function does not require a __try/__except
// block because the example uses compiler option /c.
    newstr = (char * volatile) _alloca(1000);
}

int main(void)
{
    for (int i=0; i<50000; i++)
       myFunction();
    return 0;
}
```

## <a name="see-also"></a>Vedere anche

[_alloca](../../c-runtime-library/reference/alloca.md)
