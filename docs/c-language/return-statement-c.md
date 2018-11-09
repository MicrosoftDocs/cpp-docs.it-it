---
title: Istruzione return (C)
ms.date: 11/04/2016
helpviewer_keywords:
- ( ) parentheses in return statements
ms.assetid: 18cd82cf-f899-4b28-83ad-4eff353ddcb4
ms.openlocfilehash: e9a0fec7a9df03d624e8984e8bd3593388cda35a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50479278"
---
# <a name="return-statement-c"></a>Istruzione return (C)

L'istruzione `return` viene utilizzata per terminare l'esecuzione di una funzione e restituire il controllo alla funzione chiamante. Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata. Un'istruzione `return` può inoltre restituire un valore alla funzione chiamante. Per altre informazioni, vedere [Tipo restituito](../c-language/return-type.md).

## <a name="syntax"></a>Sintassi

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**return** *expression*<sub>opt</sub> **;**

Il valore di *expression*, se presente, viene restituito alla funzione chiamante. Se *expression* non è presente, il valore restituito della funzione è indefinito. L'espressione, se presente, viene valutata e viene quindi convertita nel tipo restituito dalla funzione. Se la funzione è dichiarata con tipo restituito `void`, un'istruzione `return` che contiene un'espressione genera un avviso e l'espressione non viene valutata.

Se nessuna istruzione `return` viene visualizzata in una definizione di funzione, il controllo ritorna automaticamente alla funzione chiamante dopo che l'ultima istruzione della funzione chiamata viene eseguita. In questo caso, il valore restituito della funzione chiamata è indefinito. Se il valore restituito non è necessario, dichiarare la funzione per avere un tipo restituito `void`; in caso contrario, il tipo restituito predefinito è `int`.

Molti programmatori usano le parentesi per racchiudere l'argomento *expression* dell'istruzione `return`. Per il linguaggio C, tuttavia, non sono necessarie le parentesi.

In questo esempio viene illustrata l'istruzione `return`:

```C
#include <limits.h>
#include <stdio.h>

void draw( int i, long long ll );
long long sq( int s );

int main()
{
    long long y;
    int x = INT_MAX;

    y = sq( x );
    draw( x, y );
    return x;
}

long long sq( int s )
{
    // Note that parentheses around the return expression
    // are allowed but not required here.
    return( s * (long long)s );
}

void draw( int i, long long ll )
{
    printf( "i = %d, ll = %lld\n", i, ll );
    return;
}
```

In questo esempio, la funzione `main` chiama due funzioni: `sq` e `draw`. La funzione `sq` restituisce il valore di `x * x` a `main`, dove il valore restituito viene assegnato a `y`. Le parentesi attorno all'espressione restituita in `sq` vengono valutate come parte dell'espressione e non sono richieste dall'istruzione return. Poiché l'espressione restituita viene valutata prima di essere convertita nel tipo restituito, `sq` forza il tipo di espressione sul tipo restituito tramite un cast per impedire un possibile errore di overflow di intero che potrebbe provocare risultati imprevisti. La funzione `draw` viene dichiarata come funzione `void`. Visualizza i valori dei parametri e quindi l'istruzione return vuota termina la funzione e non restituisce un valore. Un tentativo di assegnare il valore restituito da `draw` provocherebbe la stampa di un messaggio di diagnostica. La funzione `main` restituisce quindi il valore `x` al sistema operativo.

L'output dell'esempio è analogo al seguente:

```Output
i = 2147483647, ll = 4611686014132420609
```

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)