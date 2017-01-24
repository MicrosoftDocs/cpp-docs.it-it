---
title: "/FI (Specifica il file di inclusione da utilizzare) | Microsoft Docs"
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
  - "VC.Project.VCNMakeTool.ForcedIncludes"
  - "VC.Project.VCCLCompilerTool.ForcedIncludeFiles"
  - "VC.Project.VCCLWCECompilerTool.ForcedIncludeFiles"
  - "/fi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FI (opzione del compilatore) [C++]"
  - "FI (opzione del compilatore) [C++]"
  - "-FI (opzione del compilatore) [C++]"
  - "pre-elabora file di intestazione (opzione del compilatore) [C++]"
ms.assetid: 07e79577-8152-4df9-a64c-aae08c603397
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FI (Specifica il file di inclusione da utilizzare)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fa sì che il preprocessore elabori il file di intestazione specificato.  
  
## Sintassi  
  
```  
/FI[ ]pathname  
```  
  
## Note  
 equivale a specificare il file con le virgolette doppie in una direttiva `#include` sulla prima riga di ogni file di origine specificato nella riga di comando, nella variabile di ambiente CL o in un file di comando.  Se si utilizzano più opzioni **\/FI**, i file verranno inclusi nell'ordine in cui sono elaborati da CL.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Imponi inclusioni**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedIncludeFiles%2A>.  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)