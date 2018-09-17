---
title: -FR, -Fr (Crea. File SBR) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLWCECompilerTool.BrowseInformation
- VC.Project.VCCLCompilerTool.BrowseInformation
- /fr
- VC.Project.VCCLCompilerTool.BrowseInformationFile
- VC.Project.VCCLWCECompilerTool.BrowseInformationFile
dev_langs:
- C++
helpviewer_keywords:
- /FR compiler option [C++]
- -FR compiler option [C++]
- FR compiler option [C++]
- symbolic browser information
ms.assetid: 3fd8f88b-3924-4feb-9393-287036a28896
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a5691a87f7350c7816e8ddb58d5591e16cc18189
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709611"
---
# <a name="fr-fr-create-sbr-file"></a>/FR, /Fr (Crea file sbr)

Crea file SBR.

## <a name="syntax"></a>Sintassi

```
/FR[pathname[\filename]]
/Fr[pathname[\filename]]
```

## <a name="remarks"></a>Note

Durante il processo di compilazione, l'utilità BSCMAKE (Microsoft Browse Information File Maintenance Utility) usa questi file per creare un file BSC, che consente di visualizzare le informazioni di visualizzazione.

**/FR** crea un file SBR con informazioni simboliche complete.

**/Fr** crea un file SBR senza informazioni sulle variabili locali.

Se non si specifica `filename`, al file SBR viene assegnato lo stesso nome di base del file di origine.

**/Fr** è deprecato. Usare **/FR** . Per altre informazioni, vedere le opzioni del compilatore deprecate o obsolete in [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md).

> [!NOTE]
>  Non modificare l'estensione SBR. BSCMAKE richiede questa estensione per i file intermediari.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Nel riquadro di navigazione scegliere la pagina delle proprietà **C/C++**, **Informazioni di visualizzazione** .

1. Modificare la proprietà **File informazioni di visualizzazione** o **Abilita informazioni di visualizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformation%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformationFile%2A>.

## <a name="see-also"></a>Vedere anche

[File di output (/ F) le opzioni](../../build/reference/output-file-f-options.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)