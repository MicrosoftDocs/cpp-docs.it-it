---
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
ms.openlocfilehash: 73642baba77a62cac531ae7b2842ec9953b338ec
ms.sourcegitcommit: 06fc71a46e3c4f6202a1c0bc604aa40611f50d36
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/27/2019
ms.locfileid: "58508702"
---
# <a name="fr-fr-create-sbr-file"></a>/FR, /Fr (Crea file sbr)

Crea file SBR.

## <a name="syntax"></a>Sintassi

```
/FR[pathname[\filename]]
/Fr[pathname[\filename]]
```

## <a name="remarks"></a>Note

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

Durante il processo di compilazione, l'utilità BSCMAKE (Microsoft Browse Information File Maintenance Utility) usa questi file per creare un file BSC, che consente di visualizzare le informazioni di visualizzazione.

**/FR** crea un file SBR con informazioni simboliche complete.

**/Fr** crea un file SBR senza informazioni sulle variabili locali.

Se non si specifica `filename`, al file SBR viene assegnato lo stesso nome di base del file di origine.

**/Fr** è deprecato. Usare **/FR** . Per altre informazioni, vedere le opzioni del compilatore deprecate o obsolete in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

> [!NOTE]
>  Non modificare l'estensione SBR. BSCMAKE richiede questa estensione per i file intermediari.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Nel riquadro di navigazione scegliere la pagina delle proprietà **C/C++**, **Informazioni di visualizzazione** .

1. Modificare la proprietà **File informazioni di visualizzazione** o **Abilita informazioni di visualizzazione** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformation%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformationFile%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
