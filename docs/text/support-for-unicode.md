---
title: Supporto per Unicode | Microsoft Docs
ms.custom: ''
ms.date: 1/09/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- globalization [C++], character sets
- portable data types [MFC]
- Unicode [C++]
- wide characters [C++], about wide characters
- character sets [C++], Unicode
- localization [C++], character sets
- Unicode [C++], installing support
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b4f83d4d991b55ec7151db22a9b21424914bd04
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42590195"
---
# <a name="support-for-unicode"></a>Supporto per Unicode

Unicode è una specifica per il supporto di tutti i set di caratteri, inclusi quelli che non possono essere rappresentati in un solo byte (vale a dire, la maggior parte di essi). Se per la programmazione per un mercato internazionale, è consigliabile usare entrambi Unicode o un [set di caratteri multibyte](../text/support-for-multibyte-character-sets-mbcss.md) (MBCS), o il programma di codice in modo che è possibile compilarla per tramite la modifica di un commutatore.

Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Decine di migliaia di caratteri, che comprendono quasi tutti i caratteri utilizzati nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, possono essere rappresentati in base alla specifica Unicode come un livello di singolo carattere codificati da con UTF-16. Caratteri che non possono essere rappresentati in un solo carattere wide possono essere rappresentati in una coppia di Unicode usando la funzionalità di coppia di surrogati Unicode. Poiché quasi tutti i caratteri di uso comune sono rappresentato in formato UTF-16 in un carattere wide a 16 bit singolo, con caratteri "wide" semplifica la programmazione con set di caratteri internazionali. Caratteri Wide codificati using UTF-16LE (little endian) rappresentano il formato di caratteri nativi per Windows.

Una stringa di caratteri wide è rappresentata come una matrice `wchar_t[]` ed è puntata da un puntatore `wchar_t*`. È possibile rappresentare qualsiasi carattere ASCII come carattere di tipo wide, facendolo precedere dalla lettera "L". Ad esempio, L '\0' è il carattere di terminazione NULL wide (a 16 bit). In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come valore letterale stringa wide, anteponendovi la lettera "L", ad esempio L"Hello".

In genere, i caratteri di tipo wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce. Inoltre, solo una delle impostazioni locali possono essere rappresentati in una fase in una codifica multibyte, mentre set di tutti i caratteri in tutto il mondo consente di rappresentare simultaneamente dalla rappresentazione di Unicode.

Nel framework MFC il supporto sistematico per il formato Unicode è ottenuto mediante l'uso di macro trasferibili, come indicato nella tabella seguente.

## <a name="portable-data-types-in-mfc"></a>Tipi di dati trasferibili in MFC

|Tipo di dati non trasferibile|Sostituito da questa macro|
|-----------------------------|----------------------------|
|`char`, `wchar_t`|`_TCHAR`|
|`char*`, `LPSTR` (Tipo di dati Win32), `LPWSTR`|`LPTSTR`|
|`const char*`, `LPCSTR` (Tipo di dati Win32), `LPCWSTR`|`LPCTSTR`|

Classe `CString` Usa `_TCHAR` come base e fornisce costruttori e operatori per le conversioni semplici. La maggior parte delle operazioni di stringa per Unicode può essere scritta usando la stessa logica impiegata per la gestione del set di caratteri ANSI di Windows, con la differenza che l'unità di base è costituita da un carattere a 16 bit anziché da un byte a 8 bit. A differenza di quanto avviene con i set di caratteri multibyte (MBCS), non è necessario né consigliabile trattare un carattere Unicode come se fosse formato da due byte distinti. Tuttavia, è necessario affrontare la possibilità di un singolo carattere rappresentato da una coppia di surrogati di caratteri "wide". In generale, non scrivere codice che presuppone che la lunghezza di una stringa è lo stesso come il numero di caratteri, se "narrow" o wide, che contiene.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Utilizzare MFC supporto Unicode e Multibyte Character Set (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)

- [Abilitare il formato Unicode nel mio programma](../text/international-enabling.md)

- [Abilitare Unicode e MBCS in un programma](../text/internationalization-strategies.md)

- [Utilizzo di Unicode per creare un programma per mercati internazionali](../text/unicode-programming-summary.md)

- [Informazioni sui vantaggi di Unicode](../text/benefits-of-character-set-portability.md)

- [Uso di wmain per passare argomenti a caratteri estesi al mio programma](../text/support-for-using-wmain.md)

- [Visualizzare un riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)

- [Informazioni sulle mappature di testo generico per la portabilità della larghezza dei byte](../text/generic-text-mappings-in-tchar-h.md)

## <a name="see-also"></a>Vedere anche
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)  
 [Supporto per l'uso di wmain](../text/support-for-using-wmain.md)  