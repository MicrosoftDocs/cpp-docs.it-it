---
title: Avviso del compilatore (livello 3) C4738
ms.date: 11/04/2016
f1_keywords:
- C4738
helpviewer_keywords:
- C4738
ms.assetid: 9094895f-7eec-46c2-83d3-249b761d585e
ms.openlocfilehash: 639fb14fc409a9954315184bab7ae1127460ea0d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214412"
---
# <a name="compiler-warning-level-3-c4738"></a>Avviso del compilatore (livello 3) C4738

archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni

C4738 avverte che il risultato di un'assegnazione, un cast, un argomento passato o un'altra operazione potrebbe dover essere arrotondato o che l'operazione ha esaurito i registri ed è necessario usare la memoria (fuoriuscita). Ciò può comportare una perdita delle prestazioni.

Per risolvere questo avviso ed evitare l'arrotondamento, compilare con [/FP: Fast](../../build/reference/fp-specify-floating-point-behavior.md) o use **`double`** anziché **`float`** .

Per risolvere questo avviso ed evitare l'esaurimento dei registri, modificare l'ordine di calcolo e modificare l'uso dell'incorporamento

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4738:

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
