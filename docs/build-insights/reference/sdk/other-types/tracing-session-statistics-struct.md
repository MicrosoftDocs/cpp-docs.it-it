---
title: struttura TRACING_SESSION_STATISTICS
description: L'SDK di build Insights di C'è TRACING_SESSION_OPTIONS riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_STATISTICS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 96cff3a231fd515ec1c52a048b8350a63ba46a39
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323373"
---
# <a name="tracing_session_statistics-structure"></a>struttura TRACING_SESSION_STATISTICS

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TRACING_SESSION_STATISTICS` struttura descrive le statistiche su una traccia che è stata raccolta. I relativi campi vengono impostati quando si interrompe una sessione di traccia.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TRACING_SESSION_STATISTICS_TAG
{
    unsigned long MSVCEventsLost;
    unsigned long MSVCBuffersLost;
    unsigned long SystemEventsLost;
    unsigned long SystemBuffersLost;

} TRACING_SESSION_STATISTICS;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `MSVCEventsLost` | Numero di eventi MSVC eliminati. |
| `MSVCBuffersLost` | Numero di buffer eventi MSVC eliminati. |
| `SystemEventsLost` | Numero di eventi di sistema eliminati. |
| `SystemBuffersLost` | Numero di buffer eventi di sistema eliminati. |

## <a name="remarks"></a>Osservazioni

Questa struttura viene popolata quando si chiamano le seguenti funzioni:

- [StopTracingSession](../functions/stop-tracing-session.md)
- [StopTracingSessionA (ArrestoTracingSessionA)](../functions/stop-tracing-session-a.md)
- [StopTracingSessionW](../functions/stop-tracing-session-w.md)
- [StopAndAnalyzeTracingSession (StopAndAnalyzeTracingSession)](../functions/stop-and-analyze-tracing-session.md)
- [StopAndAnalyzeTracingSessionA](../functions/stop-and-analyze-tracing-session-a.md)
- [StopAndAnalyzeTracingSessionW](../functions/stop-and-analyze-tracing-session-w.md)
- [StopAndRelogTracingSession (StopAndRelogTracingSession)](../functions/stop-and-relog-tracing-session.md)
- [ArrestoAndRelogTracingSessionA](../functions/stop-and-relog-tracing-session-a.md)
- [StopAndRelogTracingSessionW (Interruzione della sessione di protezione)](../functions/stop-and-relog-tracing-session-w.md)

::: moniker-end
