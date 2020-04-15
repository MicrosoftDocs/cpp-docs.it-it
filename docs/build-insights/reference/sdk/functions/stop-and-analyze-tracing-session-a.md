---
title: StopAndAnalyzeTracingSessionA
description: Informazioni di riferimento per la funzione StopAndAnalyzeTracingSessionA dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndAnalyzeTracingSessionA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 51a979b68cd87c5e7fd07b28acec80c2d7b81cf6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323725"
---
# <a name="stopandanalyzetracingsessiona"></a>StopAndAnalyzeTracingSessionA

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `StopAndAnalyzeTracingSessionA` funzione interrompe una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di analisi viene quindi avviata immediatamente utilizzando il file temporaneo come input. Gli eseguibili che chiamano questa funzione devono disporre di privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StopAndAnalyzeTracingSessionA(
    const char*                 sessionName,
    TRACING_SESSION_STATISTICS* statistics,
    const ANALYSIS_DESCRIPTOR*  analysisDescriptor);
```

### <a name="parameters"></a>Parametri

*nomesessione*\
Nome della sessione di traccia da arrestare. Utilizzare lo stesso nome di sessione passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*Statistiche*\
Puntatore a un [oggetto TRACING_SESSION_STATISTICS.](../other-types/tracing-session-statistics-struct.md) `StopAndAnalyzeTracingSessionA`scrive le statistiche di raccolta di tracce in questo oggetto prima della restituzione.

*analysisDescriptor (esempio)*\
Puntatore a un oggetto [ANALYSIS_DESCRIPTOR.](../other-types/analysis-descriptor-struct.md) Utilizzare questo oggetto per configurare la `StopAndAnalyzeTracingSessionA`sessione di analisi avviata da .

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
