---
title: "/WINMDKEYFILE (specificare il file di chiave winmd) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.WINMDKeyFile"
dev_langs: 
  - "C++"
ms.assetid: 65d88fdc-fff9-49ea-8cfc-b2f408741734
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /WINMDKEYFILE (specificare il file di chiave winmd)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica una chiave o una coppia di chiavi per la firma di un file di metadati di Windows Runtime \(.winmd\).  
  
```  
  
/WINMDKEYFILE:filename  
  
```  
  
## Note  
 È simile all'opzione del linker [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) applicata a un file .winmd.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Metadati Windows**.  
  
4.  Nella casella di **File delle Chiavi di Metadati Windows**, immettere il percorso del file.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)