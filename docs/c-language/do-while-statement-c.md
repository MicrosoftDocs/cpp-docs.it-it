---
title: Istruzione do-while (C)
ms.date: 11/04/2016
f1_keywords:
- do
- while
helpviewer_keywords:
- do-while keyword [C]
ms.assetid: f2ac20a6-10c7-4a08-b5e3-c3b3639dbeaf
ms.openlocfilehash: f2548ec60c7ee36d46d385cd7e7dda7bcfc2758d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50462907"
---
# <a name="do-while-statement-c"></a>Istruzione do-while (C)

L'istruzione *do-while* consente di ripetere un'istruzione o un'istruzione composta fino a quando un'espressione specificata non diventa false.

## <a name="syntax"></a>Sintassi

*iteration-statement*: &nbsp;&nbsp;&nbsp;&nbsp;**do**  *statement*  **while (**  *expression*  **) ;**

L'elemento *expression* in un'istruzione *do-while* viene valutato dopo l'esecuzione del corpo del ciclo. Di conseguenza, il corpo del ciclo viene eseguito sempre almeno una volta.

*expression* deve presentare un tipo di puntatore o un tipo aritmetico. L'esecuzione procede nel modo seguente:

1. Viene eseguito il corpo dell'istruzione.

1. Viene quindi valutato *expression*. Se *expression* è false, l'istruzione *do-while* termina e il controllo passa all'istruzione successiva nel programma. Se *expression* è true (diverso da zero), il processo viene ripetuto a partire dal passaggio 1.

L'istruzione *do-while* può terminare anche quando un'istruzione **break**, **goto** o **return** viene eseguita nel corpo dell'istruzione.

Questo è un esempio dell'istruzione *do-while*:

```C
do
{
    y = f( x );
    x--;
} while ( x > 0 );
```

In questa istruzione *do-while*, le due istruzioni `y = f( x );` e `x--;` vengono eseguite, indipendentemente dal valore iniziale di `x`. Quindi `x > 0` viene valutato. Se `x` è maggiore di 0, il corpo dell'istruzione viene eseguito di nuovo e `x > 0` viene rivalutato. Il corpo dell'istruzione viene eseguito ripetutamente finché `x` rimane maggiore di 0. L'esecuzione dell'istruzione *do-while* termina quando `x` diventa 0 o negativo. Il corpo del ciclo viene eseguito almeno una volta.

## <a name="see-also"></a>Vedere anche

[Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)
