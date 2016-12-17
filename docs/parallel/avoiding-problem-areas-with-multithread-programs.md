---
title: "Suggerimenti per evitare problemi relativi ai programmi multithread | Microsoft Docs"
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
  - "errori [C++], programmi con multithreading"
  - "multithreading [C++], risoluzione dei problemi"
  - "threading [C++], risoluzione dei problemi"
  - "risoluzione dei problemi [C++], multithreading"
ms.assetid: 06cc231d-bb5a-409d-8bd3-676c9e2a8c5b
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Suggerimenti per evitare problemi relativi ai programmi multithread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante la creazione, il collegamento e l'esecuzione di un programma multithread C possono verificarsi diversi problemi.  Alcuni dei più comuni sono descritti nella tabella riportata di seguito. Per informazioni analoghe con MFC, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md).  
  
|Problema|Causa probabile|  
|--------------|---------------------|  
|Viene visualizzata una finestra di messaggio che indica che si è verificata una violazione della protezione.|Molti errori di programmazione in Win32 provocano violazioni della protezione.  Una delle cause più comuni delle violazioni della protezione è l'assegnazione indiretta di dati a puntatori null.  Come conseguenza, il programma tenta di accedere alla memoria che non gli "appartiene", determinando una violazione della protezione.<br /><br /> Un metodo semplice per rilevare la causa di una violazione della protezione consiste nel compilare il programma completo delle informazioni di debug, quindi eseguirlo tramite il debugger in ambiente Visual C\+\+.  Quando si verifica l'errore di protezione, il controllo viene trasferito al debugger e il cursore viene posizionato sulla riga in cui si è verificato il problema.|  
|Vengono generati vari errori di compilazione e di collegamento.|È possibile eliminare molti problemi impostando il livello di avviso del compilatore su uno dei valori massimi, prestando attenzione a eventuali messaggi di avviso.  Utilizzando le opzioni di avviso di livello 3 o 4, è possibile rilevare conversioni di dati indesiderate, prototipi di funzione mancanti e l'utilizzo di funzionalità non ANSI.|  
  
## Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)