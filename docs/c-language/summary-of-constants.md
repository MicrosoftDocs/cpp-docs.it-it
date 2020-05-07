---
title: Riepilogo di costanti
ms.date: 11/04/2016
helpviewer_keywords:
- constants, C
ms.assetid: 4158234c-e189-4e25-970f-52a04bc6380a
ms.openlocfilehash: f927d977d818bed28c5fd7392f7933cd1a63ced3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62157747"
---
# <a name="summary-of-constants"></a>Riepilogo di costanti

*costante*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costante a virgola mobile*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costante Integer*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Enumerazione-costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*carattere-costante*

*floating-point-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*fractional-constant* *exponent-part*<sub>opt</sub> *floating-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *exponent-part* *floating-suffix*<sub>opt</sub>

*fractional-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-Sequence*<sub>opt</sub> **.** *digit-sequence*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sequenza numerica*  **.**

*exponent-part*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**e** *segno*<sub>opt</sub> *-sequenza*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**E** *segno*<sub>opt</sub> *-sequenza*

*sign*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**+ -**

*sequenza numerica*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cifre*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*floating-suffix*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**f l F L**

*integer-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*decimal-constant* *integer-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*binary-constant* *integer-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*octal-constant* *integer-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-constant* *integer-suffix*<sub>opt</sub>

*decimal-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cifre non zero*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*decimal-constant* *digit*

*binary-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0b** *binary-digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0B** *-digit binario*

*octal-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*octal-constant* *octal-digit*

*hexadecimal-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0x**  *cifra esadecimale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0x**  *cifra esadecimale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-constant* *hexadecimal-digit*

*nonzero-digit*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**1 2 3 4 5 6 7 8 9**

*octal-digit*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7**

*hexadecimal-digit*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**a b c d e f**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**A B C D E F**

*unsigned-suffix*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**u U**

*long-suffix*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**l**

*character-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**'** *c-char-Sequence* **'**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**L'** *c-char-Sequence* **'**

*integer-suffix*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*unsigned-suffix* *long-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*long-suffix* *unsigned-suffix*<sub>opt</sub>

*c-char-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*c-char*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*c-char-sequence* *c-char*

*c-char*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Qualsiasi membro del set di caratteri di origine eccetto le virgolette singole (**'**), la**\\**barra rovesciata () o il carattere di nuova riga escape-sequence

*escape-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sequenza di escape semplice*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sequenza di escape ottale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sequenza di escape esadecimale*

*simple-escape-sequence*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\a \b \f \n \t \v**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\\' \\" \\\ \\?**

*sequenza di escape ottale*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\\***cifra ottale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\\***cifra ottale* *a cifre ottali*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\\**cifre *ottali* *octal-digit* *a cifre* ottali

*hexadecimal-escape-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\x** *hexadecimal-digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-escape-sequence* *hexadecimal-digit*

## <a name="see-also"></a>Vedere anche

[Grammatica lessicale](../c-language/lexical-grammar.md)<br/>
