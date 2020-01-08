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
ms.openlocfilehash: b5e0d602332c87510b1fe5f59db3e497b88f0acb
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75299117"
---
# <a name="goto-and-labeled-statements-c"></a>Istruzioni goto e con etichetta (C)

L'istruzione `goto` trasferisce il controllo a un'etichetta. L'etichetta specificata deve risiedere nella stessa funzione e può apparire solo prima di un'istruzione nella stessa funzione.

## <a name="syntax"></a>Sintassi

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*labeled-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*jump-statement*

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;l'identificatore **goto** **;**

*labeled-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier* **:** *Statement*

Un'etichetta dell'istruzione è significativa solo a un'istruzione `goto`; in qualsiasi altro contesto, un'istruzione contrassegnata viene eseguita indipendentemente dall'etichetta.

Un elemento *jump-statement* deve risiedere nella stessa funzione e può apparire prima di una sola istruzione nella stessa funzione. Il set di nomi *identifier* che segue `goto` dispone del proprio spazio nomi in modo che i nomi non interferiscano con altri identificatori. Le etichette non possono essere ridichiarate. Per altre informazioni, vedere [Spazi dei nomi](../c-language/name-spaces.md).

Per uno stile di programmazione ottimale è consigliabile preferire le istruzioni **break**, **continue** e `return` all'istruzione `goto` quando possibile. Dato che l'istruzione **break** termina solo un livello del ciclo, potrebbe essere necessaria un'istruzione `goto` per uscire da un ciclo incluso in un ciclo annidato più interno.

In questo esempio viene illustrata l'istruzione `goto`:

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

In questo esempio, un'istruzione `goto` trasferisce il controllo per puntare `stop` etichettate quando `i` è uguale a 5.

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)
