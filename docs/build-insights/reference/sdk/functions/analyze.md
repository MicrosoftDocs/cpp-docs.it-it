---
title: Analisi
description: Informazioni di riferimento per la funzione di analisi di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Analyze
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 08b3643270cc785b3fbea36720d192b4a1473104
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81324102"
---
# <a name="analyze"></a>Analisi

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Analyze` funzione viene utilizzata per analizzare una traccia ETW (Event Tracing for Windows) ottenuta da MSVC durante la traccia di una compilazione in linguaggio C. Gli eventi nella traccia ETW vengono inoltrati in sequenza a un gruppo di analizzatori fornito dal chiamante. Questa funzione supporta analisi a più passaggi che consentono di inoltrare il flusso di eventi al gruppo di analizzatori più volte di seguito.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TAnalyzerGroupMembers>
RESULT_CODE Analyze(
    const char*                                   inputLogFile,
    unsigned                                      numberOfPasses,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);

template <typename... TAnalyzerGroupMembers>
RESULT_CODE Analyze(
    const wchar_t*                                inputLogFile,
    unsigned                                      numberOfPasses,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);
```

### <a name="parameters"></a>Parametri

*TAnalyzerGroupMembers*\
Questo parametro è sempre dedotto.

*inputLogFile*\
Traccia ETW di input da cui si desidera leggere gli eventi.

*numberOfPasses (numerodipasse)*\
Numero di passaggi di analisi da eseguire sulla traccia di input. La traccia viene passata tramite il gruppo di analizzatori fornito una volta per ogni passaggio di analisi.

*analyzerGruppo*\
Gruppo di analizzatori utilizzato per l'analisi. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo di analizzatori. Per utilizzare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo innanzitutto all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup`.

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
