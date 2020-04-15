---
title: Informazioni di riferimento su MSBuild per i progetti in Visual Studio
ms.date: 12/08/2018
helpviewer_keywords:
- MSBuild reference [C++]
ms.openlocfilehash: 96987a252d12f718025dd55deecad5c6bac26872
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336204"
---
# <a name="msbuild-reference-for-c-projects"></a>Informazioni di riferimento su MSBuild per i progetti C++

MSBuild è il sistema di compilazione nativo per tutti i progetti in Visual Studio, inclusi i progetti in C. Quando si compila un progetto nell'ambiente di sviluppo integrato (IDE) di Visual Studio, viene richiamato lo strumento msbuild.exe, che a sua volta utilizza il file di progetto con estensione vcxproj e vari file con estensione targets e props. In general, we strongly recommend using the Visual Studio IDE to set project properties and invoke MSBuild. La modifica manuale dei file di progetto può causare seri problemi se non eseguita correttamente.

Se per qualche motivo si desidera utilizzare MSBuild direttamente dalla riga di comando, vedere [Utilizzare MSBuild dalla riga di comando](../msbuild-visual-cpp.md). Per altre informazioni su MSBuild in generale, vedere MSBuild nella documentazione di Visual Studio.For more information about MSBuild in general, see [MSBuild](/visualstudio/msbuild/msbuild) in the Visual Studio documentation.

## <a name="in-this-section"></a>Contenuto della sezione

[Elementi interni di MSBuild per i progetti C++](msbuild-visual-cpp-overview.md)<br/>
Informazioni sulla modalità di archiviazione e consumo di proprietà e destinazioni.

[Macro comuni per i comandi e le proprietà di compilazione](common-macros-for-build-commands-and-properties.md)<br/>
Vengono descritte le macro (costanti in fase di compilazione) che possono essere utilizzate per definire proprietà quali percorsi e versioni del prodotto.

[Tipi di file creati per i progetti in C](file-types-created-for-visual-cpp-projects.md)<br/>
Vengono descritti i vari tipi di file creati da Visual Studio per diversi tipi di progetto.

[Modelli di progetto di Visual Studio C](visual-cpp-project-types.md)<br>
Vengono descritti i tipi di progetto basati su MSBuild che sono disponibili per c'è.

[Modelli di nuovi elementi C++](using-visual-cpp-add-new-item-templates.md)<br>
Vengono descritti i file di origine e altri elementi che è possibile aggiungere a un progetto di Visual Studio.Describes source files and other items you can add to a Visual Studio project.

[File di intestazione precompilati](../creating-precompiled-header-files.md) Come utilizzare i file di intestazione precompilati e come creare il proprio codice precompilato personalizzato per velocizzare i tempi di compilazione.

[Informazioni di riferimento sulle proprietà del progetto di Visual StudioVisual Studio project property reference](property-pages-visual-cpp.md)<br/>
Documentazione di riferimento per le proprietà del progetto impostate nell'IDE di Visual Studio.Reference documentation for project properties that are set in the Visual Studio IDE.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)
