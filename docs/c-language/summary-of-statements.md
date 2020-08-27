---
title: Riepilogo delle istruzioni C
description: Riepilogo della grammatica dell'istruzione nell'implementazione di Microsoft C.
ms.date: 08/24/2020
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
ms.openlocfilehash: 448aa7ccb8c78e20ef09f47f4a3c77f447c76f60
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898402"
---
# <a name="summary-of-c-statements"></a>Riepilogo delle istruzioni C

*`statement`*:<br/>
&emsp;*`labeled-statement`*<br/>
&emsp;*`compound-statement`*<br/>
&emsp;*`expression-statement`*<br/>
&emsp;*`selection-statement`*<br/>
&emsp;*`iteration-statement`*<br/>
&emsp;*`jump-statement`*<br/>
&emsp;*`try-except-statement`* /\* Specifiche di Microsoft \*/<br/>
&emsp;*`try-finally-statement`* /\* Specifiche di Microsoft \*/

*`jump-statement`*:<br/>
&emsp;**`goto`** *`identifier`* **`;`**<br/>
&emsp;**`continue ;`**<br/>
&emsp;**`break ;`**<br/>
&emsp;**`return`***`expression`* <sub>consenso esplicito</sub>**`;`**<br/>
&emsp;**`__leave ;`** /\*Specifico di Microsoft<sup>1</sup>\*/

*`compound-statement`*:<br/>
&emsp;**`{`***`declaration-list`* <sub>opt</sub> *`statement-list`* <sub>opt</sub>**`}`**

*`declaration-list`*:<br/>
&emsp;*`declaration`*<br/>
&emsp;*`declaration-list`* *`declaration`*

*`statement-list`*:<br/>
&emsp;*`statement`*<br/>
&emsp;*`statement-list`* *`statement`*

*`expression-statement`*:<br/>
&emsp;*`expression`*<sub>consenso esplicito</sub>**`;`**

*`iteration-statement`*:<br/>
&emsp;**`while (`** *`expression`* **`)`** *`statement`*<br/>
&emsp;**`do`** *`statement`* **`while (`** *`expression`* **`) ;`**<br/>
&emsp;**`for (`***`expression`* <sub>consenso esplicito</sub> **`;`** *`expression`* <sub>consenso esplicito</sub> **`;`** *`expression`* <sub>consenso esplicito</sub> **`)`***`statement`*

*`selection-statement`*:<br/>
&emsp;**`if (`** *`expression`* **`)`** *`statement`*<br/>
&emsp;**`if (`** *`expression`* **`)`** *`statement`* **`else`** *`statement`*<br/>
&emsp;**`switch (`** *`expression`* **`)`** *`statement`*

*`labeled-statement`*:<br/>
&emsp;*`identifier`* **`:`** *`statement`*<br/>
&emsp;**`case`** *`constant-expression`* **`:`** *`statement`*<br/>
&emsp;**`default :`** *`statement`*

*`try-except-statement`*:/ \* Specifico di Microsoft \*/<br/>
&emsp;**`__try`** *`compound-statement`* **`__except (`** *`expression`* **`)`** *`compound-statement`*

*`try-finally-statement`*:/ \* Specifico di Microsoft \*/<br/>
&emsp;**`__try`** *`compound-statement`* **`__finally`** *`compound-statement`*

1 la **`__leave`** parola chiave è valida solo all'interno del **`__try`** blocco di un oggetto *`try-except-statement`* o *`try-finally-statement`* .

## <a name="see-also"></a>Vedere anche

[Grammatica di struttura della frase](../c-language/phrase-structure-grammar.md)
