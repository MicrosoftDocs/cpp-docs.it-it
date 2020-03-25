---
title: Informazioni di riferimento C++ su MSBuild per progetti in Visual Studio
ms.date: 12/08/2018
helpviewer_keywords:
- MSBuild reference [C++]
ms.openlocfilehash: ec1285a760d438a94863181a1b099e6db153c268
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168902"
---
# <a name="msbuild-reference-for-c-projects"></a>Informazioni di riferimento su MSBuild per i progetti C++

MSBuild è il sistema di compilazione nativo per tutti i progetti in Visual Studio C++ , inclusi i progetti. Quando si compila un progetto nell'IDE di Visual Integrated Development Environment studio, viene richiamato lo strumento MSBuild. exe, che a sua volta usa il file di progetto con estensione vcxproj e vari file. targets e. props. In generale, è consigliabile usare l'IDE di Visual Studio per impostare le proprietà del progetto e richiamare MSBuild. La modifica manuale dei file di progetto può causare gravi problemi se non vengono eseguiti correttamente.

Se per qualche motivo si vuole usare MSBuild direttamente dalla riga di comando, vedere [usare MSBuild dalla riga di comando](../msbuild-visual-cpp.md). Per altre informazioni su MSBuild in generale, vedere [MSBuild](/visualstudio/msbuild/msbuild) nella documentazione di Visual Studio.

## <a name="in-this-section"></a>Contenuto della sezione

[Elementi interni di MSBuild per i progetti C++](msbuild-visual-cpp-overview.md)<br/>
Informazioni sul modo in cui le proprietà e le destinazioni vengono archiviate e utilizzate.

[Macro comuni per i comandi e le proprietà di compilazione](common-macros-for-build-commands-and-properties.md)<br/>
Descrive le macro (costanti in fase di compilazione) che possono essere utilizzate per definire proprietà quali percorsi e versioni del prodotto.

[Tipi di file creati C++ per i progetti](file-types-created-for-visual-cpp-projects.md)<br/>
Vengono descritti i diversi tipi di file creati da Visual Studio per diversi tipi di progetto.

[Modelli di C++ progetto di Visual Studio](visual-cpp-project-types.md)<br>
Vengono descritti i tipi di progetto basati su MSBuild disponibili per C++.

[Modelli di nuovi elementi C++](using-visual-cpp-add-new-item-templates.md)<br>
Descrive i file di origine e altri elementi che è possibile aggiungere a un progetto di Visual Studio.

[File di intestazione precompilata](../creating-precompiled-header-files.md) Come usare i file di intestazione precompilata e come creare codice precompilato personalizzato per velocizzare i tempi di compilazione.

[Riferimento alle proprietà di progetto di Visual Studio](property-pages-visual-cpp.md)<br/>
Documentazione di riferimento per le proprietà del progetto impostate nell'IDE di Visual Studio.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)
