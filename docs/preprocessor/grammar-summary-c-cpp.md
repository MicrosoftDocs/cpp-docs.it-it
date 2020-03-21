---
title: Riepilogo della grammatica del preprocessore (C/C++)
description: Definisce e descrive la sintassi della grammaticaC++ del preprocessore Microsoft C/Compiler (MSVC).
ms.date: 08/29/2019
helpviewer_keywords:
- grammar
- preprocessor, grammar
ms.assetid: 0acb6e9b-364c-4ef8-ace4-7be980521121
ms.openlocfilehash: 68e5f09acfc6444afb46bcbc0f7e9db10b04afed
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80076867"
---
# <a name="preprocessor-grammar-summary-cc"></a>Riepilogo della grammatica del preprocessore (C/C++)

Questo articolo descrive la grammatica formale del preprocessore C++ C e. Viene illustrata la sintassi delle direttive e degli operatori di pre-elaborazione. Per ulteriori informazioni, vedere direttive [preprocessore](../preprocessor/preprocessor.md) e [pragma e la parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md).

## <a name="definitions-for-the-grammar-summary"></a><a name="definitions"></a>Definizioni per il riepilogo della grammatica

I terminali sono endpoint in una definizione di sintassi. Non è possibile nessun'altra soluzione. I terminali includono il set di parole riservate e di identificatori definiti dall'utente.

I non terminali sono segnaposto nella sintassi. La maggior parte viene definita altrove in questo riepilogo della sintassi. Le definizioni possono essere ricorsive. I seguenti non terminali sono definiti nella sezione [convenzioni lessicali](../cpp/lexical-conventions.md) delle informazioni di  *C++ riferimento sul linguaggio*:

*costante*, *costante-espressione*, *identificatore*, *parola chiave*, *operatore*, *punteggiatura*

Un componente facoltativo viene indicato da <sub>opt</sub> con indice. La sintassi seguente, ad esempio, indica un'espressione facoltativa racchiusa tra parentesi graffe:

**{** *Expression*<sub>opt</sub> **}**

## <a name="document-conventions"></a><a name="conventions"></a>Convenzioni documento

Le convenzioni utilizzano gli attributi del tipo di carattere differenti per i diversi componenti della sintassi. I simboli e i caratteri sono i seguenti:

| Attributo | Descrizione |
|---------------|-----------------|
| *non terminale* | Il tipo corsivo indica non terminali. |
| **#include** | I terminali in grassetto sono parole riservate letterali e simboli che devono essere inseriti come indicato. I caratteri in questo contesto fanno sempre distinzione tra maiuscole e minuscole. |
| <sub>opt</sub> | I non terminali seguiti da <sub>opt</sub> sono sempre facoltativi.|
| carattere tipografico predefinito | I caratteri nel set descritto o elencato in questo carattere tipografico possono essere utilizzati come terminali nelle istruzioni. |

I due punti ( **:** ) che seguono un non terminale introducono la definizione di questo. Le definizioni alternative sono elencate in righe separate.

Nei blocchi di sintassi del codice, questi simboli nel carattere tipografico predefinito hanno un significato speciale:

| Simbolo | Descrizione |
|---|---|
| \[ ] | Le parentesi quadre racchiudono un elemento facoltativo. |
| {\|} | Le parentesi graffe racchiudono elementi alternativi, separati da barre verticali. |
| ... | Indica che il modello di elemento precedente può essere ripetuto. |

Nei blocchi di sintassi del codice, le virgole (`,`), i punti (`.`), i punti e virgola (`;`), i due punti (`:`), le parentesi (`( )`), le virgolette doppie (`"`) e le virgolette singole (`'`) sono valori letterali.

## <a name="preprocessor-grammar"></a><a name="grammar"></a>Grammatica del preprocessore

*riga di controllo*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#define** *identificatore* della *stringa di token*<sub>\</sub>
&nbsp;&nbsp;&nbsp;identificatore **#define** *identifier* &nbsp; **(** *identificatore*<sub>opz</sub> **...** **,** *identificatore*<sub>opt</sub> **)** la *stringa di token*<sub>opt</sub>\
&nbsp;&nbsp;&nbsp;&nbsp; **#include** **"** _path-spec_ **"** \
&nbsp;&nbsp; **&nbsp;&nbsp;#include\<** _percorso-spec_ **>** \
&nbsp;&nbsp;&nbsp;&nbsp; **#line** **"** _filename_ **"** <sub>opt</sub> per la *sequenza di cifre*\
&nbsp;&nbsp;&nbsp;identificatore **#undef** *identifier* &nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp; **#error** *stringa di token*\
&nbsp;&nbsp;&nbsp;&nbsp; **#pragma** *stringa di token*

*espressione costante*: \
&nbsp;&nbsp;&nbsp;**definito &nbsp;(** *identificatore* **)** \
&nbsp;&nbsp;&nbsp;identificatore **definito** *identifier* &nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi altra espressione costante

*condizionale*: \
&nbsp;&nbsp;&nbsp;&nbsp;*if-part* *Elif-* Parts<sub>opt</sub> *else-part*<sub>opt</sub> *endif-line*

*if-part*: \
&nbsp;&nbsp;&nbsp;&nbsp;*testo* della *riga if*

*if-line*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#if** *espressione costante*\
&nbsp;&nbsp;&nbsp;identificatore **#ifdef** *identifier* &nbsp;\
&nbsp;&nbsp;&nbsp;identificatore **#ifndef** *identifier* &nbsp;

*parti Elif*: \
&nbsp;&nbsp;&nbsp;&nbsp;*testo* della *riga Elif*\
&nbsp;&nbsp;&nbsp;&nbsp;*Elif-Parts* *Elif-line* *Text*

*Elif-riga*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#elif** *espressione costante*

*else-parte*: \
&nbsp;&nbsp;&nbsp;*testo* della *riga &nbsp;else*

*else-riga*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#else**

*endif-riga*: \
&nbsp;&nbsp;&nbsp;&nbsp; **#endif**

*sequenza numerica*: \
&nbsp;&nbsp;&nbsp;*cifra* &nbsp;\
&nbsp;&nbsp;&nbsp;digit *di sequenza* *digit* &nbsp;

*digit*: uno tra \
&nbsp;&nbsp;&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**

*stringa di token*: \
&nbsp;&nbsp;&nbsp;stringa di token &nbsp;

*token*: \
&nbsp;&nbsp;&nbsp;*parola chiave* &nbsp;\
&nbsp;&nbsp;&nbsp;*identificatore* &nbsp;\
&nbsp;&nbsp;&nbsp;*costante* &nbsp;\
&nbsp;&nbsp;&nbsp;*operatore* &nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp;*punctuator*

*nome file*: \
&nbsp;&nbsp;&nbsp;&nbsp;nome file del sistema operativo valido

*percorso-spec*: \
&nbsp;&nbsp;&nbsp;&nbsp;Percorso file valido

*testo*: \
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi sequenza di testo

> [!NOTE]
> I seguenti non terminali sono espansi nella sezione [convenzioni lessicali](../cpp/lexical-conventions.md) della Guida di  *C++ riferimento al linguaggio*: *costante*, *espressione costante*, *identificatore*, *parola chiave*, *operatore*e *punteggiatura*.

## <a name="see-also"></a>Vedere anche

[Riferimenti perC++ il preprocessore C/](../preprocessor/c-cpp-preprocessor-reference.md)
