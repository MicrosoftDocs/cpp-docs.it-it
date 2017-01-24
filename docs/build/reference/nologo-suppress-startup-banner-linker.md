---
title: "/NOLOGO (Non visualizza il messaggio di avvio) (Linker) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.SuppressStartupBanner"
  - "/nologo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/NOLOGO (opzione del linker)"
  - "intestazioni, soppressione dei messaggi di avvio"
  - "messaggio di copyright"
  - "NOLOGO (opzione del linker)"
  - "-NOLOGO (opzione del linker)"
  - "Non visualizzare messaggio di avvio (opzione del linker)"
  - "numeri di versione, evitare la visualizzazione del linker"
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /NOLOGO (Non visualizza il messaggio di avvio) (Linker)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/NOLOGO  
```  
  
## Note  
 L'opzione \/NOLOGO evita la visualizzazione delle informazioni sul copyright e del numero di versione.  
  
 Questa opzione impedisce anche l'eco dei file di comando.  Per informazioni dettagliate, vedere [File di comando LINK](../../build/reference/link-command-files.md).  
  
 Per impostazione predefinita queste informazioni vengono inviate dal linker alla finestra Output.  Dalla riga di comando vengono inviate all'output standard e possono essere reindirizzate a un file.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  L'opzione è utilizzabile solo alla riga di comando.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Non è possibile modificare l'opzione a livello di codice.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)