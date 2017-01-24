---
title: "/C (Conserva i commenti durante la pre-elaborazione) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.KeepComments"
  - "/c"
  - "VC.Project.VCCLWCECompilerTool.KeepComments"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/c (opzione del compilatore) [C++]"
  - "c (opzione del compilatore) [C++]"
  - "-c (opzione del compilatore) [C++]"
  - "commenti, nessuna rimozione durante la pre-elaborazione"
  - "conservazione di commenti durante la pre-elaborazione"
ms.assetid: 944567ca-16bc-4728-befe-d414a7787f26
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /C (Conserva i commenti durante la pre-elaborazione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Conserva i commenti durante la pre\-elaborazione.  
  
## Sintassi  
  
```  
/C  
```  
  
## Note  
 Questa opzione del compilatore richiede l'opzione **\/E**, **\/P** o **\/EP**.  
  
 L'esempio di codice riportato di seguito illustra il commento di codice sorgente.  
  
```  
// C_compiler_option.cpp  
// compile with: /E /C /c  
int i;   // a variable  
```  
  
 Di seguito è riportato l'output dell'esempio.  
  
```  
#line 1 "C_compiler_option.cpp"  
int i;   // a variable  
```  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Preprocessore**.  
  
4.  Modificare la proprietà **Mantieni commenti**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.KeepComments%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [\/E \(Pre\-elabora in stdout\)](../../build/reference/e-preprocess-to-stdout.md)   
 [\/P \(Pre\-elabora in un file\)](../../build/reference/p-preprocess-to-a-file.md)   
 [\/EP \(Pre\-elabora in stdout senza direttive \#line\)](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)