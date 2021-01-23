---
title: Riepilogo della grammatica del preprocessore (C/C++)
description: Definisce e descrive la sintassi della grammatica del preprocessore del compilatore Microsoft C/C++ (MSVC).
ms.date: 01/22/2021
helpviewer_keywords:
- grammar
- preprocessor, grammar
ms.openlocfilehash: dbe46a67337bf55cb98100878dedb8c92120472b
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713636"
---
# <a name="preprocessor-grammar-summary-cc"></a>Riepilogo della grammatica del preprocessore (C/C++)

Questo articolo descrive la grammatica formale del preprocessore C e C++. Viene illustrata la sintassi delle direttive e degli operatori di pre-elaborazione. Per ulteriori informazioni, vedere direttive [preprocessore](../preprocessor/preprocessor.md) e [pragma e le `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md).

## <a name="definitions-for-the-grammar-summary"></a><a name="definitions"></a> Definizioni per il riepilogo della grammatica

I terminali sono endpoint in una definizione di sintassi. Non è possibile nessun'altra soluzione. I terminali includono il set di parole riservate e di identificatori definiti dall'utente.

I non terminali sono segnaposto nella sintassi. La maggior parte viene definita altrove in questo riepilogo della sintassi. Le definizioni possono essere ricorsive. I seguenti non terminali sono definiti nella sezione [convenzioni lessicali](../cpp/lexical-conventions.md) dei riferimenti al *linguaggio C++*:

*`constant`*, *`constant-expression`*, *`identifier`*, *`keyword`*, *`operator`*, *`punctuator`*

Un componente facoltativo è indicato dall' <sub>opt</sub>con indice. La sintassi seguente, ad esempio, indica un'espressione facoltativa racchiusa tra parentesi graffe:

**`{`***`expression`* <sub>consenso esplicito</sub>**`}`**

## <a name="document-conventions"></a><a name="conventions"></a> Convenzioni documento

Le convenzioni utilizzano gli attributi del tipo di carattere differenti per i diversi componenti della sintassi. I simboli e i caratteri sono i seguenti:

| Attributo | Descrizione |
|---------------|-----------------|
| *`nonterminal`* | Il tipo corsivo indica non terminali. |
| **`#include`** | I terminali in grassetto sono parole riservate letterali e simboli che devono essere inseriti come indicato. I caratteri in questo contesto fanno sempre distinzione tra maiuscole e minuscole. |
| <sub>opt</sub> | I non terminali seguiti da <sub>opt</sub> sono sempre facoltativi.|
| carattere tipografico predefinito | I caratteri nel set descritto o elencato in questo carattere tipografico possono essere utilizzati come terminali nelle istruzioni. |

I due punti ( **`:`** ) che seguono un non terminale introducono la relativa definizione. Le definizioni alternative sono elencate in righe separate.

Nei blocchi di sintassi del codice, questi simboli nel carattere tipografico predefinito hanno un significato speciale:

| Simbolo | Descrizione |
|---|---|
| \[ ] | Le parentesi quadre racchiudono un elemento facoltativo. |
| { \| } | Le parentesi graffe racchiudono elementi alternativi, separati da barre verticali. |
| ... | Indica che il modello di elemento precedente può essere ripetuto. |

Nei blocchi di sintassi del codice, le virgole ( `,` ), i punti ( `.` ), i punti e virgola ( `;` ), i due punti ( `:` ), le parentesi ( `( )` ), le virgolette doppie ( `"` ) e le virgolette singole ( `'` ) sono valori letterali.

## <a name="preprocessor-grammar"></a><a name="grammar"></a> Grammatica del preprocessore

*`control-line`*:\
&emsp;**`#define`***`identifier`* *`token-string`* <sub>consenso esplicito</sub>\
&emsp;**`#define`***`identifier`* **`(`** *`identifier`* <sub>consenso esplicito</sub> **`,`** ... **`,`** *`identifier`* <sub>consenso esplicito</sub> **`)`** *`token-string`* <sub>consenso esplicito</sub>\
&emsp;**`#include`** **`"`**_`path-spec`_**`"`**\
&emsp;**`#include`** **`<`**_`path-spec`_**`>`**\
&emsp;**`#line`***`digit-sequence`* **`"`**_`filename`_**`"`** <sub>consenso esplicito</sub>\
&emsp;**`#undef`** *`identifier`*\
&emsp;**`#error`** *`token-string`*\
&emsp;**`#pragma`** *`token-string`*

*`constant-expression`*:\
&emsp;**`defined(`** *`identifier`* **`)`**\
&emsp;**`defined`** *`identifier`*\
&emsp;qualsiasi altra espressione costante

*`conditional`*:\
&emsp;*`if-part`**`elif-parts`* <sub>opt</sub> *`else-part`* <sub>opt</sub>*`endif-line`*

*`if-part`*:\
&emsp;*`if-line`* *`text`*

*`if-line`*:\
&emsp;**`#if`** *`constant-expression`*\
&emsp;**`#ifdef`** *`identifier`*\
&emsp;**`#ifndef`** *`identifier`*

*`elif-parts`*:\
&emsp;*`elif-line`* *`text`*\
&emsp;*`elif-parts`* *`elif-line`* *`text`*

*`elif-line`*:\
&emsp;**`#elif`** *`constant-expression`*

*`else-part`*:\
&emsp;*`else-line`* *`text`*

*`else-line`*:\
&emsp;**`#else`**

*`endif-line`*:\
&emsp;**`#endif`**

*`digit-sequence`*:\
&emsp;*`digit`*\
&emsp;*`digit-sequence`* *`digit`*

*`digit`*: uno tra \
&emsp;**`0` `1` `2` `3` `4` `5` `6` `7` `8` `9`**

*`token-string`*:\
&emsp;Stringa di *`token`*

*`token`*:\
&emsp;*`keyword`*\
&emsp;*`identifier`*\
&emsp;*`constant`*\
&emsp;*`operator`*\
&emsp;*`punctuator`*

*`filename`*:\
&emsp;Nome file del sistema operativo valido

*`path-spec`*:\
&emsp;Percorso file valido

*`text`*:\
&emsp;Qualsiasi sequenza di testo

> [!NOTE]
> I seguenti non terminali sono espansi nella sezione [convenzioni lessicali](../cpp/lexical-conventions.md) dei riferimenti al *linguaggio C++*: *`constant`* ,, *`constant-expression`* *`identifier`* , *`keyword`* , *`operator`* e *`punctuator`* .

## <a name="see-also"></a>Vedere anche

[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)
