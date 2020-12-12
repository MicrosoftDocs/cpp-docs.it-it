---
description: Ulteriori informazioni su:/P (pre-elabora in un file)
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
ms.openlocfilehash: 20bca03694c866baa0575445271fc4f587268096
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97226194"
---
# <a name="p-preprocess-to-a-file"></a>/P (Pre-elabora in un file)

Pre-elabora i file di origine C e C++ e scrive l'output pre-elaborato in un file.

## <a name="syntax"></a>Sintassi

```
/P
```

## <a name="remarks"></a>Osservazioni

Il file ha lo stesso nome di base del file di origine e di un'estensione. i. Nel processo vengono eseguite tutte le direttive per il preprocessore, vengono eseguite le espansioni di macro e i commenti vengono rimossi. Per mantenere i commenti nell'output pre-elaborato, utilizzare l'opzione [/c (Mantieni commenti durante la pre-elaborazione)](c-preserve-comments-during-preprocessing.md) insieme a **/p**.

**/P** aggiunge `#line` le direttive all'output, all'inizio e alla fine di ogni file incluso e alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale. Queste direttive rinumerano le righe del file pre-elaborato. Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file di origine originale anziché alle righe nel file pre-elaborato. Per evitare la generazione di `#line` direttive, usare [/EP (pre-elabora in stdout senza direttive #line)](ep-preprocess-to-stdout-without-hash-line-directives.md) e **/p**.

L'opzione **/p** evita la compilazione. Non produce un file obj, neanche se si usa [/FO (nome file oggetto)](fo-object-file-name.md). È necessario inviare nuovamente il file pre-elaborato per la compilazione. **/P** inoltre i file di output vengono eliminati dalle opzioni **/fa**, **/fa** e **/FM** . Per ulteriori informazioni, vedere [/fa,/fa (file di listato)](fa-fa-listing-file.md) e [/FM (nome file map)](fm-name-mapfile.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà del **preprocessore** .

1. Modificare la proprietà **genera file pre-elaborato** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## <a name="example"></a>Esempio

La riga di comando seguente pre `ADD.C` -elabora, conserva i commenti, aggiunge `#line` direttive e scrive il risultato in un file `ADD.I` :

```
CL /P /C ADD.C
```

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[/Fi (pre-elaborazione nome file di output)](fi-preprocess-output-file-name.md)
