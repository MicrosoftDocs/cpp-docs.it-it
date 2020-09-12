---
title: Struttura TRACING_SESSION_OPTIONS
description: Il riferimento alla struttura TRACING_SESSION_OPTIONS di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_OPTIONS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c8a248d884b5232fbc5332db1a68533220ef2fab
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041263"
---
# <a name="tracing_session_options-structure"></a>Struttura TRACING_SESSION_OPTIONS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

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
