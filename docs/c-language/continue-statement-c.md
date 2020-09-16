---
title: Istruzione continue (C)
ms.date: 11/04/2016
f1_keywords:
- continue
helpviewer_keywords:
- loop structures, continue keyword
- continue keyword [C]
ms.assetid: 969f293a-45fe-48a7-b4c6-287ba27a631d
ms.openlocfilehash: 27d1d0aa0e49c5c46e4ea4e010635ca0057c3f85
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90684833"
---
# <a name="continue-statement-c"></a>Istruzione continue (C)

L' **`continue`** istruzione passa il controllo alla successiva iterazione dell'istruzione di inclusione **`do`** , o più vicina **`for`** **`while`** in cui appare, ignorando le istruzioni rimanenti nel **`do`** **`for`** corpo dell'istruzione, o **`while`** .

## <a name="syntax"></a>Sintassi

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**continue ;**

L'iterazione successiva di **`do`** un' **`for`** istruzione, o **`while`** viene determinata nel modo seguente:

- All'interno di un' **`do`** **`while`** istruzione o, l'iterazione successiva inizia rivalutando l'espressione dell' **`do`** **`while`** istruzione o.

- Un'istruzione **`continue`** in un' **`for`** istruzione provoca la valutazione dell'espressione loop dell' **`for`** istruzione. In seguito il compilatore rivaluta l'espressione condizionale e, a seconda del risultato, termina o ripete il corpo dell'istruzione. Per ulteriori informazioni sull'istruzione e sui relativi non terminali, vedere [l'istruzione for](../c-language/for-statement-c.md) **`for`** .

Di seguito è riportato un esempio dell' **`continue`** istruzione:

```C
while ( i-- > 0 )
{
    x = f( i );
    if ( x == 1 )
        continue;
    y += x * x;
}
```

In questo esempio, il corpo dell'istruzione viene eseguito finché `i` è maggiore di 0. `f(i)`Il primo viene assegnato a `x` ; quindi, se `x` è uguale a 1, l' **`continue`** istruzione viene eseguita. Le restanti istruzioni presenti nel corpo vengono ignorate e l'esecuzione riprende dall'inizio del ciclo con la valutazione del test del ciclo.

## <a name="see-also"></a>Vedere anche

[Istruzione continue](../cpp/continue-statement-cpp.md)
