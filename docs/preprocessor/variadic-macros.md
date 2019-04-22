---
title: Macro variadic
ms.date: 11/04/2016
helpviewer_keywords:
- variadic macros [C++]
- __VA_ARGS__ variadic macro specifier
ms.assetid: 51e757dc-0134-4bb2-bb74-64ea5ad75134
ms.openlocfilehash: da159ef979ccc38845064debebae55356bc9e9bd
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59022840"
---
# <a name="variadic-macros"></a>Macro variadic

Le macro variadic sono macro di tipo funzione che contengono un numero variabile di argomenti.

## <a name="remarks"></a>Note

Per usare le macro variadic, i puntini di sospensione può essere specificato come argomento formale finale in una definizione di macro e l'identificatore di sostituzione `__VA_ARGS__` può essere usato nella definizione per inserire gli argomenti aggiuntivi.  `__VA_ARGS__` viene sostituito da tutti gli argomenti corrispondenti sui puntini di sospensione, incluse le virgole tra di essi.

Lo standard C specifica che almeno un argomento deve essere passato ai puntini di sospensione per garantire che la macro non risolva un'espressione con una virgola finale.  L'implementazione Visual C++ tronca una virgola finale se ai puntini di sospensione non è stato passato alcun argomento.

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