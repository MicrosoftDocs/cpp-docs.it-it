---
title: Riepilogo di espressioni
ms.date: 06/14/2018
ms.assetid: ed448953-687a-4b57-a1cb-12967bd770ea
ms.openlocfilehash: 1660690c6d36aa1dbdc025d6afe92e19ff941463
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220834"
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
&nbsp;&nbsp;&nbsp;&nbsp;*suffisso-espressione* **->** *identificatore* di    <br/>
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
&nbsp;&nbsp;&nbsp;&nbsp;**`sizeof`**  *espressione unaria*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**sizeof (**  *type-name*  **)**

*unary-operator*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**&****&#42;** **+** **-** **~** **!**

*espressione cast*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cast-expression* **(***Type-Name***)**      

*espressione moltiplicativa*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cast-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression*  **&#42;**  *cast-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione* **/** moltiplicativa *espressione cast*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione* **%** moltiplicativa *espressione cast*    

*additive-espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*multiplicative-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-espressione* **+** *espressione moltiplicativa*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-espressione* **-** *espressione moltiplicativa*    

*shift-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*additive-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Shift-espressione*   * *Shift-expression * additive-expression \<\<**  *additive-expression*<br/> &nbsp; &nbsp; &nbsp; &nbsp; * **>>** *additive-expression*  

*espressione relazionale*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Shift-espressione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression* relazionale* \<=**  *shift-expression*<br/> &nbsp; &nbsp; - &nbsp; &nbsp; ** **>** <br/> &nbsp; &nbsp; &nbsp; &nbsp; *shift-expression* espressione relazionale-espressione * Shift-espressione relazionale-espressione * * relazionale-espressione * Shift-Expression* \<**  *shift-expression*<br/> &nbsp; &nbsp; &nbsp; &nbsp; *   * **>=** *shift-expression*    

*equality-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*relational-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione uguaglianza* **==** *espressione relazionale*    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*equality-expression*  **!=**  *relational-expression*

*AND-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*espressione uguaglianza*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*And-Expression* **&** *espressione uguaglianza*    

*exclusive-OR-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*AND-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*exclusive-or-Expression* **^** *And-Expression*    

*inclusivo o espressione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Exclusive-OR-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*inclusive-OR-expression*  **&#124;**  *exclusive-OR-expression*

*Logical-and-Expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*inclusive-OR-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Logical-and-Expression* **&&** *inclusive-or-Expression*    

*Logical-or-Expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*logical-AND-Expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Logical- *or-expression* **&#124;&#124;** *Logical-and-Expression*    

## <a name="see-also"></a>Vedere anche

- [Grammatica della struttura di frase](../c-language/phrase-structure-grammar.md)
