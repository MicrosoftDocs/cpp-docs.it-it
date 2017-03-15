---
title: "/MACHINE (Specifica la piattaforma di destinazione) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.TargetMachine"
  - "/machine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MACHINE (opzione del linker)"
  - "MACHINE (opzione del linker)"
  - "-MACHINE (opzione del linker)"
  - "file MAP, creazione del linker"
  - "piattaforma di destinazione"
ms.assetid: 8d41bf4b-7e53-4ab9-9085-d852b08d31c2
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /MACHINE (Specifica la piattaforma di destinazione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MACHINE:{ARM|EBC|X64|X86}  
```  
  
## Note  
 L'opzione \/MACHINE specifica la piattaforma di destinazione per il programma.  
  
 In genere non è necessario specificare l'opzione \/MACHINE.  Il tipo di computer viene infatti dedotto dai file obj.  In alcune circostanze, tuttavia, non è possibile determinare il tipo di computer utilizzato e viene generato un [errore degli strumenti del linker LNK1113](../../error-messages/tool-errors/linker-tools-error-lnk1113.md).  In tal caso, specificare \/MACHINE.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Computer di destinazione**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)