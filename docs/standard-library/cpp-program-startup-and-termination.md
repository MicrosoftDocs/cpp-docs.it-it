---
title: "Avvio e chiusura di un programma C++ | Microsoft Docs"
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
  - "controllare i flussi di testo"
  - "Function Main (procedure)"
  - "main (funzione), avvio del programma"
  - "libreria C++ standard, avvio e chiusura di programma"
  - "avvio (codice), chiusura del programma C++"
  - "chiusura dell'esecuzione"
ms.assetid: f72c8f76-f507-4ddd-a270-7b60f4fed625
caps.latest.revision: 9
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avvio e chiusura di un programma C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il programma c\+\+ esegue le stesse operazioni quali il programma c fa all'avvio del programma e alla chiusura del programma, più alcuni descritti in questo argomento.  
  
 Prima dell'ambiente di destinazione chiamare la funzione `main` e dopo che memorizza tutti i valori iniziali costanti specificati in tutti gli oggetti che hanno una durata statica, il programma esegue qualsiasi costruttori rimanenti per tali oggetti statici.  L'ordine di esecuzione non viene specificato tra le unità di conversione, ma è possibile tuttavia presupporre che alcuni oggetti di [iostream](../standard-library/iostreams-conventions.md) correttamente vengono inizializzati su uno di questi costruttori statici.  Questi flussi di testo del controllo:  
  
-   [cin](../Topic/cin.md) \- per input standard.  
  
-   [cout](../Topic/cout.md) ad output standard.  
  
-   [cerr](../Topic/cerr.md) ad output standard degli errori privo.  
  
-   [impedimento](../Topic/clog.md) ad output standard degli errori buffering.  
  
 È anche possibile utilizzare questi oggetti nei distruttori chiamati per gli oggetti statici, durante la chiusura del programma.  
  
 Come con C, restituendo da `main` o chiamante `exit` chiama tutte le funzioni eseguita con `atexit` in ordine inverso del Registro di sistema.  Un'eccezione generata da tali chiamate di funzione registrate `terminate`.  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)