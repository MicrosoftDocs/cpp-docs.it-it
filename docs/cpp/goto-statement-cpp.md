---
title: Istruzione goto (C++)
ms.date: 11/04/2016
f1_keywords:
- goto_cpp
helpviewer_keywords:
- goto keyword [C++]
ms.assetid: 724c5deb-2de1-42d8-8ef1-23589d9bf5ed
ms.openlocfilehash: e56ebfadea0d643ac68e2ace722a39587bd01312
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223707"
---
# <a name="goto-statement-c"></a>Istruzione goto (C++)

L' **`goto`** istruzione trasferisce il controllo in modo incondizionato all'istruzione denominata dall'identificatore specificato.

## <a name="syntax"></a>Sintassi

```
goto identifier;
```

## <a name="remarks"></a>Osservazioni

L'istruzione con etichetta designata da `identifier` deve essere nella funzione corrente. Tutti i nomi di `identifier` sono membri di uno spazio dei nomi interno e quindi non interferiscono con altri identificatori.

Un'etichetta di istruzione è significativa solo per un' **`goto`** istruzione; in caso contrario, le etichette delle istruzioni vengono ignorate. Le etichette non possono essere ridichiarate.

Un' **`goto`** istruzione non può trasferire il controllo a una posizione che ignora l'inizializzazione di qualsiasi variabile presente nell'ambito di tale percorso. L'esempio seguente genera l'C2362:

```cpp
int goto_fn(bool b)
{
    if (!b)
    {
        goto exit;  // C2362
    }
    else
    { /*...*/ }

    int error_code = 42;

exit:
    return error_code;
}
```

Si tratta di uno stile di programmazione ottimale per utilizzare le **`break`** **`continue`** istruzioni, e **`return`** anziché l' **`goto`** istruzione quando possibile. Tuttavia, poiché l' **`break`** istruzione viene chiusa da un solo livello di un ciclo, potrebbe essere necessario utilizzare un' **`goto`** istruzione per uscire da un ciclo profondamente annidato.

Per ulteriori informazioni sulle etichette e sull' **`goto`** istruzione, vedere [istruzioni con etichetta](../cpp/labeled-statements.md).

## <a name="example"></a>Esempio

In questo esempio, un' **`goto`** istruzione trasferisce il controllo al punto con etichetta `stop` quando `i` è uguale a 3.

```cpp
// goto_statement.cpp
#include <stdio.h>
int main()
{
    int i, j;

    for ( i = 0; i < 10; i++ )
    {
        printf_s( "Outer loop executing. i = %d\n", i );
        for ( j = 0; j < 2; j++ )
        {
            printf_s( " Inner loop executing. j = %d\n", j );
            if ( i == 3 )
                goto stop;
        }
    }

    // This message does not print:
    printf_s( "Loop exited. i = %d\n", i );

    stop:
    printf_s( "Jumped to stop. i = %d\n", i );
}
```

```Output
Outer loop executing. i = 0
Inner loop executing. j = 0
Inner loop executing. j = 1
Outer loop executing. i = 1
Inner loop executing. j = 0
Inner loop executing. j = 1
Outer loop executing. i = 2
Inner loop executing. j = 0
Inner loop executing. j = 1
Outer loop executing. i = 3
Inner loop executing. j = 0
Jumped to stop. i = 3
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di salto](../cpp/jump-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
