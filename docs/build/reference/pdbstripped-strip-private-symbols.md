---
description: Altre informazioni su:/PDBSTRIPPED (Rimuovi simboli privati)
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
ms.openlocfilehash: 27e70281ad12f4401ad6557ead9be11a38684472
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226038"
---
# <a name="pdbstripped-strip-private-symbols"></a>/PDBSTRIPPED (Rimuove simboli privati)

```
/PDBSTRIPPED:pdb_file_name
```

## <a name="arguments"></a>Argomenti

*pdb_file_name*<br/>
Nome specificato dall'utente per il database di programma rimosso (PDB) creato dal linker.

## <a name="remarks"></a>Commenti

L'opzione/PDBSTRIPPED crea un secondo file di database di programma (PDB) quando si compila l'immagine del programma con qualsiasi opzione del compilatore o del linker che genera un file PDB ([/debug](debug-generate-debug-info.md), [/Z7](z7-zi-zi-debug-information-format.md),/ZD o/Zi). Il secondo file PDB omette i simboli che non si desidera fornire ai clienti. Il secondo file PDB conterrà solo:

- Simboli pubblici

- Elenco di file oggetto e parti dell'eseguibile a cui contribuiscono

- Record di debug di ottimizzazione del puntatore dei frame (Polinesia) usati per attraversare lo stack

Il file PDB rimosso non conterrà:

- Informazioni sul tipo

- Informazioni sul numero di riga

- File per oggetto CodeView simboli come quelli per le funzioni, le variabili locali e i dati statici

Il file PDB completo verrà comunque generato quando si usa/PDBSTRIPPED.

Se non si crea un file PDB,/PDBSTRIPPED viene ignorato.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **debug** .

1. Modificare la proprietà **Strip private symbols** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StripPrivateSymbols%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
