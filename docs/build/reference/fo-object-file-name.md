---
title: "/Fo (Nome file oggetto) | Microsoft Docs"
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
  - "/Fo"
  - "VC.Project.VCCLCompilerTool.ObjectFile"
  - "VC.Project.VCCLWCECompilerTool.ObjectFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Fo (opzione del compilatore) [C++]"
  - "Fo (opzione del compilatore) [C++]"
  - "-Fo (opzione del compilatore) [C++]"
  - "file oggetto, denominazione"
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Fo (Nome file oggetto)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica un nome di file oggetto \(obj\) o una directory da utilizzare al posto di quella predefinita.  
  
## Sintassi  
  
```  
/Fopathname  
```  
  
## Note  
 Se non viene utilizzata, il file oggetto utilizza il nome di base del file di origine e l'estensione obj.  È possibile utilizzare qualsiasi nome ed estensione, ma la convenzione consigliata è obj.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **File di output**.  
  
4.  Modificare la proprietà **Nome file oggetto**.  Nell'ambiente di sviluppo il file oggetto deve avere estensione obj.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile%2A>.  
  
## Esempio  
 La riga di comando che segue crea un file oggetto denominato THIS.obj in una directory esistente, \\OBJECT, sull'unità B.  
  
```  
CL /FoB:\OBJECT\ THIS.C  
```  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)