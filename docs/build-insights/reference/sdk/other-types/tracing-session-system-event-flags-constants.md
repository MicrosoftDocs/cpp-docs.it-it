---
title: Costanti TRACING_SESSION_SYSTEM_EVENT_FLAGS
description: Il C++ riferimento alle costanti TRACING_SESSION_SYSTEM_EVENT_FLAGS di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_SYSTEM_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: ce0b0ea373ec53f0d5bcf228269299d69b49bb95
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332355"
---
# <a name="tracing_session_system_event_flags-constants"></a>Costanti TRACING_SESSION_SYSTEM_EVENT_FLAGS

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

Le costanti `TRACING_SESSION_SYSTEM_EVENT_FLAGS` vengono utilizzate per descrivere gli eventi di sistema da raccogliere durante una traccia. Utilizzarli per inizializzare il campo `SystemEventFlags` della struttura [TRACING_SESSION_OPTIONS](tracing-session-options-struct.md) .

## <a name="syntax"></a>Sintassi

```cpp
static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT      = 0x1ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES  = 0x2ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL          = 0xFFFFFFFFFFFFFFFFULL;
```

## <a name="members"></a>Members

| Nome | Eventi attivati da questo flag |
|--|--|
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT` | Questo flag viene attivato per impostazione predefinita da C++ Build Insights SDK anche se non è specificato in modo esplicito. Abilita gli eventi di sistema di base necessari per C++ il corretto funzionamento di build Insights. Gli eventi abilitati da questo flag forniscono informazioni su processi, thread e caricamento di immagini. Non è possibile disabilitare questi eventi. |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Esempi di CPU |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL` | Questo flag attiva tutti gli eventi di sistema. |

::: moniker-end
