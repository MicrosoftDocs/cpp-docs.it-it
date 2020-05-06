---
title: Riepilogo di token
ms.date: 11/04/2016
ms.assetid: 2978cbf6-e66e-46fc-9938-caa052f2ccf7
ms.openlocfilehash: 4fdc1cf4c4e5a89cc9ecf029e64b6eb5422cd6a3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62345136"
---
# <a name="summary-of-tokens"></a>Riepilogo di token

*token*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parola chiave*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*valore letterale stringa*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*operatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*punctuator*

*preprocessing-token*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Nome intestazione*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*numero PP*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*carattere-costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*valore letterale stringa*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*operator punctuator*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;ogni carattere diverso dallo spazio che non può essere uno di quelli precedenti

*nome intestazione*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**\<**  *percorso-spec*  **>**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**"**  *Specifica percorso*  **"**

*percorso-spec*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Percorso file valido

*numero PP*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cifre*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.** *digit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pp-number* *digit* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pp-number* *nondigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pp-number*  **e**  *sign*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*PP-numero*  **E**  *segno*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pp-number*  **.**

## <a name="see-also"></a>Vedere anche

[Grammatica lessicale](../c-language/lexical-grammar.md)
