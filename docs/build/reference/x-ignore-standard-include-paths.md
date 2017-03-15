---
title: "/X (Ignora percorso di inclusione standard) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/x"
  - "VC.Project.VCCLCompilerTool.IgnoreStandardIncludePath"
  - "VC.Project.VCCLWCECompilerTool.IgnoreStandardIncludePath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/X (opzione del compilatore) [C++]"
  - "Ignora percorso di inclusione standard (opzione del compilatore)"
  - "directory di inclusione, ignorare il percorso standard"
  - "file di inclusione, ignorare il percorso standard"
  - "X (opzione del compilatore)"
  - "-X (opzione del compilatore) [C++]"
ms.assetid: 16bdf2cc-c8dc-46e4-bdcc-f3caeba5e1ef
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# /X (Ignora percorso di inclusione standard)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impedisce al compilatore di effettuare ricerche di file di inclusione in directory specificate nelle variabili di ambiente PATH e INCLUDE.  
  
## Sintassi  
  
```  
/X  
```  
  
## Note  
 È possibile utilizzare questa opzione unitamente all'opzione [\/I \(Directory di inclusione aggiuntive\)](../../build/reference/i-additional-include-directories.md) \(**\/I**`directory`\).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Preprocessore**.  
  
4.  Modificare la proprietà **Ignora percorso di inclusione standard**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.IgnoreStandardIncludePath%2A>.  
  
## Esempio  
 Nel comando che segue `/X` indica al compilatore di ignorare percorsi specificati dalle variabili di ambiente PATH e INCLUDE e `/I` specifica la directory in cui cercare i file di inclusione:  
  
```  
CL /X /I \ALT\INCLUDE MAIN.C  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)