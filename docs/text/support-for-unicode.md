---
title: Supporto per Unicode
ms.date: 01/09/2018
helpviewer_keywords:
- globalization [C++], character sets
- portable data types [MFC]
- Unicode [C++]
- wide characters [C++], about wide characters
- character sets [C++], Unicode
- localization [C++], character sets
- Unicode [C++], installing support
ms.openlocfilehash: 90c07874b61656a8bec0f9ef373f2ee8f339e994
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215374"
---
# <a name="support-for-unicode"></a>Supporto per Unicode

Unicode è una specifica per il supporto di tutti i set di caratteri, inclusi quelli che non possono essere rappresentati in un singolo byte.  Se si sta programmando per un mercato internazionale, è consigliabile usare Unicode o un [multibyte character set](../text/support-for-multibyte-character-sets-mbcss.md) (MBCS). In alternativa, codificare il programma in modo che sia possibile crearlo per modificando un'opzione.

Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Decine di migliaia di caratteri, che comprendono quasi tutti i caratteri utilizzati nell'elaborazione moderna in tutto il mondo, compresi i simboli tecnici e i caratteri di pubblicazione speciali, possono essere rappresentati in base alla specifica Unicode come un singolo carattere wide codificato utilizzando UTF-16. I caratteri che non possono essere rappresentati in un solo carattere wide possono essere rappresentati in una coppia Unicode usando la funzionalità della coppia di surrogati Unicode. Poiché quasi tutti i caratteri in uso comune sono rappresentati in UTF-16 in un singolo carattere wide a 16 bit, l'utilizzo di caratteri wide semplifica la programmazione con i set di caratteri internazionali. I caratteri wide codificati usando UTF-16LE (per Little-endian) sono il formato carattere nativo per Windows.

Una stringa di caratteri wide è rappresentata come una matrice `wchar_t[]` ed è puntata da un puntatore `wchar_t*`. È possibile rappresentare qualsiasi carattere ASCII come carattere di tipo wide, facendolo precedere dalla lettera "L". L'\0', ad esempio, è il carattere esteso di terminazione NULL (a 16 bit). In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come valore letterale stringa wide, anteponendovi la lettera "L", ad esempio L"Hello".

In genere, i caratteri di tipo wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce. Inoltre, solo le impostazioni locali possono essere rappresentate alla volta in una codifica multibyte, mentre tutti i set di caratteri del mondo sono rappresentati contemporaneamente dalla rappresentazione Unicode.

Nel framework MFC il supporto sistematico per il formato Unicode è ottenuto mediante l'uso di macro trasferibili, come indicato nella tabella seguente.

## <a name="portable-data-types-in-mfc"></a>Tipi di dati trasferibili in MFC

|Tipo di dati non trasferibile|Sostituito da questa macro|
|-----------------------------|----------------------------|
|**`char`**, **`wchar_t`**|`_TCHAR`|
|**`char*`**, `LPSTR` (Tipo di dati Win32),`LPWSTR`|`LPTSTR`|
|`const char*`, `LPCSTR` (Tipo di dati Win32),`LPCWSTR`|`LPCTSTR`|

`CString`La classe USA `_TCHAR` come base e fornisce costruttori e operatori per semplificare le conversioni. La maggior parte delle operazioni di stringa per Unicode può essere scritta usando la stessa logica impiegata per la gestione del set di caratteri ANSI di Windows, con la differenza che l'unità di base è costituita da un carattere a 16 bit anziché da un byte a 8 bit. A differenza di quanto avviene con i set di caratteri multibyte (MBCS), non è necessario né consigliabile trattare un carattere Unicode come se fosse formato da due byte distinti. È tuttavia necessario gestire la possibilità di un singolo carattere rappresentato da una coppia di surrogati di caratteri wide. In generale, non scrivere codice che presuppone che la lunghezza di una stringa sia uguale al numero di caratteri, se è di tipo Narrow o Wide, che contiene.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Usare il supporto MFC Unicode e set di caratteri multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)

- [Abilitare il formato Unicode in un programma](../text/international-enabling.md)

- [Abilita sia Unicode che MBCS nel programma](../text/internationalization-strategies.md)

- [Usare il formato Unicode per creare un programma per mercati internazionali](../text/unicode-programming-summary.md)

- [Informazioni sui vantaggi di Unicode](../text/benefits-of-character-set-portability.md)

- [Uso di wmain per passare argomenti a caratteri estesi a un programma](../text/support-for-using-wmain.md)

- [Riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)

- [Informazioni sulle mappature di testo generico per la portabilità della larghezza dei byte](../text/generic-text-mappings-in-tchar-h.md)

## <a name="see-also"></a>Vedere anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Supporto per l'uso di wmain](../text/support-for-using-wmain.md)
