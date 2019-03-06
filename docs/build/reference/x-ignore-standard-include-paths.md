---
title: /X (Ignora percorso di inclusione standard)
ms.date: 11/04/2016
f1_keywords:
- /x
- VC.Project.VCCLCompilerTool.OVERWRITEStandardIncludePath
- VC.Project.VCCLWCECompilerTool.OVERWRITEStandardIncludePath
helpviewer_keywords:
- /X compiler option [C++]
- include files, ignore standard path
- -X compiler option [C++]
- include directories, ignore standard
- X compiler option
- Ignore Standard Include Paths compiler option
ms.assetid: 16bdf2cc-c8dc-46e4-bdcc-f3caeba5e1ef
ms.openlocfilehash: 615a53a7ad29527187072c3131f551a76bd18969
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421370"
---
# <a name="x-ignore-standard-include-paths"></a>/X (Ignora percorso di inclusione standard)

Impedisce al compilatore di cercare i file di inclusione nelle directory specificate nelle variabili di ambiente PATH e INCLUDE.

## <a name="syntax"></a>Sintassi

```
/X
```

## <a name="remarks"></a>Note

È possibile usare questa opzione con il [/I (directory di inclusione aggiuntive)](../../build/reference/i-additional-include-directories.md) (**/I**`directory`) opzione.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **preprocessore** pagina delle proprietà.

1. Modificare il **Ignora percorso di inclusione Standard** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.IgnoreStandardIncludePath%2A>.

## <a name="example"></a>Esempio

Nel comando seguente `/X` indica al compilatore di ignorare i percorsi specificati dalle variabili di ambiente PATH e INCLUDE, e `/I` specifica la directory in cui cercare file di inclusione:

```
CL /X /I \ALT\INCLUDE MAIN.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
