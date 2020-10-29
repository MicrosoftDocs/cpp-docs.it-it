---
title: Relog
description: Riferimento alla funzione relog di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- Relog
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 628f60042a10cf80c0b077d28387ed75466e925b
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922755"
---
# <a name="relog"></a>Relog

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `Relog` funzione viene utilizzata per leggere gli eventi MSVC da una traccia di Event Tracing for Windows (ETW) e scriverli in una nuova traccia ETW modificata.

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
Questo parametro viene sempre dedotto.

*TReloggerGroupMembers*\
Questo parametro viene sempre dedotto.

*inputLogFile*\
Traccia ETW di input da cui si vogliono leggere gli eventi.

*outputLogFile*\
File in cui scrivere i nuovi eventi.

*numberOfAnalysisPasses*\
Numero di sessioni di analisi da eseguire sulla traccia di input. La traccia viene passata al gruppo analizzatore specificato una volta per ogni sessione di analisi.

*systemEventsRetentionFlags*\
Maschera di maschera che specifica gli eventi ETW di sistema da tenere nella traccia registrata. Per ulteriori informazioni, vedere [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](../other-types/relog-retention-system-event-flags-constants.md).

*analyzerGroup*\
Il gruppo analizzatore usato per la fase di analisi della sessione di registrazione. Chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) per creare un gruppo analizzatore. Per usare un gruppo di analizzatori dinamici ottenuto da [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), incapsularlo prima all'interno di un gruppo di analizzatori statici passandone l'indirizzo a `MakeStaticAnalyzerGroup` .

*reloggerGroup*\
Il gruppo relogger che registra gli eventi nel file di traccia specificato in *outputLogFile* . Chiamare [MakeStaticReloggerGroup](make-static-relogger-group.md) per creare un gruppo di relogger. Per usare un gruppo di relogger dinamico ottenuto da [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md), incapsularlo prima all'interno di un gruppo di relogger statici passandone l'indirizzo a `MakeStaticReloggerGroup` .

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

### <a name="remark"></a>Commento

La traccia di input viene passata tramite il gruppo analizzatore *numberOfAnalysisPasses* volte. Non esiste un'opzione simile per la registrazione dei passaggi. La traccia viene passata una sola volta al gruppo relogger solo una volta, dopo il completamento di tutti i passaggi di analisi.

La riregistrazione degli eventi di sistema come gli esempi di CPU dall'interno di una classe relogger non è supportata. Usare il parametro *systemEventsRetentionFlags* per decidere quali eventi di sistema tenere nella traccia di output.

::: moniker-end
