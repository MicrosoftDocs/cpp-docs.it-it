---
title: "/WINMDFILE (specificare il file winmd) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.GenerateWindowsMetadataFile"
dev_langs: 
  - "C++"
ms.assetid: 062b41b3-14d6-432c-a361-fdb66e918931
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /WINMDFILE (specificare il file winmd)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il nome del file per l'output di metadati di Windows Runtime \(.winmd\) generato dall'opzione del linker [\/WINMD](../../build/reference/winmd-generate-windows-metadata.md).  
  
```  
  
/WINMDFILE:filename  
  
```  
  
## Note  
 Utilizzare il valore specificato in `filename` per eseguire l'override del nome file predefinito di .winmd \(`binaryname`.winmd\).  Si noti che non si aggiungono ".winmd" a `filename`. Se più valori sono elencati nella riga di comando di **\/WINMDFILE**, quella più recente ha la precedenza.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Metadati Windows**.  
  
4.  Nella casella di **File di metadati Windows**, immettere il percorso del file.  
  
## Vedere anche  
 [\/WINMD \(generare metadati di Windows\)](../../build/reference/winmd-generate-windows-metadata.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)