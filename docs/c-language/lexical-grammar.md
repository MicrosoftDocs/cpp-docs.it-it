---
title: Grammatica lessicale C
description: Descrive la grammatica lessicale del linguaggio C standard implementata dal compilatore Microsoft C/C++.
ms.date: 10/30/2020
helpviewer_keywords:
- lexical grammar
ms.assetid: cb5847fa-aef3-47f5-8825-97c2bf4a3d87
ms.openlocfilehash: d0ee2c9e93f3be1a06e264b4c60ec9a89410bb79
ms.sourcegitcommit: 4abc6c4c9694f91685cfd77940987e29a51e3143
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/03/2020
ms.locfileid: "93238499"
---
# <a name="c-lexical-grammar"></a>Grammatica lessicale C

## <a name="tokens"></a><a name="tokens"></a> token

*`token`* :\
&emsp;*`keyword`*\
&emsp;*`identifier`*\
&emsp;*`constant`*\
&emsp;*`string-literal`*\
&emsp;*`punctuator`*

*`preprocessing-token`* :\
&emsp;*`header-name`*\
&emsp;*`identifier`*\
&emsp;*`pp-number`*\
&emsp;*`character-constant`*\
&emsp;*`string-literal`*\
&emsp;*`punctuator`*\
&emsp;ogni carattere diverso da uno spazio vuoto che non può essere uno dei precedenti

## <a name="keywords"></a><a name="keywords"></a> Parole

*`keyword`* : uno tra \
&emsp;**`auto`** **`break`** **`case`** **`char`** **`const`** **`continue`**\
&emsp;**`default`** **`do`** **`double`** **`else`** **`enum`** **`extern`**\
&emsp;**`float`** **`for`** **`goto`** **`if`** **`inline`** **`int`** **`long`**\
&emsp;**`register`** **`restrict`** **`return`** **`short`** **`signed`**\
&emsp;**`sizeof`** **`static`** **`struct`** **`switch`** **`typedef`** **`union`**\
&emsp;**`unsigned`** **`void`** **`volatile`** **`while`** **`_Alignas`**\
&emsp;**`_Alignof`** **`_Atomic`** **`_Bool`** **`_Complex`** **`_Generic`**\
&emsp;**`_Imaginary`** **`_Noreturn`** **`_Static_assert`**\
&emsp;**`_Thread_local`**

Per un elenco di altre parole chiave specifiche di Microsoft, vedere [parole chiave di C](./c-keywords.md).

## <a name="identifiers"></a><a name="identifiers"></a> Identificatori

*`identifier`* :\
&emsp;*`identifier-nondigit`*\
&emsp;*`identifier`* *`identifier-nondigit`*\
&emsp;*`identifier`* *`digit`*

*`identifier-nondigit`* :\
&emsp;*`nondigit`*\
&emsp;*`universal-character-name`*\
&emsp;altri caratteri definiti dall'implementazione

*`nondigit`* : uno tra \
&emsp;**`_`** **`a`** **`b`** **`c`** **`d`** **`e`** **`f`** **`g`** **`h`** **`i`** **`j`** **`k`** **`l`** **`m`**\
&emsp;**`n`** **`o`** **`p`** **`q`** **`r`** **`s`** **`t`** **`u`** **`v`** **`w`** **`x`** **`y`** **`z`**\
&emsp;**`A`** **`B`** **`C`** **`D`** **`E`** **`F`** **`G`** **`H`** **`I`** **`J`** **`K`** **`L`** **`M`**\
&emsp;**`N`** **`O`** **`P`** **`Q`** **`R`** **`S`** **`T`** **`U`** **`V`** **`W`** **`X`** **`Y`** **`Z`**

*`digit`* : uno tra \
&emsp;**`0`** **`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`** **`8`** **`9`**

*`universal-character-name`* :\
&emsp;**`\u`** *`hex-quad`*\
&emsp;**`\U`** *`hex-quad`* *`hex-quad`*

*`hex-quad`* :\
&emsp;*`hexadecimal-digit`* *`hexadecimal-digit`* *`hexadecimal-digit`* *`hexadecimal-digit`*

## <a name="constants"></a><a name="constants"></a> Costanti

*`constant`* :\
&emsp;*`integer-constant`*\
&emsp;*`floating-constant`*\
&emsp;*`enumeration-constant`*\
&emsp;*`character-constant`*

*`integer-constant`* :\
&emsp;*`decimal-constant`**`integer-suffix`* <sub>consenso esplicito</sub>\
&emsp;*`binary-constant`*<sup>1</sup> *`integer-suffix`* <sub>opt</sub>\
&emsp;*`octal-constant`**`integer-suffix`* <sub>consenso esplicito</sub>\
&emsp;*`hexadecimal-constant`**`integer-suffix`* <sub>consenso esplicito</sub>

