---
title: Grammatica del preprocessore
ms.date: 08/29/2019
helpviewer_keywords:
- preprocessor
- grammar, preprocessor
- preprocessor, grammar
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
ms.openlocfilehash: f0916e3cc9bbdb398db693286dacc4517df03557
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222265"
---
# <a name="preprocessor-grammar"></a>Grammatica del preprocessore

*riga di controllo*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#define** *identificatore* di *stringa di token* <sub>consenso esplicito</sub>\
&nbsp;&nbsp;&nbsp;&nbsp; **#define** *identificatore* di **(** &#x2800;identificatore&#x200B;<sub>opz</sub> ... **,** *identificatore* di &#x200B; <sub></sub>opt&#x2800; **)** *token-stringa*<sub>opz</sub>\
&nbsp;&nbsp;&nbsp;&nbsp; **#include** **"** _percorso-spec_ **"** \
&nbsp;&nbsp;&nbsp;&nbsp; **#include** _percorso-spec_ **\<** **>** \
&nbsp;&nbsp;&nbsp;&nbsp; **#line** *sequenza numerica* **"** _nome file_ **"** &#x200B; <sub>consenso esplicito</sub>  \
&nbsp;&nbsp;&nbsp;&nbsp; **#undef** *identificatore* di\
&nbsp;&nbsp;&nbsp;&nbsp; **#error** *stringa di token*\
&nbsp;&nbsp;&nbsp;&nbsp; **#pragma** *token-string*

*espressione costante*: \
&nbsp;&nbsp;&nbsp;&nbsp;**definito (** &#x2800;*identificatore*&#x2800; **)** \
&nbsp;&nbsp;&nbsp;&nbsp;**definito** *identificatore* di\
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi altra espressione costante

*condizionale*: \
&nbsp;&nbsp;&nbsp;&nbsp;*if-part* *parti Elif* <sub>consenso esplicito</sub> *else-parte* <sub>consenso esplicito</sub> *endif-riga*

*if-part*: \
&nbsp;&nbsp;&nbsp;&nbsp;*if-line* *text*

*if-line*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#if** *espressione costante*\
&nbsp;&nbsp;&nbsp;&nbsp; **#ifdef** *identificatore* di\
&nbsp;&nbsp;&nbsp;&nbsp; **#ifndef** *identifier*

*parti Elif*: \
&nbsp;&nbsp;&nbsp;&nbsp;*elif-linea* *testo*\
&nbsp;&nbsp;&nbsp;&nbsp;*elif-parts* *elif-line* *text*

*Elif-riga*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#elif** *constant-expression*

*else-parte*: \
&nbsp;&nbsp;&nbsp;&nbsp;*else-line* *text*

*else-riga*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#else**

*endif-riga*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#endif**

*sequenza numerica*: \
&nbsp;&nbsp;&nbsp;&nbsp;*cifre*\
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*digit*: uno tra \
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**

*stringa di token*: \
&nbsp;&nbsp;&nbsp;&nbsp;Stringa di token

*token*: \
&nbsp;&nbsp;&nbsp;&nbsp;*parola chiave*\
&nbsp;&nbsp;&nbsp;&nbsp;*identificatore*\
&nbsp;&nbsp;&nbsp;&nbsp;*costante*\
&nbsp;&nbsp;&nbsp;&nbsp;*operatore*\
&nbsp;&nbsp;&nbsp;&nbsp;*punctuator*

*nome file*: \
&nbsp;&nbsp;&nbsp;&nbsp;Nome file del sistema operativo valido

*percorso-spec*: \
&nbsp;&nbsp;&nbsp;&nbsp;Percorso file valido

*testo*: \
&nbsp;&nbsp;&nbsp;&nbsp;Qualsiasi sequenza di testo

> [!NOTE]
> I seguenti non terminali sono espansi nella sezione [convenzioni lessicali](../cpp/lexical-conventions.md) della Guida di  *C++ riferimento al linguaggio*: *costante*, *espressione costante*, *identificatore*, *parola chiave*, *operatore*e  *punteggiatore*.

## <a name="see-also"></a>Vedere anche

[Riepilogo della grammatica (CC++/)](../preprocessor/grammar-summary-c-cpp.md)
