---
description: Altre informazioni su:/FR,/fr (create. File SBR)
title: /FR, /Fr (Crea file sbr)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.BrowseInformation
- VC.Project.VCCLCompilerTool.BrowseInformation
- /fr
- VC.Project.VCCLCompilerTool.BrowseInformationFile
- VC.Project.VCCLWCECompilerTool.BrowseInformationFile
helpviewer_keywords:
- /FR compiler option [C++]
- -FR compiler option [C++]
- FR compiler option [C++]
- symbolic browser information
ms.assetid: 3fd8f88b-3924-4feb-9393-287036a28896
ms.openlocfilehash: 9142e7afedb55a7b0f4ed0cdb56e4288524d7afc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200416"
---
# <a name="fr-fr-create-sbr-file"></a>/FR, /Fr (Crea file sbr)

Crea file SBR.

## <a name="syntax"></a>Sintassi

```
/FR[pathname[\filename]]
/Fr[pathname[\filename]]
```

## <a name="remarks"></a>Osservazioni

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

Durante il processo di compilazione, l'utilità BSCMAKE (Microsoft Browse Information File Maintenance Utility) usa questi file per creare un file BSC, che consente di visualizzare le informazioni di visualizzazione.

**/FR** crea un file SBR con informazioni simboliche complete.

**/Fr** crea un file SBR senza informazioni sulle variabili locali.

Se non si specifica `filename`, al file SBR viene assegnato lo stesso nome di base del file di origine.

**/Fr** è deprecato. Usare **/FR** . Per altre informazioni, vedere le opzioni del compilatore deprecate o obsolete in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

> [!NOTE]
> Non modificare l'estensione SBR. BSCMAKE richiede questa estensione per i file intermediari.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nel riquadro di navigazione scegliere la pagina delle proprietà **C/C++**, **Informazioni di visualizzazione** .

1. Modificare la proprietà **File informazioni di visualizzazione** o **Abilita informazioni di visualizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Controllare <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformation%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformationFile%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del percorso](specifying-the-pathname.md)
