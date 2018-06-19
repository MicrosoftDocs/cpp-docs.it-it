---
title: -PDB (Usa Database di programma) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /pdb
- VC.Project.VCLinkerTool.ProgramDatabaseFile
dev_langs:
- C++
helpviewer_keywords:
- -PDB linker option
- /PDB linker option
- PDB linker option
- PDB files, creating
- .pdb files, creating
ms.assetid: d23db0ce-10cb-427a-bc60-d6b2a852723d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 776d23c0c0c7ce392b1ff0d7a989c3c5503129b8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375999"
---
# <a name="pdb-use-program-database"></a>/PDB (Usa database di programma)
```  
/PDB:filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 Un nome utente specificato per il database di programma (PDB) creato dal linker. Sostituisce il nome predefinito.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, quando [/DEBUG](../../build/reference/debug-generate-debug-info.md) viene specificato, il linker crea un database di programma (PDB) contenente le informazioni di debug. Il nome di file predefinito per il file PDB ha il nome del programma e l'estensione pdb.  
  
 Utilizzare /PDB:*filename* per specificare il nome del file PDB. Se non si specifica, l'opzione /PDB viene ignorato.  
  
 Un file PDB può essere fino a 2GB.  
  
 Per ulteriori informazioni, vedere [file con estensione PDB come Input del Linker](../../build/reference/dot-pdb-files-as-linker-input.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Debug** pagina delle proprietà.  
  
4.  Modificare il **genera File del Database di programma** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)