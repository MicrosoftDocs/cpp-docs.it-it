---
title: -Fd (nome File di Database di programma) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /FD
- VC.Project.VCCLWCECompilerTool.ProgramDataBaseFileName
- VC.Project.VCCLCompilerTool.ProgramDataBaseFileName
dev_langs: C++
helpviewer_keywords:
- /FD compiler option [C++]
- program database file name [C++]
- -FD compiler option [C++]
- PDB files, creating
- program database compiler option [C++]
- .pdb files, creating
- FD compiler option [C++]
ms.assetid: 3977a9ed-f0ac-45df-bf06-01cedd2ba85a
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 09873f44fbf37650e8747afd3fc19aba81603dc1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fd-program-database-file-name"></a>/Fd (Nome file database di programma)
Specifica un nome di file per il file del database (PDB) creato da [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Fdpathname  
```  
  
## <a name="remarks"></a>Note  
 Senza **/Fd**, il nome del file PDB predefinito VC*x*0.pdb, in cui *x* è il numero di versione principale di Visual C++ in uso.  
  
 Se si specifica un nome di percorso che non include un nome di file (il percorso termina con una barra rovesciata), il compilatore crea un file con estensione pdb denominato VC*x*0 pdb nella directory specificata.  
  
 Se si specifica un nome di file che non include un'estensione, il compilatore Usa PDB come l'estensione.  
  
 Questa opzione anche al nome del file IDB dello stato utilizzato per la ricompilazione minima e la compilazione incrementale.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic sulla pagina delle proprietà **File di output** .  
  
4.  Modificare il **nome di File di Database di programma** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ProgramDataBaseFileName%2A>.  
  
## <a name="example"></a>Esempio  
 Questa riga di comando crea un file pdb denominato Prog. pdb e un file con estensione IDB denominato Prog. IDB:  
  
```  
CL /DDEBUG /Zi /FdPROG.PDB PROG.CPP  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)