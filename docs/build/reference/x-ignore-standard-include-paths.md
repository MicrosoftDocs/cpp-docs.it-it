---
description: 'Altre informazioni su: `/X` (Ignora percorsi di inclusione standard)'
title: /X (Ignora percorso di inclusione standard)
ms.date: 01/21/2021
f1_keywords:
- /x
- VC.Project.VCCLCompilerTool.OVERWRITEStandardIncludePath
- VC.Project.VCCLWCECompilerTool.OVERWRITEStandardIncludePath
- VC.Project.VCCLCompilerTool.IgnoreStandardIncludePath
helpviewer_keywords:
- /X compiler option [C++]
- include files, ignore standard path
- -X compiler option [C++]
- include directories, ignore standard
- X compiler option
- Ignore Standard Include Paths compiler option
ms.assetid: 16bdf2cc-c8dc-46e4-bdcc-f3caeba5e1ef
ms.openlocfilehash: 97d19027c41df7db9103c1c21d2f2d7b8d398e7e
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98712804"
---
# <a name="x-ignore-standard-include-paths"></a>`/X` (Ignora percorsi di inclusione standard)

Impedisce al compilatore di cercare i file di inclusione nelle directory specificate `PATH` nelle `INCLUDE` variabili di ambiente e.

## <a name="syntax"></a>Sintassi

> **`/X`**

## <a name="remarks"></a>Osservazioni

È possibile usare questa opzione con l'opzione [ `/I` (directory di inclusione aggiuntive)](i-additional-include-directories.md) per specificare un percorso alternativo per i file di inclusione standard.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**  >  proprietà del preprocessore **C/C++**  >   .

1. Modificare la proprietà **Ignora percorso di inclusione standard** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.IgnoreStandardIncludePath%2A>.

## <a name="example"></a>Esempio

Nel comando seguente **`/X`** indica al compilatore di ignorare le posizioni specificate dalle variabili di `PATH` ambiente e e `INCLUDE` **`/I`** di specificare la directory in cui cercare i file di inclusione:

```cmd
CL /X /I \ALT\INCLUDE MAIN.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
