---
title: Struttura RELOG_DESCRIPTOR
description: Il riferimento alla struttura RELOG_DESCRIPTOR di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- RELOG_DESCRIPTOR
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 9b3c870998ce4f9ca55fb5bcc23ba66a1af46558
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922437"
---
# <a name="relog_descriptor-structure"></a>Struttura RELOG_DESCRIPTOR

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `RELOG_DESCRIPTOR` struttura viene utilizzata con le funzioni [RelogA](../functions/relog-a.md) e [RelogW](../functions/relog-w.md) . Viene descritto il modo in cui una traccia di Event Tracing for Windows (ETW) deve essere riregistrata.

## <a name="syntax"></a>Sintassi

```cpp
typedef struct RELOG_DESCRIPTOR_TAG
{
    unsigned                NumberOfAnalysisPasses;
    ANALYSIS_CALLBACKS      AnalysisCallbacks;
    RELOG_CALLBACKS         RelogCallbacks;
    unsigned long long      SystemEventsRetentionFlags;
    void*                   AnalysisContext;
    void*                   RelogContext;
} RELOG_DESCRIPTOR;
```

## <a name="members"></a>Members

| Nome | Descrizione |
|--|--|
| `NumberOfAnalysisPasses` | Il numero di sessioni di analisi che devono essere eseguite sulla traccia ETW durante la fase di analisi della sessione di registrazione. |
| `AnalysisCallbacks` | Oggetto [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) che specifica le funzioni da chiamare durante la fase di analisi della sessione di registrazione. |
| `RelogCallbacks` | Oggetto [RELOG_CALLBACKS](relog-callbacks-struct.md) che specifica le funzioni da chiamare durante la fase di riregistrazione della sessione di registrazione. |
| `SystemEventsRetentionFlags` | Maschera di [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](relog-retention-system-event-flags-constants.md) che specifica gli eventi ETW di sistema da tenere nella traccia registrata. |
| `AnalysisContext` | Contesto fornito dall'utente passato come argomento a tutte le funzioni di callback specificate in `AnalysisCallbacks` |
| `RelogContext` | Contesto fornito dall'utente passato come argomento a tutte le funzioni di callback specificate in `RelogCallbacks` |

## <a name="remarks"></a>Osservazioni

La riregistrazione degli eventi ETW durante una sessione di riregistrazione viene controllata dall'utente tramite le funzioni di callback specificate in `RelogCallbacks` . Tuttavia, gli eventi ETW di sistema, ad esempio gli esempi di CPU, non vengono trasmessi a queste funzioni di callback. Utilizzare il `SystemEventsRetentionFlags` campo per controllare la registrazione degli eventi ETW di sistema.

Le `AnalysisCallbacks` `RelogCallbacks` strutture e accettano solo puntatori a funzioni non membro. Per aggirare questa limitazione, è possibile impostarli su un puntatore a un oggetto. Il puntatore a questo oggetto verrà passato come argomento a tutte le funzioni di callback non membro. Utilizzare questo puntatore per chiamare le funzioni membro dall'interno delle funzioni di callback non membro.

La fase di analisi di una sessione di riregistrazione viene sempre eseguita prima della fase di registrazione.

::: moniker-end
