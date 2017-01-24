---
title: "/FUNCTIONPADMIN (Crea immagine con funzionalit&#224; di patch a caldo) | Microsoft Docs"
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
  - "/functionpadmin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FUNCTIONPADMIN (opzione del linker)"
  - "-FUNCTIONPADMIN (opzione del linker)"
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FUNCTIONPADMIN (Crea immagine con funzionalit&#224; di patch a caldo)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prepara un'immagine per l'applicazione di una patch a caldo.  
  
## Sintassi  
  
```  
/FUNCTIONPADMIN[:space]  
```  
  
## Note  
 dove  
  
 `space` \(facoltativo\)  
 La quantità di riempimento da aggiungere all'inizio di ogni funzione, 5, 6, o 16. Immagini x86 richiedono cinque byte di riempimento, le immagini x64 richiedono 6 byte e immagini incorporate per la famiglia di processori Itanium richiedono 16 byte di riempimento all'inizio di ogni funzione.  
  
 Per impostazione predefinita, verrà aggiunta all'immagine la quantità corretta di spazio, determinata in base al tipo di computer.  
  
 Per consentire al linker di generare un'immagine che supporta la funzionalità di patch a caldo, è necessario che i file obj siano stati compilati con [\/hotpatch \(Crea immagine con funzionalità di patch a caldo\)](../../build/reference/hotpatch-create-hotpatchable-image.md).  
  
 Quando un'immagine viene compilata e collegata con una singola chiamata di cl.exe, **\/hotpatch** implica **\/functionpadmin**.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)