---
title: "/WINMD (generare metadati di Windows) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.GenerateWindowsMetadata"
dev_langs: 
  - "C++"
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /WINMD (generare metadati di Windows)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita la generazione di file di metadati di Windows Runtime \(.winmd\).  
  
```  
  
/WINMD[:{NO|ONLY}]  
```  
  
## Note  
 \/WINMD  
 L'impostazione predefinita per le applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Il linker genera sia il file eseguibile binario che il file di metadati di .winmd.  
  
 \/WINMD:NO  
 Il linker genera solo il file eseguibile binario, ma non un file .winmd.  
  
 \/WINMD:ONLY  
 Il linker genera solo il file .winmd, ma non il file eseguibile binario.  
  
 Per impostazione predefinita, il nome file di output avrà il form `binaryname`.winmd.  Per specificare un altro nome file, utilizzare l'opzione [\/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Metadati Windows**.  
  
4.  Nell'elenco a discesa di **Genera metadati Windows**, selezionare l'opzione desiderata.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)