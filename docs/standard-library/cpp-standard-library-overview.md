---
title: "Panoramica sulla libreria standard C++ | Microsoft Docs"
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
  - "intestazioni, libreria C++"
  - "libraries, C++ standard"
  - "Libreria standard di C++"
  - "Libreria standard di C++, intestazioni"
ms.assetid: 7acb83a4-da73-4ad3-bc30-a71289db7f60
caps.latest.revision: 16
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Panoramica sulla libreria standard C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tutte le entità di libreria di C\+\+ sono dichiarate o definite in una o più intestazioni standard.  Questa implementazione include due intestazioni aggiuntive, `<hash_map>` e `<hash_set>`, che non sono necessarie per lo Standard C\+\+.  Per un elenco completo di intestazioni supportate da questa implementazione, vedere [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md).  
  
 Un'implementazione indipendente della libreria C\+\+ fornisce solo un sottoinsieme di queste intestazioni:  
  
|||  
|-|-|  
|[\<cstddef\>](../standard-library/cstddef.md)|[\<cstdlib\>](../standard-library/cstdlib.md) \(che dichiara almeno le funzioni `abort`, `atexit` e `exit`\)|  
|[\<exception\>](../standard-library/exception.md)|[\<limits\>](../standard-library/limits.md)|  
|[\<new\>](../standard-library/new.md)|[\<cstdarg\>](../standard-library/cstdarg.md)|  
  
 Le intestazioni della libreria C\+\+ hanno due suddivisioni più ampie:  
  
-   Convenzioni delle intestazioni [iostream](../standard-library/iostreams-conventions.md).  
  
-   Convenzioni della [Libreria di modelli standard](../misc/standard-template-library.md).  
  
 Questa sezione contiene le sezioni seguenti:  
  
-   [Utilizzo delle intestazioni della libreria C\+\+](../standard-library/using-cpp-library-headers.md)  
  
-   [Convenzioni della libreria C\+\+](../standard-library/cpp-library-conventions.md)  
  
-   [Convenzioni di iostream](../standard-library/iostreams-conventions.md)  
  
-   [Avvio e chiusura di un programma C\+\+](../standard-library/cpp-program-startup-and-termination.md)  
  
-   [Librerie protette: libreria standard C\+\+](../standard-library/safe-libraries-cpp-standard-library.md)  
  
-   [Iteratori verificati](../standard-library/checked-iterators.md)  
  
-   [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)  
  
-   [Libreria di modelli standard](../misc/standard-template-library.md)  
  
-   [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)  
  
-   [Spazio dei nomi stdext](../standard-library/stdext-namespace.md)  
  
-   [Espressioni regolari \(C\+\+\)](../standard-library/regular-expressions-cpp.md)  
  
 Per altre informazioni sulle librerie di runtime di Visual C\+\+, vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).  
  
## Vedere anche  
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)