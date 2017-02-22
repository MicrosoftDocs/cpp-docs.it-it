---
title: "Abilitazione di risorse internazionali | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "globalizzazione [C++], set di caratteri"
  - "localizzazione [C++], set di caratteri"
  - "MBCS [C++], abilitazione"
  - "stringhe [C++], abilitazione di risorse internazionali"
  - "Unicode [C++], abilitazione"
ms.assetid: b077f4ca-5865-40ef-a46e-d9e4d686ef21
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Abilitazione di risorse internazionali
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per quanto riguarda la gestione dei caratteri e delle stringhe, nel tradizionale codice C e C\+\+ vengono utilizzati in genere criteri che nella maggior parte dei casi si adattano con difficoltà alle applicazioni internazionali.  La libreria MFC e quella di runtime supportano il formato Unicode o MBCS, tuttavia è necessario effettuare operazioni supplementari.  A tal fine, in questa sezione viene illustrato il significato di "abilitazione di risorse internazionali" in Visual C\+\+:  
  
-   In MFC sono abilitati sia il formato Unicode che il formato MBCS grazie all'uso di tipi di dati portabili per gli elenchi di parametri delle funzioni e per i valori restituiti.  Questi tipi vengono definiti in modo appropriato mediante compilazione condizionale, a seconda che si definisca il simbolo **\_UNICODE** o **\_MBCS**, che in questo caso equivale a DBCS.  All'applicazione vengono collegate automaticamente varianti diverse delle librerie MFC, in base al simbolo definito.  
  
-   Nel codice della libreria di classi vengono utilizzate le funzioni di runtime portabili e altri meccanismi per assicurare il corretto funzionamento dei formati Unicode o MBCS.  
  
-   Nel codice è comunque necessario gestire determinati tipi di attività di internazionalizzazione:  
  
    -   Utilizzare le stesse funzioni di runtime portabili che rendono MFC utilizzabile in entrambi gli ambienti.  
  
    -   Impostare il supporto di stringhe e caratteri effettivi in entrambi gli ambienti, utilizzando la macro **\_T**.  Per ulteriori informazioni, vedere [Mapping di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
    -   Prendere le precauzioni necessarie per l'analisi delle stringhe in formato MBCS.  Queste precauzioni non sono indispensabili per il formato Unicode.  Per ulteriori informazioni, vedere [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md).  
  
    -   Prestare attenzione quando si utilizzano contemporaneamente caratteri ANSI \(a 8 bit\) e Unicode \(a 16 bit\) nella stessa applicazione.  È possibile utilizzare caratteri ANSI in alcune parti del programma e caratteri Unicode in altre, ma non è possibile combinarli nella stessa stringa.  
  
    -   Non utilizzare direttamente delle stringhe nell'applicazione,  ma trasformarle in risorse STRINGTABLE, aggiungendole al file con estensione rc dell'applicazione.  Sarà quindi possibile localizzare l'applicazione evitando modifiche o ricompilazioni del codice sorgente.  Per ulteriori informazioni sulle risorse STRINGTABLE, vedere [Editor stringhe](../mfc/string-editor.md).  
  
> [!NOTE]
>  I set di caratteri europei e MBCS comprendono alcuni caratteri, quali le lettere accentate, con codici di carattere maggiori di 0x80.  Poiché nel codice vengono utilizzati per lo più caratteri con segno, questi caratteri maggiori di 0x80 vengono estesi col segno quando vengono convertiti in `int`.  Questo fatto rappresenta un problema per l'indicizzazione della matrice poiché i caratteri con segno esteso, essendo negativi, verranno indicizzati al di fuori della matrice.  Le lingue che utilizzano il formato MBCS, come il giapponese, sono particolari.  Poiché un carattere può essere composto da uno o due byte, è sempre necessario utilizzare entrambi i byte contemporaneamente.  
  
## Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Strategie di internazionalizzazione](../text/internationalization-strategies.md)