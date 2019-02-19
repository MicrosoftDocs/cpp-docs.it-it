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
ms.openlocfilehash: b23e7e6310ba4ed968e2eac8e6d07d81ee4e79ba
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56151949"
---
# <a name="goto-and-labeled-statements-c"></a>Istruzioni goto e con etichetta (C)

L'istruzione `goto` trasferisce il controllo a un'etichetta. L'etichetta specificata deve risiedere nella stessa funzione e può apparire solo prima di un'istruzione nella stessa funzione.

## <a name="syntax"></a>Sintassi

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*labeled-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*jump-statement*

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**goto**  *identifier*  **;**

*labeled-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*  **:**  *statement*

Un'etichetta dell'istruzione è significativa solo a un'istruzione `goto`; in qualsiasi altro contesto, un'istruzione contrassegnata viene eseguita indipendentemente dall'etichetta.

Un elemento *jump-statement* deve risiedere nella stessa funzione e può apparire prima di una sola istruzione nella stessa funzione. Il set di nomi *identifier* che segue `goto` dispone del proprio spazio nomi in modo che i nomi non interferiscano con altri identificatori. Le etichette non possono essere ridichiarate. Per altre informazioni, vedere [Spazi dei nomi](../c-language/name-spaces.md).

Per uno stile di programmazione ottimale è consigliabile preferire le istruzioni **break**, **continue** e `return` all'istruzione `goto` quando possibile. Dato che l'istruzione **break** termina solo un livello del ciclo, potrebbe essere necessaria un'istruzione `goto` per uscire da un ciclo incluso in un ciclo annidato più interno.

In questo esempio viene illustrata l'istruzione `goto`:

```
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
