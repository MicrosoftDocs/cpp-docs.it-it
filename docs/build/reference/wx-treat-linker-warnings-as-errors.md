---
title: "/WX (Considera gli avvisi del linker come errori) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/WX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/WX (opzione del linker)"
  - "WX (opzione del linker)"
  - "-WX (opzione del linker)"
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /WX (Considera gli avvisi del linker come errori)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/WX[:NO]  
```  
  
## Note  
 \/WX fa in modo che non venga generato alcun file di output se il linker genera un avviso.  
  
 Questa condizione è analoga a **\/WX** per il compilatore \(per ulteriori informazioni, vedere [\/w, \/Wn, \/WX, \/Wall, \/wln, \/wdn, \/wen, \/won \(Livello avvisi\)](../../build/reference/compiler-option-warning-level.md)\).  Tuttavia, specificando **\/WX** per la compilazione non è detto che **\/WX** verrà anche applicato per la fase di collegamento; è necessario specificare **\/WX** in modo esplicito per ogni strumento.  
  
 Per impostazione predefinita, **\/WX** non è attiva.  Per considerare gli avvisi del linker come errori, specificare l'opzione **\/WX**.  L'opzione **\/WX:NO** equivale a non specificare **\/WX**.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)