---
title: StopAndRelogTracingSession
description: Riferimento C++ alla funzione StopAndRelogTracingSession di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndRelogTracingSession
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: e99568f9b509b89ccd0f0711433dec9d96d904bc
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332593"
---
# <a name="stopandrelogtracingsession"></a>StopAndRelogTracingSession

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `StopAndRelogTracingSession` arresta una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di riregistrazione viene quindi avviata immediatamente utilizzando il file temporaneo come input. La traccia finale riregistrata generata dalla sessione di registrazione viene salvata in un file specificato dal chiamante. Gli eseguibili che chiamano questa funzione devono avere privilegi di amministratore.

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

*sessionname*\
Nome della sessione di traccia da arrestare. Usare lo stesso nome di sessione di quello passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

\ *outputLogFile*
File in cui scrivere la traccia registrata prodotta dalla sessione di registrazione.

*statistiche*\
Puntatore a un oggetto [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) . `StopAndRelogTracingSession` scrive le statistiche della raccolta di tracce in questo oggetto prima della restituzione.

\ *numberOfAnalysisPasses*
Numero di sessioni di analisi da eseguire nella traccia. La traccia viene passata al gruppo analizzatore specificato una volta per ogni sessione di analisi.

\ *systemEventsRetentionFlags*
Maschera di [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](../other-types/relog-retention-system-event-flags-constants.md) che specifica gli eventi ETW di sistema da tenere nella traccia registrata.

\ *analyzerGroup*
Il gruppo analizzatore usato per la fase di analisi della sessione di registrazione. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo analizzatore. Se si vuole usare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo prima all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup`.

\ *reloggerGroup*
Il gruppo relogger che registra gli eventi nel file di traccia specificato in *outputLogFile*. Chiamare [MakeStaticReloggerGroup](make-static-relogger-group.md) per creare un gruppo di relogger. Se si vuole usare un gruppo di relogger dinamico ottenuto da [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md), incapsularlo prima all'interno di un gruppo di relogger statici passandone l'indirizzo a `MakeStaticReloggerGroup`.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

### <a name="remarks"></a>Osservazioni

La traccia di input viene passata tramite il gruppo analizzatore *numberOfAnalysisPasses* volte. Non esiste un'opzione simile per la registrazione dei passaggi. La traccia viene passata una sola volta al gruppo relogger solo una volta, dopo il completamento di tutti i passaggi di analisi.

La riregistrazione degli eventi di sistema come gli esempi di CPU dall'interno di una classe relogger non è supportata. Usare il parametro *systemEventsRetentionFlags* per decidere quali eventi di sistema tenere nella traccia di output.

::: moniker-end
