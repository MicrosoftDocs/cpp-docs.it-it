---
title: StopTracingSession
description: Informazioni di riferimento per la funzione StopTracingSession di Build Insights.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- StopTracingSession
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c6c7a3c6ca47749491774cc3bcd97aae8aa663ea
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323521"
---
# <a name="stoptracingsession"></a>StopTracingSession

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `StopTracingSession` funzione interrompe una sessione di traccia in corso e produce un file di traccia non elaborato. I file di traccia non elaborati possono essere passati alle funzioni [Analyze](analyze.md), [AnalzeA](analyze-a.md)e [AnalyzeW](analyze-w.md) per avviare una sessione di analisi. I file di traccia non elaborati possono inoltre essere passati alle funzioni [Relog](relog.md), [RelogA](relog-a.md)e [RelogW](relog-w.md) per avviare una sessione di relogging. Le chiamate `StopTracingSession` di file eseguibili devono avere privilegi di amministratore.

## <a name="syntax"></a>Sintassi

```cpp
inline RESULT_CODE StopTracingSession(
    const char*                 sessionName,
    const char*                 outputLogFile,
    TRACING_SESSION_STATISTICS* statistics);

inline RESULT_CODE StopTracingSession(
    const wchar_t*              sessionName
    const wchar_t*              outputLogFile,
    TRACING_SESSION_STATISTICS* statistics);
```

### <a name="parameters"></a>Parametri

*nomesessione*\
Nome della sessione di traccia da arrestare. Utilizzare lo stesso nome di sessione passato a [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md)o [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile (file outputLog)*\
Percorso del file di log di output finale in cui deve essere salvata la traccia non elaborata.

*Statistiche*\
Puntatore a un [oggetto TRACING_SESSION_STATISTICS.](../other-types/tracing-session-statistics-struct.md) `StopTracingSession`scrive le statistiche di raccolta di tracce in questo oggetto prima della restituzione.

### <a name="return-value"></a>Valore restituito

Codice di risultato dall'enumerazione [RESULT_CODE.](../other-types/result-code-enum.md)

::: moniker-end
