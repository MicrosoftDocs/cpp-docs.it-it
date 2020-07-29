---
title: Istruzione while (C)
ms.date: 11/04/2016
f1_keywords:
- while
helpviewer_keywords:
- while keyword [C]
- while keyword [C], syntax
ms.assetid: d0c970b8-12a9-4827-afb2-a051111834b7
ms.openlocfilehash: 8095dd8672218239dbcfa879e3df929643e93d90
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231403"
---
# <a name="while-statement-c"></a>Istruzione while (C)

L' **`while`** istruzione consente di ripetere un'istruzione fino a quando un'espressione specificata non diventa false.

## <a name="syntax"></a>Sintassi

*iteration-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione* **while (***Expression***)**      

*expression* deve presentare un tipo di puntatore o un tipo aritmetico. L'esecuzione procede nel modo seguente:

1. L'*espressione* viene valutata.

1. Se l' *espressione* è inizialmente false, il corpo dell' **`while`** istruzione non viene mai eseguito e il controllo passa dall' **`while`** istruzione all'istruzione successiva nel programma.

   Se l'*espressione* è vera (diversa da zero), il corpo dell'istruzione viene eseguito e il processo viene ripetuto iniziando dal passaggio 1.

L' **`while`** istruzione può terminare anche quando **`break`** viene eseguito un oggetto, **`goto`** o **`return`** all'interno del corpo dell'istruzione. Utilizzare l' **`continue`** istruzione per terminare un'iterazione senza uscire dal **`while`** ciclo. L' **`continue`** istruzione passa il controllo all'iterazione successiva dell' **`while`** istruzione.

Di seguito è riportato un esempio dell' **`while`** istruzione:

```C
while ( i >= 0 )
{
    string1[i] = string2[i];
    i--;
}
```

In questo esempio i caratteri vengono copiati da `string2` in `string1`. Se `i` è maggiore o uguale a 0, `string2[i]` viene assegnato a `string1[i]` e `i` viene decrementato. Quando `i` raggiunge o scende al di sotto di 0, l'esecuzione dell' **`while`** istruzione termina.

## <a name="see-also"></a>Vedere anche

[Istruzione while (C++)](../cpp/while-statement-cpp.md)
