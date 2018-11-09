---
title: Istruzione while (C)
ms.date: 11/04/2016
f1_keywords:
- while
helpviewer_keywords:
- while keyword [C]
- while keyword [C], syntax
ms.assetid: d0c970b8-12a9-4827-afb2-a051111834b7
ms.openlocfilehash: d774971910fe69ed707bc545e4c0e022282a1d17
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662345"
---
# <a name="while-statement-c"></a>Istruzione while (C)

L'istruzione `while` consente di ripetere un'istruzione fino a quando un'espressione specificata non restituisce false.

## <a name="syntax"></a>Sintassi

*iteration-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**while (**  *expression*  **)**  *statement*

*espressione* deve essere di tipo puntatore o aritmetico. L'esecuzione procede nel modo seguente:

1. L'*espressione* viene valutata.

1. Se inizialmente l'*espressione* è falsa, il corpo dell'istruzione `while` non viene mai eseguito e il controllo passa dall'istruzione `while` all'istruzione successiva del programma.

   Se l'*espressione* è vera (diversa da zero), il corpo dell'istruzione viene eseguito e il processo viene ripetuto iniziando dal passaggio 1.

L'istruzione `while` può terminare anche quando viene eseguita un'istruzione **break**, `goto` o `return` nel corpo dell'istruzione. Usare l'istruzione **continue** per terminare un'iterazione senza uscire dal ciclo `while`. L'istruzione **continue** passa il controllo all'iterazione successiva dell'istruzione `while`.

Di seguito, un esempio dell'istruzione `while`:

```C
while ( i >= 0 )
{
    string1[i] = string2[i];
    i--;
}
```

In questo esempio i caratteri vengono copiati da `string2` in `string1`. Se `i` è maggiore o uguale a 0, `string2[i]` viene assegnato a `string1[i]` e `i` viene decrementato. Quando `i` raggiunge o è al di sotto dello 0, l'esecuzione dell'istruzione `while` termina.

## <a name="see-also"></a>Vedere anche

[Istruzione while (C++)](../cpp/while-statement-cpp.md)
