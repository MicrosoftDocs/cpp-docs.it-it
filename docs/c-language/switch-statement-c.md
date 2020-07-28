---
title: :::no-loc(switch):::Istruzione (C)
ms.date: 04/25/2020
f1_keywords:
- ':::no-loc(switch):::'
helpviewer_keywords:
- ':::no-loc(switch)::: keyword [C]'
ms.assetid: fbede014-23bd-4ab1-8094-c8d9d9cb963a
no-loc:
- ':::no-loc(switch):::'
- ':::no-loc(case):::'
- ':::no-loc(default):::'
- ':::no-loc(break):::'
ms.openlocfilehash: bdd6885f67728a3c81e395f05c33191156896ad9
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220782"
---
# <a name="no-locswitch-statement-c"></a>`:::no-loc(switch):::`Istruzione (C)

Le **`:::no-loc(switch):::`** **`:::no-loc(case):::`** istruzioni e consentono di controllare le complesse operazioni condizionali e di branching. L' **`:::no-loc(switch):::`** istruzione trasferisce il controllo a un'istruzione all'interno del corpo.

## <a name="syntax"></a>Sintassi

> *`selection-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`:::no-loc(switch)::: (`**&nbsp;*`expression`* &nbsp;**`)`**&nbsp;*`statement`*

> *`labeled-statement`*:\
> &nbsp;&nbsp;&nbsp;&nbsp; **`:::no-loc(case):::`**&nbsp;*`constant-expression`*&nbsp;**`:`**&nbsp;*`statement`*\
> &nbsp;&nbsp;&nbsp;&nbsp; **`:::no-loc(default):::`**&nbsp;**`:`**&nbsp;*`statement`*

## <a name="remarks"></a>Osservazioni

Un' **`:::no-loc(switch):::`** istruzione fa sì che il controllo venga trasferito a uno *`labeled-statement`* nel corpo dell'istruzione, a seconda del valore di *`expression`* .

I valori di *`expression`* e *`constant-expression`* devono avere un tipo integrale. Un oggetto *`constant-expression`* deve avere un valore integrale costante non ambiguo in fase di compilazione.

Il controllo passa all' **`:::no-loc(case):::`** istruzione il cui *`constant-expression`* valore corrisponde al valore di *`expression`* . L' **`:::no-loc(switch):::`** istruzione può includere un numero qualsiasi di **`:::no-loc(case):::`** istanze. Tuttavia, due *`constant-expression`* valori nella stessa istruzione non **`:::no-loc(switch):::`** possono avere lo stesso valore. L'esecuzione del **`:::no-loc(switch):::`** corpo dell'istruzione inizia in corrispondenza della prima istruzione in o dopo la corrispondenza *`labeled-statement`* . L'esecuzione procede fino alla fine del corpo o finché un'istruzione non **`:::no-loc(break):::`** trasferisce il controllo all'esterno del corpo.

L'uso dell' **`:::no-loc(switch):::`** istruzione in genere è simile al seguente:

```C
:::no-loc(switch)::: ( expression )
{
    // declarations
    // . . .
    :::no-loc(case)::: constant_expression:
        // statements executed if the expression equals the
        // value of this constant_expression
        :::no-loc(break):::;
    :::no-loc(default)::::
        // statements executed if expression does not equal
        // any :::no-loc(case)::: constant_expression
}
```

È possibile utilizzare l' **`:::no-loc(break):::`** istruzione per terminare l'elaborazione di una particolare istruzione con etichetta all'interno dell' **`:::no-loc(switch):::`** istruzione. Viene diramato fino alla fine dell' **`:::no-loc(switch):::`** istruzione. Senza **`:::no-loc(break):::`** , il programma continua con la successiva istruzione con etichetta, eseguendo le istruzioni fino a quando non **`:::no-loc(break):::`** viene raggiunto un oggetto o la fine dell'istruzione. Questa continuazione potrebbe essere auspicabile in alcune situazioni.

L' **`:::no-loc(default):::`** istruzione viene eseguita se nessun **`:::no-loc(case):::`** *`constant-expression`* valore è uguale al valore di *`expression`* . Se non è presente alcuna **`:::no-loc(default):::`** istruzione e non **`:::no-loc(case):::`** viene trovata alcuna corrispondenza, nessuna delle istruzioni nel **`:::no-loc(switch):::`** corpo viene eseguita. Può essere presente al massimo un' **`:::no-loc(default):::`** istruzione. L' **`:::no-loc(default):::`** istruzione non deve necessariamente arrivare alla fine. Può essere visualizzato in qualsiasi punto del corpo dell' **`:::no-loc(switch):::`** istruzione. Un' **`:::no-loc(case):::`** **`:::no-loc(default):::`** etichetta o può essere presente solo all'interno di un' **`:::no-loc(switch):::`** istruzione.

Il tipo di **`:::no-loc(switch):::`** *`expression`* e **`:::no-loc(case):::`** *`constant-expression`* deve essere integrale. Il valore di ogni **`:::no-loc(case):::`** *`constant-expression`* deve essere univoco all'interno del corpo dell'istruzione.

Le **`:::no-loc(case):::`** **`:::no-loc(default):::`** etichette e del **`:::no-loc(switch):::`** corpo dell'istruzione sono significative solo nel test iniziale che determina la posizione in cui viene avviata l'esecuzione nel corpo dell'istruzione. **`:::no-loc(switch):::`** le istruzioni possono essere nidificate. Tutte le variabili statiche vengono inizializzate prima dell'esecuzione in qualsiasi **`:::no-loc(switch):::`** istruzione.

> [!NOTE]
> Le dichiarazioni possono essere visualizzate all'inizio dell'istruzione composta che costituisce il **`:::no-loc(switch):::`** corpo, ma le inizializzazioni incluse nelle dichiarazioni non vengono eseguite. L' **`:::no-loc(switch):::`** istruzione trasferisce il controllo direttamente a un'istruzione eseguibile nel corpo, ignorando le righe che contengono inizializzazioni.

Gli esempi seguenti illustrano le **`:::no-loc(switch):::`** istruzioni:

```C
:::no-loc(switch):::( c )
{
    :::no-loc(case)::: 'A':
        capital_a++;
    :::no-loc(case)::: 'a':
        letter_a++;
    :::no-loc(default)::: :
        total++;
}
```

Tutte e tre le istruzioni del **`:::no-loc(switch):::`** corpo in questo esempio vengono eseguite se `c` è uguale a `'A'` , poiché nessuna **`:::no-loc(break):::`** istruzione viene visualizzata prima di quanto segue **`:::no-loc(case):::`** . Il controllo di esecuzione viene trasferito alla prima istruzione (`capital_a++;`) e procede in ordine nel resto del corpo. Se `c` è uguale a `'a'`, `letter_a` e `total` vengono incrementati. `total`Viene incrementato solo quando `c` non è uguale a `'A'` o `'a'` .

```C
:::no-loc(switch):::( i )
{
    :::no-loc(case)::: -1:
        n++;
        :::no-loc(break):::;
    :::no-loc(case)::: 0 :
        z++;
        :::no-loc(break):::;
    :::no-loc(case)::: 1 :
        p++;
        :::no-loc(break):::;
}
```

In questo esempio, un' **`:::no-loc(break):::`** istruzione segue ogni istruzione del **`:::no-loc(switch):::`** corpo. L' **`:::no-loc(break):::`** istruzione forza un'uscita dal corpo dell'istruzione dopo l'esecuzione di un'istruzione. Se `i` è ugual a -1, solo `n` viene incrementato. L' **`:::no-loc(break):::`** istruzione seguente `n++;` causa il superamento del controllo di esecuzione dal corpo dell'istruzione, ignorando le istruzioni rimanenti. Analogamente, se `i` è uguale a 0, solo `z` viene incrementato; se `i` è uguale a 1, solo `p` viene incrementato. L' **`:::no-loc(break):::`** istruzione finale non è strettamente necessaria, poiché il controllo passa fuori dal corpo alla fine dell'istruzione composta. È incluso per coerenza.

Una singola istruzione può contenere più **`:::no-loc(case):::`** etichette, come illustrato nell'esempio seguente:

```C
:::no-loc(switch):::( c )
{
    :::no-loc(case)::: 'a' :
    :::no-loc(case)::: 'b' :
    :::no-loc(case)::: 'c' :
    :::no-loc(case)::: 'd' :
    :::no-loc(case)::: 'e' :
    :::no-loc(case)::: 'f' :  convert_hex(c);
}
```

In questo esempio, se *constant-expression* è uguale a qualsiasi lettera tra `'a'` e `'f'`, viene chiamata la funzione `convert_hex`.

### <a name="microsoft-specific"></a>Specifico di Microsoft

Microsoft C non limita il numero di **`:::no-loc(case):::`** valori in un' **`:::no-loc(switch):::`** istruzione. Tale numero è limitato solo dalla memoria disponibile. ANSI C richiede che **`:::no-loc(case):::`** siano consentite almeno 257 etichette in un' **`:::no-loc(switch):::`** istruzione.

:::no-loc(default):::Per Microsoft C, le estensioni Microsoft sono abilitate. Usare l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) per disabilitare queste estensioni.

## <a name="see-also"></a>Vedere anche

[:::no-loc(switch):::Istruzione (C++)](../cpp/:::no-loc(switch):::-statement-cpp.md)
