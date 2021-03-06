---
title: StopTracingSessionW
description: Riferimento alla funzione StopTracingSessionW di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopTracingSessionW
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 116d76b83f93e126bcb5dfc0d3f9b76d45df89fe
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919943"
---
# <a name="stoptracingsessionw"></a>StopTracingSessionW

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `StopTracingSessionW` funzione arresta una sessione di traccia in corso e produce un file di traccia non elaborato. I file di traccia non elaborati possono essere passati alle funzioni [Analyze](analyze.md), [AnalzeA](analyze-a.md)e [AnalyzeW](analyze-w.md) per avviare una sessione di analisi. I file di traccia non elaborati possono essere passati anche alle funzioni [relog](relog.md), [RelogA](relog-a.md)e [RelogW](relog-w.md) per avviare la registrazione della sessione. Gli eseguibili che chiamano `StopTracingSessionW` devono disporre dei privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
enum RESULT_CODE StopTracingSessionW(
    const wchar_t*              sessionName,
    const char*                 outputLogFile,
    TRACING_SESSION_STATISTICS* statistics);
```

### <a name="parameters"></a>Parametri

*Nomesessione*\
Nome della sessione di traccia da arrestare. Usare lo stesso nome di sessione di quello passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile*\
Percorso del file di log di output finale in cui salvare la traccia non elaborata.

*Statistiche*\
Puntatore a un oggetto [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) . `StopTracingSessionW` scrive le statistiche della raccolta di traccia in questo oggetto prima della restituzione.

### <a name="return-value"></a>Valore restituito

Codice risultato dell'enumerazione [RESULT_CODE](../other-types/result-code-enum.md) .

::: moniker-end
