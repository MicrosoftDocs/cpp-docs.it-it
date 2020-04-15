---
title: Risorse
ms.date: 08/28/2019
ms.topic: article
ms.assetid: dade2f6b-c51f-4c33-9023-41956ae4b5f6
f1_keywords:
- VC.Project.VCResourceCompilerTool.PreprocessorDefinitions
- VC.Project.VCResourceCompilerTool.UndefineProcessorDefinitions
- VC.Project.VCResourceCompilerTool.Culture
- VC.Project.VCResourceCompilerTool.AdditionalIncludeDirectories
- VC.Project.VCResourceCompilerTool.IgnoreStandardIncludePath
- VC.Project.VCResourceCompilerTool.ShowProgress
- VC.Project.VCResourceCompilerTool.SuppressStartupBanner
- VC.Project.VCResourceCompilerTool.ResourceOutputFileName
- VC.Project.VCResourceCompilerTool.NullTerminateStrings
- vc.project.AdditionalOptionsPage
ms.openlocfilehash: c4a3048bfa07e9635662534b510fa57caa091f00
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336081"
---
# <a name="resources-property-page"></a>Pagina delle proprietà Risorse

Per i programmi desktop Windows nativi, la compilazione richiama il compilatore di [risorse (rc.exe)](/windows/win32/menurc/resource-compiler) per aggiungere immagini, tabelle di stringhe e file *RES* al file binario. Le proprietà esposte in questa pagina delle proprietà vengono passate al compilatore di risorse, non al compilatore di C o al linker. Per ulteriori informazioni sulle proprietà elencate di seguito e sul mapping alle opzioni della riga di comando RC, vedere [Using RC (The RC Command Line)](/windows/win32/menurc/using-rc-the-rc-command-line-). Per informazioni su come accedere alle pagine delle proprietà **Risorse** , vedere Impostare il compilatore E le proprietà di [compilazione in Visual Studio.](../working-with-project-properties.md) Per accedere a livello di codice a queste proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCResourceCompilerTool>.

Le proprietà per le risorse .NET nelle applicazioni in C/CLI sono esposte nella pagina delle [proprietà Risorse gestite](managed-resources-property-page.md).

## <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Specifica una o più definizioni per il compilatore di risorse. (/d[macro])

## <a name="undefine-preprocessor-definitions"></a>Rimuovi definizioni per il preprocessore

Annullare la definizione di un simbolo. (/u)

## <a name="culture"></a>Impostazioni cultura

Elenca le impostazioni cultura (ad esempio l'inglese americano o l'italiano) utilizzate nelle risorse. (/l [num])

## <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al percorso di inclusione. utilizzare il delimitatore punto e virgola se più di uno. (/I[percorso])

## <a name="ignore-standard-include-paths"></a>Ignora percorsi di inclusione standard

Impedisce al compilatore di risorse di cercare i file di inclusione nelle directory specificate nelle variabili di ambiente INCLUDE. (/X)

## <a name="show-progress"></a>Mostra stato

Inviare messaggi di stato alla finestra di output. (/v)

## <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Sopprimere la visualizzazione del banner di avvio e del messaggio informativo (/nologo)

## <a name="resource-file-name"></a>Nome file di risorse

Specifica il nome del file di risorse (/fo[file])

## <a name="null-terminate-strings"></a>Stringhe di terminazione nullNull Terminate Strings

Aggiungere null a tutte le stringhe nelle tabelle di stringhe. (/n)

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sulla pagina delle proprietà del progetto In C](property-pages-visual-cpp.md)
