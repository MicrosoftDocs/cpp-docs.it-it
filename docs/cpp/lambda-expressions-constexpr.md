---
description: 'Altre informazioni su: constExpr espressioni lambda in C++'
title: espressioni lambda constExpr in C++
ms.date: 04/08/2019
helpviewer_keywords:
- lambda expressions [C++], constexpr
ms.assetid: b56346cd-fbff-475f-aeaa-ed2010c6d6f7
ms.openlocfilehash: 4ff4b3acf4289a74f8b7320620601e0e2284d356
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333932"
---
# <a name="constexpr-lambda-expressions-in-c"></a>espressioni lambda constExpr in C++

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come **`constexpr`** o usata in un'espressione costante quando l'inizializzazione di ogni membro dati acquisito o introdotto è consentita all'interno di un'espressione costante.

```cpp
    int y = 32;
    auto answer = [y]() constexpr
    {
        int x = 10;
        return y + x;
    };

    constexpr int Increment(int n)
    {
        return [n] { return n + 1; }();
    }
```

Un'espressione lambda è implicitamente **`constexpr`** se il risultato soddisfa i requisiti di una **`constexpr`** funzione:

```cpp
    auto answer = [](int n)
    {
        return 32 + n;
    };

    constexpr int response = answer(10);
```

Se un'espressione lambda è implicitamente o in modo esplicito **`constexpr`** e viene convertita in un puntatore a funzione, anche la funzione risultante è **`constexpr`** :

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Oggetti funzione nella libreria standard C++](../standard-library/function-objects-in-the-stl.md)<br/>
[Chiamata di funzione](../cpp/function-call-cpp.md)<br/>
[for_each](../standard-library/algorithm-functions.md#for_each)
