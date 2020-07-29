---
title: Errore del compilatore C2707
ms.date: 11/04/2016
f1_keywords:
- C2707
helpviewer_keywords:
- C2707
ms.assetid: 3deaf45c-74da-4c9d-acc6-b82412720b74
ms.openlocfilehash: eaac568387138450577ead23f1470c37ad300335
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225423"
---
# <a name="compiler-error-c2707"></a>Errore del compilatore C2707

' Identifier ': contesto non valido per la funzione intrinseca

Le funzioni intrinseche di gestione delle eccezioni strutturate non sono valide in determinati contesti:

- `_exception_code()`all'esterno di un filtro o di un **`__except`** blocco eccezioni

- `_exception_info()`al di fuori di un filtro eccezioni

- `_abnormal_termination()`all'esterno di un **`__finally`** blocco

Per risolvere l'errore, assicurarsi che le funzioni intrinseche di gestione delle eccezioni siano inserite nel contesto appropriato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2707.

```cpp
// C2707.cpp
#include <windows.h>
#include <stdio.h>

LONG MyFilter(LONG excode)
{
    return (excode == EXCEPTION_ACCESS_VIOLATION ?
        EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH);   // OK
}

LONG func(void)
{
    int x, y;
    return(GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION ?  // C2707
             EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH);

    __try
    {
        y = 0;
        x = 4 / y;
        return 0;
     }

    __except(MyFilter(GetExceptionCode()))
    {
        return(GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION ? // ok
               EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH);
    }
}

int main()
{
    __try
    {
        func();
    } __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf_s("Caught exception\n");
    }
}
```
