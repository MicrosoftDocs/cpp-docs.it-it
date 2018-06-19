---
title: Supporto per Unicode | Documenti Microsoft
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b9d5a435339e366d70749d64e5aae9264fe12b1f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33858406"
---
# <a name="support-for-unicode"></a>Supporto per Unicode

Unicode è una specifica per il supporto di tutti i set di caratteri, inclusi quelli che non può essere rappresentato in un solo byte (ovvero, la maggior parte di essi). Se per la programmazione per un mercato internazionale, è consigliabile usare entrambi Unicode o un [set di caratteri multibyte](../text/support-for-multibyte-character-sets-mbcss.md) (MBCS), o il programma di codice in modo da essere compilato per la modifica di un commutatore.

Un carattere di tipo "wide" è un codice carattere multilingue da due byte. Decine di migliaia di caratteri, che comprendono quasi tutti i caratteri utilizzati nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri speciali di pubblicazione, possono essere rappresentati in base alla specifica Unicode come un singolo livello caratteri codificati da utilizzo di UTF-16. Caratteri che non possono essere rappresentati in un solo carattere "wide" possono essere rappresentati in una coppia di Unicode utilizzando la funzionalità di coppia di surrogati Unicode. Poiché quasi ogni carattere di uso comune è rappresentato in UTF-16 in un carattere wide singolo a 16 bit, con caratteri wide semplifica la programmazione con set di caratteri internazionali. I caratteri "wide" con codificati using UTF-16LE (little-endian) rappresentano il formato di caratteri nativi per Windows.

Una stringa di caratteri wide è rappresentata come una matrice `wchar_t[]` ed è puntata da un puntatore `wchar_t*`. È possibile rappresentare qualsiasi carattere ASCII come carattere di tipo wide, facendolo precedere dalla lettera "L". L'\0', ad esempio, è il carattere wide di terminazione **NULL** (a 16 bit). In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come valore letterale stringa wide, anteponendovi la lettera "L", ad esempio L"Hello".

In genere, i caratteri di tipo wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce. Inoltre, solo una delle impostazioni locali può essere rappresentato in un momento in una codifica multibyte, mentre i set di tutti i caratteri sono rappresentati contemporaneamente la rappresentazione Unicode.

Nel framework MFC il supporto sistematico per il formato Unicode è ottenuto mediante l'uso di macro trasferibili, come indicato nella tabella seguente.

## <a name="portable-data-types-in-mfc"></a>Tipi di dati trasferibili in MFC

|Tipo di dati non trasferibile|Sostituito da questa macro|
|-----------------------------|----------------------------|
|`char`, `wchar_t`|`_TCHAR`|
|`char*`, `LPSTR` (Tipo di dati Win32), `LPWSTR`|`LPTSTR`|
|`const char*`, `LPCSTR` (Tipo di dati Win32), `LPCWSTR`|`LPCTSTR`|

Classe `CString` utilizza `_TCHAR` come base e fornisce costruttori e operatori per le conversioni semplici. La maggior parte delle operazioni di stringa per Unicode può essere scritta usando la stessa logica impiegata per la gestione del set di caratteri ANSI di Windows, con la differenza che l'unità di base è costituita da un carattere a 16 bit anziché da un byte a 8 bit. A differenza di quanto avviene con i set di caratteri multibyte (MBCS), non è necessario né consigliabile trattare un carattere Unicode come se fosse formato da due byte distinti. Tuttavia, è necessario gestire con la possibilità di un singolo carattere rappresentato da una coppia di surrogati di caratteri wide. In generale, non scrivere codice che presuppone che la lunghezza di una stringa è pari al numero di caratteri, se "narrow" o "wide", che contiene.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Utilizzare MFC supporto Unicode e Multibyte Character Set (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)

- [Abilitare il formato Unicode in un programma](../text/international-enabling.md)

- [Abilitare Unicode e MBCS in un programma](../text/internationalization-strategies.md)

- [Utilizzo di Unicode per creare un programma per mercati internazionali](../text/unicode-programming-summary.md)

- [Informazioni sui vantaggi di Unicode](../text/benefits-of-character-set-portability.md)

- [Uso di wmain per passare argomenti a caratteri "wide" per il programma](../text/support-for-using-wmain.md)

- [Visualizzare un riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)

- [Informazioni sulle mappature di testo generico per la portabilità della larghezza di byte](../text/generic-text-mappings-in-tchar-h.md)

## <a name="see-also"></a>Vedere anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)  
[Supporto per l'uso di wmain](../text/support-for-using-wmain.md)  
