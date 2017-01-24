---
title: "Multithreading con C e Win32 | Microsoft Docs"
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
  - "multithreading [C++], C e Win32"
  - "threading [C]"
  - "threading [C++], C e Win32"
  - "Visual C, multithreading"
  - "Win32 [C++], multithreading"
  - "applicazioni Win32 [C++], multithreading"
  - "API Windows [C++], multithreading"
ms.assetid: 67cdc99e-1ad9-452b-a042-ed246b70040e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Multithreading con C e Win32
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Microsoft Visual C\+\+ fornisce il supporto per la creazione di applicazioni multithread con Microsoft Windows: Windows XP, Windows 2000, Windows NT, Windows Me e Windows 98.  È necessario utilizzare più di un thread se l'applicazione deve gestire diverse attività, ad esempio l'input simultaneo della tastiera e del mouse.  Mentre il primo thread elabora l'input da tastiera, il secondo filtra le attività del mouse  e il terzo aggiorna quanto visualizzato sullo schermo in base ai dati forniti dai thread della tastiera e del mouse.  Contemporaneamente, altri thread possono accedere a file su disco oppure ricevere dati da una porta di comunicazione.  
  
 In Visual C\+\+ è possibile programmare con i thread multipli in due modi: utilizzando la libreria MFC oppure la libreria di runtime del linguaggio C e l'API Win32.  Per informazioni sulla creazione di applicazioni multithread utilizzando MFC, vedere [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md), dopo aver consultato gli articoli relativi alle operazioni multithread in C riportati di seguito.  
  
 In questo argomenti vengono descritte le caratteristiche di Visual C\+\+ che supportano la creazione di programmi multithread.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Programmi multithread](../parallel/multithread-programs.md)  
  
-   [Supporto della libreria per il multithreading](../parallel/library-support-for-multithreading.md)  
  
-   [File di inclusione per il multithreading](../parallel/include-files-for-multithreading.md)  
  
-   [Funzioni della libreria di runtime del linguaggio C per il controllo dei thread](../parallel/c-run-time-library-functions-for-thread-control.md)  
  
-   [Programma multithread di esempio in linguaggio C](../parallel/sample-multithread-c-program.md)  
  
-   [Scrittura di un programma multithread Win32](../parallel/writing-a-multithreaded-win32-program.md)  
  
-   [Compilazione e collegamento di programmi multithread](../parallel/compiling-and-linking-multithread-programs.md)  
  
-   [Suggerimenti per evitare problemi relativi ai programmi multithread](../parallel/avoiding-problem-areas-with-multithread-programs.md)  
  
-   [Memoria locale di thread \(TLS\)](../parallel/thread-local-storage-tls.md)  
  
## Vedere anche  
 [Supporto del multithreading per il codice precedente \(Visual C\+\+\)](../parallel/multithreading-support-for-older-code-visual-cpp.md)