*`decimal-constant`* :\
&emsp;*`nonzero-digit`*\
&emsp;*`decimal-constant`* *`digit`*

*`binary-constant`* : <sup>1</sup>\
&emsp;*`binary-prefix`* *`binary-digit`*\
&emsp;*`binary-constant`* *`binary-digit`*

*`binary-prefix`*<sup>1</sup>: uno tra \
&emsp;**`0b`** **`0B`**

*`binary-digit`*<sup>1</sup>: uno tra \
&emsp;**`0`** **`1`**

*`octal-constant`* :\
&emsp;**`0`**\
&emsp;*`octal-constant`* *`octal-digit`*

*`hexadecimal-constant`* :\
&emsp;*`hexadecimal-prefix`* *`hexadecimal-digit`*\
&emsp;*`hexadecimal-constant`* *`hexadecimal-digit`*

*`hexadecimal-prefix`* : uno tra \
&emsp;**`0x`** **`0X`**

*`nonzero-digit`* : uno tra \
&emsp;**`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`** **`8`** **`9`**

*`octal-digit`* : uno tra \
&emsp;**`0`** **`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`**

*`hexadecimal-digit`* : uno tra \
&emsp;**`0`** **`1`** **`2`** **`3`** **`4`** **`5`** **`6`** **`7`** **`8`**\
&emsp;**`a`** **`b`** **`c`** **`d`** **`e`** **`f`**\
&emsp;**`A`** **`B`** **`C`** **`D`** **`E`** **`F`**

*`integer-suffix`* :\
&emsp;*`unsigned-suffix`**`long-suffix`* <sub>consenso esplicito</sub>\
&emsp;*`unsigned-suffix`**`long-long-suffix`* <sub>consenso esplicito</sub>\
&emsp;*`long-suffix`**`unsigned-suffix`* <sub>consenso esplicito</sub>\
&emsp;*`long-long-suffix`**`unsigned-suffix`* <sub>consenso esplicito</sub>

*`unsigned-suffix`* : uno tra \
&emsp;**`u`** **`U`**

*`long-suffix`* : uno tra \
&emsp;**`l`** **`L`**

*`long-long-suffix`* : uno tra \
&emsp;**`ll`** **`LL`**

*`floating-constant`* :\
&emsp;*`decimal-floating-constant`*\
&emsp;*`hexadecimal-floating-constant`*

*`decimal-floating-constant`* :\
&emsp;*`fractional-constant`**`exponent-part`* <sub>opt</sub> *`floating-suffix`* <sub>opt</sub>\
&emsp;*`digit-sequence`**`exponent-part`* *`floating-suffix`* <sub>consenso esplicito</sub>

*`hexadecimal-floating-constant`* :\
&emsp;*`hexadecimal-prefix`* opt *`hexadecimal-fractional-constant`* *`binary-exponent-part`* <sub>opt</sub> *`floating-suffix`* <sub>opt</sub>\
&emsp;*`hexadecimal-prefix`**`hexadecimal-digit-sequence`* *`binary-exponent-part`* *`floating-suffix`* <sub>consenso esplicito</sub>

*`fractional-constant`* :\
&emsp;*`digit-sequence`*<sub>consenso esplicito</sub> **`.`***`digit-sequence`*\
&emsp;*`digit-sequence`*  **`.`**

*`exponent-part`* :\
&emsp;**`e`***`sign`* <sub>consenso esplicito</sub>*`digit-sequence`*\
&emsp;**`E`***`sign`* <sub>consenso esplicito</sub>*`digit-sequence`*

*`sign`* : uno tra \
&emsp;**`+`** **`-`**

*`digit-sequence`* :\
&emsp;*`digit`*\
&emsp;*`digit-sequence`* *`digit`*

*`hexadecimal-fractional-constant`* :\
&emsp;*`hexadecimal-digit-sequence`*<sub>consenso esplicito</sub> **`.`***`hexadecimal-digit-sequence`*\
&emsp;*`hexadecimal-digit-sequence`*  **`.`**

*`binary-exponent-part`* :\
&emsp;**`p`***`sign`* <sub>consenso esplicito</sub>*`digit-sequence`*\
&emsp;**`P`***`sign`* <sub>consenso esplicito</sub>*`digit-sequence`*

*`hexadecimal-digit-sequence`* :\
&emsp;*`hexadecimal-digit`*\
&emsp;*`hexadecimal-digit-sequence`* *`hexadecimal-digit`*

*`floating-suffix`* : uno tra \
&emsp;**`f`** **`l`** **`F`** **`L`**

*`enumeration-constant`* :\
&emsp;*`identifier`*

