---
title: "/TLBOUT (Assegna un nome al file TLB) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.TypeLibraryFile"
  - "/tlbout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".tlb (file), ridenominazione"
  - "/TLBOUT (opzione del linker)"
  - "tlb (file), ridenominazione"
  - "TLBOUT (opzione del linker)"
  - "-TLBOUT (opzione del linker)"
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /TLBOUT (Assegna un nome al file TLB)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/TLBOUT:[path\]filename  
```  
  
## Note  
 dove:  
  
 *path*  
 Specifica del percorso assoluto o relativo in cui creare il file tlb.  
  
 *filename*  
 Specifica il nome del file tlb creato nel compilatore MIDL.  Non viene utilizzata alcuna estensione di file predefinita. Specificare *filename*.tlb se si desidera assegnare al file l'estensione tlb.  
  
## Note  
 L'opzione \/TLBOUT specifica il nome e l'estensione del file tlb.  
  
 Il compilatore MIDL viene chiamato nel linker Visual C\+\+ durante il collegamento di progetti che presentano l'attributo [module](../../windows/module-cpp.md).  
  
 Se \/TLBOUT non è specificato, al file tlb verrà assegnato il nome specificato in [\/IDLOUT](../../build/reference/idlout-name-midl-output-files.md) *filename*.  Se l'opzione \/IDLOUT non è specificata, il file tlb verrà denominato vc70.tlb.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **IDL incorporato**.  
  
4.  Modificare la proprietà **Libreria dei tipi**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [\/IGNOREIDL \(Non elabora gli attributi in MIDL\)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [\/MIDL \(Specifica opzioni della riga di comando MIDL\)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)