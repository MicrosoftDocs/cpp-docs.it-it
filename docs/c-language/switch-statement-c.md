---
description: 'Altre informazioni su: `switch` istruzione (C)'
title: switch  Istruzione (C)
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
ms.openlocfilehash: f6089505ac47c657e151a60d6061a79ee0fd3cb8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114442"
---
# <a name="no-locswitch-statement-c"></a>`switch` Istruzione (C)

Le **`switch`** **`case`** istruzioni e consentono di controllare le complesse operazioni condizionali e di branching. L' **`switch`** istruzione trasferisce il controllo a un'istruzione all'interno del corpo.

## <a name="syntax"></a>Sintassi

> *`selection-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`switch (`**&nbsp;*`expression`* &nbsp;**`)`**&nbsp;*`statement`*

> *`labeled-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`case`**&nbsp;*`constant-expression`*&nbsp;**`:`**&nbsp;*`statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; **`default`**&nbsp;**`:`**&nbsp;*`statement`*

## <a name="remarks"></a>Commenti

Un' **`switch`** istruzione fa sì che il controllo venga trasferito a uno *`labeled-statement`* nel corpo dell'istruzione, a seconda del valore di *`expression`* .

I valori di *`expression`* e *`constant-expression`* devono avere un tipo integrale. Un oggetto *`constant-expression`* deve avere un valore integrale costante non ambiguo in fase di compilazione.

Il controllo passa all' **`case`** istruzione il cui *`constant-expression`* valore corrisponde al valore di *`expression`* . L' **`switch`** istruzione può includere un numero qualsiasi di **`case`** istanze. Tuttavia, due *`constant-expression`* valori nella stessa istruzione non **`switch`** possono avere lo stesso valore. L'esecuzione del **`switch`** corpo dell'istruzione inizia in corrispondenza della prima istruzione in o dopo la corrispondenza *`labeled-statement`* . L'esecuzione procede fino alla fine del corpo o finché un'istruzione non **`break`** trasferisce il controllo all'esterno del corpo.

L'uso dell' **`switch`** istruzione in genere è simile al seguente:

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

È possibile utilizzare l' **`break`** istruzione per terminare l'elaborazione di una particolare istruzione con etichetta all'interno dell' **`switch`** istruzione. Viene diramato fino alla fine dell' **`switch`** istruzione. Senza **`break`** , il programma continua con la successiva istruzione con etichetta, eseguendo le istruzioni fino a quando non **`break`** viene raggiunto un oggetto o la fine dell'istruzione. Questa continuazione potrebbe essere auspicabile in alcune situazioni.

L' **`default`** istruzione viene eseguita se nessun **`case`** *`constant-expression`* valore è uguale al valore di *`expression`* . Se non è presente alcuna **`default`** istruzione e non **`case`** viene trovata alcuna corrispondenza, nessuna delle istruzioni nel **`switch`** corpo viene eseguita. Può essere presente al massimo un' **`default`** istruzione. L' **`default`** istruzione non deve necessariamente arrivare alla fine. Può essere visualizzato in qualsiasi punto del corpo dell' **`switch`** istruzione. Un' **`case`** **`default`** etichetta o può essere presente solo all'interno di un' **`switch`** istruzione.

Il tipo di **`switch`** *`expression`* e **`case`** *`constant-expression`* deve essere integrale. Il valore di ogni **`case`** *`constant-expression`* deve essere univoco all'interno del corpo dell'istruzione.

Le **`case`** **`default`** etichette e del **`switch`** corpo dell'istruzione sono significative solo nel test iniziale che determina la posizione in cui viene avviata l'esecuzione nel corpo dell'istruzione. **`switch`** le istruzioni possono essere nidificate. Tutte le variabili statiche vengono inizializzate prima dell'esecuzione in qualsiasi **`switch`** istruzione.

> [!NOTE]
> Le dichiarazioni possono essere visualizzate all'inizio dell'istruzione composta che costituisce il **`switch`** corpo, ma le inizializzazioni incluse nelle dichiarazioni non vengono eseguite. L' **`switch`** istruzione trasferisce il controllo direttamente a un'istruzione eseguibile nel corpo, ignorando le righe che contengono inizializzazioni.

Gli esempi seguenti illustrano le **`switch`** istruzioni:

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

Tutte e tre le istruzioni del **`switch`** corpo in questo esempio vengono eseguite se `c` è uguale a `'A'` , poiché nessuna **`break`** istruzione viene visualizzata prima di quanto segue **`case`** . Il controllo di esecuzione viene trasferito alla prima istruzione (`capital_a++;`) e procede in ordine nel resto del corpo. Se `c` è uguale a `'a'`, `letter_a` e `total` vengono incrementati. `total`Viene incrementato solo quando `c` non è uguale a `'A'` o `'a'` .

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

In questo esempio, un' **`break`** istruzione segue ogni istruzione del **`switch`** corpo. L' **`break`** istruzione forza un'uscita dal corpo dell'istruzione dopo l'esecuzione di un'istruzione. Se `i` è ugual a -1, solo `n` viene incrementato. L' **`break`** istruzione seguente `n++;` causa il superamento del controllo di esecuzione dal corpo dell'istruzione, ignorando le istruzioni rimanenti. Analogamente, se `i` è uguale a 0, solo `z` viene incrementato; se `i` è uguale a 1, solo `p` viene incrementato. L' **`break`** istruzione finale non è strettamente necessaria, poiché il controllo passa fuori dal corpo alla fine dell'istruzione composta. È incluso per coerenza.

Una singola istruzione può contenere più **`case`** etichette, come illustrato nell'esempio seguente:

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

Microsoft C non limita il numero di **`case`** valori in un' **`switch`** istruzione. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che **`case`** siano consentite almeno 257 etichette in un' **`switch`** istruzione.

defaultPer Microsoft C, le estensioni Microsoft sono abilitate. Usare l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.

## <a name="see-also"></a>Vedi anche

[switch Istruzione (C++)](../cpp/switch-statement-cpp.md)
