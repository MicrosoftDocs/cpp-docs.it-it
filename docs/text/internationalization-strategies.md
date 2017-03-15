---
title: "Strategie di internazionalizzazione | Microsoft Docs"
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
  - "set di caratteri [C++], strategie di programmazione internazionale"
  - "globalizzazione [C++], set di caratteri"
  - "codice compatibile con il linguaggio [C++]"
  - "localizzazione [C++], set di caratteri"
  - "MBCS [C++], strategie di internazionalizzazione"
  - "Unicode [C++], globalizzazione di applicazioni"
  - "Win32 [C++], strategie di programmazione internazionale"
  - "API Windows [C++], strategie di programmazione internazionale"
ms.assetid: b09d9854-0709-4b9a-a00c-b0b8bc4199b1
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 8
---
# Strategie di internazionalizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le strategie di internazionalizzazione cambiano a seconda del sistema operativo \(o dei sistemi operativi\) e dei mercati di destinazione.  
  
-   L'applicazione utilizza il formato Unicode e pertanto viene eseguita su Windows 2000 e Windows NT, ma non su Windows 95 o Windows 98.  
  
     Viene utilizzato lo strumento di funzionalità specifico del formato Unicode e tutti i caratteri hanno un'ampiezza di 16 bit, anche se in alcune parti del programma è possibile utilizzare i caratteri ANSI per scopi particolari.  La libreria di runtime del linguaggio C fornisce funzioni, macro e tipi di dati adatti alla programmazione con il solo formato Unicode.  MFC supporta il formato Unicode in modo completo.  
  
-   L'applicazione utilizza il formato MBCS e può essere eseguita su qualsiasi piattaforma Win32.  
  
     Lo sviluppatore utilizza la funzionalità specifica di MBCS.  Le stringhe possono contenere caratteri a byte singolo, a doppio byte oppure di entrambi i tipi.  La libreria di runtime del linguaggio C fornisce funzioni, macro e tipi di dati adatti alla programmazione con il solo formato MBCS.  MFC supporta il formato MBCS in modo completo.  
  
-   Il codice sorgente per l'applicazione è scritto in modo da garantire la completa portabilità. Se si esegue la ricompilazione con il simbolo **\_UNICODE** o il simbolo **\_MBCS**, è possibile produrre versioni che utilizzano il formato impostato.  Per ulteriori informazioni, vedere [Mapping di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   L'applicazione utilizza una libreria di wrapper per le funzioni Unicode mancanti in Windows 95, Windows 98 e Windows ME come quella descritta in [Progetti una singola applicazione Unicode che funziona sia in Windows 98 e Windows 2000](http://go.microsoft.com/fwlink/p/?LinkId=250770).  Le librerie di wrapper si trovano anche in commercio.  
  
     Si utilizzano funzioni, macro e tipi di dati di runtime del linguaggio C completamente portabili.  Grazie alla flessibilità di MFC è possibile utilizzare tutte queste strategie.  
  
 Negli altri argomenti viene illustrata in modo particolare la scrittura di codice completamente portabile che è possibile compilare in formato Unicode o MBCS.  
  
## Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Impostazioni locali e tabelle codici](../text/locales-and-code-pages.md)