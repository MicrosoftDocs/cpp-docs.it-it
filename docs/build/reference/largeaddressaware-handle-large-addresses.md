---
title: "/LARGEADDRESSAWARE (Gestione di indirizzi di grandi dimensioni) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.LargeAddressAware"
  - "/largeaddressaware"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LARGEADDRESSAWARE (opzione del linker)"
  - "LARGEADDRESSAWARE (opzione del linker)"
  - "-LARGEADDRESSAWARE (opzione del linker)"
ms.assetid: a29756c8-e893-47a9-9750-1f0d25359385
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /LARGEADDRESSAWARE (Gestione di indirizzi di grandi dimensioni)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/LARGEADDRESSAWARE[:NO]  
```  
  
## Note  
 L'opzione \/LARGEADDRESSAWARE indica al linker che l'applicazione può gestire indirizzi di dimensione superiore a 2 GB.  Nei compilatori a 64 bit, l'opzione è abilitata per impostazione predefinita.  Nei compilatori a 32 bit, \/LARGEADDRESSAWARE:NO è attivato se \/LARGEADDRESSAWARE non è specificato in altro modo nella riga di comando del linker.  
  
 Se un'applicazione è stata collegata a \/LARGEADDRESSAWARE, con DUMPBIN [\/HEADERS](../../build/reference/headers.md) verranno visualizzate informazioni su tale operazione.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Sistema**.  
  
4.  Modificare la proprietà **Attiva indirizzi grandi**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)