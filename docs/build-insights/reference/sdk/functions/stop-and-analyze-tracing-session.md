---
title: StopAndAnalyzeTracingSession (StopAndAnalyzeTracingSession)
description: Informazioni di riferimento per la funzione StopAndAnalyzeTracingSession di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndAnalyzeTracingSession
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 9c9bd4a092c22dfcdfb6d463b74207ec11ee6d64
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323709"
---
# <a name="stopandanalyzetracingsession"></a>StopAndAnalyzeTracingSession (StopAndAnalyzeTracingSession)

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `StopAndAnalyzeTracingSession` funzione interrompe una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di analisi viene quindi avviata immediatamente utilizzando il file temporaneo come input. Gli eseguibili che chiamano questa funzione devono disporre di privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TAnalyzerGroupMembers>
RESULT_CODE StopAndAnalyzeTracingSession(
    const char*                                   sessionName,
    unsigned                                      numberOfAnalysisPasses,
    TRACING_SESSION_STATISTICS*                   statistics,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);

template <typename... TAnalyzerGroupMembers>
RESULT_CODE StopAndAnalyzeTracingSession(
    const wchar_t*                                sessionName,
    unsigned                                      numberOfAnalysisPasses,
    TRACING_SESSION_STATISTICS*                   statistics,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);
```

### <a name="parameters"></a>Parametri

*nomesessione*\
Nome della sessione di traccia da arrestare. Utilizzare lo stesso nome di sessione passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*numberOfAnalysisPass*\
Numero di passaggi di analisi da eseguire sulla traccia. La traccia viene passata tramite il gruppo di analizzatori fornito una volta per ogni passaggio di analisi.

*Statistiche*\
Puntatore a un [oggetto TRACING_SESSION_STATISTICS.](../other-types/tracing-session-statistics-struct.md) `StopAndAnalyzeTracingSession`scrive le statistiche di raccolta di tracce in questo oggetto prima della restituzione.

*analyzerGruppo*\
Gruppo di analizzatori utilizzato per l'analisi. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo di analizzatori. Se si desidera utilizzare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo innanzitutto all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup`.

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
