---
title: "/PDB (Usa database di programma) | Microsoft Docs"
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
  - "/pdb"
  - "VC.Project.VCLinkerTool.ProgramDatabaseFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pdb (file), creazione"
  - "/PDB (opzione del linker)"
  - "PDB (file), creazione"
  - "PDB (opzione del linker)"
  - "-PDB (opzione del linker)"
ms.assetid: d23db0ce-10cb-427a-bc60-d6b2a852723d
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /PDB (Usa database di programma)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/PDB:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Nome specificato dall'utente per il database di programma \(PDB\) creato nel linker.  Sostituisce il nome predefinito.  
  
## Note  
 Per impostazione predefinita quando si specifica [\/DEBUG](../../build/reference/debug-generate-debug-info.md) viene creato un database di programma in cui vengono memorizzate informazioni di debug.  Il nome file predefinito per il database di programma è costituito dal nome del programma e dall'estensione pdb.  
  
 Utilizzare \/PDB:*filename* per specificare il nome del file PDB.  Se l'opzione \/DEBUG non è specificata, \/PDB verrà ignorata.  
  
 Un file PDB può presentare una dimensione massima di 2 GB.  
  
 Per ulteriori informazioni, vedere [File PDB come input del linker](../../build/reference/dot-pdb-files-as-linker-input.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Debug**.  
  
4.  Modificare la proprietà **Genera file del database di programma**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)