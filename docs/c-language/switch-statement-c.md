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
ms.openlocfilehash: 5858447602a28dcc5573aa3138e869d106b5aa23
ms.sourcegitcommit: 2f9ff2041d70c406df76c5053151192aad3937ea
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/29/2020
ms.locfileid: "82587367"
---
# <a name="switch-statement-c"></a>`switch`Istruzione (C)

Le __`switch`__ istruzioni __`case`__ e consentono di controllare le complesse operazioni condizionali e di branching. L' __`switch`__ istruzione trasferisce il controllo a un'istruzione all'interno del corpo.

## <a name="syntax"></a>Sintassi

> *`selection-statement`*:<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; __`switch (`__&nbsp;*`expression`* &nbsp;__`)`__&nbsp;*`statement`*

> *`labeled-statement`*:<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; __`case`__&nbsp;*`constant-expression`*&nbsp;__`:`__&nbsp;*`statement`*<br/>
> &nbsp;&nbsp;&nbsp;&nbsp; __`default`__&nbsp;__`:`__&nbsp;*`statement`*

## <a name="remarks"></a>Osservazioni

Un' __`switch`__ istruzione fa sì che il controllo venga *`labeled-statement`* trasferito a uno nel corpo dell'istruzione, a seconda del *`expression`* valore di.

I valori di *`expression`* e *`constant-expression`* devono avere un tipo integrale. Un *`constant-expression`* oggetto deve avere un valore integrale costante non ambiguo in fase di compilazione.

Il controllo passa all' **`case`** istruzione il *`constant-expression`* cui valore corrisponde al valore *`expression`* di. L' __`switch`__ istruzione può includere un numero qualsiasi __`case`__ di istanze. Tuttavia, due *`constant-expression`* valori nella stessa __`switch`__ istruzione non possono avere lo stesso valore. L'esecuzione del __`switch`__ corpo dell'istruzione inizia in corrispondenza della prima istruzione in o dopo *`labeled-statement`* la corrispondenza. L'esecuzione procede fino alla fine del corpo o finché un' __`break`__ istruzione non trasferisce il controllo all'esterno del corpo.

L'uso dell' __`switch`__ istruzione in genere è simile al seguente:

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

È possibile utilizzare l' __`break`__ istruzione per terminare l'elaborazione di una particolare istruzione con etichetta all' __`switch`__ interno dell'istruzione. Viene diramato fino alla fine __`switch`__ dell'istruzione. Senza __`break`__, il programma continua con la successiva istruzione con etichetta, eseguendo le istruzioni fino a quando __`break`__ non viene raggiunto un oggetto o la fine dell'istruzione. Questa continuazione potrebbe essere auspicabile in alcune situazioni.

L' __`default`__ istruzione viene eseguita se nessun __`case`__ *`constant-expression`* valore è uguale al valore di *`expression`*. Se non è presente __`default`__ alcuna istruzione e non __`case`__ viene trovata alcuna corrispondenza, nessuna delle istruzioni nel __`switch`__ corpo viene eseguita. Può essere presente al massimo un' __`default`__ istruzione. L' __`default`__ istruzione non deve necessariamente arrivare alla fine. Può essere visualizzato in qualsiasi punto del corpo dell' __`switch`__ istruzione. Un' __`case`__ etichetta __`default`__ o può essere presente solo all' __`switch`__ interno di un'istruzione.

Il tipo di __`switch`__ *`expression`* e __`case`__ *`constant-expression`* deve essere integrale. Il valore di ogni __`case`__ *`constant-expression`* deve essere univoco all'interno del corpo dell'istruzione.

Le __`case`__ etichette __`default`__ e del corpo __`switch`__ dell'istruzione sono significative solo nel test iniziale che determina la posizione in cui viene avviata l'esecuzione nel corpo dell'istruzione. __`switch`__ le istruzioni possono essere nidificate. Tutte le variabili statiche vengono inizializzate prima dell'esecuzione __`switch`__ in qualsiasi istruzione.

> [!NOTE]
> Le dichiarazioni possono essere visualizzate all'inizio dell'istruzione composta che costituisce il __`switch`__ corpo, ma le inizializzazioni incluse nelle dichiarazioni non vengono eseguite. L' __`switch`__ istruzione trasferisce il controllo direttamente a un'istruzione eseguibile nel corpo, ignorando le righe che contengono inizializzazioni.

Gli esempi seguenti illustrano __`switch`__ le istruzioni:

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

Tutte e tre le __`switch`__ istruzioni del corpo in questo esempio vengono eseguite `c` se è uguale `'A'`a, poiché __`break`__ nessuna istruzione viene visualizzata prima __`case`__ di quanto segue. Il controllo di esecuzione viene trasferito alla prima istruzione (`capital_a++;`) e procede in ordine nel resto del corpo. Se `c` è uguale a `'a'`, `letter_a` e `total` vengono incrementati. Viene `total` incrementato solo quando `c` non è `'A'` uguale `'a'`a o.

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

In questo esempio, un' __`break`__ istruzione segue ogni istruzione del __`switch`__ corpo. L' __`break`__ istruzione forza un'uscita dal corpo dell'istruzione dopo l'esecuzione di un'istruzione. Se `i` è ugual a -1, solo `n` viene incrementato. L' __`break`__ istruzione `n++;` seguente causa il superamento del controllo di esecuzione dal corpo dell'istruzione, ignorando le istruzioni rimanenti. Analogamente, se `i` è uguale a 0, solo `z` viene incrementato; se `i` è uguale a 1, solo `p` viene incrementato. L'istruzione __`break`__ finale non è strettamente necessaria, poiché il controllo passa fuori dal corpo alla fine dell'istruzione composta. È incluso per coerenza.

Una singola istruzione può contenere più __`case`__ etichette, come illustrato nell'esempio seguente:

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

Microsoft C non limita il numero di __`case`__ valori in un' __`switch`__ istruzione. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che siano consentite almeno 257 __`case`__ etichette __`switch`__ in un'istruzione.

default Per Microsoft C, le estensioni Microsoft sono abilitate. Usare l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.

## <a name="see-also"></a>Vedere anche

[switchIstruzione (C++)](../cpp/switch-statement-cpp.md)
