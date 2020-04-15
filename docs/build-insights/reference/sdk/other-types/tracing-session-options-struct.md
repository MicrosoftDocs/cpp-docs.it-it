---
title: struttura TRACING_SESSION_OPTIONS
description: L'SDK di build Insights di C'è TRACING_SESSION_OPTIONS riferimento alla struttura.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_OPTIONS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5aeb6299aea8dc0661b9469ee524e7aa4d010aca
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323432"
---
# <a name="tracing_session_options-structure"></a>struttura TRACING_SESSION_OPTIONS

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `TRACING_SESSION_OPTIONS` struttura viene utilizzata durante l'inizializzazione di una [struttura ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR.](relog-descriptor-struct.md) Descrive gli eventi da acquisire durante la raccolta di una traccia.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TRACING_SESSION_OPTIONS_TAG
{
    unsigned long long SystemEventFlags;
    unsigned long long MsvcEventFlags;

} TRACING_SESSION_OPTIONS;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `SystemEventFlags` | Maschera di bit che descrive gli eventi di sistema da acquisire. Per ulteriori informazioni, vedere [TRACING_SESSION_SYSTEM_EVENT_FLAGS](tracing-session-system-event-flags-constants.md). |
| `MsvcEventFlags` | Maschera di bit che descrive gli eventi MSVC da acquisire. Per ulteriori informazioni, vedere [TRACING_SESSION_MSVC_EVENT_FLAGS](tracing-session-msvc-event-flags-constants.md). |

::: moniker-end
