---
title: "Opzioni del compilatore | Microsoft Docs"
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
  - "compilatore cl.exe"
  - "opzioni del compilatore, C++"
  - "IPF (compilatore Visual C++)"
  - "compilatore Visual C++ Itanium"
  - "x64 (compilatore Visual C++)"
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# Opzioni del compilatore
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

cl.exe consente di controllare i compilatori e i linker di Microsoft C e di C\+\+. cl.exe può essere eseguito solo sui sistemi operativi che supportano Microsoft Visual Studio.  
  
> [!NOTE]
>  Questo strumento può essere avviato solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)],  Non è possibile avviarlo dal prompt dei comandi di sistema o da Esplora file.  
  
 I compilatori producono file oggetto \(obj\) in formato file oggetto comune \(COFF, Common Object File Format\).  Il linker produce file eseguibili \(exe\) o librerie a collegamento dinamico \(DLL\).  
  
 Per tutte le opzioni del compilatore viene effettuata la distinzione tra maiuscole e minuscole.  
  
 Per eseguire la compilazione senza collegamento, utilizzare [\/c](../../build/reference/c-compile-without-linking.md).  
  
## Ricerca di un'opzione  
 Per trovare una particolare opzione del compilatore, consultare uno degli elenchi negli argomenti riportati di seguito.  
  
-   [Opzioni del compilatore elencate in ordine alfabetico](../../build/reference/compiler-options-listed-alphabetically.md)  
  
-   [Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md)  
  
## Specifica delle opzioni  
 Per ogni opzione del compilatore è disponibile una sezione in cui ne viene descritta l'impostazione nell'ambiente di sviluppo.  Per informazioni su come specificare le opzioni al di fuori dell'ambiente di sviluppo, vedere:  
  
-   [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)  
  
-   [File di comando di CL](../../build/reference/cl-command-files.md)  
  
-   [Variabili di ambiente CL](../../build/reference/cl-environment-variables.md)  
  
## Strumenti di compilazione correlati  
 Utilizzare [NMAKE](../../build/nmake-reference.md) per compilare il proprio file di output.  
  
 Utilizzare [BSCMAKE](../../build/reference/bscmake-reference.md) per supportare la ricerca nelle classi.  
  
 Le [opzioni del linker](../../build/reference/linker-options.md) influenzano anche il modo in cui il programma viene compilato.  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Compilazione veloce](../../build/reference/fast-compilation.md)   
 [Richiamo di CL da parte del linker](../../build/reference/cl-invokes-the-linker.md)