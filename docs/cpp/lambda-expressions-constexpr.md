---
title: Espressioni Lambda in C++ constexpr | Documenti Microsoft
ms.custom: ''
ms.date: 07/19/2017
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- lambda expressions [C++], constexpr
ms.assetid: b56346cd-fbff-475f-aeaa-ed2010c6d6f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1e01f41aaf8b761020f57625e7cbf06f8fba2659
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32418900"
---
# <a name="constexpr-lambda-expressions-in-c"></a>Espressioni Lambda in C++ constexpr
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come `constexpr` o utilizzati in un'espressione contant durante l'inizializzazione di ciascun membro dati che Consente di acquisire o introduce è consentita all'interno di un'espressione costante.  

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
Un'espressione lambda è implicitamente `constexpr` se il risultato soddisfa i requisiti di un `constexpr` funzione:
```cpp
    auto answer = [](int n) 
    {
        return 32 + n; 
    };

    constexpr int response = answer(10);
``` 
Se un'espressione lambda in modo implicito o esplicito `constexpr`e di convertirlo in un puntatore a funzione, la funzione risultante è anche `constexpr`:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Oggetti funzione nella libreria Standard C++](../standard-library/function-objects-in-the-stl.md)   
 [Chiamata di funzione](../cpp/function-call-cpp.md)   
 [for_each](../standard-library/algorithm-functions.md#for_each)