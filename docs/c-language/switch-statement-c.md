---
title: switchIstruzione (C)
ms.date: 04/25/2020
f1_keywords:
- switch
helpviewer_keywords:
- switch keyword [C]
ms.assetid: fbede014-23bd-4ab1-8094-c8d9d9cb963a
no-loc:
- switch
- case
- default
- break
ms.openlocfilehash: 12163e85110092e3e372fa496cf42efd7574ea8d
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82167676"
---
# <a name="opno-locswitch-statement-c"></a>switchIstruzione (C)

Le **switch** istruzioni **case** e consentono di controllare le complesse operazioni condizionali e di branching. L' **switch** istruzione trasferisce il controllo a un'istruzione all'interno del corpo.

## <a name="syntax"></a>Sintassi

*selection-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`switch (`***expression* **`)`** *istruzione* Expression

con *etichetta-Statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`case`**  *istruzione constant-expression***`:`***statement*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`default :`**  *istruzione*

Il controllo passa all'istruzione la **case** *costante-espressione* corrisponde al valore di ** switch (** *Expression* **)**. L' **switch** istruzione può includere un numero qualsiasi **case** di istanze. Tuttavia, due case costanti all'interno della stessa **switch** istruzione non possono avere lo stesso valore. L'esecuzione del corpo dell'istruzione inizia in corrispondenza dell'istruzione selezionata. Continua fino alla fine del corpo o finché un' **break** istruzione non trasferisce il controllo all'esterno del corpo.

L'uso dell' **switch** istruzione in genere è simile al seguente:

```C
switch ( expression )
{
    // declarations
    // . . .
    case constant_expression:
        // statements executed if the expression equals the
        // value of this constant_expression
        break;
    default:
        // statements executed if expression does not equal
        // any case constant_expression
}
```

È possibile utilizzare l' **break** istruzione per terminare l'elaborazione di una particolare istruzione con etichetta all' **switch** interno dell'istruzione. Viene diramato fino alla fine **switch** dell'istruzione. Senza **break**, il programma continua con la successiva istruzione con etichetta, eseguendo le istruzioni fino a quando **break** non viene raggiunto un oggetto o la fine dell'istruzione. Questa continuazione potrebbe essere auspicabile in alcune situazioni.

L' **default** istruzione viene eseguita se nessuna **case** *costante-espressione* è uguale al valore di ** switch (** *Expression* **)**. Se non è presente **default** alcuna istruzione e non **case** viene trovata alcuna corrispondenza, nessuna delle istruzioni nel **switch** corpo viene eseguita. Può essere presente al massimo un' **default** istruzione. L' **default** istruzione non deve necessariamente arrivare alla fine. Può essere visualizzato in qualsiasi punto del corpo dell' **switch** istruzione. Un' **case** etichetta **default** o può essere presente solo all' **switch** interno di un'istruzione.

Il tipo di **switch** *espressione* e **case** di *Constant-Expression* deve essere integrale. Il valore di ogni **case** *Constant-Expression* deve essere univoco all'interno del corpo dell'istruzione.

Le **case** etichette **default** e del corpo **switch** dell'istruzione sono significative solo nel test iniziale che determina la posizione in cui viene avviata l'esecuzione nel corpo dell'istruzione. **switch** le istruzioni possono essere nidificate. Tutte le variabili statiche vengono inizializzate prima dell'esecuzione **switch** in qualsiasi istruzione.

> [!NOTE]
> Le dichiarazioni possono essere visualizzate all'inizio dell'istruzione composta che costituisce il **switch** corpo, ma le inizializzazioni incluse nelle dichiarazioni non vengono eseguite. L' **switch** istruzione trasferisce il controllo direttamente a un'istruzione eseguibile nel corpo, ignorando le righe che contengono inizializzazioni.

Gli esempi seguenti illustrano **switch** le istruzioni:

```C
switch( c )
{
    case 'A':
        capital_a++;
    case 'a':
        letter_a++;
    default :
        total++;
}
```

Tutte e tre le **switch** istruzioni del corpo in questo esempio vengono eseguite `c` se è uguale `'A'`a, poiché **break** nessuna istruzione viene visualizzata prima casedi quanto segue. Il controllo di esecuzione viene trasferito alla prima istruzione (`capital_a++;`) e procede in ordine nel resto del corpo. Se `c` è uguale a `'a'`, `letter_a` e `total` vengono incrementati. Viene `total` incrementato solo quando `c` non è `'A'` uguale `'a'`a o.

```C
switch( i )
{
    case -1:
        n++;
        break;
    case 0 :
        z++;
        break;
    case 1 :
        p++;
        break;
}
```

In questo esempio, un' **break** istruzione segue ogni istruzione del **switch** corpo. L' **break** istruzione forza un'uscita dal corpo dell'istruzione dopo l'esecuzione di un'istruzione. Se `i` è ugual a -1, solo `n` viene incrementato. L' **break** istruzione `n++;` seguente causa il superamento del controllo di esecuzione dal corpo dell'istruzione, ignorando le istruzioni rimanenti. Analogamente, se `i` è uguale a 0, solo `z` viene incrementato; se `i` è uguale a 1, solo `p` viene incrementato. L'istruzione **break** finale non è strettamente necessaria, poiché il controllo passa fuori dal corpo alla fine dell'istruzione composta. È incluso per coerenza.

Una singola istruzione può contenere più **case** etichette, come illustrato nell'esempio seguente:

```C
switch( c )
{
    case 'a' :
    case 'b' :
    case 'c' :
    case 'd' :
    case 'e' :
    case 'f' :  convert_hex(c);
}
```

In questo esempio, se *constant-expression* è uguale a qualsiasi lettera tra `'a'` e `'f'`, viene chiamata la funzione `convert_hex`.

### <a name="microsoft-specific"></a>Specifico di Microsoft

Microsoft C non limita il numero di case valori in un' **switch** istruzione. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che siano consentite almeno 257 case etichette **switch** in un'istruzione.

default Per Microsoft C, le estensioni Microsoft sono abilitate. Usare l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.

## <a name="see-also"></a>Vedere anche

[switchIstruzione (C++)](../cpp/switch-statement-cpp.md)
