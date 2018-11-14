---
title: Istruzione while (C++)
ms.date: 11/04/2016
f1_keywords:
- while_cpp
helpviewer_keywords:
- while keyword [C++]
- while keyword [C++], syntax
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
ms.openlocfilehash: 669618e9807109be18117968b1f5b6f49ec15e07
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51325978"
---
# <a name="while-statement-c"></a>Istruzione while (C++)

Viene eseguito *istruzione* ripetutamente finché *espressione* restituisce zero.

## <a name="syntax"></a>Sintassi

```
while ( expression )
   statement
```

## <a name="remarks"></a>Note

Il test della *espressione* avviene prima di ogni esecuzione del ciclo; pertanto, un **mentre** ciclo viene eseguito zero o più volte. *espressione* deve essere di un tipo integrale, un tipo di puntatore, o un tipo di classe con una conversione non ambigua a un valore integrale o puntatore.

Un **mentre** ciclo può terminare anche quando un [interruzione](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), oppure [restituire](../cpp/return-statement-cpp.md) all'interno dell'istruzione corpo viene eseguito. Uso [continuare](../cpp/continue-statement-cpp.md) per terminare l'iterazione corrente senza uscire dalle **mentre** ciclo. **continuare** passa il controllo all'iterazione successiva del **mentre** ciclo.

Il codice seguente usa un' **mentre** caratteri di sottolineatura ciclo al Taglia finali da una stringa:

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