---
title: "Macro e C++ | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "macro"
  - "macro, C++"
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro e C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

C\+\+ offre nuove funzionalità, alcune delle quali soppiantano quelle offerte dal preprocessore ANSI C.  Queste nuove funzionalità migliorano l'indipendenza dai tipi e la prevedibilità del linguaggio:  
  
-   In C\+\+, gli oggetti dichiarati come **const** possono essere utilizzati nelle espressioni costanti.  Ciò consente ai programmi di dichiarare le costanti contenenti informazioni sui tipi e i valori e le enumerazioni che possono essere visualizzate simbolicamente con il debugger.  L'utilizzo della direttiva `#define` del preprocessore per definire le costanti non è altrettanto preciso.  Per un oggetto **const** non viene allocato alcuno spazio di archiviazione, a meno che nel programma non venga trovata un'espressione che ne accetta l'indirizzo.  
  
-   La funzionalità della funzione inline C\+\+ soppianta le macro di tipo funzione.  I vantaggi dell'utilizzo delle funzioni inline rispetto alle macro sono:  
  
    -   Indipendenza dai tipi.  Le funzioni inline sono soggette allo stesso controllo dei tipi delle funzioni normali.  Le macro non sono indipendenti dai tipi.  
  
    -   Gestione corretta degli argomenti con effetti collaterali.  Le funzioni inline valutano le espressioni fornite come argomenti prima di inserire il corpo della funzione.  Pertanto, non c'è nessuna possibilità che un'espressione con effetti collaterali sia non sicura.  
  
 Per ulteriori informazioni sulle funzioni inline, vedere [inline, \_\_inline, \_\_forceinline](../misc/inline-inline-forceinline.md).  
  
 Per la compatibilità con le versioni precedenti, tutte le funzionalità del preprocessore presenti in ANSI C e nelle specifiche C\+\+ precedenti vengono mantenute per Microsoft C\+\+.  
  
## Vedere anche  
 [Macro predefinite](../preprocessor/predefined-macros.md)   
 [Macro](../preprocessor/macros-c-cpp.md)