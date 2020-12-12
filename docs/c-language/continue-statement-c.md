---
description: 'Altre informazioni su: istruzione continue (C)'
title: Istruzione continue (C)
ms.date: 11/04/2016
f1_keywords:
- continue
helpviewer_keywords:
- loop structures, continue keyword
- continue keyword [C]
ms.assetid: 969f293a-45fe-48a7-b4c6-287ba27a631d
ms.openlocfilehash: 03e6493310655f20e61156d26b88ae2b08a40cdc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293248"
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

## <a name="see-also"></a>Vedi anche

[Istruzione continue](../cpp/continue-statement-cpp.md)
