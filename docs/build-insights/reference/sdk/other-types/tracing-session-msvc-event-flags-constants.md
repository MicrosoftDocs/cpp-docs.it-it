---
title: Costanti TRACING_SESSION_MSVC_EVENT_FLAGS
description: Informazioni di riferimento sulle costanti dell'SDK di compilazione di C++ TRACING_SESSION_MSVC_EVENT_FLAGS.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- TRACING_SESSION_MSVC_EVENT_FLAGS
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 78762001d4a8b5d36bb9e8fa6b6ed03cd59450a5
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919726"
---
# <a name="tracing_session_msvc_event_flags-constants"></a>Costanti TRACING_SESSION_MSVC_EVENT_FLAGS

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

Le `TRACING_SESSION_MSVC_EVENT_FLAGS` costanti vengono utilizzate per descrivere gli eventi MSVC da raccogliere durante una traccia. Utilizzarli per inizializzare il campo della struttura [TRACING_SESSION_OPTIONS](tracing-session-options-struct.md) `MsvcEventFlags` .

## <a name="syntax"></a>Sintassi

```cpp
static const unsigned long long
    TRACING_SESSION_MSVC_EVENT_FLAGS_BASIC                                = 0x0001ULL;

static const unsigned long long
    TRACING_SESSION_MSVC_EVENT_FLAGS_FRONTEND_FILES                       = 0x0004ULL;

static const unsigned long long
    TRACING_SESSION_MSVC_EVENT_FLAGS_FRONTEND_TEMPLATE_INSTANTIATIONS     = 0x0008ULL;

static const unsigned long long
    TRACING_SESSION_MSVC_EVENT_FLAGS_BACKEND_FUNCTIONS                    = 0x1000ULL;

static const unsigned long long
    TRACING_SESSION_MSVC_EVENT_FLAGS_ALL                                  = 0xFFFFFFFFFFFFFFFFULL;
```

## <a name="members"></a>Members

| Nome | Eventi attivati da questo flag |
|--|--|
| `TRACING_SESSION_MSVC_EVENT_FLAGS_BASIC` | Questo flag è associato agli eventi seguenti. Viene attivato per impostazione predefinita da C++ Build Insights SDK anche se non è specificato in modo esplicito. Non è possibile disabilitare questi eventi.<br/><br/>[BACK_END_PASS](../event-table.md#back-end-pass)[BOTTOM_UP](../event-table.md#bottom-up)<br/>[C1_DLL](../event-table.md#c1-dll)<br/>[C2_DLL](../event-table.md#c2-dll)<br/>[CODE_GENERATION](../event-table.md#code-generation)<br/>[COMMAND_LINE](../event-table.md#command-line)<br/>[COMPILATORE](../event-table.md#compiler)<br/>[ENVIRONMENT_VARIABLE](../event-table.md#environment-variable)<br/>[EXECUTABLE_IMAGE_OUTPUT](../event-table.md#executable-image-output)<br/>[EXP_OUTPUT](../event-table.md#exp-output)<br/>[FILE_INPUT](../event-table.md#file-input)<br/>[FRONT_END_PASS](../event-table.md#front-end-pass)<br/>[FRONT_END_PASS](../event-table.md#front-end-pass)<br/>[IMP_LIB_OUTPUT](../event-table.md#imp-lib-output)<br/>[LIB_OUTPUT](../event-table.md#lib-output)<br/>[LINKER](../event-table.md#linker)<br/>[LTCG](../event-table.md#ltcg)<br/>[OBJ_OUTPUT](../event-table.md#obj-output)<br/>[OPT_ICF](../event-table.md#opt-icf)<br/>[OPT_LBR](../event-table.md#opt-lbr)<br/>[OPT_REF](../event-table.md#opt-ref)<br/>[PASS1](../event-table.md#pass1)<br/>[PASS2](../event-table.md#pass2)<br/>[PRE_LTCG_OPT_REF](../event-table.md#pre-ltcg-opt-ref)<br/>[THREAD](../event-table.md#thread)<br/>[TOP_DOWN](../event-table.md#top-down)<br/>[WHOLE_PROGRAM_ANALYSIS](../event-table.md#whole-program-analysis) |
| `TRACING_SESSION_MSVC_EVENT_FLAGS_FRONTEND_FILES` | [FRONT_END_FILE](../event-table.md#front-end-file) |
| `TRACING_SESSION_MSVC_EVENT_FLAGS_FRONTEND_TEMPLATE_INSTANTIATIONS` | [SYMBOL_NAME](../event-table.md#symbol-name)<br/>[TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) |
| `TRACING_SESSION_MSVC_EVENT_FLAGS_BACKEND_FUNCTIONS` | [FORCE_INLINEE](../event-table.md#force-inlinee)<br/>[FUNZIONE](../event-table.md#function) |
| `TRACING_SESSION_MSVC_EVENT_FLAGS_ALL` | Questo flag attiva tutti gli eventi. |

::: moniker-end
