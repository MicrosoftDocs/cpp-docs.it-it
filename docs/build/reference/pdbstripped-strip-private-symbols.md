---
title: "/PDBSTRIPPED (Rimuove simboli privati) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/pdbstripped"
  - "VC.Project.VCLinkerTool.StripPrivateSymbols"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pdb (file), rimozione di simboli privati"
  - "/PDBSTRIPPED (opzione del linker)"
  - "PDB (file), rimozione di simboli privati"
  - "PDBSTRIPPED (opzione del linker)"
  - "-PDBSTRIPPED (opzione del linker)"
ms.assetid: 9b9e0070-6a13-4142-8180-19c003fbbd55
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /PDBSTRIPPED (Rimuove simboli privati)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/PDBSTRIPPED:pdb_file_name  
```  
  
## Note  
 dove:  
  
 *pdb\_file\_name*  
 Nome specificato dall'utente per il database di programma \(PDB\) ridotto creato nel linker.  
  
## Note  
 Con l'opzione \/PDBSTRIPPED viene creato un secondo database di programma \(PDB\) quando si compila l'immagine del programma con una qualsiasi delle opzioni del compilatore o del linker che generano un file PDB \([\/DEBUG](../../build/reference/debug-generate-debug-info.md), [\/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), \/Zd o \/Zi\).  Il secondo file PDB omette i simboli che non si desidera fornire ai clienti.  Tale file conterrà solo quanto segue:  
  
-   Simboli pubblici  
  
-   L'elenco dei file oggetto e le porzioni del file eseguibile cui contribuiscono  
  
-   Record di debug FPO \(Frame Pointer Optimization\) utilizzati per scorrere lo stack  
  
 Il file PDB ridotto non conterrà quanto segue:  
  
-   Informazioni sui tipi  
  
-   Informazioni sul numero di riga  
  
-   Simboli CodeView del file per oggetto, quali i simboli per funzioni, variabili locali e dati statici  
  
 Il file PDB completo viene generato comunque quando si utilizza \/PDBSTRIPPED.  
  
 Se non si crea alcun file PDB, l'opzione \/PDBSTRIPPED verrà ignorata.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Debug**.  
  
4.  Modificare la proprietà **Rimuovi simboli privati**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StripPrivateSymbols%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)