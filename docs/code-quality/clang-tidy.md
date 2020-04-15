---
title: Utilizzo di Clang-Tidy in Visual StudioUsing Clang-Tidy in Visual Studio
description: Come utilizzare Clang-Tidy in Visual Studio per l'analisi del codice di Microsoft C.
ms.date: 02/19/2020
ms.topic: conceptual
f1_keywords:
- vs.codeanalysis.clangtidy
author: frozenpandaman
ms.author: efessler
ms.openlocfilehash: ff32f522eaacee67e19aedaa1153b2c68edc98d4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81355155"
---
# <a name="using-clang-tidy-in-visual-studio"></a>Utilizzo di Clang-Tidy in Visual StudioUsing Clang-Tidy in Visual Studio

::: moniker range="<=vs-2017"

Il supporto per Clang-Tidy richiede Visual Studio 2019 versione 16.4 o successiva. Per visualizzare la documentazione di questa versione, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range=">=vs-2019"

L'analisi del codice supporta in modo nativo [Clang-Tidy](https://clang.llvm.org/extra/clang-tidy/) per i progetti MSBuild e CMake, sia che utilizzino set di strumenti Clang o MSVC. I controlli Clang-Tidy possono essere eseguiti come parte dell'analisi del codice in background. Vengono visualizzati come avvisi nell'editor (squiggle) e visualizzati nell'Elenco errori.

Il supporto Clang-Tidy è disponibile a partire da Visual Studio 2019 versione 16.4.Clang-Tidy support is available starting in Visual Studio 2019 version 16.4. È incluso automaticamente quando si sceglie un carico di lavoro di C , nel programma di installazione di Visual Studio.It's included automatically when you choose a C'è carico di lavoro in the Visual Studio Installer.

Clang-Tidy è lo strumento di analisi predefinito quando si utilizza il set di strumenti LLVM/clang-cl, disponibile sia in MSBuild che in CMake. È possibile configurarlo quando si utilizza un set di strumenti MSVC per l'esecuzione insieme o per sostituire l'esperienza di analisi del codice standard. Se si utilizza il set di strumenti clang-cl, Microsoft Code Analysis non sarà disponibile.

Clang-Tidy viene eseguito dopo la compilazione di successo. Potrebbe essere necessario risolvere gli errori del codice sorgente per ottenere risultati Clang-Tidy.

## <a name="msbuild"></a>MSBuild

È possibile configurare Clang-Tidy per l'esecuzione nell'ambito dell'analisi del codice e la compilazione nella pagina**Generale** **analisi** > codice della finestra Proprietà progetto. Le opzioni per configurare lo strumento sono disponibili nel sottomenu Clang-Tidy.

Per ulteriori informazioni, vedere [Procedura: Impostare le proprietà dell'analisi](../code-quality/how-to-set-code-analysis-properties-for-c-cpp-projects.md)del codice per i progetti C/C

## <a name="cmake"></a>CMake

Nei progetti CMake è possibile configurare i `CMakeSettings.json`controlli Clang-Tidy all'interno di . Una volta aperto, fare clic su "Modifica JSON" nell'angolo in alto a destra dell'Editor impostazioni progetto CMake. Vengono riconosciuti i seguenti tasti:

- `enableMicrosoftCodeAnalysis`: consente l'analisi del codice Microsoft
- `enableClangTidyCodeAnalysis`: Abilita l'analisi Clang-Tidy
- `clangTidyChecks`: configurazione Clang-Tidy, specificata come elenco separato da virgole, ovvero controlli da abilitare o disabilitare

Se non viene specificata alcuna opzione "enable", Visual Studio selezionerà lo strumento di analisi corrispondente al set di strumenti della piattaforma utilizzato.

## <a name="warning-display"></a>Visualizzazione di avviso

Le esecuzioni di Clang-Tidy generano avvisi visualizzati nell'Elenco errori e come elementi ondulati nell'editor sotto le sezioni di codice pertinenti. Utilizzare la colonna "Categoria" nell'Elenco errori per ordinare e organizzare gli avvisi Clang-Tidy. È possibile configurare gli avvisi nell'editor attivando/Disattiva le opzioni di analisi del codice in**Opzioni** **strumenti** > .

## <a name="clang-tidy-configuration"></a>Configurazione Clang-Tidy

È possibile configurare i controlli che clang-tidy viene eseguito all'interno di Visual Studio tramite il **Clang-Tidy Checks** opzione. Questo input viene fornito all'argomento **--checks** dello strumento. Qualsiasi ulteriore configurazione può *`.clang-tidy`* essere inclusa nei file personalizzati. Per ulteriori informazioni, vedere la documentazione di [Clang-Tidy su LLVM.org](https://clang.llvm.org/extra/clang-tidy/).

## <a name="see-also"></a>Vedere anche

- [Supporto di Clang/LLVM per i progetti MSBuild](https://devblogs.microsoft.com/cppblog/clang-llvm-support-for-msbuild-projects/)
- [Supporto di Clang/LLVM per i progetti CMake](https://devblogs.microsoft.com/cppblog/visual-studio-cmake-support-clang-llvm-cmake-3-14-vcpkg-and-performance-improvements/)

::: moniker-end
