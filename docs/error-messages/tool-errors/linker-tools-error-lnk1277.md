---
title: "Errore degli strumenti del linker LNK1277 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1277"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1277"
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1277
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare il record dell'oggetto in pgd \(nomefile\)  
  
 Durante l'utilizzo di [\/LTCG:PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), il percorso di uno dei file lib, def o obj di input è risultato differente dal percorso in cui si trovava il file durante \/LTCG:PGINSTRUMENT.  Questo può essere dovuto a una modifica nella variabile di ambiente LIB a seguito di \/LTCG:PGINSTRUMENT.  Il percorso completo dei file di input viene memorizzato nel file pgd.  
  
 \/LTCG:PGOPTIMIZE richiede che l'input sia identico a quello della fase \/LTCG:PGINSTRUMENT.  
  
 Per risolvere il problema, effettuare una delle seguenti operazioni:  
  
-   Eseguire \/LTCG:PGINSTRUMENT, eseguire nuovamente tutti i test ed eseguire \/LTCG:PGOPTIMIZE.  
  
-   Ripristinare la variabile di ambiente LIB precedente all'esecuzione di \/LTCG:PGINSTRUMENT.  
  
 Si consiglia di non correggere l'errore LNK1277 utilizzando \/LTCG:PGUPDATE.