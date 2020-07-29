---
title: Istruzioni goto e con etichetta (C)
ms.date: 11/04/2016
f1_keywords:
- goto
helpviewer_keywords:
- labeled statement
- statements, labeled
- goto keyword [C]
ms.assetid: 3d0473dc-4b18-4fcc-9616-31a38499d7d7
ms.openlocfilehash: d84aa6701ef030dc494f6a40a7223d6f9bcd5073
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87199984"
---
# <a name="goto-and-labeled-statements-c"></a>Istruzioni goto e con etichetta (C)

L' **`goto`** istruzione trasferisce il controllo a un'etichetta. L'etichetta specificata deve risiedere nella stessa funzione e può apparire solo prima di un'istruzione nella stessa funzione.

## <a name="syntax"></a>Sintassi

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*labeled-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*jump-statement*

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`goto`**  *identificatore*  **;**

con *etichetta-Statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier***:**(*istruzione* )    

Un'etichetta di istruzione è significativa solo per un' **`goto`** istruzione; in qualsiasi altro contesto, un'istruzione con etichetta viene eseguita indipendentemente dall'etichetta.

Un elemento *jump-statement* deve risiedere nella stessa funzione e può apparire prima di una sola istruzione nella stessa funzione. Il set di nomi di *identificatori* che seguono un oggetto **`goto`** ha lo spazio dei nomi in modo che i nomi non interferiscano con altri identificatori. Le etichette non possono essere ridichiarate. Per altre informazioni, vedere [Spazi dei nomi](../c-language/name-spaces.md).

Si tratta di uno stile di programmazione ottimale per utilizzare l' **`break`** **`continue`** istruzione, e **`return`** in preferenza **`goto`** quando possibile. Poiché l' **`break`** istruzione viene chiusa solo da un livello del ciclo, **`goto`** potrebbe essere necessario per uscire da un ciclo all'interno di un ciclo profondamente annidato.

In questo esempio viene illustrata l' **`goto`** istruzione:

```c
// goto.c
#include <stdio.h>

int main()
{
    int i, j;

    for ( i = 0; i < 10; i++ )
    {
        printf_s( "Outer loop executing. i = %d\n", i );
        for ( j = 0; j < 3; j++ )
        {
            printf_s( " Inner loop executing. j = %d\n", j );
            if ( i == 5 )
                goto stop;
        }
    }

    /* This message does not print: */
    printf_s( "Loop exited. i = %d\n", i );

    stop: printf_s( "Jumped to stop. i = %d\n", i );
}
```

In questo esempio, un' **`goto`** istruzione trasferisce il controllo al punto con etichetta `stop` quando `i` è uguale a 5.

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)
