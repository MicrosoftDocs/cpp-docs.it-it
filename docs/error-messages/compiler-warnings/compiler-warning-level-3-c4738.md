---
title: Compiler Warning (Level 3) C4738
ms.date: 11/04/2016
f1_keywords:
- C4738
helpviewer_keywords:
- C4738
ms.assetid: 9094895f-7eec-46c2-83d3-249b761d585e
ms.openlocfilehash: 5162a03b213b35913ed1fc7f39360796ccf2c4a0
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189402"
---
# <a name="compiler-warning-level-3-c4738"></a>Compiler Warning (Level 3) C4738

archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni

C4738 warns that the result of an assignment, cast, passed argument, or other operation may need to be rounded or that the operation ran out of registers and needed to use memory (spilling). This can result in performance loss.

To resolve this warning and avoid rounding, compile with [/fp:fast](../../build/reference/fp-specify-floating-point-behavior.md) or use `double` instead of `float`.

To resolve this warning and avoid running out of registers, change the order of computation and modify your use of inlining

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

The following sample generates C4738:

```cpp
// C4738.cpp
// compile with: /c /fp:precise /O2 /W3
// processor: x86
#include <stdio.h>

#pragma warning(default : 4738)

float func(float f)
{
    return f;
}

int main()
{
    extern float f, f1, f2;
    double d = 0.0;

    f1 = func(d);
    f2 = (float) d;
    f = f1 + f2;   // C4738
    printf_s("%f\n", f);
}
```