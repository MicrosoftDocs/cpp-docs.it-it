---
title: Riepilogo di istruzioni
ms.date: 11/04/2016
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
ms.openlocfilehash: 1a230ca7d998316d2ec96e76b54ac60575acd2ee
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856995"
---
# <a name="summary-of-statements"></a>Riepilogo di istruzioni

*istruzione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*labeled-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*compound-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*selection-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*iterazione-istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*jump-statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*try-except-Statement*  / \* specifica di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*try-finally-istruzione*  / \* specifica di Microsoft\*/

*jump-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**goto**  *identifier*  **;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**continue ;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**break ;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**return** *expression*<sub>opt</sub> **;**

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
&nbsp;&nbsp;&nbsp;&nbsp;**do**  *statement*  **while (**  *expression*  **) ;**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione* **for (***espressione opt*<sub>opt</sub> **;** *espressione*<sub>opt</sub> **;** *espressione*<sub>opt</sub> **)**  

*selection-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**if (***espressione***)**(*istruzione* )      <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**if (**  *espressione*  **)**  *istruzione*  **else**  *istruzione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione* **Switch (***Expression***)**      

con *etichetta-Statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identifier***:**(*istruzione* )    <br/>
&nbsp;&nbsp;&nbsp;&nbsp;**case**  *Constant-Expression*  **:**  *Statement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**default :**  *statement*

*try-except-Statement*:/\* specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__try compound**  *-* statement **__except (**  *Expression*  **)**  *compound-statement*

*try-finally-Statement*:\* /specifico di Microsoft\*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**__try**  *compound-statement* **__finally**  *compound-statement*

## <a name="see-also"></a>Vedere anche

[Grammatica della struttura di frase](../c-language/phrase-structure-grammar.md)
