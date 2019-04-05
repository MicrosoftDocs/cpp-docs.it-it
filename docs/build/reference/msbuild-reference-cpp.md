---
title: Riferimenti a MSBuild per i progetti C++ in Visual Studio
ms.date: 12/08/2018
helpviewer_keywords:
- MSBuild reference [C++]
ms.openlocfilehash: b6ec6b5d276cb7104cf61c229476596d2a2a7684
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59024699"
---
# <a name="msbuild-reference-for-c-projects"></a>Riferimenti a MSBuild per i progetti C++

MSBuild è il sistema di compilazione nativa per tutti i progetti in Visual Studio, inclusi i progetti C++. Quando si compila un progetto nell'ambiente di sviluppo integrato (IDE) di Visual Studio, viene richiamato lo strumento msbuild.exe, che a sua volta utilizza il file di progetto vcxproj e vari file con estensione targets e props. In generale, è consigliabile usare l'IDE di Visual Studio per impostare le proprietà del progetto e richiamare MSBuild. Modifica manuale dei file di progetto può causare gravi problemi se non vengono eseguite correttamente.

Se per qualche motivo si vuole usare MSBuild direttamente dalla riga di comando, vedere [usare MSBuild dalla riga di comando](../msbuild-visual-cpp.md). Per altre informazioni su MSBuild, in generale, vedere [MSBuild](/visualstudio/msbuild/msbuild) nella documentazione di Visual Studio.

## <a name="in-this-section"></a>Contenuto della sezione

[Elementi interni di MSBuild per i progetti C++](msbuild-visual-cpp-overview.md)<br/>
Informazioni su come di proprietà e destinazioni vengono memorizzate e usate.

[Macro comuni per i comandi e le proprietà di compilazione](common-macros-for-build-commands-and-properties.md)<br/>
Descrive le macro (costanti in fase di compilazione) che possono essere utilizzate per definire le proprietà, ad esempio i percorsi e versioni precedenti del prodotto.

[Tipi di file creati per i progetti C++](file-types-created-for-visual-cpp-projects.md)<br/>
Descrive i diversi tipi di file creato da Visual Studio per diversi tipi di progetto.

[Modelli di progetto di Visual Studio C++](visual-cpp-project-types.md)<br>
Descrive i tipi di progetto basato su MSBuild disponibili per C++.

[Nuovi modelli di elemento C++](using-visual-cpp-add-new-item-templates.md)<br>
Vengono descritti i file di origine e altri elementi che è possibile aggiungere a un progetto di Visual Studio.

[File di intestazione precompilata](../creating-precompiled-header-files.md) come usare file di intestazione precompilata e come creare personalizzate precompilati o meno codice per accelerare i tempi di compilazione.

[Riferimento alla proprietà di progetto Visual Studio](property-pages-visual-cpp.md)<br/>
Documentazione di riferimento per le proprietà del progetto vengono impostate nell'IDE di Visual Studio.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)