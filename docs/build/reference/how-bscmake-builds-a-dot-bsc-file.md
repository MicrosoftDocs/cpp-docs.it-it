---
title: "Modalit&#224; di compilazione di un file bsc in BSCMAKE | Microsoft Docs"
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
  - "BSC (file di informazioni di visualizzazione), compilazione"
ms.assetid: 8512b33e-c856-44a2-87bd-01ab10b52a95
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Modalit&#224; di compilazione di un file bsc in BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

BSCMAKE consente di compilare o ricompilare un file bsc nella maniera più efficiente possibile.  Per evitare problemi, è importante comprendere il processo di compilazione.  
  
 Durante la compilazione di un file di informazioni di visualizzazione, la lunghezza dei file sbr viene troncata a zero da BSCMAKE.  Nelle successive compilazioni dello stesso file, la presenza di file sbr di lunghezza zero \(ovvero vuoti\) indica a BSCMAKE che questi file non apportano nuovi contributi.  L'aggiornamento di questa sezione del file non è quindi necessario ed è sufficiente una compilazione incrementale.  Durante ogni compilazione, a meno che non sia stata specificata l'opzione \/n, in BSCMAKE viene innanzitutto eseguito l'aggiornamento del file in modo incrementale, mediante l'utilizzo dei soli file sbr modificati.  
  
 Viene cercato un file bsc il cui nome sia specificato con l'opzione \/o.  Se l'opzione \/o non è specificata, viene cercato un file con estensione bsc che abbia lo stesso nome di base del primo file sbr.  Se il file è presente, viene eseguita una compilazione incrementale del file di informazioni di visualizzazione con i soli file sbr contenenti nuove informazioni.  Se il file non è presente, viene eseguita una compilazione completa con tutti i file sbr.  Le regole di compilazione sono le seguenti:  
  
-   La compilazione verrà completata se tutti i file sbr specificati sono presenti e non sono troncati.  Eventuali file sbr troncati devono essere ricompilati mediante ricompilazione o assemblaggio prima dell'esecuzione di BSCMAKE.  
  
-   La compilazione incrementale avrà esito positivo solo se è presente un file bsc.  Tutti i file utilizzati, anche se vuoti, devono essere disponibili e devono essere specificati nella riga di comando di BSCMAKE.  Se un file sbr non viene indicato nella riga di comando, il file non viene più utilizzato da BSCMAKE.  
  
## Vedere anche  
 [Compilazione di un file BSC](../../build/reference/building-a-dot-bsc-file.md)