---
title: Riepilogo di espressioni
ms.date: 06/14/2018
ms.assetid: ed448953-687a-4b57-a1cb-12967bd770ea
ms.openlocfilehash: 320baa51d54f00ac4fdb6633922a8bb36cf92a94
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62157818"
---
# <a name="summary-of-expressions"></a>Riepilogo di espressioni

*espressione primaria*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*valore letterale stringa*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**(**  *espressione*  **)**

*espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assegnazione-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione*  **,**  *assignment-expression*

*espressione costante*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione condizionale*

*espressione condizionale*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-OR-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Logical-or-Expression*  **?**  *espressione*  **:**  *conditional-expression*

*assignment-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione condizionale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unary-expression* *assignment-operator* *assignment-expression*

*suffisso-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*primary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **[**  *espressione*  **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **(**  *argument-expression-list*<sub>opt</sub> **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **.**  *identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-identificatore di espressione***->***identifier*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **++**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*  **--**

*argument-expression-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assegnazione-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*argument-expression-list*  **,**  *assignment-expression*

*espressione unaria*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**++**  *espressione unaria*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**--**  *espressione unaria*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unario-operatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cast-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**sizeof**  *unary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**sizeof (**  *type-name*  **)**

*unary-operator*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**&****&#42;** **+**&#42;**-** **!** . **~**

*espressione cast*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cast-expression* **(***Type-Name***)**      

*espressione moltiplicativa*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cast-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression*  **&#42;**  *cast-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression***/***espressione cast* espressione moltiplicativa    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression***%***espressione cast* espressione moltiplicativa    

*additive-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-expression***+***espressione moltiplicativa* additiva-espressione    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-expression***-***espressione moltiplicativa* additiva-espressione    

*shift-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cambio-espressione***\<***additiva-espressione*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cambio-espressione*  **>>**  *additiva-espressione*

*espressione relazionale*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Shift-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*espressione di*spostamento-* espressione relazionale**\<**    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*espressione di*spostamento-* espressione relazionale**>**    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*espressione di*spostamento-* espressione relazionale**\<**    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*espressione di*spostamento-* espressione relazionale**>=**    

*equality-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*uguaglianza-***==** espressione*relazionale-espressione*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*equality-expression*  **!=**  *relational-expression*

*AND-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione uguaglianza*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*E-***&** espressione*uguaglianza-* espressione    

*exclusive-OR-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*AND-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Exclusive-or-Expression*  **^**  *e-Expression*

*inclusivo o espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Exclusive-OR-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*inclusive-OR-expression*  **&#124;**  *exclusive-OR-expression*

*Logical-and-Expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*inclusive-OR-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Logical-and-Expression*  **&&**  *inclusive-or-Expression*

*Logical-or-Expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-AND-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Logical- *or-expression* **&#124;&#124;** *Logical-and-Expression*    

## <a name="see-also"></a>Vedere anche

- [Grammatica della struttura di frase](../c-language/phrase-structure-grammar.md)
