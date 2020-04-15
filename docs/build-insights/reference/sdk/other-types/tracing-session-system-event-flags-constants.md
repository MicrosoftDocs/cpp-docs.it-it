---
title: TRACING_SESSION_SYSTEM_EVENT_FLAGS costanti
description: L'SDK di approfondimenti di compilazione di C'è TRACING_SESSION_SYSTEM_EVENT_FLAGS riferimento alle costanti.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_SYSTEM_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 264d697cc905eb6b44c8ec7de835a552976f0eb8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323279"
---
# <a name="tracing_session_system_event_flags-constants"></a>TRACING_SESSION_SYSTEM_EVENT_FLAGS costanti

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

Le `TRACING_SESSION_SYSTEM_EVENT_FLAGS` costanti vengono utilizzate per descrivere gli eventi di sistema da raccogliere durante una traccia. Utilizzarli per inizializzare il `SystemEventFlags` campo della struttura [TRACING_SESSION_OPTIONS.](tracing-session-options-struct.md)

## <a name="syntax"></a>Sintassi

```cpp
static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT      = 0x1ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES  = 0x2ULL;

static const unsigned long long
    TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL          = 0xFFFFFFFFFFFFFFFFULL;
```

## <a name="members"></a>Membri

| Nome | Eventi attivati da questo flag |
|--|--|
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CONTEXT` | Questo flag è attivato per impostazione predefinita da C, Build Insights SDK, anche se non specificato in modo esplicito. Consente il corretto funzionamento degli eventi di sistema di base richiesti da C . Gli eventi abilitati da questo flag forniscono informazioni su processi, thread e caricamento di immagini. Non è possibile disabilitare questi eventi. |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_CPU_SAMPLES` | Esempi di CPU |
| `TRACING_SESSION_SYSTEM_EVENT_FLAGS_ALL` | Questo flag attiva tutti gli eventi di sistema. |

::: moniker-end
