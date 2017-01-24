---
title: "/IDLOUT (Assegna un nome ai file di output MIDL) | Microsoft Docs"
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
  - "/idlout"
  - "VC.Project.VCLinkerTool.MergedIDLBaseFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file idl, percorso"
  - "/IDLOUT (opzione del linker)"
  - "IDL (file), percorso"
  - "IDLOUT (opzione del linker)"
  - "-IDLOUT (opzione del linker)"
  - "MIDL"
  - "MIDL, nomi file di output"
ms.assetid: 10d00a6a-85b4-4de1-8732-e422c6931509
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /IDLOUT (Assegna un nome ai file di output MIDL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/IDLOUT:[path\]filename  
```  
  
## Parametri  
 *path*  
 Specifica di un percorso assoluto o relativo.  Il percorso specificato viene utilizzato solo per i file idl. Tutti gli altri file vengono inseriti nella directory del progetto.  
  
 *filename*  
 Specifica il nome del file idl creato nel compilatore MIDL.  Non viene presupposta alcuna estensione di file predefinita. Specificare *filename*.idl se si desidera precisare che si tratta di un file idl.  
  
## Note  
 L'opzione \/IDLOUT specifica il nome e l'estensione del file idl.  
  
 Il compilatore MIDL viene chiamato nel linker Visual C\+\+ durante il collegamento di progetti che presentano l'attributo [module](../../windows/module-cpp.md).  
  
 \/IDLOUT consente inoltre di specificare i nomi degli altri file di output associati al compilatore MIDL:  
  
-   *filename*.tlb  
  
-   *filename*\_p.c  
  
-   *filename*\_i.c  
  
-   *filename*.h  
  
 *filename* è il parametro passato a \/IDLOUT.  Se è specificata l'opzione [\/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md), al file tlb verrà assegnato il nome specificato in \/TLBOUT *filename*.  
  
 Se non viene specificata né \/IDLOUT né \/TLBOUT, verranno creati i file vc70.tlb, vc70.idl, vc70\_p.c, vc70\_i.c e vc70.h.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **IDL incorporato**.  
  
4.  Modificare la proprietà **Nome file base IDL unite**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [\/IGNOREIDL \(Non elabora gli attributi in MIDL\)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [\/MIDL \(Specifica opzioni della riga di comando MIDL\)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Building an Attributed Program](../../windows/building-an-attributed-program.md)