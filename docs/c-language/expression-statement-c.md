---
description: 'Altre informazioni su: istruzione di espressione (C)'
title: Istruzione di espressione (C)
ms.date: 11/04/2016
helpviewer_keywords:
- statements, expression
- expression statements
ms.assetid: 1085982b-dc16-4c1e-9ddd-0cd85c8fe2e3
ms.openlocfilehash: b7bd4b0bac73277cedfd1e651ba731715a083b72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196438"
---
# <a name="expression-statement-c"></a>Istruzione di espressione (C)

Quando un'istruzione di espressione viene eseguita, l'espressione viene valutata in base alle regole descritte in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md).

## <a name="syntax"></a>Sintassi

*espressione-istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression*<sub>opt</sub> **;**

Tutti gli effetti collaterali derivanti dalla valutazione delle espressioni vengono completati prima che venga eseguita l'istruzione successiva. Un'istruzione di espressione vuota viene definita un'istruzione null. Per altre informazioni, vedere [Istruzione Null](../c-language/null-statement-c.md).

In questi esempi vengono illustrate le istruzioni di espressione.

```C
x = ( y + 3 );            /* x is assigned the value of y + 3  */
x++;                      /* x is incremented                  */
x = y = 0;                /* Both x and y are initialized to 0 */
proc( arg1, arg2 );       /* Function call returning void      */
y = z = ( f( x ) + 3 );   /* A function-call expression        */
```

Nell'ultima istruzione l'espressione di chiamata di funzione, ovvero il valore dell'espressione, che include qualsiasi valore restituito dalla funzione, viene incrementato di 3 e viene quindi assegnato a entrambe le variabili `y` e `z`.

## <a name="see-also"></a>Vedi anche

[Istruzioni](../c-language/statements-c.md)
