---
title: Riepilogo di istruzioni
ms.date: 11/04/2016
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
ms.openlocfilehash: 122c79b53a8af8a384097dec51a14746a090b1cf
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220795"
---
# <a name="summary-of-statements"></a>Riepilogo di istruzioni

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*labeled-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*compound-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*selection-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*iterazione-istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*jump-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*try-except-Statement*  / \* Specifiche di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*try-finally-Statement*  / \* Specifiche di Microsoft\*/

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`goto`**  *identificatore*  **;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**continue ;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**break ;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`return`***espressione*<sub>opt</sub> **;**

*compound-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opz</sub> *Statement-list*<sub>opt</sub> **}**

*declaration-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Dichiarazione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-list* *declaration*

*statement-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*statement-list* *statement*

*espressione-istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression*<sub>opt</sub> **;**

*iteration-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione* **while (***Expression***)**      <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`do`**  *istruzione*  **while (**  *Expression*  **);**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione* **for (***espressione opt*<sub>opt</sub> **;** *espressione*<sub>opt</sub> **;** *espressione*<sub>opt</sub> **)**  

*selection-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**if (***espressione***)**(*istruzione* )      <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**)***statement*istruzione **if (***Expression*) **`else`** *statement*          <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione* **Switch (***Expression***)**      

con *etichetta-Statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier***:**(*istruzione* )    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`case`**  *Constant-Expression***:**(*istruzione* )    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**default :**  *statement*

*try-except-Statement*:/ \* specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__try compound**  *-* statement **__except (**  *Expression*  **)**  *compound-statement*

*try-finally-Statement*:/ \* specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__try**Compound *-* statement **`__finally`** *compound-statement*    

## <a name="see-also"></a>Vedere anche

[Grammatica della struttura di frase](../c-language/phrase-structure-grammar.md)
