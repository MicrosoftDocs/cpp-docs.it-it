---
title: /PDB (Usa database di programma)
ms.date: 11/04/2016
f1_keywords:
- /pdb
- VC.Project.VCLinkerTool.ProgramDatabaseFile
helpviewer_keywords:
- -PDB linker option
- /PDB linker option
- PDB linker option
- PDB files, creating
- .pdb files, creating
ms.assetid: d23db0ce-10cb-427a-bc60-d6b2a852723d
ms.openlocfilehash: ddcf83cafd5f499158f3116f04e40397b7f8d0a8
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57821508"
---
# <a name="pdb-use-program-database"></a>/PDB (Usa database di programma)

```
/PDB:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un nome specificato dall'utente per il database di programma (PDB) creato dal linker. Sostituisce il nome predefinito.

## <a name="remarks"></a>Note

Per impostazione predefinita, quando [/debug](debug-generate-debug-info.md) viene specificato, il linker crea un database di programma (PDB) contenente le informazioni di debug. Il nome file predefinito per il file PDB è il nome di base del programma e dall'estensione pdb.

Usare l'opzione /PDB:*filename* per specificare il nome del file PDB. Se non viene specificato /DEBUG, l'opzione /PDB viene ignorato.

Un file PDB può essere fino a 2GB.

Per altre informazioni, vedere [file con estensione PDB come Input del Linker](dot-pdb-files-as-linker-input.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Debug** pagina delle proprietà.

1. Modificare il **generare File di Database di programma** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
