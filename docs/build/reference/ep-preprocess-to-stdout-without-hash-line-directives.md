---
title: "/EP (Pre-elabora in stdout senza direttive #line) | Microsoft Docs"
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
  - "/ep"
  - "VC.Project.VCCLCompilerTool.GeneratePreprocessedFileNoLines"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/EP (opzione del compilatore) [C++]"
  - "copia dell'output del preprocessore in stdout"
  - "EP (opzione del compilatore) [C++]"
  - "-EP (opzione del compilatore) [C++]"
  - "output del preprocessore, copia in stdout"
ms.assetid: 6ec411ae-e33d-4ef5-956e-0054635eabea
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /EP (Pre-elabora in stdout senza direttive #line)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Pre\-elabora i file di origine C e C\+\+ e copia i file pre\-elaborati nella periferica di output standard.  
  
## Sintassi  
  
```  
/EP  
```  
  
## Note  
 Durante questa operazione tutte le direttive del preprocessore e le espansioni delle macro vengono eseguite e i commenti vengono rimossi.  Per mantenere i commenti nell'output pre\-elaborato, utilizzare l'opzione [\/C \(Conserva i commenti durante la pre\-elaborazione\)](../../build/reference/c-preserve-comments-during-preprocessing.md) con **\/EP**.  
  
 L'opzione **\/EP** disattiva la compilazione.  È necessario inviare di nuovo il file pre\-elaborato per la compilazione.  L'opzione **\/EP** elimina anche i file di output dalle opzioni **\/FA**, **\/Fa** e **\/Fm**.  Per ulteriori informazioni, vedere [\/FA, \/Fa \(File di listato\)](../../build/reference/fa-fa-listing-file.md) e [\/Fm \(Specifica file map\)](../../build/reference/fm-name-mapfile.md).  
  
 Gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file pre\-elaborato anziché al file di origine.  Se si desidera che i numeri di riga facciano riferimento al file di origine, utilizzare [\/E \(Pre\-elabora in stdout\)](../../build/reference/e-preprocess-to-stdout.md).  A tale scopo, l'opzione **\/E** aggiunge le direttive `#line` all'output.  
  
 Per inviare l'output pre\-elaborato in un file con le direttive `#line`, utilizzare l'opzione [\/P \(Pre\-elabora in un file\)](../../build/reference/p-preprocess-to-a-file.md).  
  
 Per inviare l'output pre\-elaborato a stdout con le direttive `#line`, utilizzare **\/P** e **\/EP** congiuntamente.  
  
 Non è possibile utilizzare intestazioni precompilate con l'opzione **\/EP**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Preprocessore**.  
  
4.  Modificare la proprietà **Genera file pre\-elaborati**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## Esempio  
 Nella riga di comando che segue il file `ADD.C` viene pre\-elaborato, i commenti vengono conservati e il risultato viene visualizzato sulla periferica di output standard:  
  
```  
CL /EP /C ADD.C  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)