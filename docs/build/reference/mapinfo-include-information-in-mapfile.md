---
title: "/MAPINFO (Include informazioni in file MAP) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.MapLines"
  - "VC.Project.VCLinkerTool.MapInfoFixups"
  - "VC.Project.VCLinkerTool.MapExports"
  - "/mapinfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MAPINFO (opzione del linker)"
  - "MAPINFO (opzione del linker)"
  - "-MAPINFO (opzione del linker)"
ms.assetid: 533d2bce-f9b7-4fea-ae1c-0b4864c9d10b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MAPINFO (Include informazioni in file MAP)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MAPINFO:EXPORTS  
```  
  
## Note  
 L'opzione \/MAPINFO indica al linker che è necessario includere le informazioni specificate in un file MAP, creato se si specifica l'opzione [\/MAP](../../build/reference/map-generate-mapfile.md).  EXPORTS indica al linker di includere le funzioni esportate.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Debug**.  
  
4.  Modificare una delle proprietà **Esportazioni map**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapExports%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)