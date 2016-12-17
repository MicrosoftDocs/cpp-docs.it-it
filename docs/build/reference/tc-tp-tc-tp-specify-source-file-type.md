---
title: "/Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.CompileAs"
  - "VC.Project.VCCLCompilerTool.CompileAs"
  - "/Tp"
  - "/tc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Tc (opzione del compilatore) [C++]"
  - "/Tp (opzione del compilatore) [C++]"
  - "file di origine, specifica per il compilatore"
  - "Tc (opzione del compilatore) [C++]"
  - "-Tc (opzione del compilatore) [C++]"
  - "Tp (opzione del compilatore) [C++]"
  - "-Tp (opzione del compilatore) [C++]"
ms.assetid: 7d9d0a65-338b-427c-8b48-fff30e2f9d2b
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Tc, /Tp, /TC, /TP (Specifica il tipo di file di origine)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione **\/Tc** specifica che `filename` è un file di origine C, anche se non ha estensione c,  mentre l'opzione **\/Tp** indica che `filename` è un file di origine C\+\+, anche se non ha estensione cpp o cxx.  Uno spazio tra l'opzione e `filename` è facoltativo.  Ogni opzione specifica un file. Ripetere l'opzione per specificare altri file.  
  
 Le opzioni **\/TC** e **\/TP** sono varianti globali di **\/Tc** e **\/Tp** e indicano che tutti i file denominati sulla riga di comando devono essere considerati file di origine C, nel caso di **\/TC**, o file di origine C\+\+, nel caso di **\/TP**.  Queste opzioni globali possono essere sottoposte a override in un singolo file tramite **\/Tc** o **\/Tp**.  
  
## Sintassi  
  
```  
/Tcfilename  
/Tpfilename  
/TC  
/TP  
```  
  
## Argomenti  
 `filename`  
 File di origine C o C\+\+.  
  
## Note  
 Per impostazione predefinita, i file con estensione c vengono considerati da CL come file di origine C e i file con estensione cpp o cxx come file di origine C\+\+.  
  
 Quando l'opzione **TC** o **Tc** viene specificato, qualsiasi specifica dell'opzione [\/Zc:wchar\_t \(Tipo nativo wchar\_t\)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md) viene ignorata.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Compila come**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileAs%2A>.  
  
## Esempi  
 La riga di comando CL che segue specifica che MAIN.c, TEST.prg e COLLATE.prg sono tutti file di origine C.  CL non riconoscerà PRINT.prg.  
  
```  
CL MAIN.C /TcTEST.PRG /TcCOLLATE.PRG PRINT.PRG  
```  
  
 La riga di comando CL che segue specifica che TEST1.c, TEST2.cxx, TEST3.huh e TEST4.o vengono compilati come file C\+\+ e TEST5.z viene compilato come un file C.  
  
```  
CL TEST1.C TEST2.CXX TEST3.HUH TEST4.O /Tc TEST5.Z /TP  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)