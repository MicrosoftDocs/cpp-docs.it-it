---
title: Testo e stringhe in Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- globalization [C++], character sets
- programming [C++], international
- multiple language support [C++]
- Unicode [C++]
- international applications [C++], about international applications
- portability [C++]
- translation [C++], character sets
- non-European characters [C++]
- character sets [C++]
- globalization [C++]
- Japanese characters [C++]
- Kanji character support [C++]
- local character sets [C++]
- ASCII characters [C++]
- character sets [C++], about character sets
- localization [C++], character sets
- translating code [C++]
- localization [C++]
- character sets [C++], non-European
- portability [C++], character sets
- MBCS [C++], international programming
ms.assetid: a1bb27ac-abe5-4c6b-867d-f761d4b93205
ms.openlocfilehash: c6083fcf9db8236df15d1cb5e7de4cc15fe5916e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411799"
---
# <a name="text-and-strings-in-visual-c"></a>Testo e stringhe in Visual C++

Un aspetto importante dello sviluppo di applicazioni per mercati internazionali è la rappresentazione adeguata di set di caratteri locali. Il set di caratteri ASCII definisce i caratteri nell'intervallo da 0x00 a 0x7F. Sono presenti altri set di caratteri, principalmente europei, che definiscono i caratteri all'interno dell'intervallo da 0x00 a 0x7F in modo identico al set di caratteri ASCII e anche definire un carattere esteso impostato da 0x80 a 0xFF. Di conseguenza, un set di 8 bit, i caratteri a byte singolo (SBCS) è sufficiente per rappresentare il set di caratteri ASCII, nonché i set di caratteri di molte lingue europee. Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri rispetto a un schema di codifica a byte singolo possa rappresentare e pertanto richiedono set di caratteri multibyte (MBCS), la codifica.

## <a name="in-this-section"></a>In questa sezione

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
Viene descritto il supporto di Visual C++ per la programmazione MBCS e Unicode.

[Supporto per Unicode](../text/support-for-unicode.md)<br/>
Il formato Unicode è una specifica per il supporto di tutti i set di caratteri, inclusi set di caratteri che non può essere rappresentato in un singolo byte.

[Supporto per set di caratteri Multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)<br/>
Caratteri MBCS, un'alternativa a Unicode per il supporto di set di caratteri, come quello giapponese o cinese, che non possono essere rappresentato in un singolo byte.

[Mapping di testo generico in tchar.h](../text/generic-text-mappings-in-tchar-h.md)<br/>
Fornisce i mapping testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti.

[Procedura: Convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)<br/>
Viene illustrato come convertire diversi tipi di stringhe Visual C++ in altre stringhe.

## <a name="related-sections"></a>Sezioni correlate

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
Viene descritto il supporto internazionale della libreria di runtime C.

[Esempi internazionali](https://github.com/Microsoft/VCSamples)<br/>
Vengono forniti collegamenti a esempi di internazionalizzazione di Visual C++.

[Stringhe relative a lingue e paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
Fornisce le stringhe lingua e paese/area geografica della libreria di runtime C.
