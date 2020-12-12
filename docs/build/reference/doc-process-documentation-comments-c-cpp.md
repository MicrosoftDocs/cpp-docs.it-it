---
description: Altre informazioni su:/doc (elabora i commenti relativi alla documentazione) (C/C++)
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
ms.openlocfilehash: ed811edff544c4b5b28baa67ed216fa09ea51092
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192876"
---
# <a name="doc-process-documentation-comments-cc"></a>/doc (Elabora i commenti per la documentazione) (C/C++)

Il compilatore elabora i commenti relativi alla documentazione nei file di codice sorgente e crea un file. xdc per ogni file di codice sorgente con commenti sulla documentazione.

## <a name="syntax"></a>Sintassi

> **/doc**[*nome*]

## <a name="arguments"></a>Argomenti

*nome*<br/>
Nome del file con estensione xdc che il compilatore creerà. Valido solo quando un file con estensione cpp viene passato nella compilazione.

## <a name="remarks"></a>Commenti

I file con estensione xdc vengono elaborati in un file con estensione XML con xdcmake.exe. Per ulteriori informazioni, vedere [XDCMake Reference](xdcmake-reference.md).

È possibile aggiungere commenti alla documentazione per i file di codice sorgente. Per altre informazioni, vedere [Tag consigliati per i commenti relativi alla documentazione](recommended-tags-for-documentation-comments-visual-cpp.md).

Per utilizzare il file con estensione XML generato con IntelliSense, impostare il nome file del file con estensione XML uguale all'assembly che si desidera supportare e inserire il file con estensione XML nella stessa directory dell'assembly. Quando si fa riferimento all'assembly nel progetto di Visual Studio, viene trovato anche il file con estensione XML. Per ulteriori informazioni, vedere [utilizzo di IntelliSense](/visualstudio/ide/using-intellisense) e [fornire commenti al codice XML](/visualstudio/ide/supplying-xml-code-comments).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà  >  file di output **C/C++**  >   .

1. Modificare la proprietà **genera file di documentazione XML** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GenerateXMLDocumentationFiles%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
