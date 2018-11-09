---
title: Espressioni costanti C
ms.date: 06/14/2018
helpviewer_keywords:
- constant expressions, syntax
- constant expressions
- expressions [C++], constant
ms.assetid: d48a6c47-e44c-4be2-9c8b-7944c7ef8de7
ms.openlocfilehash: f6984c47ef8acde462a8e92e01b72ef26a61eddc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490532"
---
# <a name="c-constant-expressions"></a>Espressioni costanti C

Un'espressione costante viene valutata in fase di compilazione, non in fase di esecuzione; e può essere utilizzata in qualsiasi punto in cui può essere utilizzata una costante. L'espressione costante deve restituire una costante che rientri nell'intervallo di valori rappresentabili per quel tipo. Gli operandi di un'espressione costante possono essere costanti Integer, costanti carattere, costanti a virgola mobile, costanti di enumerazione, cast di tipo, espressioni **sizeof** e altre espressioni costanti.

## <a name="syntax"></a>Sintassi

*constant-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*conditional-expression*

*conditional-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR-expression* **?** *expression* **:** *conditional-expression*

*expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assignment-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression* **,** *assignment-expression*

*assignment-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*conditional-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unary-expression* *assignment-operator* *assignment-expression*

*assignment-operator*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**=** **&#42;=** **/=** **%=** **+=** **-=** **\<\<=** **>>=** **&=** **^=** **&#124;=**

I non terminal per il dichiaratore di struct, l'enumeratore, il dichiaratore diretto, il dichiaratore astratto diretto e l'istruzione etichettata contengono il non terminal *constant-expression*.

Un'espressione costante integrale deve essere usata per specificare la dimensione di un membro del campo di bit di una struttura, il valore di una costante di enumerazione, la dimensione di una matrice o il valore di una costante **case**.

Le espressioni costanti utilizzate nelle direttive per il preprocessore sono soggette a restrizioni aggiuntive. Di conseguenza, sono note come "espressioni costanti limitate". Un'espressione costante limitata non può contenere espressioni **sizeof**, costanti di enumerazione, cast di tipo su qualsiasi tipo o costanti di tipo mobile. È tuttavia possibile che contenga l'espressione costante speciale **defined (** _identifier_ **)**.

## <a name="see-also"></a>Vedere anche

- [Operandi ed espressioni](../c-language/operands-and-expressions.md)
