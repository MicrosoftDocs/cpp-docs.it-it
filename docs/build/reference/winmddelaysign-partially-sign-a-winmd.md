---
title: "/WINMDDELAYSIGN (firmare parzialmente un winmd) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.WINMDDelaySign"
dev_langs: 
  - "C++"
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /WINMDDELAYSIGN (firmare parzialmente un winmd)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita la firma parziale di un file di metadati Runtime di Windows \(.winmd\) inserendo la chiave pubblica nel file.  
  
```  
  
/WINMDDELAYSIGN[:NO]  
  
```  
  
## Note  
 È simile all'opzione del linker [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) applicata al file .winmd.  Utilizzare **\/WINMDDELAYSIGN** se si desidera inserire solamente la chiave pubblica nel file .winmd.  Per impostazione predefinita, il linker agisce come se **\/WINMDDELAYSIGN:NO** sia stato specificato; ovvero non firma il file winmd.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Metadati Windows**.  
  
4.  Nell'elenco a discesa **Firma Ritardata Metadati Windows**, selezionare l'opzione desiderata.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)