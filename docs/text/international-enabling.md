---
title: Abilitazione di risorse internazionali
ms.date: 11/04/2016
helpviewer_keywords:
- globalization [C++], character sets
- strings [C++], international enabling
- localization [C++], character sets
- MBCS [C++], enabling
- Unicode [C++], enabling
ms.assetid: b077f4ca-5865-40ef-a46e-d9e4d686ef21
ms.openlocfilehash: 22f2dba49e894e93cb6791d76a65730f3269199e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62410616"
---
# <a name="international-enabling"></a>Abilitazione di risorse internazionali

Codice C e C++ più tradizionale ipotizza la manipolazione di tipo stringa e carattere che non funzionano anche per le applicazioni interne. Anche se sia la libreria run-time che MFC supporta MBCS o Unicode, è ancora presente lavoro significa poter svolgere. A tal fine, questa sezione viene illustrato il significato di "abilitazione internazionale" in Visual C++:

- Unicode e MBCS saranno disponibili tramite tipi di dati trasferibili in MFC elenchi di parametri di funzione e tipi restituiti. Questi tipi sono definiti in modo condizionale nel modo appropriato, a seconda del fatto che la compilazione definisce il simbolo `_UNICODE` o il simbolo `_MBCS` (ovvero DBCS). Varianti diverse di librerie MFC sono collegate automaticamente con l'applicazione, a seconda di quale di questi due simboli definisce la compilazione.

- Codice di libreria di classi Usa funzioni di runtime portabile e altri approcci per assicurare il corretto funzionamento MBCS o Unicode.

- È comunque necessario gestire determinati tipi di attività di internazionalizzazione nel codice:

   - Usare le stesse funzioni runtime portabile che rendono MFC in entrambi gli ambienti.

   - Apportare in entrambi gli ambienti, le stringhe letterali e caratteri utilizzando la `_T` macro. Per altre informazioni, vedere [mapping testo generico in Tchar. h](../text/generic-text-mappings-in-tchar-h.md).

   - Adottare le precauzioni quando analisi di stringhe in MBCS. Queste precauzioni non sono necessarie in Unicode. Per altre informazioni, vedere [suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md).

   - Prestare attenzione se si combinano i caratteri Unicode (16 bit) e ANSI (8 bit) all'interno dell'applicazione. È possibile utilizzare caratteri ANSI in alcune parti del programma e i caratteri Unicode in altri casi, ma è possibile combinarli nella stessa stringa.

   - Non le stringhe hardcoded nell'applicazione. Al contrario, renderli risorse STRINGTABLE aggiungendole al file RC dell'applicazione. L'applicazione può quindi essere localizzata senza richiedere modifiche al codice sorgente o la ricompilazione. Per altre informazioni sulle risorse STRINGTABLE, vedere [Editor stringhe](../windows/string-editor.md).

> [!NOTE]
>  Set di caratteri europei e MBCS hanno alcuni caratteri, ad esempio lettere accentate, con codici di caratteri maggiore di 0x80. Poiché gran parte del codice Usa caratteri con segno, per i caratteri maggiori 0x80 viene esteso con segno quando convertito in **int**. Infatti, un problema per l'indicizzazione della matrice di caratteri esteso con segno, da un valore negativo, indicizza esterne alla matrice. Anche i linguaggi che usano il formato MBCS, ad esempio il giapponese sono univoci. Perché un carattere può essere costituito da 1 o 2 byte, è sempre necessario utilizzare entrambi i byte nello stesso momento.

## <a name="see-also"></a>Vedere anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Strategie di internazionalizzazione](../text/internationalization-strategies.md)
