---
title: /doc (Elabora i commenti per la documentazione) (C/C++)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.GenerateXMLDocumentationFiles
- /doc
- VC.Project.VCCLCompilerTool.XMLDocumentationFileName
helpviewer_keywords:
- /doc compiler option [C++]
- comments, C++ code
- XML documentation, comments in source files
- -doc compiler option [C++]
ms.assetid: b54f7e2c-f28f-4f46-9ed6-0db09be2cc63
ms.openlocfilehash: 90f63a972245114424b64d4131420dcb4e1e925a
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809795"
---
# <a name="doc-process-documentation-comments-cc"></a>/doc (Elabora i commenti per la documentazione) (C/C++)

Indica al compilatore di elabora i commenti di documentazione nel file di codice sorgente e creare un file con estensione xdc per ogni file di codice sorgente con i commenti della documentazione.

## <a name="syntax"></a>Sintassi

> **/doc**[*nome*]

## <a name="arguments"></a>Argomenti

*name*<br/>
Il nome del file con estensione xdc che il compilatore creerà. Valido solo quando viene passato un file con estensione cpp nella compilazione.

## <a name="remarks"></a>Note

I file con estensione xdc vengono elaborati in un file con estensione XML con xdcmake.exe. Per altre informazioni, vedere [riferimento a XDCMake](xdcmake-reference.md).

È possibile aggiungere i commenti della documentazione per i file del codice sorgente. Per altre informazioni, vedere [Tag consigliati per i commenti relativi alla documentazione](recommended-tags-for-documentation-comments-visual-cpp.md).

Per usare il file XML generato con IntelliSense, verificare il nome del file del file con estensione XML lo stesso nome di assembly che si desidera supportare e inserire il file con estensione XML è nella stessa directory dell'assembly. Quando l'assembly viene fatto riferimento nel progetto di Visual Studio, inoltre è possibile trovare il file. Xml. Per altre informazioni, vedere [uso di IntelliSense](/visualstudio/ide/using-intellisense) e [inserimento di commenti al codice XML](/visualstudio/ide/supplying-xml-code-comments).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **i file di Output** pagina delle proprietà.

1. Modificare il **genera file di documentazione XML** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GenerateXMLDocumentationFiles%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
