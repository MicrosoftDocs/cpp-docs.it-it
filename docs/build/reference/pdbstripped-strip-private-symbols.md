---
title: -PDBSTRIPPED (Rimuove simboli privati) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /pdbstripped
- VC.Project.VCLinkerTool.StripPrivateSymbols
dev_langs:
- C++
helpviewer_keywords:
- /PDBSTRIPPED linker option
- -PDBSTRIPPED linker option
- .pdb files, stripping private symbols
- PDB files, stripping private symbols
- PDBSTRIPPED linker option
ms.assetid: 9b9e0070-6a13-4142-8180-19c003fbbd55
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 331e490512afe8e9267eb1d0d370cbcf99aa99aa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376637"
---
# <a name="pdbstripped-strip-private-symbols"></a>/PDBSTRIPPED (Rimuove simboli privati)
```  
/PDBSTRIPPED:pdb_file_name  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *pdb_file_name*  
 Un nome utente specificato per il database rimosso programma (PDB) creato dal linker.  
  
## <a name="remarks"></a>Note  
 L'opzione /PDBSTRIPPED crea un secondo file di programma (PDB) di database durante la compilazione dell'immagine del programma con qualsiasi del compilatore o del linker che genera un file PDB ([/debug](../../build/reference/debug-generate-debug-info.md), [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), /Zd o /Zi). Il secondo file PDB omette i simboli che non si desidera fornire ai clienti. Conterrà solo il secondo file PDB:  
  
-   Simboli pubblici  
  
-   L'elenco dei file oggetto e le parti del file eseguibile a cui contribuiscono  
  
-   Record di frame puntatore (FPO) di ottimizzazione debug utilizzato per scorrere lo stack  
  
 Il file PDB ridotto non conterrà:  
  
-   Informazioni sul tipo  
  
-   Informazioni sul numeri di riga  
  
-   Simboli CodeView di file per oggetto, ad esempio quelle per le funzioni, variabili locali e i dati statici  
  
 Il file PDB completo verrà ancora generato quando si utilizza /PDBSTRIPPED.  
  
 Se non si crea un file PDB, l'opzione /PDBSTRIPPED verrà ignorata.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Debug** pagina delle proprietà.  
  
4.  Modificare il **Rimuovi simboli privati** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StripPrivateSymbols%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)