---
title: -PDB (Usa Database di programma) | Microsoft Docs
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
ms.openlocfilehash: 8717be9ee8f754f4e61dbed0211360a0b4f4f780
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717242"
---
# <a name="pdb-use-program-database"></a>/PDB (Usa database di programma)

```
/PDB:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un nome specificato dall'utente per il database di programma (PDB) creato dal linker. Sostituisce il nome predefinito.

## <a name="remarks"></a>Note

Per impostazione predefinita, quando [/debug](../../build/reference/debug-generate-debug-info.md) viene specificato, il linker crea un database di programma (PDB) contenente le informazioni di debug. Il nome file predefinito per il file PDB è il nome di base del programma e dall'estensione pdb.

Usare l'opzione /PDB:*filename* per specificare il nome del file PDB. Se non viene specificato /DEBUG, l'opzione /PDB viene ignorato.

Un file PDB può essere fino a 2GB.

Per altre informazioni, vedere [file con estensione PDB come Input del Linker](../../build/reference/dot-pdb-files-as-linker-input.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Debug** pagina delle proprietà.

1. Modificare il **generare File di Database di programma** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)