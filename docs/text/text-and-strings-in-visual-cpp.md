---
title: "Testo e stringhe in Visual C++ | Microsoft Docs"
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
  - "ASCII (caratteri) [C++]"
  - "set di caratteri [C++]"
  - "set di caratteri [C++], informazioni"
  - "set di caratteri [C++], non europeo"
  - "globalizzazione [C++]"
  - "globalizzazione [C++], set di caratteri"
  - "applicazioni internazionali [C++], informazioni"
  - "caratteri giapponesi [C++]"
  - "supporto caratteri Kanji [C++]"
  - "set di caratteri locali [C++]"
  - "localizzazione [C++]"
  - "localizzazione [C++], set di caratteri"
  - "MBCS [C++], programmazione internazionale"
  - "supporto multilingue [C++]"
  - "caratteri non europei [C++]"
  - "portabilità [C++]"
  - "portabilità [C++], set di caratteri"
  - "programmazione [C++], internazionali"
  - "conversione di codice [C++]"
  - "conversione [C++], set di caratteri"
  - "Unicode [C++]"
ms.assetid: a1bb27ac-abe5-4c6b-867d-f761d4b93205
caps.latest.revision: 12
caps.handback.revision: 12
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Testo e stringhe in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un aspetto importante dello sviluppo delle applicazioni per i mercati internazionali è l'adeguata rappresentazione dei set di caratteri locali.  Il set di caratteri ASCII definisce i caratteri compresi nell'intervallo tra 0x00 e 0x7F.  Esistono altri set di caratteri, principalmente europei, che, allo stesso modo del set di caratteri ASCII, definiscono i caratteri nell'intervallo compreso tra 0x00 e 0x7F e un set di caratteri esteso tra 0x80 e 0xFF.  Pertanto, un set di caratteri a 8 bit o a byte singolo \(SBCS, Single Byte Character Set\) è sufficiente per rappresentare sia il set di caratteri ASCII che i set di caratteri di molte lingue europee.  Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri di quelli che possono essere rappresentati in uno schema di codifica a byte singolo e pertanto richiedono una codifica con set di caratteri multibyte \(MBCS, Multibyte Character Set\).  
  
## Argomenti della sezione  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)  
 Viene illustrato il supporto Visual C\+\+ per la programmazione Unicode e MBCS.  
  
 [Supporto per Unicode](../text/support-for-unicode.md)  
 Il formato Unicode è una specifica che supporta tutti i set di caratteri, inclusi quelli che non possono essere rappresentati con un byte singolo.  
  
 [Supporto per set di caratteri multibyte \(MBCS\)](../text/support-for-multibyte-character-sets-mbcss.md)  
 I set di caratteri MBCS rappresentano un'alternativa al formato Unicode per il supporto di set di caratteri che, come quello giapponese e cinese, non possono essere rappresentati con un singolo byte.  
  
 [Mappature di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md)  
 Vengono fornite mappature di testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti.  
  
 [Procedura: convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)  
 Viene illustrato come convertire diversi tipi di stringhe Visual C\+\+ in altre stringhe.  
  
## Sezioni correlate  
 [Internazionalizzazione](../c-runtime-library/internationalization.md)  
 Viene illustrato il supporto internazionale nella libreria di runtime del linguaggio C.  
  
 [Esempi internazionali](http://msdn.microsoft.com/it-it/aa8d390c-cf4c-4dd8-9dea-74d81f93f2f8)  
 Contiene collegamenti a esempi dimostrativi dell'internazionalizzazione in Visual C\+\+.  
  
 [Stringhe relative a lingue e paesi](../c-runtime-library/locale-names-languages-and-country-region-strings.md)  
 Contiene le stringhe relative alle lingue e ai paesi nella libreria di runtime del linguaggio C.