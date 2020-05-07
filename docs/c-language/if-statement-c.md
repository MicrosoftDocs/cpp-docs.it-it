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
ms.openlocfilehash: b6df50d483a6e2958de3100a07c18b89b0c4f12f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62233060"
---
# <a name="if-statement-c"></a>Istruzione if (C)

L'istruzione **if** controlla la creazione condizionale di rami. Il corpo di un'istruzione **if** viene eseguito se il valore dell'espressione è diverso da zero. La sintassi dell'istruzione **if** presenta due formati.

## <a name="syntax"></a>Sintassi

*selection-statement*:*istruzione* **if (***Expression***)**      

**if (**  *espressione*  **)**  *istruzione*  **else**  *istruzione*

In entrambi i formati dell'istruzione **if** vengono valutate le espressioni (che possono avere qualsiasi valore salvo una struttura), inclusi tutti gli effetti collaterali.

Nel primo formato della sintassi se *expression* è true (diversa da zero), l'istruzione *statement* viene eseguita. Se *expression* è false, *statement* viene ignorata. Nel secondo formato della sintassi, che usa **else**, la seconda istruzione *statement* viene eseguita se *expression* è false. Con entrambi i formati il controllo passa quindi dall'istruzione **if** all'istruzione successiva nel programma, a meno che una delle istruzioni contenga **break**, **continue** o `goto`.

Di seguito sono illustrati esempi dell'istruzione **if**:

```
if ( i > 0 )
    y = x / i;
else
{
    x = i;
    y = f( x );
}
```

In questo esempio, l'istruzione `y = x/i;` viene eseguita se `i` è maggiore di 0. Se `i` è minore o uguale a 0, `i` viene assegnato a `x` e `f( x )` viene assegnato a `y`. Si noti che l'istruzione che costituisce la clausola **if** termina con un punto e virgola.

Quando si annidano istruzioni **if** e clausole **else** usare le parentesi graffe per raggruppare istruzioni e clausole in istruzioni composte che chiariscono lo scopo dell'operazione. Se non sono presenti parentesi graffe, il compilatore risolve le ambiguità associando ogni clausola **else** all'istruzione **if** più vicina priva di **else**.

```
if ( i > 0 )           /* Without braces */
    if ( j > i )
        x = j;
    else
        x = i;
```

In questo esempio la clausola **else** viene associata all'istruzione **if** interna. Se `i` è minore o uguale a 0, nessun valore viene assegnato a `x`.

```
if ( i > 0 )
{                      /* With braces */
    if ( j > i )
        x = j;
}
else
    x = i;
```

In questo esempio le parentesi graffe relative all'istruzione interna **if** rendono la clausola **else** parte dell'istruzione **if** esterna. Se `i` è minore o uguale a 0, `i` viene assegnato a `x`.

## <a name="see-also"></a>Vedere anche

[Istruzione if-else (C++)](../cpp/if-else-statement-cpp.md)
