---
title: Costanti RELOG_RETENTION_SYSTEM_EVENT_FLAGS
description: Informazioni di riferimento sulle costanti dell'SDK di compilazione di C++ RELOG_RETENTION_SYSTEM_EVENT_FLAGS.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_RETENTION_SYSTEM_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5444c1a6b8799b1de8eea228211a5f2d6de638f8
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041406"
---
# <a name="relog_retention_system_event_flags-constants"></a>Costanti RELOG_RETENTION_SYSTEM_EVENT_FLAGS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

Le `RELOG_RETENTION_SYSTEM_EVENT_FLAGS` costanti vengono utilizzate per descrivere gli eventi di sistema da tenere in una traccia registrata. Utilizzarli per inizializzare il campo della struttura [RELOG_DESCRIPTOR](relog-descriptor-struct.md) `SystemEventsRetentionFlags` .

## <a name="syntax"></a>Sintassi

```cpp
static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES = 0x1ULL;

static const unsigned long long
    RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL         = 0xFFFFFFFFFFFFFFFFULL;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Conservazione degli eventi di sistema di esempio della CPU in una traccia registrata. |
| `RELOG_RETENTION_SYSTEM_EVENT_FLAGS_ALL` | Mantieni tutti gli eventi di sistema in una traccia registrata. |

## <a name="remarks"></a>Osservazioni

::: moniker-end
