---
title: Costanti TRACING_SESSION_SYSTEM_EVENT_FLAGS
description: Informazioni di riferimento sulle costanti dell'SDK di compilazione di C++ TRACING_SESSION_SYSTEM_EVENT_FLAGS.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_SYSTEM_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 346c955355ffbc6c062a34bf928f16ccd3940154
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922378"
---
# <a name="tracing_session_system_event_flags-constants"></a>Costanti TRACING_SESSION_SYSTEM_EVENT_FLAGS

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

Le `TRACING_SESSION_SYSTEM_EVENT_FLAGS` costanti vengono utilizzate per descrivere gli eventi di sistema da raccogliere durante una traccia. Utilizzarli per inizializzare il campo della struttura [TRACING_SESSION_OPTIONS](tracing-session-options-struct.md) `SystemEventFlags` .

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
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT` | Questo flag viene attivato per impostazione predefinita da C++ Build Insights SDK anche se non è specificato in modo esplicito. Abilita gli eventi di sistema di base richiesti da C++ Build Insights per funzionare correttamente. Gli eventi abilitati da questo flag forniscono informazioni su processi, thread e caricamento di immagini. Non è possibile disabilitare questi eventi. |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Esempi di CPU |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL` | Questo flag attiva tutti gli eventi di sistema. |

::: moniker-end
