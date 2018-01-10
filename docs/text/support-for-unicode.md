---
title: Supporto per Unicode | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- globalization [C++], character sets
- portable data types [MFC]
- Unicode [C++]
- wide characters [C++], about wide characters
- character sets [C++], Unicode
- localization [C++], character sets
- Unicode [C++], installing support
ms.assetid: 180f1d10-8543-4f79-85ce-293d3cb443bb
caps.latest.revision: "10"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 150f161b71efc07bc7b5a08d79e17fac0dea7931
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="support-for-unicode"></a>Supporto per Unicode
Il formato Unicode è una specifica che supporta tutti i set di caratteri, inclusi quelli che non possono essere rappresentati con un byte singolo. Se per la programmazione per un mercato internazionale, è consigliabile usare entrambi Unicode o [set di caratteri multibyte](../text/support-for-multibyte-character-sets-mbcss.md) (MBCS), o abilitare il programma in modo da essere compilato per la modifica di un commutatore.  
  
 Un carattere di tipo "wide" è un codice carattere multilingue da due byte. La maggior parte dei caratteri usati nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentata in base alla specifica Unicode come carattere di tipo wide. I caratteri che non possono essere rappresentati con un unico carattere di tipo wide possono essere rappresentati con una coppia di caratteri Unicode mediante una funzionalità Unicode surrogata. Dato che ogni carattere di tipo wide viene rappresentato sempre con una dimensione fissa di 16 bit, l'uso dei caratteri di tipo wide semplifica la programmazione con set di caratteri internazionali.  
  
 Una stringa di caratteri wide è rappresentata come un **wchar_t []** di matrice e a cui fa riferimento un `wchar_t*` puntatore. È possibile rappresentare qualsiasi carattere ASCII come carattere di tipo wide, facendolo precedere dalla lettera "L". Ad esempio, \0 0 ' è l'esteso di terminazione (16 bit) **NULL** carattere. In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come valore letterale stringa wide, anteponendovi la lettera "L", ad esempio L"Hello".  
  
 In genere, i caratteri di tipo wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce. Inoltre, non è possibile rappresentare con la codifica multibyte più di un'impostazione locale per volta, mentre Unicode consente di rappresentare simultaneamente tutti i set di caratteri esistenti.  
  
 Nel framework MFC il supporto sistematico per il formato Unicode è ottenuto mediante l'uso di macro trasferibili, come indicato nella tabella seguente.  
  
### <a name="portable-data-types-in-mfc"></a>Tipi di dati trasferibili in MFC  
  
|Tipo di dati non trasferibile|Sostituito da questa macro|  
|-----------------------------|----------------------------|  
|`char`|_**TCHAR**|  
|**Char\***, **LPSTR (tipo di dati Win32)**|`LPTSTR`|  
|**const char\*, LPCSTR (tipo di dati Win32)**|`LPCTSTR`|  
  
 Classe `CString` Usa **TCHAR** come base e fornisce costruttori e operatori per le conversioni semplici. La maggior parte delle operazioni di stringa per Unicode può essere scritta usando la stessa logica impiegata per la gestione del set di caratteri ANSI di Windows, con la differenza che l'unità di base è costituita da un carattere a 16 bit anziché da un byte a 8 bit. A differenza di quanto avviene con i set di caratteri multibyte (MBCS), non è necessario né consigliabile trattare un carattere Unicode come se fosse formato da due byte distinti.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Installazione del supporto Unicode tramite MFC](../mfc/unicode-in-mfc.md)  
  
-   [Abilitare il formato Unicode in un programma](../text/international-enabling.md)  
  
-   [Abilitare Unicode e MBCS in un programma](../text/internationalization-strategies.md)  
  
-   [Utilizzo di Unicode per creare un programma per mercati internazionali](../text/unicode-programming-summary.md)  
  
-   [Informazioni sui vantaggi del formato Unicode, come l'utilizzo di Unicode consente di un programma più efficiente in Windows 2000](../text/benefits-of-character-set-portability.md)  
  
-   [Uso di wmain per passare argomenti a caratteri wide con il programma](../text/support-for-using-wmain.md)  
  
-   [Visualizzare un riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)  
  
-   [Informazioni sulle mappature di testo generico per la portabilità della larghezza dei byte](../text/generic-text-mappings-in-tchar-h.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Supporto per l'uso di wmain](../text/support-for-using-wmain.md)