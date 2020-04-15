---
title: StopAndRelogTracingSession (StopAndRelogTracingSession)
description: Informazioni di riferimento per la funzione StopAndRelogTracingSession di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndRelogTracingSession
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1f6f5af63d25504226707d977791430463374328
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323660"
---
# <a name="stopandrelogtracingsession"></a>StopAndRelogTracingSession (StopAndRelogTracingSession)

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `StopAndRelogTracingSession` funzione interrompe una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di riregistrazione viene quindi avviata immediatamente utilizzando il file temporaneo come input. La traccia relogged finale prodotta dalla sessione di nuova registrazione viene salvata in un file specificato dal chiamante. Gli eseguibili che chiamano questa funzione devono disporre di privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE StopAndRelogTracingSession(
    const char*                                   sessionName,
    const char*                                   outputLogFile,
    TRACING_SESSION_STATISTICS*                   statistics,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);

template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE StopAndRelogTracingSession(
    const wchar_t*                                sessionName,
    const wchar_t*                                outputLogFile,
    TRACING_SESSION_STATISTICS*                   statistics,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);
```

### <a name="parameters"></a>Parametri

*nomesessione*\
Nome della sessione di traccia da arrestare. Utilizzare lo stesso nome di sessione passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile (file outputLog)*\
File in cui scrivere la traccia relogged prodotta dalla sessione di relogging.

*Statistiche*\
Puntatore a un [oggetto TRACING_SESSION_STATISTICS.](../other-types/tracing-session-statistics-struct.md) `StopAndRelogTracingSession`scrive le statistiche di raccolta di tracce in questo oggetto prima della restituzione.

*numberOfAnalysisPass*\
Numero di passaggi di analisi da eseguire sulla traccia. La traccia viene passata tramite il gruppo di analizzatori fornito una volta per ogni passaggio di analisi.

*systemEventsRetentionFlags (Informazioni in stati incommiè)*\
Maschera di bit [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](../other-types/relog-retention-system-event-flags-constants.md) che specifica gli eventi ETW di sistema da mantenere nella traccia relogged.

*analyzerGruppo*\
Gruppo di analizzatori utilizzato per la fase di analisi della sessione di riregistrazione. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo di analizzatori. Se si desidera utilizzare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo innanzitutto all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup`.

*reloggerGroup (gruppo di risorse*\
Gruppo relogger che riregistra gli eventi nel file di traccia specificato in *outputLogFile*. Chiamare MakeStaticReloggerGroup per creare un gruppo di relogger.Call [MakeStaticReloggerGroup](make-static-relogger-group.md) to create a relogger group. Se si desidera utilizzare un gruppo di relogger dinamico ottenuto da [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md), `MakeStaticReloggerGroup`incapsularlo innanzitutto all'interno di un gruppo relogger statico passandone l'indirizzo a .

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

### <a name="remarks"></a>Osservazioni

La traccia di input viene passata tramite il gruppo di analizzatori *numberOfAnalysisPasses* volte. Non esiste un'opzione simile per la riregistrazione dei pass. La traccia viene passata attraverso il gruppo relogger solo una volta, dopo il completamento di tutti i passaggi di analisi.

La riregistrazione di eventi di sistema come i campioni di CPU all'interno di una classe relogger non è supportata. Utilizzare il parametro *systemEventsRetentionFlags* per decidere quali eventi di sistema mantenere nella traccia di output.

::: moniker-end
