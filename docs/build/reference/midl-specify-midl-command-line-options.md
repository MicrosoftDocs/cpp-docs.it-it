---
title: "/MIDL (Specifica opzioni della riga di comando MIDL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/midl"
  - "VC.Project.VCLinkerTool.MidlCommandFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MIDL (opzione del linker)"
  - "MIDL"
  - "MIDL (opzione del linker)"
  - "-MIDL (opzione del linker)"
  - "MIDL, opzioni della riga di comando"
ms.assetid: 22dc259e-b34c-4ed3-a380-4beb734482c1
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /MIDL (Specifica opzioni della riga di comando MIDL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MIDL:@file  
```  
  
## Note  
 dove:  
  
 `file`  
 Nome del file contenente le [opzioni della riga di comando MIDL](http://msdn.microsoft.com/library/windows/desktop/aa366839).  
  
## Note  
 Tutte le opzioni relative alla conversione dei file dal formato IDL al formato TLB devono essere assegnate in `file`. Non è possibile specificare alla riga di comando del linker le opzioni della riga di comando MIDL.  Se \/MIDL non è specificata, il compilatore MIDL sarà richiamato solo con il nome del file IDL e senza altre opzioni.  
  
 Nel file è necessario specificare un'opzione della riga di comando MIDL per riga.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **IDL incorporato**.  
  
4.  Modificare la proprietà **Comandi MIDL**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [\/IDLOUT \(Assegna un nome ai file di output MIDL\)](../../build/reference/idlout-name-midl-output-files.md)   
 [\/IGNOREIDL \(Non elabora gli attributi in MIDL\)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [\/TLBOUT \(Assegna un nome al file TLB\)](../../build/reference/tlbout-name-dot-tlb-file.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)