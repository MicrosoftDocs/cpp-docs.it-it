---
title: Macro Variadic
ms.date: 10/17/2019
helpviewer_keywords:
- variadic macros [C++]
- __VA_ARGS__ variadic macro specifier
ms.assetid: 51e757dc-0134-4bb2-bb74-64ea5ad75134
ms.openlocfilehash: de4d3a7f03f613cb058e564664f01837df23aefb
ms.sourcegitcommit: 8178d22701047d24f69f10d01ba37490e3d67241
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/18/2019
ms.locfileid: "72587891"
---
# <a name="variadic-macros"></a>Macro Variadic

Le macro variadic sono macro di tipo funzione che contengono un numero variabile di argomenti.

## <a name="remarks"></a>Note

Per utilizzare le macro Variadic, i puntini di sospensione possono essere specificati come argomento formale finale in una definizione di macro e l'identificatore di sostituzione `__VA_ARGS__` possibile utilizzare nella definizione per inserire gli argomenti aggiuntivi.  `__VA_ARGS__` viene sostituito da tutti gli argomenti che corrispondono ai puntini di sospensione, incluse le virgole tra di essi.

Lo standard C specifica che è necessario passare almeno un argomento ai puntini di sospensione per assicurarsi che la macro non venga risolta in un'espressione con una virgola finale. L'implementazione di C++ Microsoft tradizionale evita una virgola finale se nessun argomento viene passato ai puntini di sospensione. Quando si imposta l'opzione del compilatore `/experimental:preprocessor`, la virgola finale non viene annullata.

## <a name="example"></a>Esempio

```cpp
// variadic_macros.cpp
#include <stdio.h>
#define EMPTY

#define CHECK1(x, ...) if (!(x)) { printf(__VA_ARGS__); }
#define CHECK2(x, ...) if ((x)) { printf(__VA_ARGS__); }
#define CHECK3(...) { printf(__VA_ARGS__); }
#define MACRO(s, ...) printf(s, __VA_ARGS__)

int main() {
    CHECK1(0, "here %s %s %s", "are", "some", "varargs1(1)\n");
    CHECK1(1, "here %s %s %s", "are", "some", "varargs1(2)\n");   // won't print

    CHECK2(0, "here %s %s %s", "are", "some", "varargs2(3)\n");   // won't print
    CHECK2(1, "here %s %s %s", "are", "some", "varargs2(4)\n");

    // always invokes printf in the macro
    CHECK3("here %s %s %s", "are", "some", "varargs3(5)\n");

    MACRO("hello, world\n");

    MACRO("error\n", EMPTY); // would cause error C2059, except VC++
                             // suppresses the trailing comma
}
```

```Output
here are some varargs1(1)
here are some varargs2(4)
here are some varargs3(5)
hello, world
error
```

## <a name="see-also"></a>Vedere anche

[Macro (C/C++)](../preprocessor/macros-c-cpp.md)
