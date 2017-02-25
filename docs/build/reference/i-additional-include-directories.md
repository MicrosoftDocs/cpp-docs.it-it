---
title: "/I (Directory di inclusione aggiuntive) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.AdditionalIncludeDirectories"
  - "VC.Project.VCCLCompilerTool.AdditionalIncludeDirectories"
  - "/I"
  - "VC.Project.VCNMakeTool.IncludeSearchPath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/I (opzione del compilatore) [C++]"
  - "Directory di inclusione aggiuntive (opzione del compilatore)"
  - "I (opzione del compilatore) [C++]"
  - "-I (opzione del compilatore) [C++]"
  - "directory di inclusione, opzione del compilatore [C++]"
  - "impostazione delle directory di inclusione"
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /I (Directory di inclusione aggiuntive)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge una directory all'elenco di directory in cui viene eseguita la ricerca dei file di inclusione.  
  
## Sintassi  
  
```  
/I[ ]directory  
```  
  
## Argomenti  
 `directory`  
 La directory da aggiungere all'elenco di directory in cui viene eseguita la ricerca dei file di inclusione.  
  
## Note  
 Per aggiungere più di una directory, utilizzare l'opzione più di una volta.  La ricerca viene eseguita nelle directory solo fino a quando viene trovato il file di inclusione specificato.  
  
 È possibile utilizzare questa opzione con l'opzione Ignora percorsi di inclusione standard \([\/X \(Ignora percorso di inclusione standard\)](../../build/reference/x-ignore-standard-include-paths.md)\).  
  
 Il compilatore ricerca le directory nel seguente ordine:  
  
1.  Directory contenenti il file di origine.  
  
2.  Directory specificate con l'opzione **\/I**, nell'ordine in cui vengono rilevate da CL.  
  
3.  Directory specificate nella variabile di ambiente **INCLUDE**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Directory di inclusione aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.  
  
## Esempio  
 Il comando che segue cerca i file di inclusione richiesti da MAIN.c nel seguente ordine: prima nella directory contenente MAIN.c, quindi nella directory \\INCLUDE, quindi nella directory \\MY\\INCLUDE, infine nelle directory assegnate alla variabile di ambiente INCLUDE.  
  
```  
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)