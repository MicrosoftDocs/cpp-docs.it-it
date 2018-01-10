---
title: Espressioni Lambda in C++ constexpr | Documenti Microsoft
ms.custom: 
ms.date: 07/19/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: lambda expressions [C++], constexpr
ms.assetid: b56346cd-fbff-475f-aeaa-ed2010c6d6f7
caps.latest.revision: "0"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 307ce6ab87ca36de561ebcf1ad8bd30eb73e4192
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="constexpr-lambda-expressions-in-c"></a>Espressioni Lambda in C++ constexpr
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come `constexpr` o utilizzati in un'espressione contant durante l'inizializzazione di ciascun membro dati che acquisisce o introduce è consentita all'interno di un'espressione costante.  

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