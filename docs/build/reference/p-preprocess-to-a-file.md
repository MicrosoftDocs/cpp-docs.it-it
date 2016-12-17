---
title: "/P (Pre-elabora in un file) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.GeneratePreprocessedFile"
  - "/p"
  - "VC.Project.VCCLWCECompilerTool.GeneratePreprocessedFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/P (opzione del compilatore) [C++]"
  - "file di output, preprocessore"
  - "P (opzione del compilatore) [C++]"
  - "-P (opzione del compilatore) [C++]"
  - "pre-elaborazione di file di output"
ms.assetid: 123ee54f-8219-4a6f-9876-4227023d83fc
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /P (Pre-elabora in un file)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Pre\-elabora i file di origine C e C\+\+ e scrive l'output pre\-elaborato in un file.  
  
## Sintassi  
  
```  
/P  
```  
  
## Note  
 Il file avrà lo stesso nome di base del file di origine ed estensione i.  Durante questa operazione tutte le direttive del preprocessore e le espansioni delle macro vengono eseguite e i commenti vengono rimossi.  Per mantenere i commenti nell'output pre\-elaborato, utilizzare l'opzione [\/C \(Conserva i commenti durante la pre\-elaborazione\)](../../build/reference/c-preserve-comments-during-preprocessing.md) con **\/P**.  
  
 Con **\/P**, le direttive `#line` vengono aggiunte all'output, all'inizio e alla fine di ogni file incluso e intorno alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale.  Tali direttive rinumerano le righe del file pre\-elaborato.  Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file di origine anziché alle righe del file pre\-elaborato.  Per disattivare la generazione di direttive `#line`, utilizzare [\/EP \(Pre\-elabora in stdout senza direttive \#line\)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) oltre a **\/P**.  
  
 L'opzione **\/P** disattiva la compilazione.  Non crea un file obj, anche se si utilizza [\/Fo \(Nome file oggetto\)](../../build/reference/fo-object-file-name.md).  È necessario inviare di nuovo il file pre\-elaborato per la compilazione.  L'opzione **\/P** elimina anche i file di output dalle opzioni **\/FA**, **\/Fa** e **\/Fm**.  Per ulteriori informazioni, vedere [\/FA, \/Fa \(File di listato\)](../../build/reference/fa-fa-listing-file.md) e [\/Fm \(Specifica file map\)](../../build/reference/fm-name-mapfile.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Preprocessore**.  
  
4.  Modificare la proprietà **Genera file pre\-elaborati**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.  
  
## Esempio  
 Attraverso la riga di comando che segue viene effettuata la pre\-elaborazione di `ADD.C`, i commenti vengono conservati, le direttive `#line` vengono aggiunte e il risultato visualizzato in un file, `ADD.I`:  
  
```  
CL /P /C ADD.C  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [\/Fi \(pre\-elaborazione nome file di output\)](../../build/reference/fi-preprocess-output-file-name.md)