---
title: "/AI (Specifica le directory di metadati) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.AdditionalUsingDirectories"
  - "VC.Project.VCNMakeTool.AssemblySearchPath"
  - "/AI"
  - "VC.Project.VCCLWCECompilerTool.AdditionalUsingDirectories"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/AI (opzione del compilatore) [C++]"
  - "AI (opzione del compilatore) [C++]"
  - "-AI (opzione del compilatore) [C++]"
ms.assetid: fb9c1846-504c-4a3b-bb39-c8696de32f6f
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /AI (Specifica le directory di metadati)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica una directory in cui il compilatore effettuerà la ricerca per risolvere i riferimenti di file passati alla direttiva `#using`.  
  
## Sintassi  
  
```  
/AIdirectory  
```  
  
## Argomenti  
 `directory`  
 Directory o percorso in cui il compilatore effettua la ricerca.  
  
## Note  
 È possibile passare a una chiamata **\/AI** una sola directory.  Specificare un'opzione **\/AI** per ogni percorso in cui il compilatore effettuerà la ricerca.  Ad esempio, per aggiungere C:\\Project\\Meta e C:\\Common\\Meta al percorso di ricerca del compilatore per le direttive `#using`, aggiungere `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` alla riga di comando del compilatore o aggiungere ogni directory alla proprietà **Directory \#using aggiuntive** in Visual Studio.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Nel riquadro di navigazione selezionare **Proprietà di configurazione**, **C\/C\+\+**, **Generale**.  
  
3.  Modificare la proprietà **Directory \#using aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Direttiva \#using](../../preprocessor/hash-using-directive-cpp.md)