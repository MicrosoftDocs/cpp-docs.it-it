---
title: Struttura TRACING_SESSION_OPTIONS
description: Informazioni sul riferimento alla struttura TRACING_SESSION_OPTIONS di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_OPTIONS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3147debbfe1ea7ab4bcb4fa3bb8a803e66163557
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922389"
---
# <a name="tracing_session_options-structure"></a>Struttura TRACING_SESSION_OPTIONS

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `TRACING_SESSION_OPTIONS` struttura viene utilizzata per l'inizializzazione di una struttura [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) o [RELOG_DESCRIPTOR](relog-descriptor-struct.md) . Vengono descritti gli eventi da acquisire durante la raccolta di una traccia.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct TRACING_SESSION_OPTIONS_TAG
{
    unsigned long long SystemEventFlags;
    unsigned long long MsvcEventFlags;

} TRACING_SESSION_OPTIONS;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `SystemEventFlags` | Maschera di maschera che descrive gli eventi di sistema da acquisire. Per ulteriori informazioni, vedere [TRACING_SESSION_SYSTEM_EVENT_FLAGS](tracing-session-system-event-flags-constants.md). |
| `MsvcEventFlags` | Maschera di maschera che descrive gli eventi MSVC da acquisire. Per ulteriori informazioni, vedere [TRACING_SESSION_MSVC_EVENT_FLAGS](tracing-session-msvc-event-flags-constants.md). |

::: moniker-end
