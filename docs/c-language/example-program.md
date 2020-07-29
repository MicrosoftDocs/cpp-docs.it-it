---
title: Programma di esempio
ms.date: 11/04/2016
ms.assetid: fc22ef82-9caa-425f-b201-2891bc123d1f
ms.openlocfilehash: da8c772a3534df2c865c18959329ac850e359160
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218858"
---
# <a name="example-program"></a>Programma di esempio

Il seguente programma di origine C è costituito da due file di origine. Viene fornita una panoramica di alcune delle varie dichiarazioni e definizioni possibili in un programma C. Nelle sezioni successive di questo libro viene descritto come scrivere tali dichiarazioni, definizioni e inizializzazioni e come utilizzare le parole chiave di C, ad esempio **`static`** e **`extern`** . La funzione `printf` viene dichiarata nel file di intestazione C STDIO.H.

Si presume che le funzioni `main` e `max` siano in file separati e l'esecuzione del programma inizia con la funzione `main`. Nessuna funzione esplicita dell'utente viene eseguita prima di `main`.

```
/*****************************************************************
                    FILE1.C - main function
*****************************************************************/

#define ONE     1
#define TWO     2
#define THREE   3
#include <stdio.h>

int a = 1;                       // Defining declarations
int b = 2;                       //  of external variables

extern int max( int a, int b );  // Function prototype

int main()                       // Function definition
{                                //  for main function
    int c;                       // Definitions for
    int d;                       //  two uninitialized
                                 //  local variables

    extern int u;                // Referencing declaration
                                 //  of external variable
                                 //  defined elsewhere
    static int v;                // Definition of variable
                                 //  with continuous lifetime

    int w = ONE, x = TWO, y = THREE;
    int z = 0;

    z = max( x, y );             // Executable statements
    w = max( z, w );
    printf_s( "%d %d\n", z, w );
    return 0;
}

/****************************************************************
            FILE2.C - definition of max function
****************************************************************/

int max( int a, int b )          // Note formal parameters are
                                 //  included in function header
{
    if( a > b )
        return( a );
    else
        return( b );
}
```

FILE1.C contiene il prototipo della funzione `max`. Questo tipo di dichiarazione viene talvolta chiamata una "dichiarazione con prototipo" perché la funzione viene dichiarata prima di essere utilizzata. La definizione della funzione `main` include chiamate a `max`.

Le righe che iniziano con `#define` sono direttive per il preprocessore. Queste direttive indicano al preprocessore di sostituire gli identificatori `ONE`, `TWO` e `THREE` con i numeri `1`, `2` e `3`, rispettivamente, in FILE1.C. Tuttavia, le direttive non si applicano a FILE2.C che viene compilata separatamente, quindi collegata a FILE1.C. La riga che inizia con `#include` indica al compilatore di includere il file STDIO.H che contiene il prototipo della funzione `printf`. Le [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) vengono spiegate in *Riferimenti al preprocessore*.

FILE1.C utilizza dichiarazioni di definizione per inizializzare le variabili globali `a` e `b`. Le variabili locali `c` e `d` vengono dichiarate ma non vengono inizializzate. Lo spazio di archiviazione viene allocato per tutte queste variabili. Le variabili statiche ed esterne, `u` e `v`, vengono inizializzate automaticamente a 0. Di conseguenza, solo `a`, `b`, `u` e `v` contengono valori significativi una volta dichiarati, in quanto vengono inizializzati in modo esplicito o implicito. FILE2.C contiene la definizione di funzione per `max`. Questa definizione soddisfa le chiamate a `max` in FILE1.C.

La durata e la visibilità degli identificatori vengono illustrate in [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md). Per altre informazioni sulle funzioni, vedere [Funzioni](../c-language/functions-c.md).

## <a name="see-also"></a>Vedere anche

[File di origine e programmi di origine](../c-language/source-files-and-source-programs.md)
