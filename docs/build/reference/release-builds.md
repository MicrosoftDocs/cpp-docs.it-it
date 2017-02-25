---
title: "Build di rilascio | Microsoft Docs"
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
  - "compilazioni di debug, conversione nella build di rilascio"
  - "debug [C++], build di rilascio"
  - "build di rilascio"
ms.assetid: fa9a78fa-f4b5-4722-baf4-aec655c4ff0f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Build di rilascio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le build di rilascio utilizzano le ottimizzazioni.  Quando si utilizzano ottimizzazioni per creare una build di rilascio, il compilatore cessa di produrre informazioni di debug simboliche.  L'assenza di tali informazioni, nonché il fatto che non viene generato codice per le chiamate di TRACE e ASSERT, comporta la riduzione delle dimensioni del file eseguibile, che risulterà pertanto più veloce.  
  
 In questa sezione vengono illustrati i motivi e le situazioni in cui è consigliabile passare da una build di debug a una build di rilascio.  Sono inoltre illustrati alcuni dei problemi che si possono verificare quando si passa da una build di debug a una build di rilascio:  
  
-   [Creazione di una build di rilascio](../../build/reference/how-to-create-a-release-build.md)  
  
-   [Problemi comuni durante la creazione di una build di rilascio](../../build/reference/common-problems-when-creating-a-release-build.md)  
  
-   [Correzione dei problemi della build di rilascio](../../build/reference/fixing-release-build-problems.md)  
  
    -   [Analisi delle istruzioni ASSERT](../../build/reference/using-verify-instead-of-assert.md)  
  
    -   [Utilizzo della build di debug per il controllo della sovrascrittura di memoria](../../build/reference/using-the-debug-build-to-check-for-memory-overwrite.md)  
  
    -   [Debug di una build di rilascio](../../build/reference/how-to-debug-a-release-build.md)  
  
    -   [Controllo delle sovrascritture di memoria](../../build/reference/checking-for-memory-overwrites.md)  
  
## Vedere anche  
 [Compilazione di progetti C\+\+ in Visual Studio](../../ide/building-cpp-projects-in-visual-studio.md)   
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)