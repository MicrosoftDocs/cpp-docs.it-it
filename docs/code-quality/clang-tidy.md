---
title: Uso di Clang-tidy in Visual Studio
ms.date: 10/04/2019
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.clangtidy
author: frozenpandaman
ms.author: efessler
ms.openlocfilehash: 19ec35ee931822d6952512f417bbbdba14ee04b9
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418886"
---
# <a name="using-clang-tidy-in-visual-studio"></a>Uso di Clang-tidy in Visual Studio

L'analisi del codice supporta in modo nativo [Clang-tidy](https://clang.llvm.org/extra/clang-tidy/) per i progetti MSBuild e CMake, sia che si utilizzino i set di strumenti Clang o MSVC. I controlli Clang-tidy possono essere eseguiti come parte dell'analisi del codice in background, visualizzati come avvisi nell'editor (controllo ortografia durante) e visualizzati nella Elenco errori.

Per usare Clang-tidy, il componente "C++ Clang Tools per Windows" deve essere installato tramite il programma di installazione di Visual Studio.

Clang-tidy è lo strumento di analisi predefinito quando si usa il set di strumenti LLVM/Clang-CL, disponibile sia in MSBuild che in CMake. È possibile configurarlo in modo che venga eseguito insieme o sostituire l'esperienza di analisi del codice standard quando si usa un set di strumenti MSVC. Se si usa il set di strumenti Clang-CL, l'analisi codice Microsoft non sarà disponibile.

Clang-tidy viene eseguito dopo la compilazione riuscita. potrebbe essere necessario risolvere gli errori del codice sorgente per ottenere risultati in ordine Clang.

## <a name="msbuild"></a>MSBuild

È possibile configurare Clang-tidy affinché venga eseguito come parte dell'analisi del codice e compilata nella pagina **generale** dell' **analisi codice** > nel finestra proprietà del progetto. Le opzioni per la configurazione dello strumento sono disponibili nel sottomenu Clang-tidy.

Per altre informazioni, vedere [procedura: impostare le proprietà di analisi del codice perC++ C/progetti](../code-quality/how-to-set-code-analysis-properties-for-c-cpp-projects.md).

## <a name="cmake"></a>CMake

Nei progetti CMake è possibile configurare i controlli Clang-tidy all'interno `CMakeSettings.json`. Una volta aperto, fare clic su "modifica JSON" nell'angolo superiore destro dell'editor delle impostazioni del progetto CMake. Sono state riconosciute le chiavi seguenti:

- `enableMicrosoftCodeAnalysis`: Abilita l'analisi del codice Microsoft
- `enableClangTidyCodeAnalysis`: Abilita l'analisi in ordine Clang
- `clangTidyChecks`: configurazione Clang-tidy, specificata come elenco delimitato da virgole, ovvero controlli da abilitare o disabilitare

Se non viene specificata alcuna opzione "Enable", Visual Studio selezionerà lo strumento di analisi corrispondente al set di strumenti della piattaforma usato.

## <a name="warning-display"></a>Visualizzazione avviso

Le esecuzioni Clang-tidy generano avvisi visualizzati nel Elenco errori e come controllo ortografia durante nell'editor sotto le sezioni pertinenti di codice. Usare la colonna "Category" nel Elenco errori per ordinare e organizzare gli avvisi Clang-tidy. È possibile configurare gli avvisi in-Editor attivando l'impostazione "Disabilita controllo ortografia durante analisi codice" in **strumenti** > **Opzioni**.

## <a name="clang-tidy-configuration"></a>Configurazione Clang-tidy

È possibile configurare i controlli eseguiti da Clang-tidy all'interno di Visual Studio tramite l'opzione di **controllo Clang-tidy** . Questo input viene fornito all'argomento **--checks** dello strumento. Qualsiasi altra configurazione può essere inclusa nei file con **estensione Clang** personalizzati. Per altri dettagli, vedere la [documentazione di Clang-tidy su LLVM.org](https://clang.llvm.org/extra/clang-tidy/) .

## <a name="see-also"></a>Vedere anche

- [Supporto Clang/LLVM per i progetti MSBuild](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)
- [Supporto Clang/LLVM per i progetti CMake](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)
