---
title: /FI (Specifica il file di inclusione da utilizzare)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCNMakeTool.ForcedIncludes
- VC.Project.VCCLCompilerTool.ForcedIncludeFiles
- VC.Project.VCCLWCECompilerTool.ForcedIncludeFiles
- /fi
helpviewer_keywords:
- FI compiler option [C++]
- -FI compiler option [C++]
- /FI compiler option [C++]
- preprocess header file compiler option [C++]
ms.assetid: 07e79577-8152-4df9-a64c-aae08c603397
ms.openlocfilehash: b91ca1ba6cc97157be0ab16fc18e065dc501d5fd
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422468"
---
# <a name="fi-name-forced-include-file"></a>/FI (Specifica il file di inclusione da utilizzare)

Fa sì che il preprocessore elaborare il file di intestazione specificato.

## <a name="syntax"></a>Sintassi

```
/FI[ ]pathname
```

## <a name="remarks"></a>Note

Questa opzione ha lo stesso effetto che specifica il file con le virgolette doppie in un `#include` direttiva sulla prima riga di ogni file di origine specificato nella riga di comando, nella variabile di ambiente CL o in un file di comando. Se si usano più **/FI** opzioni, i file sono inclusi nell'ordine vengono elaborati da CL.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **Imponi inclusioni** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedIncludeFiles%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)
