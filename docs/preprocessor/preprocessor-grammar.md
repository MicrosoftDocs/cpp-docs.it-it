---
title: Grammatica del preprocessore | Microsoft Docs
ms.custom: ''
ms.date: 09/04/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- preprocessor
- grammar, preprocessor
- preprocessor, grammar
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 56df4d0bfdaf87ace87a9f9dcbde85166929e642
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43766116"
---
# <a name="preprocessor-grammar"></a>Grammatica del preprocessore

*controllo linea*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#define** *identificatore* *token-string*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#define** <em>identificatore</em>**(** *identificatore*<sub>opt</sub> **,** ... **,** *identifier*<sub>opt</sub> **)** *token-string*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **"** *path-spec* **"**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#include** **\<** *path-spec* **>**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#line** *digit-sequence***"** *filename* **"**<sub>opt  </sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#undef** *identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#error** *token-string*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#pragma** *token-string*

*constant-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**definita (** *identificatore* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**definite** *identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi altra espressione costante

*condizionale* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Se parti* *elif parti*<sub>opt</sub> *parte else*<sub>opt</sub> *endif inline*

*Se parti* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Se-line* *testo*

*Se-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#if** *espressione costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#ifdef** *identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#ifndef** *identificatore*

*elif parti* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elif-line* *testo*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parti di elif* *elif-line* *testo*

*elif-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#elif** *espressione costante*

*parte else* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Else-line* *testo*

*Else-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#else**

*endif-line* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**#endif**

*Digit-sequence* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cifra*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sequenza di cifre* *cifra*

*cifra* : uno dei<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**

*token-string* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Stringa di token

*token* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Parola chiave*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Identificatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Costante*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Operatore*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segno di punteggiatura*

*nome del file* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Nome file del sistema operativo legale

*Path-spec* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Percorso file valido

*testo* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Qualsiasi sequenza di testo

> [!NOTE]
> I non terminal seguenti vengono espanse nel [convenzioni lessicali](../cpp/lexical-conventions.md) sezione il *riferimenti al linguaggio C++*: *costante*, *espressione costante* , *identificatore*, *parola chiave*, *operatore*, e *segno di punteggiatura*.

## <a name="see-also"></a>Vedere anche

[Riepilogo grammatica (C/C++)](../preprocessor/grammar-summary-c-cpp.md)