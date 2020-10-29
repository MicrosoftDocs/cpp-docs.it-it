---
title: Uso di Clang-Tidy in Visual Studio
description: Come usare Clang-Tidy in Visual Studio per l'analisi del codice Microsoft C++.
ms.date: 02/19/2020
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.clangtidy
ms.openlocfilehash: 5b2da222caea435bdb24d774b5e93c995e734bb7
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919072"
---
# <a name="using-clang-tidy-in-visual-studio"></a>Uso di Clang-Tidy in Visual Studio

::: moniker range="<=msvc-150"

Il supporto per Clang-Tidy richiede Visual Studio 2019 versione 16,4 o successiva. Per visualizzare la documentazione relativa a questa versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=msvc-160"

L'analisi del codice supporta in modo nativo [Clang-tidy](https://clang.llvm.org/extra/clang-tidy/) per i progetti MSBuild e CMake, sia che si utilizzino i set di strumenti Clang o MSVC. I controlli di Clang-Tidy possono essere eseguiti come parte dell'analisi del codice in background. Vengono visualizzati come avvisi in-Editor (controllo ortografia durante) e vengono visualizzati nel Elenco errori.

Il supporto Clang-Tidy è disponibile a partire da Visual Studio 2019 versione 16,4. Viene incluso automaticamente quando si sceglie un carico di lavoro C++ nel Programma di installazione di Visual Studio.

Clang-Tidy è lo strumento di analisi predefinito quando si usa il set di strumenti LLVM/Clang-CL, disponibile sia in MSBuild che in CMake. È possibile configurarlo quando si usa un set di strumenti MSVC per l'esecuzione insieme o per sostituire, l'esperienza di analisi del codice standard. Se si usa il set di strumenti Clang-CL, l'analisi codice Microsoft non è disponibile.

Clang-Tidy viene eseguito dopo la compilazione riuscita. Per ottenere Clang-Tidy risultati, potrebbe essere necessario risolvere gli errori del codice sorgente.

## <a name="msbuild"></a>MSBuild

È possibile configurare Clang-Tidy per l'esecuzione nell'ambito dell'analisi del codice e della compilazione nella pagina generale di **analisi del codice**  >  **General** nel finestra proprietà del progetto. Le opzioni per la configurazione dello strumento sono disponibili nel sottomenu Clang-Tidy.

Per altre informazioni, vedere [procedura: impostare le proprietà di analisi del codice per i progetti C/C++](../code-quality/how-to-set-code-analysis-properties-for-c-cpp-projects.md).

## <a name="cmake"></a>CMake

Nei progetti CMake è possibile configurare Clang-Tidy controlli all'interno di `CMakeSettings.json` . Una volta aperto, selezionare "modifica JSON" nell'angolo superiore destro dell'editor delle impostazioni del progetto CMake. Sono state riconosciute le chiavi seguenti:

- `enableMicrosoftCodeAnalysis`: Abilita l'analisi del codice Microsoft
- `enableClangTidyCodeAnalysis`: Abilita l'analisi Clang-Tidy
- `clangTidyChecks`: Clang-Tidy configurazione, specificata come elenco delimitato da virgole, ovvero controlli da abilitare o disabilitare

Se non viene specificata alcuna opzione "Enable", Visual Studio selezionerà lo strumento di analisi corrispondente al set di strumenti della piattaforma usato.

## <a name="warning-display"></a>Visualizzazione avviso

Clang-Tidy le esecuzioni generano avvisi visualizzati nell'Elenco errori e come nell'editor controllo ortografia durante sotto le sezioni pertinenti di codice. Utilizzare la colonna "Category" nel Elenco errori per ordinare e organizzare Clang-Tidy avvisi. È possibile configurare gli avvisi in-Editor attivando l'impostazione "Disabilita controllo ortografia durante analisi codice" in **strumenti**  >  **Opzioni** .

## <a name="clang-tidy-configuration"></a>Configurazione di Clang-Tidy

È possibile configurare i controlli eseguiti da Clang-tidy all'interno di Visual Studio tramite l'opzione di **controllo Clang-tidy** . Questo input viene fornito all' **`--checks`** argomento dello strumento. Qualsiasi altra configurazione può essere inclusa nei *`.clang-tidy`* file personalizzati. Per ulteriori informazioni, vedere la [documentazione relativa a Clang-tidy in LLVM.org](https://clang.llvm.org/extra/clang-tidy/).

## <a name="see-also"></a>Vedere anche

- [Supporto Clang/LLVM per i progetti MSBuild](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)
- [Supporto Clang/LLVM per i progetti CMake](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)

::: moniker-end
