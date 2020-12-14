---
description: Altre informazioni su:/FD (nome file del database di programma)
title: /Fd (Nome file database di programma)
ms.date: 11/04/2016
f1_keywords:
- /FD
- VC.Project.VCCLWCECompilerTool.ProgramDataBaseFileName
- VC.Project.VCCLCompilerTool.ProgramDataBaseFileName
helpviewer_keywords:
- /FD compiler option [C++]
- program database file name [C++]
- -FD compiler option [C++]
- PDB files, creating
- program database compiler option [C++]
- .pdb files, creating
- FD compiler option [C++]
ms.assetid: 3977a9ed-f0ac-45df-bf06-01cedd2ba85a
ms.openlocfilehash: 3990cdd6c560dfdeaef7078a29e965831c2a9504
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200663"
---
# <a name="fd-program-database-file-name"></a>/Fd (Nome file database di programma)

Specifica un nome file per il file di database di programma (PDB) creato da [/Z7,/Zi,/Zi (formato informazioni di debug)](z7-zi-zi-debug-information-format.md).

## <a name="syntax"></a>Sintassi

```
/Fdpathname
```

## <a name="remarks"></a>Osservazioni

Senza **/FD**, per impostazione predefinita il nome del file PDB è VC *x* 0. pdb, dove *x* è la versione principale di Visual C++ in uso.

Se si specifica un nome di percorso che non include un nome file (il percorso termina con una barra rovesciata), il compilatore crea un file con estensione pdb denominato VC *x* 0. pdb nella directory specificata.

Se si specifica un nome file che non include un'estensione, il compilatore utilizzerà PDB come estensione.

Questa opzione consente inoltre di denominare il file di stato (con estensione IDB) utilizzato per la ricompilazione minima e la compilazione incrementale.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **File di output** .

1. Modificare la proprietà del **nome del file del database di programma** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ProgramDataBaseFileName%2A>.

## <a name="example"></a>Esempio

Questa riga di comando crea un file con estensione pdb denominato PROG. pdb e un file con estensione IDB denominato PROG. IDB:

```
CL /DDEBUG /Zi /FdPROG.PDB PROG.CPP
```

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del percorso](specifying-the-pathname.md)
