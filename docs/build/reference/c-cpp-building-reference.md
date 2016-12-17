---
title: "Riferimenti alla compilazione in C/C++ | Microsoft Docs"
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
  - "compilazioni [C++], informazioni aggiuntive"
  - "compilatore cl.exe [C++], compilazione di programmi"
  - "compilazione di codice sorgente [C++], informazioni aggiuntive"
  - "linker [C++], riferimenti alla compilazione"
ms.assetid: 100b4ccf-572c-4d1f-970c-fa0bc0cc0d2d
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Riferimenti alla compilazione in C/C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+ sono disponibili due metodi per compilare un programma C\/C\+\+.  Il metodo più semplice e diffuso consiste nel [compilare all'interno dell'ambiente di sviluppo Visual C\+\+](../../ide/building-cpp-projects-in-visual-studio.md).  L'altro consiste nel [compilare da un prompt dei comandi utilizzando gli strumenti della riga di comando](../../build/building-on-the-command-line.md).  Nell'uno o l'altro caso, è possibile creare i file d'origine utilizzando l'editor standard o un editor di terze parti a scelta.  
  
 Se il programma utilizza un makefile anziché un file .vcxproj, è ancora possibile compilarlo nell'ambiente di sviluppo come [progetto esterno](../../ide/building-external-projects.md).  
  
## In questa sezione  
 [Compilazione di un programma C\/C\+\+](../../build/reference/compiling-a-c-cpp-program.md)  
 Viene descritto il compilatore, che crea un file oggetto contenente codice macchina, direttive del linker, sezioni, riferimenti esterni e nomi di funzioni\/dati.  
  
 [Collegamento](../../build/reference/linking.md)  
 Viene descritto il linker, che combina il codice proveniente dai file oggetto creati dal compilatore e da librerie collegate staticamente, risolve i riferimenti dei nomi e crea un file eseguibile.  
  
 [Build di rilascio](../../build/reference/release-builds.md)  
 Vengono presentate informazioni sul passaggio da una build di debug a una build di rilascio e sui relativi problemi:  
  
 [Ottimizzazione del codice](../../build/reference/optimizing-your-code.md)  
 Vengono forniti collegamenti agli argomenti relativi al meccanismo di ottimizzazione del codice:  
  
 [Strumenti per la compilazione in C\/C\+\+](../../build/reference/c-cpp-build-tools.md)  
 Per la visualizzazione e la modifica dell'output compilato, vengono forniti i seguenti strumenti della riga di comando:  
  
 [Errori di compilazione di C\/C\+\+](../../error-messages/compiler-errors-1/c-cpp-build-errors.md)  
 Viene introdotta la sezione relativa agli errori di compilazione nel sommario.  
  
## Sezioni correlate  
 [Riferimenti al preprocessore C\/C\+\+](../../preprocessor/c-cpp-preprocessor-reference.md)  
 Viene discusso il preprocessore, che prepara i file d'origine per il compilatore traducendo macro, operatori e direttive.  
  
 [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](../../ide/understanding-custom-build-steps-and-build-events.md)  
 Viene discussa la personalizzazione del processo di compilazione.  
  
 [Compilazione di un programma C\/C\+\+](../../build/building-c-cpp-programs.md)  
 Vengono forniti collegamenti ad argomenti relativi alla compilazione di programmi dalla riga di comando o dall'ambiente di sviluppo integrato di Visual Studio.  
  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
 Viene descritta l'impostazione delle opzioni del compilatore nell'ambiente di sviluppo o nella riga di comando.  
  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)  
 Vengono forniti collegamenti agli argomenti relativi all'utilizzo delle opzioni del compilatore.  
  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
 Viene descritta l'impostazione delle opzioni del linker all'interno o all'esterno dell'ambiente di sviluppo integrato.  
  
 [Opzioni del linker](../../build/reference/linker-options.md)  
 Vengono forniti collegamenti agli argomenti relativi all'utilizzo delle opzioni del linker.  
  
 [Riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md)  
 Viene descritto il programma Microsoft Browse Information Maintenance Utility \(BSCMAKE.EXE\), con il quale è possibile compilare un file di informazioni di visualizzazione \(BSC\) dai file SBR creati durante la compilazione.  
  
 [Informazioni di riferimento su LIB](../../build/reference/lib-reference.md)  
 Viene descritto Microsoft Library Manager \(LIB.EXE\), che crea e gestisce una libreria di file oggetto COFF \(Common Object File Format, formato file oggetto comune\).  
  
 [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md)  
 Viene descritto EDITBIN.EXE \(Microsoft COFF Binary File Editor\), che modifica i file binari COFF \(Common Object File Format, formato file oggetto comune\).  
  
 [Riferimenti a DUMPBIN](../../build/reference/dumpbin-reference.md)  
 Viene descritto Microsoft COFF Binary File Dumper \(DUMPBIN.EXE\), che visualizza informazioni sui file binari COFF \(Common Object File Format, formato file oggetto comune\).  
  
 [Riferimenti a NMAKE](../../build/nmake-reference.md)  
 Viene descritto il programma Microsoft Program Maintenance Utility \(NMAKE.EXE\), uno strumento che consente la compilazione di progetti sulla base di comandi contenuti in un file di descrizioni.