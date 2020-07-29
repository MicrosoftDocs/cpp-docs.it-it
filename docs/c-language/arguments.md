---
title: Argomenti
ms.date: 11/04/2016
helpviewer_keywords:
- arguments [C++], function
- function parameters
- functions [C], parameters
- function parameters, about function parameters
- function arguments
- function calls, arguments
ms.assetid: 14cf0389-2265-41f0-9a96-f2223eb406ca
ms.openlocfilehash: e1c88034044c74a542384873454f993b6bce3244
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232664"
---
# <a name="arguments"></a>Argomenti

Gli argomenti in una chiamata di funzione hanno formato seguente:

> *espressione* **(** *expression-list*<SUB>opt</SUB> **)** /* chiamata di funzione */

In una chiamata di funzione, *expression-list* è un elenco di espressioni (separate da virgole). I valori di queste ultime espressioni sono gli argomenti passati alla funzione. Se la funzione non accetta argomenti, *expression-list* deve contenere la parola chiave **`void`** .

Un argomento può essere un qualsiasi valore con tipo di base, struttura, unione o puntatore. Tutti gli argomenti vengono passati per valore. Questo significa che una copia dell'argomento viene assegnata al parametro corrispondente. La funzione non conosce la posizione di memoria effettiva dell'argomento passato. La funzione utilizza questa copia senza influire sulla variabile da cui la copia è stata derivata in origine.

Sebbene non sia possibile passare matrici o funzioni come argomenti, è possibile passare puntatori a questi elementi. I puntatori consentono a una funzione di accedere a un valore per riferimento. Poiché un puntatore a una variabile contiene l'indirizzo della variabile stessa, la funzione può utilizzare questo indirizzo per accedere al valore della variabile. Gli argomenti del puntatore consentono a una funzione di accedere a matrici e funzioni, anche se matrici e funzioni non possono essere passate come argomenti.

L'ordine in cui gli argomenti vengono valutati può variare in base a compilatori e a livelli di ottimizzazione diversi. Gli argomenti e tutti gli effetti collaterali, tuttavia, vengono valutati completamente prima dell'inserimento della funzione. Per informazioni sugli effetti collaterali, vedere [Effetti collaterali](../c-language/side-effects.md).

In una chiamata di funzione l'elenco *expression-list* viene valutato e le conversioni aritmetiche consuete vengono eseguite su ogni argomento della chiamata. Se un prototipo è disponibile, il tipo di argomento risultante viene confrontato con il parametro corrispondente del prototipo. Se non corrispondono, viene eseguita una conversione o viene generato un messaggio di diagnostica. Sui parametri è possibile eseguire anche le conversioni aritmetiche consuete.

Il numero di espressioni in *expression-list* deve corrispondere al numero di parametri, a meno che il prototipo o la definizione della funzione non specifichi in modo esplicito un numero variabile di argomenti. In questo caso, il compilatore controlla il numero di argomenti corrispondenti ai nomi di tipi nell'elenco di parametri e li converte, se necessario, come descritto in precedenza. Per altre informazioni, vedere [Chiamate con un numero variabile di argomenti](../c-language/calls-with-a-variable-number-of-arguments.md).

Se l'elenco di parametri del prototipo contiene solo la parola chiave **`void`** , il compilatore prevede zero argomenti nella chiamata di funzione e zero parametri nella definizione. Se vengono rilevati eventuali argomenti, viene generato un messaggio di diagnostica.

## <a name="example"></a>Esempio

In questo esempio vengono utilizzati puntatori come argomenti:

```C
int main()
{
    /* Function prototype */

    void swap( int *num1, int *num2 );
    int x, y;
    .
    .
    .
    swap( &x, &y );  /* Function call */
}

/* Function definition */

void swap( int *num1, int *num2 )
{
    int t;

    t = *num1;
    *num1 = *num2;
    *num2 = t;
}
```

In questo esempio la `swap` funzione viene dichiarata in in `main` modo che includa due argomenti, rappresentati rispettivamente dagli identificatori `num1` e `num2` , entrambi puntatori a **`int`** valori. I parametri `num1` e `num2` nella definizione in stile prototipo vengono anche dichiarati come puntatori a **`int`** valori di tipo.

Nella chiamata di funzione

```C
swap( &x, &y )
```

l'indirizzo di `x` viene archiviato in `num1`, mentre l'indirizzo di `y` viene archiviato in `num2`. Ora per la stessa posizione sono presenti due nomi, denominati anche alias. I riferimenti a `*num1` e `*num2` in `swap` sono effettivamente riferimenti a `x` e `y` in `main`. Le assegnazioni in `swap` scambiano effettivamente il contenuto di `x` e `y`. Non è pertanto **`return`** necessaria alcuna istruzione.

Il compilatore esegue il controllo dei tipi sugli argomenti in relazione a `swap` poiché il prototipo `swap` include i tipi di argomento per ogni parametro. Gli identificatori tra parentesi del prototipo e della definizione possono essere uguali o diversi. L'aspetto importante è che i tipi degli argomenti corrispondano a quelli degli elenchi di parametri sia nel prototipo che nella definizione.

## <a name="see-also"></a>Vedere anche

[Chiamate di funzione](../c-language/function-calls.md)
