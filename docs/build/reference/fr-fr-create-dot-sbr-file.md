---
title: "/FR, /Fr (Crea file sbr) | Microsoft Docs"
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
  - "VC.Project.VCCLWCECompilerTool.BrowseInformation"
  - "VC.Project.VCCLCompilerTool.BrowseInformation"
  - "/fr"
  - "VC.Project.VCCLCompilerTool.BrowseInformationFile"
  - "VC.Project.VCCLWCECompilerTool.BrowseInformationFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FR (opzione del compilatore) [C++]"
  - "FR (opzione del compilatore) [C++]"
  - "-FR (opzione del compilatore) [C++]"
  - "informazioni simboliche sul browser"
ms.assetid: 3fd8f88b-3924-4feb-9393-287036a28896
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FR, /Fr (Crea file sbr)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea file SBR.  
  
## Sintassi  
  
```  
/FR[pathname[\filename]]  
/Fr[pathname[\filename]]  
```  
  
## Note  
 Durante il processo di compilazione, l'utilità BSCMAKE \(Microsoft Browse Information File Maintenance Utility\) usa questi file per creare un file BSC, che consente di visualizzare le informazioni di visualizzazione.  
  
 **\/FR** crea un file SBR con informazioni simboliche complete.  
  
 **\/Fr** crea un file SBR senza informazioni sulle variabili locali.  
  
 Se non si specifica `filename`, al file SBR viene assegnato lo stesso nome di base del file di origine.  
  
 **\/Fr** è deprecato. Usare **\/FR**. Per altre informazioni, vedere le opzioni del compilatore deprecate o obsolete in [Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).  
  
> [!NOTE]
>  Non modificare l'estensione SBR. BSCMAKE richiede questa estensione per i file intermediari.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Nel riquadro di navigazione scegliere la pagina delle proprietà **C\/C\+\+**, **Informazioni di visualizzazione**.  
  
3.  Modificare la proprietà **File informazioni di visualizzazione** o **Abilita informazioni di visualizzazione**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformation%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformationFile%2A>.  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)