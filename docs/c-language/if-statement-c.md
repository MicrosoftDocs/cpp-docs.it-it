---
title: Istruzione if (C)
ms.date: 11/04/2016
f1_keywords:
- else
- if
helpviewer_keywords:
- if keyword [C]
- else clauses
- else keyword [C]
- if keyword [C], if statement syntax
- nested statements
ms.assetid: d7fc16a0-fdbc-4f39-b596-76e1ca4ad4a5
ms.openlocfilehash: 67cdae033c3c8669c8bc7ae1d2e3584ef68498f0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227842"
---
# <a name="if-statement-c"></a>Istruzione if (C)

L' **`if`** istruzione controlla la diramazione condizionale. Il corpo di un' **`if`** istruzione viene eseguito se il valore dell'espressione è diverso da zero. La sintassi per l' **`if`** istruzione ha due formati.

## <a name="syntax"></a>Sintassi

*selection-statement*:*istruzione* **if (***Expression***)**      

**)***statement*istruzione **if (***Expression*) **`else`** *statement*          

In entrambi i formati dell' **`if`** istruzione, le espressioni, che possono avere qualsiasi valore tranne una struttura, vengono valutate, inclusi tutti gli effetti collaterali.

Nel primo formato della sintassi se *expression* è true (diversa da zero), l'istruzione *statement* viene eseguita. Se *expression* è false, *statement* viene ignorata. Nella seconda forma di sintassi, che utilizza **`else`** , la seconda *istruzione* viene eseguita se *Expression* è false. Con entrambi i form, il controllo passa quindi dall' **`if`** istruzione all'istruzione successiva nel programma, a meno che una delle istruzioni contenga **`break`** , **`continue`** o **`goto`** .

Di seguito sono riportati alcuni esempi dell' **`if`** istruzione:

```
if ( i > 0 )
    y = x / i;
else
{
    x = i;
    y = f( x );
}
```

In questo esempio, l'istruzione `y = x/i;` viene eseguita se `i` è maggiore di 0. Se `i` è minore o uguale a 0, `i` viene assegnato a `x` e `f( x )` viene assegnato a `y`. Si noti che l'istruzione che costituisce la **`if`** clausola termina con un punto e virgola.

Quando si annidano **`if`** istruzioni e **`else`** clausole, utilizzare le parentesi graffe per raggruppare le istruzioni e le clausole in istruzioni composte che chiariscono le finalità. Se non sono presenti parentesi graffe, il compilatore risolve le ambiguità associando ogni oggetto al **`else`** più vicino che non **`if`** dispone di un **`else`** .

```
if ( i > 0 )           /* Without braces */
    if ( j > i )
        x = j;
    else
        x = i;
```

**`else`** In questo esempio la clausola viene associata all' **`if`** istruzione interna. Se `i` è minore o uguale a 0, nessun valore viene assegnato a `x`.

```
if ( i > 0 )
{                      /* With braces */
    if ( j > i )
        x = j;
}
else
    x = i;
```

Le parentesi graffe che racchiudono l' **`if`** istruzione interna in questo esempio fanno **`else`** parte della clausola dell' **`if`** istruzione esterna. Se `i` è minore o uguale a 0, `i` viene assegnato a `x`.

## <a name="see-also"></a>Vedere anche

[Istruzione if-else (C++)](../cpp/if-else-statement-cpp.md)
