---
title: /FI (Specifica il file di inclusione da utilizzare)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCNMakeTool.ForcedIncludes
- VC.Project.VCCLCompilerTool.ForcedIncludeFiles
- VC.Project.VCCLWCECompilerTool.ForcedIncludeFiles
helpviewer_keywords:
- FI compiler option [C++]
- -FI compiler option [C++]
- /FI compiler option [C++]
- preprocess header file compiler option [C++]
ms.assetid: 07e79577-8152-4df9-a64c-aae08c603397
ms.openlocfilehash: 6460f75e2cad81bc1dcc540e3c687de5d0dc0d32
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439795"
---
# <a name="fi-name-forced-include-file"></a>/FI (Specifica il file di inclusione da utilizzare)

Determina l'elaborazione del file di intestazione specificato da parte del preprocessore.

## <a name="syntax"></a>Sintassi

```
/FI[ ]pathname
```

## <a name="remarks"></a>Osservazioni

Questa opzione ha lo stesso effetto di specificare il file con virgolette doppie in una direttiva `#include` sulla prima riga di ogni file di origine specificato nella riga di comando, nella variabile di ambiente CL o in un file di comando. Se si usano più opzioni **/Fi** , i file vengono inclusi nell'ordine in cui vengono elaborati da cl.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà **file di inclusione forzata** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedIncludeFiles%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
