---
title: "/IGNOREIDL (Non elabora gli attributi in MIDL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.IgnoreEmbeddedIDL"
  - "/ignoreidl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/IGNOREIDL (opzione del linker)"
  - "IGNOREIDL (opzione del linker)"
  - "-IGNOREIDL (opzione del linker)"
ms.assetid: 29514098-6a1c-4317-af2f-1dc268972780
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /IGNOREIDL (Non elabora gli attributi in MIDL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/IGNOREIDL  
```  
  
## Note  
 L'opzione \/IGNOREIDL specifica che qualsiasi [attributo IDL](../../windows/idl-attributes.md) del codice sorgente non deve essere elaborato in un file IDL.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **IDL incorporato**.  
  
4.  Modificare la proprietà **Ignora IDL incorporate**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreEmbeddedIDL%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [\/IDLOUT \(Assegna un nome ai file di output MIDL\)](../../build/reference/idlout-name-midl-output-files.md)   
 [\/TLBOUT \(Assegna un nome al file TLB\)](../../build/reference/tlbout-name-dot-tlb-file.md)   
 [\/MIDL \(Specifica opzioni della riga di comando MIDL\)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)