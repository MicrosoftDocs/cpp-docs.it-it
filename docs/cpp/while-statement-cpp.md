---
title: Istruzione while (C++)
ms.date: 11/04/2016
f1_keywords:
- while_cpp
helpviewer_keywords:
- while keyword [C++]
- while keyword [C++], syntax
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
ms.openlocfilehash: 168b1fc20d165c44c3230a8d1094c99b689ddbb9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233548"
---
# <a name="while-statement-c"></a>Istruzione while (C++)

Esegue ripetutamente l' *istruzione* finché l' *espressione* non restituisce zero.

## <a name="syntax"></a>Sintassi

```
while ( expression )
   statement
```

## <a name="remarks"></a>Osservazioni

Il test dell' *espressione* si verifica prima di ogni esecuzione del ciclo; Pertanto, un **`while`** ciclo viene eseguito zero o più volte. l' *espressione* deve essere di un tipo integrale, un tipo di puntatore o un tipo di classe con una conversione non ambigua a un tipo integrale o puntatore.

Un **`while`** ciclo può terminare anche quando viene eseguita un'istruzione [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md)o [return](../cpp/return-statement-cpp.md) all'interno del corpo dell'istruzione. Utilizzare [continua](../cpp/continue-statement-cpp.md) per terminare l'iterazione corrente senza uscire dal **`while`** ciclo. **`continue`** passa il controllo all'iterazione successiva del **`while`** ciclo.

Il codice seguente usa un **`while`** ciclo per tagliare i caratteri di sottolineatura finali da una stringa:

```cpp
// while_statement.cpp

#include <string.h>
#include <stdio.h>
char *trim( char *szSource )
{
    char *pszEOS = 0;

    //  Set pointer to character before terminating NULL
    pszEOS = szSource + strlen( szSource ) - 1;

    //  iterate backwards until non '_' is found
    while( (pszEOS >= szSource) && (*pszEOS == '_') )
        *pszEOS-- = '\0';

    return szSource;
}
int main()
{
    char szbuf[] = "12345_____";

    printf_s("\nBefore trim: %s", szbuf);
    printf_s("\nAfter trim: %s\n", trim(szbuf));
}
```

La condizione di terminazione viene valutata all'inizio del ciclo. In assenza di caratteri di sottolineatura finali, il ciclo non viene mai eseguito.

## <a name="see-also"></a>Vedere anche

[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)<br/>
[Istruzione for (C++)](../cpp/for-statement-cpp.md)<br/>
[Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)
