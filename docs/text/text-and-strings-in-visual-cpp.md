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
ms.openlocfilehash: 80b7139996fddc82b206828d4a036922fa1446d5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167602"
---
# <a name="text-and-strings-in-visual-c"></a>Testo e stringhe in Visual C++

Un aspetto importante dello sviluppo di applicazioni per i mercati internazionali è la rappresentazione adeguata dei set di caratteri locali. Il set di caratteri ASCII definisce i caratteri nell'intervallo da 0x00 a 0x7F. Sono presenti altri set di caratteri, principalmente europei, che definiscono i caratteri compresi nell'intervallo da 0x00 a 0x7F in modo identico al set di caratteri ASCII e definiscono anche un set di caratteri esteso da 0x80 a 0xFF. Pertanto, un set di caratteri a 8 bit, a byte singolo (SBCS) è sufficiente per rappresentare il set di caratteri ASCII, nonché i set di caratteri per molte lingue europee. Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri di quelli che possono essere rappresentati da uno schema di codifica a byte singolo e pertanto richiedono la codifica con set di caratteri multibyte (MBCS).

## <a name="in-this-section"></a>Contenuto della sezione

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
Viene illustrato C++ il supporto visivo per la programmazione Unicode e MBCS.

[Supporto per Unicode](../text/support-for-unicode.md)<br/>
Descrive Unicode, una specifica per il supporto di tutti i set di caratteri, inclusi i set di caratteri che non possono essere rappresentati in un singolo byte.

[Supporto per set di caratteri multibyte (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)<br/>
Viene illustrato MBCS, un'alternativa a Unicode per supportare i set di caratteri, ad esempio giapponese e cinese, che non possono essere rappresentati in un singolo byte.

[Mapping di testo generico in tchar.h](../text/generic-text-mappings-in-tchar-h.md)<br/>
Fornisce mapping di testo generico specifici di Microsoft per molti tipi di dati, routine e altri oggetti.

[Procedura: Convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)<br/>
Viene illustrato come convertire vari tipi C++ di stringhe visive in altre stringhe.

## <a name="related-sections"></a>Sezioni correlate

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
Viene illustrato il supporto internazionale nella libreria di runtime del linguaggio C.

[Esempi internazionali](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/International)<br/>
Fornisce collegamenti a esempi che illustrano l'internazionalizzazione in C++visuale.

[Stringhe relative a lingue e paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
Fornisce le stringhe relative alla lingua e al paese nella libreria di runtime C.
