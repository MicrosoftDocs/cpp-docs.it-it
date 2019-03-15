---
title: /P (Pre-elabora in un file)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.GeneratePreprocessedFile
- /p
- VC.Project.VCCLWCECompilerTool.GeneratePreprocessedFile
helpviewer_keywords:
- /P compiler option [C++]
- -P compiler option [C++]
- P compiler option [C++]
- output files, preprocessor
- preprocessing output files
ms.assetid: 123ee54f-8219-4a6f-9876-4227023d83fc
ms.openlocfilehash: 5e6302d90647bce7e37c47a619e814cab300aaee
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813760"
---
# <a name="p-preprocess-to-a-file"></a>/P (Pre-elabora in un file)

Pre-elabora i file di origine C e C++ e scrive l'output pre-elaborato in un file.

## <a name="syntax"></a>Sintassi

```
/P
```

## <a name="remarks"></a>Note

Il file ha lo stesso nome base del file di origine ed estensione i. Nel processo, vengono eseguite tutte le direttive del preprocessore, espansioni della macro vengono eseguite e vengono rimossi i commenti. Per mantenere i commenti nell'output pre-elaborato, usare il [/C (mantenere i commenti durante la pre-elaborazione)](c-preserve-comments-during-preprocessing.md) opzione insieme a **/P**.

**/P** aggiunge `#line` direttive nell'output, all'inizio e alla fine di ogni file incluso e intorno alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale. Queste direttive rinumerano le righe del file pre-elaborato. Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione di fare riferimento ai numeri di riga del file di origine originale anziché alle righe del file pre-elaborato. Per disattivare la generazione degli `#line` direttive, usare [/EP (pre-elabora in stdout senza direttive #line)](ep-preprocess-to-stdout-without-hash-line-directives.md) nonché **p**.

Il **/P** opzione disattiva la compilazione. Non produce un file. obj, anche se si usa [/Fo (nome File oggetto)](fo-object-file-name.md). È necessario eseguire nuovamente il file pre-elaborato per la compilazione. **/P** elimina anche i file di output dal **/FA**, **/Fa**, e **/Fm** opzioni. Per altre informazioni, vedere [/FA, /Fa (File di listato)](fa-fa-listing-file.md) e [/Fm (specifica file MAP)](fm-name-mapfile.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **preprocessore** pagina delle proprietà.

1. Modificare il **genera File pre-elaborato** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## <a name="example"></a>Esempio

La seguente riga di comando preelabora `ADD.C`, conserva i commenti, aggiunge `#line` direttive e scrive il risultato in un file, `ADD.I`:

```
CL /P /C ADD.C
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Fi (pre-elabora nome file di output)](fi-preprocess-output-file-name.md)
