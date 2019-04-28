---
title: /Fo (Nome file oggetto)
ms.date: 11/04/2016
f1_keywords:
- /Fo
- VC.Project.VCCLCompilerTool.ObjectFile
- VC.Project.VCCLWCECompilerTool.ObjectFile
helpviewer_keywords:
- Fo compiler option [C++]
- object files, naming
- /Fo compiler option [C++]
- -Fo compiler option [C++]
ms.assetid: 0e6d593e-4e7f-4990-9e6e-92e1dcbcf6e6
ms.openlocfilehash: a8f2c1a196f18e6d310fd41d4dbed751440a4c20
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62293043"
---
# <a name="fo-object-file-name"></a>/Fo (Nome file oggetto)

Specifica un nome file oggetto (OBJ) o una directory da usare al posto dell'impostazione predefinita.

## <a name="syntax"></a>Sintassi

```
/Fopathname
```

## <a name="remarks"></a>Note

Se non si usa questa opzione, il file oggetto Usa il nome base del file di origine e l'estensione obj. È possibile usare qualsiasi nome ed estensione desiderati, ma la convenzione consigliata consiste nell'usare. obj.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **File di output** .

1. Modificare il **nome del File oggetto** proprietà.  Nell'ambiente di sviluppo, il file oggetto deve avere un'estensione della. obj.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ObjectFile%2A>.

## <a name="example"></a>Esempio

Riga di comando seguente crea un file oggetto denominato this. obj in una directory esistente, \OBJECT, nell'unità B.

```
CL /FoB:\OBJECT\ THIS.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
