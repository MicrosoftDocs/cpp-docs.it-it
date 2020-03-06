---
title: StopAndAnalyzeTracingSessionW
description: Riferimento C++ alla funzione StopAndAnalyzeTracingSessionW di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopAndAnalyzeTracingSessionW
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ec36162efcd2bfcf17cb07a997a7ff170338d3d2
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332670"
---
# <a name="stopandanalyzetracingsessionw"></a>StopAndAnalyzeTracingSessionW

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `StopAndAnalyzeTracingSessionW` arresta una sessione di traccia in corso e salva la traccia risultante in un file temporaneo. Una sessione di analisi viene quindi avviata immediatamente utilizzando il file temporaneo come input. Gli eseguibili che chiamano questa funzione devono avere privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StopAndAnalyzeTracingSessionW(
    const wchar_t*              sessionName,
    TRACING_SESSION_STATISTICS* statistics,
    const ANALYSIS_DESCRIPTOR*  analysisDescriptor);
```

### <a name="parameters"></a>Parametri

*sessionname*\
Nome della sessione di traccia da arrestare. Usare lo stesso nome di sessione di quello passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*statistiche*\
Puntatore a un oggetto [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) . `StopAndAnalyzeTracingSessionW` scrive le statistiche della raccolta di tracce in questo oggetto prima della restituzione.

\ *analysisDescriptor*
Puntatore a un oggetto [ANALYSIS_DESCRIPTOR](../other-types/analysis-descriptor-struct.md) . Utilizzare questo oggetto per configurare la sessione di analisi avviata da `StopAndAnalyzeTracingSessionW`.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
