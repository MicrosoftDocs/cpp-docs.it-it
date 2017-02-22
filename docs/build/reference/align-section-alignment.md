---
title: "/ALIGN (Allineamento sezione) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.Alignment"
  - "/align"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ALIGN (opzione del linker)"
  - "ALIGN (opzione del linker)"
  - "-ALIGN (opzione del linker)"
  - "allineamento sezioni"
  - "sezioni"
  - "sezioni, specifica dell'allineamento"
ms.assetid: f2f8ac24-e90e-4bea-8205-f2960a3b1740
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /ALIGN (Allineamento sezione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ALIGN[:number]  
```  
  
## Note  
 dove:  
  
 `number`  
 Valore di allineamento.  
  
## Note  
 L'opzione \/ALIGN specifica l'allineamento di ogni sezione entro lo spazio degli indirizzi lineare del programma.  L'argomento `number` è espresso in byte e deve essere una potenza di due.  L'impostazione predefinita è 4 KB \(4096\).  Se l'allineamento produce un'immagine non valida, viene generato un avviso.  
  
 Se non si scrive un'applicazione quale un driver di periferica, non sarà necessario modificare l'allineamento.  
  
 È possibile modificare l'allineamento di una determinata sezione con il parametro di allineamento per l'opzione [\/SECTION](../../build/reference/section-specify-section-attributes.md).  
  
 Il valore di allineamento specificato non può essere inferiore all'allineamento della sezione più grande.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)