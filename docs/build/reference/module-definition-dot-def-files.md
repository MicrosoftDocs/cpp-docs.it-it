---
title: "File di definizione moduli (DEF) | Microsoft Docs"
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
  - ".def (file)"
  - "def (file)"
  - "file di definizione moduli"
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File di definizione moduli (DEF)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I file di definizione moduli \(DEF\) forniscono al linker informazioni su esportazioni ed attributi, nonché altre informazioni sul programma da collegare.  Tali file risultano particolarmente utili per la compilazione di DLL.  Dal momento che sono disponibili [opzioni del linker](../../build/reference/linker-options.md) utilizzabili al posto delle istruzioni di definizione moduli, i file DEF generalmente non risultano necessari.  Per specificare funzioni esportate è inoltre possibile utilizzare [\_\_declspec\(dllexport\)](../../build/exporting-from-a-dll-using-declspec-dllexport.md).  
  
 Un file DEF può essere richiamato durante la fase di collegamento mediante l'opzione del linker [\/DEF \(Specify Module\-Definition File\)](../../build/reference/def-specify-module-definition-file.md).  
  
 Se si compila un file EXE che non contiene esportazioni, l'utilizzo di un file DEF avrà l'effetto di aumentare la dimensione del file di output e rallentarne il caricamento.  
  
 Per un esempio, vedere [Esportazione da una DLL tramite i file DEF](../../build/exporting-from-a-dll-using-def-files.md).  
  
 Per ulteriori informazioni, vedere le sezioni che seguono:  
  
-   [Regole relative alle istruzioni di definizione dei moduli](../../build/reference/rules-for-module-definition-statements.md)  
  
-   [EXPORTS](../../build/reference/exports.md)  
  
-   [HEAPSIZE](../../build/reference/heapsize.md)  
  
-   [LIBRARY](../../build/reference/library.md)  
  
-   [NAME](../../build/reference/name-c-cpp.md)  
  
-   [SECTIONS](../../build/reference/sections-c-cpp.md)  
  
-   [STACKSIZE](../../build/reference/stacksize.md)  
  
-   [STUB](../../build/reference/stub.md)  
  
-   [VERSION](../../build/reference/version-c-cpp.md)  
  
-   [Parole riservate](../../build/reference/reserved-words.md)  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Frequently Asked Questions on Building](http://msdn.microsoft.com/it-it/56a3bb8f-0181-4989-bab4-a07ba950ab08)