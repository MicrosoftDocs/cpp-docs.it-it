---
title: "Supporto per Unicode | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set di caratteri [C++], Unicode"
  - "globalizzazione [C++], set di caratteri"
  - "localizzazione [C++], set di caratteri"
  - "tipi di dati portabili [MFC]"
  - "Unicode [C++]"
  - "Unicode [C++], installazione del supporto"
  - "caratteri wide [C++], informazioni sui caratteri "wide""
ms.assetid: 180f1d10-8543-4f79-85ce-293d3cb443bb
caps.latest.revision: 10
caps.handback.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Supporto per Unicode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il formato Unicode è una specifica che supporta tutti i set di caratteri, inclusi quelli che non possono essere rappresentati con un byte singolo.  Se si sta programmando un'applicazione per un mercato internazionale, è consigliabile usare il set di caratteri Unicode o il [set di caratteri multibyte](../text/support-for-multibyte-character-sets-mbcss.md) \(MBCS\) oppure configurare il programma per poter essere compilato per l'uno o per l'altro formato mediante la semplice modifica di un'opzione.  
  
 Un carattere di tipo "wide" è un codice carattere multilingue da due byte.  La maggior parte dei caratteri usati nei sistemi informatici moderni di tutto il mondo, compresi i simboli tecnici e caratteri di grafica speciali, può essere rappresentata in base alla specifica Unicode come carattere di tipo wide.  I caratteri che non possono essere rappresentati con un unico carattere di tipo wide possono essere rappresentati con una coppia di caratteri Unicode mediante una funzionalità Unicode surrogata.  Dato che ogni carattere di tipo wide viene rappresentato sempre con una dimensione fissa di 16 bit, l'uso dei caratteri di tipo wide semplifica la programmazione con set di caratteri internazionali.  
  
 Una stringa con caratteri estesi viene rappresentata come una matrice **wchar\_t\[\]** e vi viene fatto riferimento tramite un puntatore `wchar_t*`.  È possibile rappresentare qualsiasi carattere ASCII come carattere di tipo wide, facendolo precedere dalla lettera "L".  L'\\0', ad esempio, è il carattere esteso di terminazione **NULL** \(a 16 bit\).  In modo analogo, qualsiasi valore letterale stringa ASCII può essere rappresentato come valore letterale stringa wide, anteponendovi la lettera "L", ad esempio L"Hello".  
  
 In genere, i caratteri di tipo wide occupano una maggiore quantità di memoria rispetto ai caratteri multibyte, ma consentono un'elaborazione più veloce.  Inoltre, non è possibile rappresentare con la codifica multibyte più di un'impostazione locale per volta, mentre Unicode consente di rappresentare simultaneamente tutti i set di caratteri esistenti.  
  
 Nel framework MFC il supporto sistematico per il formato Unicode è ottenuto mediante l'uso di macro trasferibili, come indicato nella tabella seguente.  
  
### Tipi di dati trasferibili in MFC  
  
|Tipo di dati non trasferibile|Sostituito da questa macro|  
|-----------------------------------|--------------------------------|  
|`char`|\_**TCHAR**|  
|**char\***, **LPSTR \(tipo di dati Win32\)**|`LPTSTR`|  
|**const char\*, LPCSTR \(tipo di dati Win32\)**|`LPCTSTR`|  
  
 La classe `CString` usa **\_TCHAR** come base e fornisce costruttori e operatori che facilitano le operazioni di conversione.  La maggior parte delle operazioni di stringa per Unicode può essere scritta usando la stessa logica impiegata per la gestione del set di caratteri ANSI di Windows, con la differenza che l'unità di base è costituita da un carattere a 16 bit anziché da un byte a 8 bit.  A differenza di quanto avviene con i set di caratteri multibyte \(MBCS\), non è necessario né consigliabile trattare un carattere Unicode come se fosse formato da due byte distinti.  
  
## Per saperne di più  
  
-   [Installare il supporto Unicode tramite MFC](../mfc/unicode-in-mfc.md)  
  
-   [Abilitare il formato Unicode in un programma](../text/international-enabling.md)  
  
-   [Abilitare i formati Unicode MBCS in un programma](../text/internationalization-strategies.md)  
  
-   [Usare il formato Unicode per creare un programma per mercati internazionali](../text/unicode-programming-summary.md)  
  
-   [Informazioni sui vantaggi del formato Unicode e sull'uso di Unicode per rendere più efficiente un programma in Windows 2000](../text/benefits-of-character-set-portability.md)  
  
-   [Uso di wmain per passare argomenti a caratteri estesi a un programma](../text/support-for-using-wmain.md)  
  
-   [Riepilogo della programmazione Unicode](../text/unicode-programming-summary.md)  
  
-   [Informazioni sulle mappature di testo generico per la portabilità della larghezza dei byte](../text/generic-text-mappings-in-tchar-h.md)  
  
## Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Supporto per l'utilizzo di wmain](../text/support-for-using-wmain.md)