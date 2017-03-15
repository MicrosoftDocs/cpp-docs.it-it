---
title: "/Fd (Nome file database di programma) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/FD"
  - "VC.Project.VCCLWCECompilerTool.ProgramDataBaseFileName"
  - "VC.Project.VCCLCompilerTool.ProgramDataBaseFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pdb (file), creazione"
  - "/FD (opzione del compilatore) [C++]"
  - "FD (opzione del compilatore) [C++]"
  - "-FD (opzione del compilatore) [C++]"
  - "PDB (file), creazione"
  - "database di programma (opzione del compilatore) [C++]"
  - "nome file del database di programma [C++]"
ms.assetid: 3977a9ed-f0ac-45df-bf06-01cedd2ba85a
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /Fd (Nome file database di programma)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica un nome per il file di database di programma \(PDB\) creato da [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
## Sintassi  
  
```  
/Fdpathname  
```  
  
## Note  
 Senza **\/Fd**, viene utilizzato il nome del file pdb predefinito VC`x`0.pdb, dove `x` è il numero di versione principale di Visual C\+\+ in uso.  
  
 Se si specifica un nome di percorso che non include un nome file \(il percorso termina con una barra rovesciata\), il compilatore creerà un file .pdb denominato VC`x`0.pdb nella cartella specificata.  
  
 Se si specifica un nome file che non include un'estensione, il compilatore utilizzerà l'estensione PDB.  
  
 Questa opzione assegna anche un nome al file IDB dello stato utilizzato per la ricompilazione minima e per la compilazione incrementale.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **File di output**.  
  
4.  Modificare la proprietà **Nome file database di programma**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ProgramDataBaseFileName%2A>.  
  
## Esempio  
 Questa riga di comando crea un file PDB denominato PROG.pdb e un file con estensione IDB denominato PROG.idb:  
  
```  
CL /DDEBUG /Zi /FdPROG.PDB PROG.CPP  
```  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)