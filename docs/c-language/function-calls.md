---
title: Chiamate di funzioni
ms.date: 11/04/2016
helpviewer_keywords:
- function calls, C functions
- functions [C], calling
- function calls, about function calls
- function calls
ms.assetid: 2cfa897d-3874-4820-933c-e624f75d1712
ms.openlocfilehash: 495dc3cf77df79336af364eb80ea7edf17b54400
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227868"
---
# <a name="function-calls"></a>Chiamate di funzioni

Una *chiamata di funzione* è un'espressione che trasferisce il controllo e gli argomenti (se presenti) a una funzione e ha il formato seguente:

*espressione* (*elenco di espressioni*<sub>opt</sub>)

dove *expression* è un nome di funzione o restituisce un indirizzo della funzione e *expression-list* è un elenco di espressioni (separate da virgole). I valori di queste ultime espressioni sono gli argomenti passati alla funzione. Se la funzione non restituisce un valore, dichiararla come funzione che restituisce **`void`** .

Se prima della chiamata di funzione esiste una dichiarazione, ma non viene fornita alcuna informazione relativa ai parametri, tutti gli argomenti non dichiarati subiscono semplicemente le conversioni aritmetiche normali.

> [!NOTE]
> Le espressioni nell'elenco di argomenti della funzione possono essere valutate in qualsiasi ordine, pertanto gli argomenti i cui valori possono essere modificati da effetti collaterali di un altro argomento hanno valori non definiti. Il punto di sequenza definito dall'operatore della chiamata di funzione assicura solo che gli effetti collaterali nell'elenco di argomenti vengano valutati prima che il controllo venga passato alla funzione chiamata. Si noti che l'ordine in cui gli argomenti vengono inseriti nello stack è un aspetto distinto. Per ulteriori informazioni, vedere [punti di sequenza](../c-language/c-sequence-points.md) .

L'unico requisito per qualsiasi chiamata di funzione è rappresentato dal fatto che l'espressione prima della parentesi deve restituire un indirizzo di funzione. Questo significa che una funzione può essere chiamata tramite qualsiasi espressione di puntatore a funzione.

## <a name="example"></a>Esempio

In questo esempio vengono illustrate le chiamate di funzione chiamate da un' **`switch`** istruzione:

```
int main()
{
    /* Function prototypes */

    long lift( int ), step( int ), drop( int );
    void work( int number, long (*function)(int i) );

    int select, count;
    .
    .
    .
    select = 1;
    switch( select )
    {
        case 1: work( count, lift );
                break;

        case 2: work( count, step );
                break;

        case 3: work( count, drop );
                /* Fall through to next case */
        default:
                break;
    }
}

/* Function definition */

void work( int number, long (*function)(int i) )
{
    int i;
    long j;

    for ( i = j = 0; i < number; i++ )
            j += ( *function )( i );
}
```

In questo esempio la chiamata di funzione in `main`

```
work( count, lift );
```

passa una variabile di tipo Integer, `count`, e l'indirizzo della funzione `lift` alla funzione `work`. Si noti che l'indirizzo della funzione viene passato semplicemente specificando l'identificatore della funzione, che restituisce un'espressione puntatore. Per utilizzare un identificatore di funzione in questo modo, la funzione deve essere dichiarata o definita prima che l'identificatore venga utilizzato, altrimenti l'identificatore non è riconosciuto. In questo caso, un prototipo per `work` viene fornito all'inizio della funzione `main`.

Il parametro `function` in `work` viene dichiarato come puntatore a una funzione che accetta un **`int`** argomento e restituisce un **`long`** valore. Sono necessarie le parentesi intorno al nome del parametro. senza di esse, la dichiarazione specifica una funzione che restituisce un puntatore a un **`long`** valore.

La funzione `work` chiama la funzione selezionata dall'interno del **`for`** ciclo usando la chiamata di funzione seguente:

```
( *function )( i );
```

Un argomento, `i`, viene passato alla funzione chiamata.

## <a name="see-also"></a>Vedere anche

[Funzioni](../c-language/functions-c.md)
