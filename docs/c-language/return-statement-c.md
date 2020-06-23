---
title: Istruzione return (C)
description: L'istruzione di ritorno del linguaggio C termina l'esecuzione della funzione e, facoltativamente, restituisce un valore al chiamante.
ms.date: 06/10/2020
helpviewer_keywords:
- ( ) parentheses in return statements
ms.assetid: 18cd82cf-f899-4b28-83ad-4eff353ddcb4
ms.openlocfilehash: 7d518aa17185c96de15c8f9aa9b65ae5c72bd014
ms.sourcegitcommit: 01b911613606c3fc92cbd9ca48cca6046a7e8258
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/11/2020
ms.locfileid: "84716294"
---
# <a name="return-statement-c"></a>Istruzione return (C)

Un' **`return`** istruzione termina l'esecuzione di una funzione e restituisce il controllo alla funzione chiamante. Nella funzione chiamante, l'esecuzione riprende dal punto immediatamente successivo alla chiamata. Un' **`return`** istruzione può restituire un valore alla funzione chiamante. Per ulteriori informazioni, vedere [tipo restituito](../c-language/return-type.md).

## <a name="syntax"></a>Sintassi

> *jump-statement*: \
> &nbsp;&nbsp;&nbsp;&nbsp;**`return`***espressione*&#8203;<sub>opt</sub>**`;`**

Il valore di *expression*, se presente, viene restituito alla funzione chiamante. Se *expression* non è presente, il valore restituito della funzione è indefinito. L'espressione, se presente, viene valutata e viene quindi convertita nel tipo restituito dalla funzione. Quando un' **`return`** istruzione contiene un'espressione in funzioni con **`void`** tipo restituito, il compilatore genera un avviso e l'espressione non viene valutata.

Se nessuna **`return`** istruzione viene visualizzata in una definizione di funzione, il controllo ritorna automaticamente alla funzione chiamante dopo l'esecuzione dell'ultima istruzione della funzione chiamata. In questo caso, il valore restituito della funzione chiamata è indefinito. Se la funzione ha un tipo restituito diverso da **`void`** , si tratta di un bug grave e il compilatore stampa un messaggio di diagnostica di avviso. Se la funzione ha un **`void`** tipo restituito, questo comportamento è accettabile, ma può essere considerato scadente. Usare un' **`return`** istruzione normale per cancellare la propria intenzione.

Come procedura di progettazione efficace, specificare sempre un tipo restituito per le funzioni. Se non è necessario un valore restituito, dichiarare la funzione per avere un **`void`** tipo restituito. Se non si specifica un tipo restituito, il compilatore C presuppone un tipo restituito predefinito **`int`** .

Molti programmatori utilizzano le parentesi per racchiudere l'argomento dell' *espressione* dell' **`return`** istruzione. Tuttavia, C non richiede le parentesi.

Il compilatore può generare un messaggio di diagnostica di avviso sul codice non eseguibile se trova eventuali istruzioni inserite dopo l' **`return`** istruzione.

In una **`main`** funzione, l' **`return`** istruzione e l'espressione sono facoltative. Che cosa accade al valore restituito, se ne viene specificato uno, dipende dall'implementazione di. **Specifico di Microsoft**: l'implementazione di Microsoft C restituisce il valore dell'espressione al processo che ha richiamato il programma, ad esempio *`cmd.exe`* . Se non **`return`** viene fornita alcuna espressione, il runtime di Microsoft C restituisce un valore che indica l'esito positivo (0) o l'esito negativo (un valore diverso da zero).

## <a name="example"></a>Esempio

Questo esempio è un programma in più parti. Viene illustrata l' **`return`** istruzione e il modo in cui viene utilizzata per terminare l'esecuzione della funzione e, facoltativamente, per restituire un valore.

```C
// C_return_statement.c
// Compile using: cl /W4 C_return_statement.c
#include <limits.h>      // for INT_MAX
#include <stdio.h>       // for printf

long long square( int value )
{
    // Cast one operand to long long to force the
    // expression to be evaluated as type long long.
    // Note that parentheses around the return expression
    // are allowed, but not required here.
    return ( value * (long long) value );
}
```

La `square` funzione restituisce il quadrato del relativo argomento, in un tipo più ampio, per evitare un errore aritmetico. **Specifico di Microsoft**: nell'implementazione di Microsoft C, il **`long long`** tipo è sufficientemente grande da mantenere il prodotto di due **`int`** valori senza overflow.

Le parentesi attorno all' **`return`** espressione in `square` vengono valutate come parte dell'espressione e non sono richieste dall' **`return`** istruzione.

```C
double ratio( int numerator, int denominator )
{
    // Cast one operand to double to force floating-point
    // division. Otherwise, integer division is used,
    // then the result is converted to the return type.
    return numerator / (double) denominator;
}
```

La `ratio` funzione restituisce il rapporto dei due **`int`** argomenti come valore a virgola mobile **`double`** . L' **`return`** espressione viene forzata a usare un'operazione a virgola mobile eseguendo il cast di uno degli operandi a **`double`** . In caso contrario, verrà utilizzato l'operatore di divisione Integer e la parte frazionaria andrà persa.

```C
void report_square( void )
{
    int value = INT_MAX;
    long long squared = 0LL;
    squared = square( value );
    printf( "value = %d, squared = %lld\n", value, squared );
    return; // Use an empty expression to return void.
}
```

La `report_square` funzione chiama `square` con un valore di parametro `INT_MAX` , il valore intero con segno più grande che corrisponde a un **`int`** . Il **`long long`** risultato viene archiviato in `squared` , quindi stampato. La `report_square` funzione ha un **`void`** tipo restituito, quindi non ha un'espressione nell' **`return`** istruzione.

```C
void report_ratio( int top, int bottom )
{
    double fraction = ratio( top, bottom );
    printf( "%d / %d = %.16f\n", top, bottom, fraction );
    // It's okay to have no return statement for functions
    // that have void return types.
}
```

La `report_ratio` funzione chiama `ratio` con i valori dei parametri `1` e `INT_MAX` . Il **`double`** risultato viene archiviato in `fraction` , quindi stampato. La `report_ratio` funzione ha un **`void`** tipo restituito, quindi non è necessario restituire un valore in modo esplicito. L'esecuzione di `report_ratio` "cade in basso" e non restituisce alcun valore al chiamante.

```C
int main()
{
    int n = 1;
    int x = INT_MAX;

    report_square();
    report_ratio( n, x );

    return 0;
}
```

La **`main`** funzione chiama due funzioni: `report_square` e `report_ratio` . Poiché non `report_square` accetta parametri e restituisce **`void`** , il risultato non viene assegnato a una variabile. Analogamente, `report_ratio` restituisce **`void`** , quindi non si salva il relativo valore restituito, né. Dopo ciascuna chiamata di funzione, l'esecuzione continua in corrispondenza dell'istruzione successiva. **`main`** Restituisce quindi `0` il valore (in genere usato per segnalare l'esito positivo) per terminare il programma.

Per compilare l'esempio, creare un file di codice sorgente denominato *`C_return_statement.c`* . Quindi, copiare tutto il codice di esempio, nell'ordine indicato. Salvare il file e compilarlo in una finestra del prompt dei comandi per gli sviluppatori usando il comando:

**`cl /W4 C_return_statement.c`**

Quindi, per eseguire il codice di esempio, immettere **`C_return_statement.exe`** al prompt dei comandi. L'output dell'esempio è analogo al seguente:

```Output
value = 2147483647, squared = 4611686014132420609
1 / 2147483647 = 0.0000000004656613
```

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)
