---
title: constexpr espressioni Lambda in C++ | Microsoft Docs
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
ms.openlocfilehash: b78fa3de7777ffc6702902cf967a405595caf12f
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39408203"
---
# <a name="constexpr-lambda-expressions-in-c"></a>constexpr espressioni Lambda in C++
**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come **constexpr** o usato in un'espressione contant durante l'inizializzazione della ognuno membro dati che consente di acquisire o introduce consentito all'interno di un'espressione costante.  

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
Un'espressione lambda è implicitamente **constexpr** se il relativo risultato soddisfa i requisiti di un **constexpr** funzione:
```cpp
    auto answer = [](int n) 
    {
        return 32 + n; 
    };

    constexpr int response = answer(10);
``` 
Se un'espressione lambda è implicitamente o esplicitamente **constexpr**e di convertirlo in un puntatore a funzione, la funzione risultante è inoltre **constexpr**:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Oggetti funzione della libreria Standard C++](../standard-library/function-objects-in-the-stl.md)   
 [Chiamata di funzione](../cpp/function-call-cpp.md)   
 [for_each](../standard-library/algorithm-functions.md#for_each)