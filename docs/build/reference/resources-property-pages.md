---
description: 'Altre informazioni su: pagina delle proprietà risorse'
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
ms.openlocfilehash: d074cbb6035bd138ca322197e50e9a3f892b325b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225102"
---
# <a name="resources-property-page"></a>Pagina delle proprietà risorse

Per i programmi desktop di Windows nativi, la compilazione richiama il [compilatore di risorse (rc.exe)](/windows/win32/menurc/resource-compiler) per aggiungere immagini, tabelle di stringhe e file con *estensione res* al file binario. Le proprietà esposte in questa pagina delle proprietà vengono passate al compilatore di risorse, non al compilatore C++ o al linker. Per ulteriori informazioni sulle proprietà elencate e sul modo in cui vengono mappate alle opzioni della riga di comando RC, vedere [uso di RC (riga di comando RC)](/windows/win32/menurc/using-rc-the-rc-command-line-). Per informazioni su come accedere alle pagine **delle proprietà delle risorse** , vedere [impostare le proprietà di compilazione e compilatore C++ in Visual Studio](../working-with-project-properties.md). Per accedere a livello di codice a queste proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCResourceCompilerTool>.

Le proprietà per le risorse .NET nelle applicazioni C++/CLI sono esposte nella [pagina delle proprietà risorse gestite](managed-resources-property-page.md).

## <a name="preprocessor-definitions"></a>Definizioni del preprocessore

Specifica una o più definizioni per il compilatore di risorse. (/d [macro])

## <a name="undefine-preprocessor-definitions"></a>Rimuovi definizioni per il preprocessore

Annullare la definizione di un simbolo. /u

## <a name="culture"></a>culture

Elenca le impostazioni cultura, ad esempio inglese (Stati Uniti) o italiano, utilizzate nelle risorse. (/l [num])

## <a name="additional-include-directories"></a>Directory di inclusione aggiuntive

Specifica una o più directory da aggiungere al percorso di inclusione. usare il delimitatore punto e virgola se ne sono più di uno. (/I [percorso])

## <a name="ignore-standard-include-paths"></a>Ignora percorsi di inclusione standard

Impedisce al compilatore di risorse di cercare i file di inclusione nelle directory specificate nelle variabili di ambiente INCLUDE. /X

## <a name="show-progress"></a>Mostra stato

Invia messaggi di stato alla finestra di output. /v

## <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

Disattiva la visualizzazione del messaggio di avvio e del messaggio informativo (/nologo)

## <a name="resource-file-name"></a>Nome file di risorse

Specifica il nome del file di risorse (/fo [file])

## <a name="null-terminate-strings"></a>Stringhe di terminazione null

Aggiungere null a tutte le stringhe nelle tabelle di stringhe. /n

## <a name="see-also"></a>Vedi anche

[Riferimento alla pagina delle proprietà del progetto C++](property-pages-visual-cpp.md)
