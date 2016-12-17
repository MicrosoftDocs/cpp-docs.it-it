---
title: "/ALLOWBIND (prevenzione dell&#39;associazione di DLL) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.PreventDLLBinding"
  - "/allowbind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ALLOWBIND (opzione del linker)"
  - "ALLOWBIND (opzione del linker)"
  - "-ALLOWBIND (opzione del linker)"
  - "associazione di DLL"
  - "DLL [C++], impedire l'associazione"
  - "impedire l'associazione di DLL"
ms.assetid: 30e37e24-12e4-407e-988a-39d357403598
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /ALLOWBIND (prevenzione dell&#39;associazione di DLL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/ALLOWBIND[:NO]  
```  
  
## Note  
 \/ALLOWBIND:NO imposta nell'intestazione della DLL un bit per indicare a Bind.exe che l'immagine non può essere associata.  Una DLL può non essere associata se include una firma digitale, perché l'associazione rende la firma non valida.  
  
 È possibile modificare una DLL esistente per la funzionalità \/ALLOWBIND con l'opzione [\/ALLOWBIND](../../build/reference/allowbind.md)per l'utilità EDITBIN.  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere **Proprietà di configurazione**, **Linker**, quindi selezionare **Riga di comando**.  
  
3.  Immettere `/ALLOWBIND:NO` in **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Funzione BindImage](http://msdn.microsoft.com/it-it/library/windows/desktop/ms679278.aspx)   
 [Funzione BindImageEx](http://msdn.microsoft.com/it-it/library/windows/desktop/ms679279.aspx)