---
title: StopAndAnalyzeTracingSessionA
description: Riferimento alla funzione StopAndAnalyzeTracingSessionA di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndAnalyzeTracingSessionA
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: fa5adfca2c5e4d3d4bd17abae4e78c2ac6464773
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922729"
---
# <a name="stopandanalyzetracingsessiona"></a>StopAndAnalyzeTracingSessionA

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `StopAndAnalyzeTracingSessionA` funzione arresta una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di analisi viene quindi avviata immediatamente utilizzando il file temporaneo come input. Gli eseguibili che chiamano questa funzione devono avere privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StopAndAnalyzeTracingSessionA(
    const char*                 sessionName,
    TRACING_SESSION_STATISTICS* statistics,
    const ANALYSIS_DESCRIPTOR*  analysisDescriptor);
```

### <a name="parameters"></a>Parametri

*Nomesessione*\
Nome della sessione di traccia da arrestare. Usare lo stesso nome di sessione di quello passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*Statistiche*\
Puntatore a un oggetto [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) . `StopAndAnalyzeTracingSessionA` scrive le statistiche della raccolta di traccia in questo oggetto prima della restituzione.

*analysisDescriptor*\
Puntatore a un oggetto [ANALYSIS_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) . Utilizzare questo oggetto per configurare la sessione di analisi avviata da `StopAndAnalyzeTracingSessionA` .

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
