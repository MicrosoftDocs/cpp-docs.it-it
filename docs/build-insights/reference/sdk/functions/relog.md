---
title: Relog
description: Informazioni di riferimento per la funzione Rilog di Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Relog
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 28b290d2bf2880ce2f534fa1cd91750890e2fead
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323786"
---
# <a name="relog"></a>Relog

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `Relog` funzione viene utilizzata per leggere gli eventi MSVC da una traccia ETW (Event Tracing for Windows) e scriverli in una nuova traccia ETW modificata.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE Relog(
    const char*                                   inputLogFile,
    const char*                                   outputLogFile,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);

template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE Relog(
    const wchar_t*                                inputLogFile,
    const wchar_t*                                outputLogFile,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);
```

### <a name="parameters"></a>Parametri

*TAnalyzerGroupMembers*\
Questo parametro è sempre dedotto.

*TReloggerGroupMembers (Gruppo TReloggerGroup)*\
Questo parametro è sempre dedotto.

*inputLogFile*\
Traccia ETW di input da cui si desidera leggere gli eventi.

*outputLogFile (file outputLog)*\
File in cui scrivere i nuovi eventi.

*numberOfAnalysisPass*\
Numero di passaggi di analisi da eseguire sulla traccia di input. La traccia viene passata tramite il gruppo di analizzatori fornito una volta per ogni passaggio di analisi.

*systemEventsRetentionFlags (Informazioni in stati incommiè)*\
Maschera di bit che specifica gli eventi ETW di sistema da mantenere nella traccia relogged. Per ulteriori informazioni, vedere [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](../other-types/relog-retention-system-event-flags-constants.md).

*analyzerGruppo*\
Gruppo di analizzatori utilizzato per la fase di analisi della sessione di riregistrazione. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo di analizzatori. Per utilizzare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo innanzitutto all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup`.

*reloggerGroup (gruppo di risorse*\
Gruppo relogger che riregistra gli eventi nel file di traccia specificato in *outputLogFile*. Chiamare MakeStaticReloggerGroup per creare un gruppo di relogger.Call [MakeStaticReloggerGroup](make-static-relogger-group.md) to create a relogger group. Per utilizzare un gruppo di relogger dinamico ottenuto da [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md), incapsularlo innanzitutto all'interno di un gruppo relogger statico passandone l'indirizzo a `MakeStaticReloggerGroup`.

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

### <a name="remark"></a>Commento

La traccia di input viene passata tramite il gruppo di analizzatori *numberOfAnalysisPasses* volte. Non esiste un'opzione simile per la riregistrazione dei pass. La traccia viene passata attraverso il gruppo relogger solo una volta, dopo il completamento di tutti i passaggi di analisi.

La riregistrazione di eventi di sistema come i campioni di CPU all'interno di una classe relogger non è supportata. Utilizzare il parametro *systemEventsRetentionFlags* per decidere quali eventi di sistema mantenere nella traccia di output.

::: moniker-end
