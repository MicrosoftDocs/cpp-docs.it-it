---
title: "/DRIVER (Driver in modalit&#224; kernel di Windows NT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.driver"
  - "/driver"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DRIVER (opzione del linker)"
  - "DRIVER (opzione del linker)"
  - "-DRIVER (opzione del linker)"
  - "driver kernel (modalità)"
ms.assetid: aeee8e28-5d97-40f5-ba16-9f370fe8a1b8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /DRIVER (Driver in modalit&#224; kernel di Windows NT)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DRIVER[:UPONLY | :WDM]  
```  
  
## Note  
 Utilizzare l'opzione del linker \/DRIVER per compilare un driver in modalità kernel Windows NT.  
  
 **\/DRIVER:UPONLY** indica al linker di aggiungere il bit **IMAGE\_FILE\_UP\_SYSTEM\_ONLY** alle caratteristiche nel file di intestazione di output per specificare che si tratta di un driver per monoprocessore \(UP\).  Il sistema operativo non caricherà un driver monoprocessore su un sistema multiprocessore \(MP\).  
  
 **\/DRIVER:WDM** indica al linker di impostare il bit **IMAGE\_DLLCHARACTERISTICS\_WDM\_DRIVER** nel campo DllCharacteristics dell'intestazione facoltativa.  
  
 Se non viene specificato **\/DRIVER**, questi bit non vengono impostati dal linker.  
  
 Se viene specificato **\/DRIVER**:  
  
-   \/FIXED:NO è attivo \([\/FIXED \(Indirizzo di base fisso\)](../../build/reference/fixed-fixed-base-address.md)\).  
  
-   L'estensione del file di output sarà sys.  Utilizzare **\/OUT** per modificare il nome file predefinito e l'estensione \([\/OUT \(nome file di output\)](../../build/reference/out-output-file-name.md)\).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Sistema**.  
  
4.  Modificare la proprietà **Driver**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere `P:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.driver`.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)