---
title: "Esecuzione di NMAKE | Microsoft Docs"
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
  - "file di comando"
  - "file di comando, NMAKE"
  - "NMAKE (programma), esecuzione"
  - "NMAKE (programma), destinazioni"
  - "file di risposta, NMAKE"
  - "destinazioni"
  - "destinazioni, compilazione"
ms.assetid: 0421104d-8b7b-4bf3-86c1-928d9b7c1a8c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esecuzione di NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
NMAKE [option...] [macros...] [targets...] [@commandfile...]  
```  
  
## Note  
 NMAKE consente di compilare soltanto le *destinazioni* specificate o, se non ne è stata specificata alcuna, la prima destinazione presente nel makefile.  La prima destinazione del makefile può essere una [pseudo\-destinazione](../build/pseudotargets.md) dalla quale vengono compilate altre destinazioni.  In NMAKE vengono utilizzati i makefile specificati con l'opzione \/F. Se tale opzione non è stata specificata, viene utilizzato il makefile contenuto nella directory corrente.  Se non è stato specificato alcun makefile, vengono utilizzate le regole di inferenza per compilare le *destinazioni* dalla riga di comando.  
  
 Nel file di testo `commandfile` o file di risposta è contenuto l'input della riga di comando.  Altro input può precedere o seguire @`commandfile`.  È consentito indicare un percorso.  In `commandfile` le interruzioni di riga sono considerate come spazi.  Racchiudere sempre le definizioni delle macro tra virgolette se contengono spazi.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Opzioni di NMAKE](../build/nmake-options.md)  
  
 [Tools.ini e NMAKE](../build/tools-ini-and-nmake.md)  
  
 [Codici di uscita di NMAKE](../build/exit-codes-from-nmake.md)  
  
## Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)