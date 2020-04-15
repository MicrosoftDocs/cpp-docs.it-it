---
title: RELOG_RETENTION_SYSTEM_EVENT_FLAGS costanti
description: Informazioni di riferimento sulle costanti di RELOG_RETENTION_SYSTEM_EVENT_FLAGS di analisi di compilazione di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_RETENTION_SYSTEM_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 7110f809a819357b31951c203c1fa6ac9fb9f42e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323465"
---
# <a name="relog_retention_system_event_flags-constants"></a>RELOG_RETENTION_SYSTEM_EVENT_FLAGS costanti

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

Le `RELOG_RETENTION_SYSTEM_EVENT_FLAGS` costanti vengono utilizzate per descrivere gli eventi di sistema da mantenere in una traccia relogged. Utilizzarli per inizializzare il `SystemEventsRetentionFlags` campo della struttura [RELOG_DESCRIPTOR.](relog-descriptor-struct.md)

## <a name="syntax"></a>Sintassi

```cpp
static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES = 0x1ULL;

static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL         = 0xFFFFFFFFFFFFFFFFULL;
```

## <a name="members"></a>Membri

|  |  |
|--|--|
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Mantenere gli eventi di sistema di esempio della CPU in una traccia rilogata. |
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL` | Mantenere tutti gli eventi di sistema in una traccia relogged. |

## <a name="remarks"></a>Osservazioni

::: moniker-end
