---
title: espressioni lambda constExpr inC++
ms.date: 04/08/2019
helpviewer_keywords:
- lambda expressions [C++], constexpr
ms.assetid: b56346cd-fbff-475f-aeaa-ed2010c6d6f7
ms.openlocfilehash: 9467d9e404204012df6461adacd5dc4cdbdfe71d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179575"
---
# <a name="constexpr-lambda-expressions-in-c"></a>espressioni lambda constExpr inC++

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come **constExpr** o utilizzata in un'espressione costante quando l'inizializzazione di ogni membro dati acquisito o introdotto è consentita all'interno di un'espressione costante.

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

Un'espressione lambda è implicitamente **constExpr** se il risultato soddisfa i requisiti di una funzione **constExpr** :

```cpp
    auto answer = [](int n)
    {
        return 32 + n;
    };

    constexpr int response = answer(10);
```

Se un'espressione lambda è **constExpr**in modo implicito o esplicito e viene convertita in un puntatore a funzione, anche la funzione risultante è **constExpr**:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Oggetti funzione della libreria standard C++](../standard-library/function-objects-in-the-stl.md)<br/>
[Chiamata di funzione](../cpp/function-call-cpp.md)<br/>
[for_each](../standard-library/algorithm-functions.md#for_each)
