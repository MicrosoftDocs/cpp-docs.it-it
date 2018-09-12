---
title: Riepilogo di costanti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- constants, C
ms.assetid: 4158234c-e189-4e25-970f-52a04bc6380a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 98b67bf6fd81ee611d99904931a825ee28448482
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43217383"
---
# <a name="summary-of-constants"></a>Riepilogo di costanti

*constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;*floating-point-constant*  
&nbsp;&nbsp;&nbsp;&nbsp;*integer-constant*  
&nbsp;&nbsp;&nbsp;&nbsp;*enumeration-constant*  
&nbsp;&nbsp;&nbsp;&nbsp;*character-constant*

*floating-point-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;*fractional-constant* *exponent-part*<sub>opt</sub> *floating-suffix*<sub>opt</sub>  
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *exponent-part* *floating-suffix*<sub>opt</sub>

*fractional-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence*<sub>opt</sub> **.** *digit-sequence*  
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence*  **.**

*exponent-part*:  
&nbsp;&nbsp;&nbsp;&nbsp;**e** *sign*<sub>opt</sub> *digit-sequence*  
&nbsp;&nbsp;&nbsp;&nbsp;**E** *sign*<sub>opt</sub> *digit-sequence*  

*sign*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**+ -**

*digit-sequence*:  
&nbsp;&nbsp;&nbsp;&nbsp;*digit*  
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*floating-suffix*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**f l F L**

*integer-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;*decimal-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;&nbsp;&nbsp;*binary-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;&nbsp;&nbsp;*octal-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-constant* *integer-suffix*<sub>opt</sub>

*decimal-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;*nonzero-digit* &nbsp;&nbsp;&nbsp;&nbsp;*decimal-constant* *digit*

*binary-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;**0b** *binary-digit*  
&nbsp;&nbsp;&nbsp;&nbsp;**0B** *binary-digit*

*octal-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;**0**  
&nbsp;&nbsp;&nbsp;&nbsp;*octal-constant* *octal-digit*

*hexadecimal-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;**0x**  *hexadecimal-digit*  
&nbsp;&nbsp;&nbsp;&nbsp;**0X**  *hexadecimal-digit* &nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-constant* *hexadecimal-digit*

*nonzero-digit*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**1 2 3 4 5 6 7 8 9**

*octal-digit*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7**

*hexadecimal-digit*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**  
&nbsp;&nbsp;&nbsp;&nbsp;**a b c d e f**  
&nbsp;&nbsp;&nbsp;&nbsp;**A B C D E F**

*unsigned-suffix*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**u U**

*long-suffix*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**l L**

*character-constant*:  
&nbsp;&nbsp;&nbsp;&nbsp;**'** *c-char-sequence* **'**  
&nbsp;&nbsp;&nbsp;&nbsp;**L'** *c-char-sequence* **'**

*integer-suffix*:  
&nbsp;&nbsp;&nbsp;&nbsp;*unsigned-suffix* *long-suffix*<sub>opt</sub>  
&nbsp;&nbsp;&nbsp;&nbsp;*long-suffix* *unsigned-suffix*<sub>opt</sub>

*c-char-sequence*:  
&nbsp;&nbsp;&nbsp;&nbsp;*c-char*  
&nbsp;&nbsp;&nbsp;&nbsp;*c-char-sequence* *c-char*

*c-char*:  
&nbsp;&nbsp;&nbsp;&nbsp;Qualsiasi membro del set di caratteri di origine, eccetto le virgolette singole (**'**), la barra rovesciata (**\\**) o il carattere di nuova riga escape-sequence

*escape-sequence*:  
&nbsp;&nbsp;&nbsp;&nbsp;*simple-escape-sequence*  
&nbsp;&nbsp;&nbsp;&nbsp;*octal-escape-sequence*  
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-escape-sequence*

*simple-escape-sequence*: uno tra  
&nbsp;&nbsp;&nbsp;&nbsp;**\a \b \f \n \r \t \v**  
&nbsp;&nbsp;&nbsp;&nbsp;**\\' \\" \\\ \\?**

*octal-escape-sequence*:  
&nbsp;&nbsp;&nbsp;&nbsp;**\\** *octal-digit*  
&nbsp;&nbsp;&nbsp;&nbsp;**\\** *octal-digit* *octal-digit*  
&nbsp;&nbsp;&nbsp;&nbsp;**\\** *octal-digit* *octal-digit* *octal-digit*

*hexadecimal-escape-sequence*:  
&nbsp;&nbsp;&nbsp;&nbsp;**\x** *hexadecimal-digit*  
&nbsp;&nbsp;&nbsp;&nbsp;*hexadecimal-escape-sequence* *hexadecimal-digit*  
  
## <a name="see-also"></a>Vedere anche

[Grammatica lessicale](../c-language/lexical-grammar.md)  