*`character-constant`* :\
&emsp;**`'`** *`c-char-sequence`* **`'`**\
&emsp;**`L'`** *`c-char-sequence`* **`'`**

*`c-char-sequence`* :\
&emsp;*`c-char`*\
&emsp;*`c-char-sequence`* *`c-char`*

*`c-char`* :\
&emsp;Qualsiasi membro del set di caratteri di origine eccetto le virgolette singole ( **`'`** ), la barra rovesciata ( **`\`** ) o il carattere di nuova riga \
&emsp;*`escape-sequence`*

*`escape-sequence`* :\
&emsp;*`simple-escape-sequence`*\
&emsp;*`octal-escape-sequence`*\
&emsp;*`hexadecimal-escape-sequence`*\
&emsp;*`universal-character-name`*

*`simple-escape-sequence`* : uno tra \
&emsp;**`\a`** **`\b`** **`\f`** **`\n`** **`\r`** **`\t`** **`\v`**\
&emsp;**`\'`** **`\"`** **`\\`** **`\?`**

*`octal-escape-sequence`* :\
&emsp;**`\`** *`octal-digit`*\
&emsp;**`\`** *`octal-digit`* *`octal-digit`*\
&emsp;**`\`** *`octal-digit`* *`octal-digit`* *`octal-digit`*

*`hexadecimal-escape-sequence`* :\
&emsp;**`\x`** *`hexadecimal-digit`*\
&emsp;*`hexadecimal-escape-sequence`* *`hexadecimal-digit`*

## <a name="string-literals"></a><a name="string-literals"></a> Valori letterali stringa

*`string-literal`* :\
&emsp;*`encoding-prefix`**`s-char-sequence`* <sub>consenso esplicito</sub>**`"`**

*`encoding-prefix`* :\
&emsp;**`u8`**\
&emsp;**`u`**\
&emsp;**`U`**\
&emsp;**`L`**

*`s-char-sequence`* :\
&emsp;*`s-char`*\
&emsp;*`s-char-sequence`* *`s-char`*

*`s-char`* :\
&emsp;qualsiasi membro del set di caratteri di origine eccetto le virgolette doppie ( **`"`** ), la barra rovesciata ( **`\`** ) o il carattere di nuova riga \
&emsp;*`escape-sequence`*

## <a name="punctuators"></a><a name="punctuators"></a> Punteggiatura

*`punctuator`* : uno tra \
&emsp;**`[`** **`]`** **`(`** **`)`** **`{`** **`}`** **`.`** **`->`**\
&emsp;**`++`** **`--`** **`&`** **`*`** **`+`** **`-`** **`~`** **`!`**\
&emsp;**`/`** **`%`** **`<<`** **`>>`** **`<`** **`>`** **`<=`** **`>=`** **`==`**\
&emsp;**`!=`** **`^`** **`|`** **`&&`** **`||`** **`?`** **`:`** **`;`** **`...`**\
&emsp;**`=`** **`*=`** **`/=`** **`%=`** **`+=`** **`-=`** **`<<=`** **`>>=`**\
&emsp;**`&=`** **`^=`** **`|=`** **`,`** **`#`** **`##`**\
&emsp;**`<:`** **`:>`** **`<%`** **`%>`** **`%:`** **`%:%:`**

## <a name="header-names"></a>Nomi dell'intestazione

*`header-name`* :\
&emsp;**`<`** *`h-char-sequence`* **`>`**\
&emsp;**`"`** *`q-char-sequence`* **`"`**

*`h-char-sequence`* :\
&emsp;*`h-char`*\
&emsp;*`h-char-sequence`* *`h-char`*

*`h-char`* :\
&emsp;qualsiasi membro del set di caratteri di origine eccetto il carattere di nuova riga e **`>`**

*`q-char-sequence`* :\
&emsp;*`q-char`*\
&emsp;*`q-char-sequence`* *`q-char`*

*`q-char`* :\
&emsp;qualsiasi membro del set di caratteri di origine eccetto il carattere di nuova riga e **`"`**

## <a name="preprocessing-numbers"></a>Numeri di pre-elaborazione

*`pp-number`* :\
&emsp;*`digit`*\
&emsp;**`.`** *`digit`*\
&emsp;*`pp-number`* *`digit`* \
&emsp;*`pp-number`* *`identifier-nondigit`*\
&emsp;*`pp-number`* **`e`** *`sign`*\
&emsp;*`pp-number`* **`E`** *`sign`*\
&emsp;*`pp-number`* **`p`** *`sign`*\
&emsp;*`pp-number`* **`P`** *`sign`*\
&emsp;*`pp-number`* **`.`**

<sup>1</sup> *`binary-constant`* , *`binary-prefix`* e *`binary-digit`* sono estensioni specifiche di Microsoft.

## <a name="see-also"></a>Vedere anche

[Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md)
