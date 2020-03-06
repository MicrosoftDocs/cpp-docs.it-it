---
title: Costanti RELOG_RETENTION_SYSTEM_EVENT_FLAGS
description: Il C++ riferimento alle costanti RELOG_RETENTION_SYSTEM_EVENT_FLAGS di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_RETENTION_SYSTEM_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 74afc10faa26ba39a669a05aa3e3cabd1a211293
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332320"
---
# <a name="relog_retention_system_event_flags-constants"></a>Costanti RELOG_RETENTION_SYSTEM_EVENT_FLAGS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Le costanti `RELOG_RETENTION_SYSTEM_EVENT_FLAGS` vengono utilizzate per descrivere gli eventi di sistema da tenere in una traccia registrata. Utilizzarli per inizializzare il campo `SystemEventsRetentionFlags` della struttura [RELOG_DESCRIPTOR](relog-descriptor-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES = 0x1ULL;

static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL         = 0xFFFFFFFFFFFFFFFFULL;
```

## <a name="members"></a>Members

|  |  |
|--|--|
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Conservazione degli eventi di sistema di esempio della CPU in una traccia registrata. |
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL` | Mantieni tutti gli eventi di sistema in una traccia registrata. |

## <a name="remarks"></a>Osservazioni

::: moniker-end
