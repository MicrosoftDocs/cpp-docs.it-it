---
title: Istruzione do-while (C++)
ms.date: 11/04/2016
f1_keywords:
- do_cpp
helpviewer_keywords:
- do keyword [C++], do-while
- do-while keyword [C++]
- do keyword [C++]
- while keyword [C++], do-while
ms.assetid: e01e6f7c-7da1-4591-87f9-c26ff848e7b0
ms.openlocfilehash: 014012166f3a659d71b2e3212d63a523f2b87b8c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50656132"
---
# <a name="do-while-statement-c"></a>Istruzione do-while (C++)

Esegue una *istruzione* ripetutamente finché la condizione di chiusura specificata (il *espressione*) restituisce zero.

## <a name="syntax"></a>Sintassi

```
do
   statement
while ( expression ) ;
```

## <a name="remarks"></a>Note

Il test della condizione di chiusura viene eseguito dopo ogni esecuzione del ciclo; Pertanto, un **scopo-mentre** ciclo viene eseguito una o più volte, a seconda del valore dell'espressione di chiusura. L'istruzione **do-while** può terminare anche quando un'istruzione [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md) o [return](../cpp/return-statement-cpp.md) viene eseguita nel corpo dell'istruzione.

*espressione* deve essere di tipo puntatore o aritmetico. L'esecuzione procede nel modo seguente:

1. Viene eseguito il corpo dell'istruzione.

1. Viene quindi valutato *expression*. Se *expression* è false, l'istruzione **do-while** termina e il controllo passa all'istruzione successiva nel programma. Se *expression* è true (diverso da zero), il processo viene ripetuto a partire dal passaggio 1.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato il **scopo-mentre** istruzione:

```cpp
// do_while_statement.cpp
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf_s("\n%d",i++);
    } while (i < 3);
}
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione while (C++)](../cpp/while-statement-cpp.md)<br/>
[Istruzione for (C++)](../cpp/for-statement-cpp.md)<br/>
[Istruzione for basata su intervallo (C++)](../cpp/range-based-for-statement-cpp.md)