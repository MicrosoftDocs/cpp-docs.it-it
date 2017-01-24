---
title: "Gestione delle eccezioni C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++"
  - "Visual C++, gestione eccezioni"
ms.assetid: 65f80b44-9d0f-4d17-b910-07205a5c5c40
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione delle eccezioni C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il linguaggio C\+\+ fornisce supporto predefinito per la generazione e l'intercettazione delle eccezioni.  Durante la programmazione in C\+\+, è quasi sempre necessario usare il supporto predefinito delle eccezioni di C\+\+ come descritto in questa sezione.  
  
 Per abilitare la gestione delle eccezioni C\+\+ nel codice, usare [\/EHsc](../build/reference/eh-exception-handling-model.md).  
  
## Contenuto della sezione  
 Queste indicazioni sulla gestione delle eccezioni C\+\+ includono:  
  
-   [Istruzioni try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md)  
  
-   [Modalità di valutazione dei blocchi catch](../cpp/how-catch-blocks-are-evaluated-cpp.md)  
  
-   [Eccezioni e rimozione dello stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md)  
  
-   [Specifiche delle eccezioni](../cpp/exception-specifications-throw-cpp.md)  
  
-   [noexcept](../cpp/noexcept-cpp.md)  
  
-   [Eccezioni C\+\+ non gestite](../cpp/unhandled-cpp-exceptions.md)  
  
-   [Combinazione di eccezioni C \(strutturate\) e C\+\+](../cpp/mixing-c-structured-and-cpp-exceptions.md)  
  
## Supporto per eccezioni MFC precedenti  
 A partire dalla versione 4.0, MFC usa il meccanismo di gestione delle eccezioni C\+\+.  Sebbene sia consigliabile usare la gestione delle eccezioni C\+\+ nel nuovo codice, MFC versione 4.0 e successive mantiene le macro delle versioni precedenti in modo da non causare problemi al vecchio codice.  Le macro e il nuovo meccanismo possono essere usati insieme.  Per informazioni sull'utilizzo combinato delle macro e della gestione delle eccezioni C\+\+ e sulla conversione del vecchio codice per l'utilizzo del nuovo meccanismo, vedere gli articoli [Eccezioni: utilizzo delle macro MFC e delle eccezioni C\+\+](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) e [Eccezioni: conversione dalle macro delle eccezioni MFC](../mfc/exceptions-converting-from-mfc-exception-macros.md).  Le macro delle eccezioni MFC precedenti, se ancora usate, restituiscono parole chiave delle eccezioni C\+\+.  Vedere [Eccezioni: modifiche alle macro delle eccezioni nella versione 3.0](../mfc/exceptions-changes-to-exception-macros-in-version-3-0.md).  
  
## Vedere anche  
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)