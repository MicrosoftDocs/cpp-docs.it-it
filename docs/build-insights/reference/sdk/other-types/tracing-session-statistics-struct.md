---
title: Struttura TRACING_SESSION_STATISTICS
description: Il C++ riferimento alla struttura TRACING_SESSION_OPTIONS di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_STATISTICS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 9aa7c0a861d80fd3ebff85eb7ecb17dd05ae869e
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332201"
---
# <a name="tracing_session_statistics-structure"></a>Struttura TRACING_SESSION_STATISTICS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `TRACING_SESSION_STATISTICS` descrive le statistiche relative a una traccia raccolta. I campi vengono impostati quando si arresta una sessione di traccia.

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

|  |  |
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
