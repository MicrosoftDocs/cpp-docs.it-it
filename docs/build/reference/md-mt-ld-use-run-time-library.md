---
title: "/MD, /MT, /LD (Utilizza la libreria di runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ld"
  - "/mt"
  - "VC.Project.VCCLWCECompilerTool.RuntimeLibrary"
  - "VC.Project.VCCLCompilerTool.RuntimeLibrary"
  - "/md"
  - "/ml"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LD (opzione del compilatore) [C++]"
  - "/MD (opzione del compilatore) [C++]"
  - "/MDd (opzione del compilatore) [C++]"
  - "/MT (opzione del compilatore) [C++]"
  - "/MTd (opzione del compilatore) [C++]"
  - "_STATIC_CPPLIB (simbolo)"
  - "DLL [C++], opzioni del compilatore"
  - "LD (opzione del compilatore) [C++]"
  - "-LD (opzione del compilatore) [C++]"
  - "LIBC.lib"
  - "LIBCD.lib"
  - "LIBCMT.lib"
  - "LIBCMTD.lib"
  - "MD (opzione del compilatore) [C++]"
  - "-MD (opzione del compilatore) [C++]"
  - "MDd (opzione del compilatore) [C++]"
  - "-MDd (opzione del compilatore) [C++]"
  - "MSVCRT.lib"
  - "MSVCRTD.lib"
  - "MT (opzione del compilatore) [C++]"
  - "-MT (opzione del compilatore) [C++]"
  - "MTd (opzione del compilatore) [C++]"
  - "-MTd (opzione del compilatore) [C++]"
  - "multithread (opzione del compilatore)"
  - "threading [C++], multithread (opzione del compilatore)"
ms.assetid: cf7ed652-dc3a-49b3-aab9-ad60e5395579
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# /MD, /MT, /LD (Utilizza la libreria di runtime)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica se un modulo con multithreading è una DLL e specifica versioni finali o di debug della libreria di runtime.  
  
## Sintassi  
  
```  
/MD[d]  
/MT[d]  
/LD[d]  
```  
  
## Note  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**\/MD**|Fa in modo che l'applicazione utilizzi la versione multithreading e DLL della libreria di runtime.  Definisce `_MT` e `_DLL` e fa in modo che il compilatore inserisca il nome della libreria MSVCRT.lib nel file OBJ.<br /><br /> Le applicazioni compilate con questa opzione vengono collegate staticamente a MSVCRT.lib.  Questa libreria fornisce un livello di codice che consente al linker di risolvere i riferimenti esterni.  Il codice di lavoro effettivo è contenuto nel file MSVCR*versionnumber*.DLL, che deve essere disponibile in fase di esecuzione alle applicazioni collegate a MSVCRT.lib.|  
|**\/MDd**|Definisce `_DEBUG`, `_MT` e `_DLL` e fa in modo che l'applicazione utilizzi la versione con multithreading e DLL della libreria di runtime.  Fa inoltre in modo che il compilatore inserisca il nome della libreria MSVCRTD.lib nel file .obj.|  
|**\/MT**|Fa in modo che l'applicazione utilizzi la versione statica con multithreading della libreria di runtime.  Definisce `_MT` e fa in modo che il compilatore inserisca il nome della libreria LIBCMT.lib nel file OBJ, in modo che il linker utilizzi LIBCMT.lib per risolvere i simboli esterni.|  
|**\/MTd**|Definisce `_DEBUG` e `_MT`.  Fa inoltre in modo che il compilatore inserisca il nome della libreria LIBCMTD.lib nel file .obj affinché il linker utilizzi LIBCMTD.lib per risolvere i simboli esterni.|  
|**\/LD**|Crea una DLL.<br /><br /> Passa l'opzione **\/DLL** al linker.  Il linker cerca, ma non richiede, una funzione `DllMain`.  Se non si scrive una funzione `DllMain`, il linker inserisce una funzione `DllMain` che restituisce TRUE.<br /><br /> Collega il codice di avvio della DLL.<br /><br /> Crea una libreria di importazione \(LIB\) se sulla riga di comando non è stato specificato un file di esportazione \(EXP\).  Collegare la libreria di importazione alle applicazioni che chiamano la DLL.<br /><br /> Interpreta [\/Fe \(Specifica file EXE\)](../../build/reference/fe-name-exe-file.md) come denominazione di una DLL e non di un file EXE.  Per impostazione predefinita, il nome del programma diventa *basename*.dll anziché *basename*.exe.<br /><br /> Implica **\/MT** a meno che non si specifichi **\/MD** in modo esplicito.|  
|**\/LDd**|Crea una DLL di debug.  Definisce `_MT` e `_DEBUG`.|  
  
 Per ulteriori informazioni sulle librerie di runtime C e su quelle utilizzate per la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md), vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
 È necessario che tutti i moduli passati a una determinata chiamata del linker siano stati compilati con la stessa opzione del compilatore della libreria di runtime \(**\/MD**, **\/MT**, **\/LD**\).  
  
 Per ulteriori informazioni sull'utilizzo delle versioni di debug delle librerie di runtime, vedere [Riferimenti alla libreria di runtime C](../../c-runtime-library/c-run-time-library-reference.md).  
  
 Nell'articolo Q140584 della Knowledge Base viene inoltre illustrato come scegliere la libreria di runtime C appropriata.  
  
 Per ulteriori informazioni sulle DLL, vedere [DLL in Visual C\+\+](../../build/dlls-in-visual-cpp.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina **Generazione codice**.  
  
4.  Modificare la proprietà **Libreria di runtime**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.RuntimeLibrary%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)