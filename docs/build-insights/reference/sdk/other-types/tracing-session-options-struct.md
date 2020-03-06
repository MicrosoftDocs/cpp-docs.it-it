---
title: Struttura TRACING_SESSION_OPTIONS
description: Il C++ riferimento alla struttura TRACING_SESSION_OPTIONS di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_OPTIONS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3f02552d5df4ffe71bc4be5c46e4b5239f25d73c
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332208"
---
# <a name="tracing_session_options-structure"></a>Struttura TRACING_SESSION_OPTIONS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La struttura `TRACING_SESSION_OPTIONS` viene utilizzata per l'inizializzazione di una struttura [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md) . Vengono descritti gli eventi da acquisire durante la raccolta di una traccia.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TRACING_SESSION_OPTIONS_TAG
{
    unsigned long long SystemEventFlags;
    unsigned long long MsvcEventFlags;

} TRACING_SESSION_OPTIONS;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `SystemEventFlags` | Maschera di maschera che descrive gli eventi di sistema da acquisire. Per ulteriori informazioni, vedere [TRACING_SESSION_SYSTEM_EVENT_FLAGS](tracing-session-system-event-flags-constants.md). |
| `MsvcEventFlags` | Maschera di maschera che descrive gli eventi MSVC da acquisire. Per ulteriori informazioni, vedere [TRACING_SESSION_MSVC_EVENT_FLAGS](tracing-session-msvc-event-flags-constants.md). |

::: moniker-end
