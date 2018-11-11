---
title: Istruzione di espressione (C)
ms.date: 11/04/2016
helpviewer_keywords:
- statements, expression
- expression statements
ms.assetid: 1085982b-dc16-4c1e-9ddd-0cd85c8fe2e3
ms.openlocfilehash: b825e88703e1913d9b6d916360174060854c632a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667467"
---
# <a name="expression-statement-c"></a>Istruzione di espressione (C)

Quando un'istruzione di espressione viene eseguita, l'espressione viene valutata in base alle regole descritte in [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md).

## <a name="syntax"></a>Sintassi

*expression-statement*:<br/>
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

## <a name="see-also"></a>Vedere anche

[Istruzioni](../c-language/statements-c.md)