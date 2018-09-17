---
title: -Fd (nome File di programma del Database) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /FD
- VC.Project.VCCLWCECompilerTool.ProgramDataBaseFileName
- VC.Project.VCCLCompilerTool.ProgramDataBaseFileName
dev_langs:
- C++
helpviewer_keywords:
- /FD compiler option [C++]
- program database file name [C++]
- -FD compiler option [C++]
- PDB files, creating
- program database compiler option [C++]
- .pdb files, creating
- FD compiler option [C++]
ms.assetid: 3977a9ed-f0ac-45df-bf06-01cedd2ba85a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 64e047a832b3c097ced57f9d491b1344c51da495
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45724412"
---
# <a name="fd-program-database-file-name"></a>/Fd (Nome file database di programma)

Specifica un nome di file per il file di database (PDB) di programma creato dal [/Z7, /Zi, /ZI (formato informazioni di Debug)](../../build/reference/z7-zi-zi-debug-information-format.md).

## <a name="syntax"></a>Sintassi

```
/Fdpathname
```

## <a name="remarks"></a>Note

Senza **/Fd**, valore predefinito è il nome del file PDB VC*x*0.pdb, dove *x* è la versione principale di Visual C++ in uso.

Se si specifica un nome di percorso che non include un nome di file (il percorso termina con una barra rovesciata), il compilatore crea un file con estensione pdb denominato VC*x*0.log pdb nella directory specificata.

Se si specifica un nome di file che non include un'estensione, il compilatore Usa con estensione PDB dell'estensione.

Questa opzione anche il nome del file di stato (con estensione IDB) usato per la compilazione incrementale e ricompilazione minima.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **File di output** .

1. Modificare il **nome di File di Database di programma** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ProgramDataBaseFileName%2A>.

## <a name="example"></a>Esempio

Questa riga di comando crea un file con estensione pdb denominato Prog. pdb e un file con estensione IDB denominato Prog. IDB:

```
CL /DDEBUG /Zi /FdPROG.PDB PROG.CPP
```

## <a name="see-also"></a>Vedere anche

[File di output (/ F) le opzioni](../../build/reference/output-file-f-options.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)