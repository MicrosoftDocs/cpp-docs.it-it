---
title: "/DEF (Specifica il file di definizione moduli) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.ModuleDefinitionFile"
  - "/def"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DEF (opzione del linker)"
  - "DEF (opzione del linker)"
  - "-DEF (opzione del linker)"
  - "file di definizione moduli"
  - "file di definizione moduli, specifica"
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DEF (Specifica il file di definizione moduli)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DEF:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Nome del file di definizione moduli \(def\) da passare al linker.  
  
## Note  
 L'opzione \/DEF passa un file di definizione moduli con estensione def al linker.  Con LINK è possibile specificare un solo file def.  Per informazioni dettagliate sui file def, vedere [File di definizione moduli](../../build/reference/module-definition-dot-def-files.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Input**.  
  
4.  Modificare la proprietà **File di definizione moduli**.  
  
 Per specificare un file def all'interno dell'ambiente di sviluppo, è necessario aggiungerlo al progetto insieme ad altri file, quindi specificare il file nell'opzione \/DEF.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)