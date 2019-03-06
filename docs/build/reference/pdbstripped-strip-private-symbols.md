---
title: /PDBSTRIPPED (Rimuove simboli privati)
ms.date: 11/04/2016
f1_keywords:
- /pdbstripped
- VC.Project.VCLinkerTool.StripPrivateSymbols
helpviewer_keywords:
- /PDBSTRIPPED linker option
- -PDBSTRIPPED linker option
- .pdb files, stripping private symbols
- PDB files, stripping private symbols
- PDBSTRIPPED linker option
ms.assetid: 9b9e0070-6a13-4142-8180-19c003fbbd55
ms.openlocfilehash: c0a79eb8d1c00be2b855ec08ffe44f4e7d7a2e05
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412627"
---
# <a name="pdbstripped-strip-private-symbols"></a>/PDBSTRIPPED (Rimuove simboli privati)

```
/PDBSTRIPPED:pdb_file_name
```

## <a name="arguments"></a>Argomenti

*pdb_file_name*<br/>
Un nome specificato dall'utente per il database rimosso programma (PDB) creato dal linker.

## <a name="remarks"></a>Note

L'opzione /PDBSTRIPPED crea un secondo file di programma (PDB) del database quando si compila l'immagine del programma con qualsiasi del compilatore o del linker opzioni che generano un file PDB ([/debug](../../build/reference/debug-generate-debug-info.md), [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), /Zd o /Zi). Il secondo file PDB omette i simboli che non si desidera fornire ai clienti. Conterrà solo il secondo file PDB:

- Simboli pubblici

- L'elenco dei file oggetto e le parti del file eseguibile a cui contribuiscono

- Record di frame puntatore ottimizzazione (FPO) debug utilizzato per scorrere lo stack

Il file PDB rimosso non conterrà:

- Informazioni sul tipo

- Informazioni sul numeri di riga

- Simboli di CodeView file per oggetto, ad esempio quelli per le funzioni, variabili locali e i dati statici

Il file PDB completo verrà ancora generato quando si usa /PDBSTRIPPED.

Se non si crea un file PDB, /PDBSTRIPPED viene ignorato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Debug** pagina delle proprietà.

1. Modificare il **Rimuove simboli privati** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StripPrivateSymbols%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
