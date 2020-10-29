---
title: Struttura TRACING_SESSION_STATISTICS
description: Informazioni sul riferimento alla struttura TRACING_SESSION_STATISTICS di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_STATISTICS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7135c49bdf95ef5ba39db090c95ad46d266d8f65
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919657"
---
# <a name="tracing_session_statistics-structure"></a>Struttura TRACING_SESSION_STATISTICS

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `TRACING_SESSION_STATISTICS` struttura descrive le statistiche relative a una traccia raccolta. I campi vengono impostati quando si arresta una sessione di traccia.

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

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `MSVCEventsLost` | Il numero di eventi MSVC eliminati. |
| `MSVCBuffersLost` | Numero di buffer di eventi MSVC eliminati. |
| `SystemEventsLost` | Il numero di eventi di sistema eliminati. |
| `SystemBuffersLost` | Numero di buffer di eventi di sistema eliminati. |

## <a name="remarks"></a>Osservazioni

Questa struttura viene popolata quando si chiamano le funzioni seguenti:

- [StopTracingSession](../functions/stop-tracing-session.md)
- [StopTracingSessionA](../functions/stop-tracing-session-a.md)
- [StopTracingSessionW](../functions/stop-tracing-session-w.md)
- [StopAndAnalyzeTracingSession](../functions/stop-and-analyze-tracing-session.md)
- [StopAndAnalyzeTracingSessionA](../functions/stop-and-analyze-tracing-session-a.md)
- [StopAndAnalyzeTracingSessionW](../functions/stop-and-analyze-tracing-session-w.md)
- [StopAndRelogTracingSession](../functions/stop-and-relog-tracing-session.md)
- [StopAndRelogTracingSessionA](../functions/stop-and-relog-tracing-session-a.md)
- [StopAndRelogTracingSessionW](../functions/stop-and-relog-tracing-session-w.md)

::: moniker-end
