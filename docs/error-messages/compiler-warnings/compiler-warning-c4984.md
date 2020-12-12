---
description: 'Altre informazioni su: avviso del compilatore C4984'
title: Avviso del compilatore C4984
ms.date: 08/19/2019
f1_keywords:
- C4984
helpviewer_keywords:
- C4984
ms.openlocfilehash: 5a6708a1063baf8fa4b5feece65eabd93df7bbeb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326000"
---
# <a name="compiler-warning-c4984"></a>Avviso del compilatore C4984

> ' If constExpr ' è un'estensione del linguaggio C++ 17

## <a name="remarks"></a>Commenti

Il compilatore ha trovato un' `if constexpr` espressione nel codice compilato usando lo standard c++ 14 predefinito. Questa espressione viene specificata a partire dallo standard C++ 17. Se è necessaria la compatibilità C++ 11 o C++ 14, questa espressione non è portabile.

Per impostazione predefinita, C4984 viene generato come errore, ma è suppressible. Per abilitare questa espressione compilando il codice come C++ 17, usare [/std: c++ 17 o/std: C + + Latest](../../build/reference/std-specify-language-standard-version.md). Per usare l' `if constexpr` espressione nel codice compilato per c++ 14 come estensione Microsoft, è possibile eliminare, disabilitare o modificare il livello di avviso del messaggio di errore. È possibile usare [/wd4984](../../build/reference/compiler-option-warning-level.md) per disabilitare C4984 o __/w__*n*__4984__ per abilitarlo come avviso di livello *n* anziché come errore. In alternativa, usare [#pragma avviso (non visualizzare: 4984)](../../preprocessor/warning.md) prima della riga che causa l'avviso nel file di origine.

Questo avviso è disponibile a partire da Visual Studio 2017 versione 15,3. Per informazioni su come disabilitare gli avvisi introdotti in una particolare versione del compilatore o versioni successive, vedere [avvisi del compilatore in base alla versione del](compiler-warnings-by-compiler-version.md)compilatore.

## <a name="example"></a>Esempio

Questo esempio genera C4984 e Mostra i modi per correggerlo:

```cpp
// C4984.cpp
// compile with: cl /EHsc C4984.cpp
#include <iostream>

int main()
{
    constexpr bool compile_time = true;
    // Uncomment the following line or use /std:c++17 to fix
    // #pragma warning(suppress:4984)
    if constexpr (compile_time)
    {
        std::cout << "compile_time is true";
    }
    else
    {
        std::cout << "compile_time is false";
    }
}
```
