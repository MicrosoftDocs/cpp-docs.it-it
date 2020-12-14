---
description: Altre informazioni su:/PDB (USA database di programma)
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
ms.openlocfilehash: 221d5d81dc3578e99751334b2e0a0a61aaaed356
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226103"
---
# <a name="pdb-use-program-database"></a>/PDB (Usa database di programma)

```
/PDB:filename
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Nome specificato dall'utente per il database di programma (PDB) creato dal linker. Sostituisce il nome predefinito.

## <a name="remarks"></a>Commenti

Per impostazione predefinita, quando si specifica [/debug](debug-generate-debug-info.md) , il linker crea un database di programma (PDB) che include le informazioni di debug. Il nome di file predefinito per il PDB è costituito dal nome di base del programma e dall'estensione pdb.

Usare/PDB:*filename* per specificare il nome del file PDB. Se non si specifica/DEBUG, l'opzione/PDB viene ignorata.

Un file PDB può essere fino a 2 GB.

Per altre informazioni, vedere [file PDB come input del linker](dot-pdb-files-as-linker-input.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **debug** .

1. Modificare la proprietà **genera il file di database del programma** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
