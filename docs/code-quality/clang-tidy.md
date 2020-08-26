---
title: Uso di Clang-tidy in Visual Studio
description: Come usare Clang-tidy in Visual Studio per l'analisi del codice C++ Microsoft.
ms.date: 02/19/2020
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.clangtidy
ms.openlocfilehash: 30378ab0713d5e00e704f778646b9d60856f2234
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842468"
---
# <a name="using-clang-tidy-in-visual-studio"></a>Uso di Clang-tidy in Visual Studio

::: moniker range="<=vs-2017"

Il supporto per Clang-tidy richiede Visual Studio 2019 versione 16,4 o successiva. Per visualizzare la documentazione relativa a questa versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=vs-2019"

L'analisi del codice supporta in modo nativo [Clang-tidy](https://clang.llvm.org/extra/clang-tidy/) per i progetti MSBuild e CMake, sia che si utilizzino i set di strumenti Clang o MSVC. I controlli Clang-tidy possono essere eseguiti come parte dell'analisi del codice in background. Vengono visualizzati come avvisi in-Editor (controllo ortografia durante) e vengono visualizzati nel Elenco errori.

Il supporto Clang-tidy è disponibile a partire da Visual Studio 2019 versione 16,4. Viene incluso automaticamente quando si sceglie un carico di lavoro C++ nel Programma di installazione di Visual Studio.

Clang-tidy è lo strumento di analisi predefinito quando si usa il set di strumenti LLVM/Clang-CL, disponibile sia in MSBuild che in CMake. È possibile configurarlo quando si usa un set di strumenti MSVC per l'esecuzione insieme o per sostituire, l'esperienza di analisi del codice standard. Se si usa il set di strumenti Clang-CL, l'analisi codice Microsoft non è disponibile.

Clang-tidy viene eseguito dopo la compilazione riuscita. Potrebbe essere necessario risolvere gli errori del codice sorgente per ottenere risultati in ordine Clang.

## <a name="msbuild"></a>MSBuild

È possibile configurare Clang-tidy affinché venga eseguito come parte dell'analisi del codice e compilata nella pagina generale di **analisi**del codice  >  **General** nel progetto finestra Proprietà. Le opzioni per la configurazione dello strumento sono disponibili nel sottomenu Clang-tidy.

Per altre informazioni, vedere [procedura: impostare le proprietà di analisi del codice per i progetti C/C++](../code-quality/how-to-set-code-analysis-properties-for-c-cpp-projects.md).

## <a name="cmake"></a>CMake

Nei progetti CMake è possibile configurare i controlli Clang-tidy all'interno di `CMakeSettings.json` . Una volta aperto, selezionare "modifica JSON" nell'angolo superiore destro dell'editor delle impostazioni del progetto CMake. Sono state riconosciute le chiavi seguenti:

- `enableMicrosoftCodeAnalysis`: Abilita l'analisi del codice Microsoft
- `enableClangTidyCodeAnalysis`: Abilita l'analisi in ordine Clang
- `clangTidyChecks`: Configurazione Clang-tidy, specificata come elenco delimitato da virgole, ovvero controlli da abilitare o disabilitare

Se non viene specificata alcuna opzione "Enable", Visual Studio selezionerà lo strumento di analisi corrispondente al set di strumenti della piattaforma usato.

## <a name="warning-display"></a>Visualizzazione avviso

Le esecuzioni Clang-tidy generano avvisi visualizzati nel Elenco errori e come controllo ortografia durante nell'editor sotto le sezioni pertinenti del codice. Usare la colonna "Category" nel Elenco errori per ordinare e organizzare gli avvisi Clang-tidy. È possibile configurare gli avvisi in-Editor attivando l'impostazione "Disabilita controllo ortografia durante analisi codice" in **strumenti**  >  **Opzioni**.

## <a name="clang-tidy-configuration"></a>Configurazione Clang-tidy

È possibile configurare i controlli eseguiti da Clang-tidy all'interno di Visual Studio tramite l'opzione di **controllo Clang-tidy** . Questo input viene fornito all' **`--checks`** argomento dello strumento. Qualsiasi altra configurazione può essere inclusa nei *`.clang-tidy`* file personalizzati. Per ulteriori informazioni, vedere la [documentazione relativa a Clang-tidy in LLVM.org](https://clang.llvm.org/extra/clang-tidy/).

## <a name="see-also"></a>Vedere anche

- [Supporto Clang/LLVM per i progetti MSBuild](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)
- [Supporto Clang/LLVM per i progetti CMake](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)

::: moniker-end
